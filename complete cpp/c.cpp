#include <QtWidgets>

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator();

private slots:
    void digitClicked();
    void unaryOperatorClicked();
    void binaryOperatorClicked();
    void equalClicked();
    void pointClicked();
    void changeSignClicked();
    void backspaceClicked();
    void clear();
    void clearAll();

private:
    void createButtons();

    double sumInMemory;
    double sumSoFar;
    double factorSoFar;
    QString pendingAdditiveOperator;
    QString pendingMultiplicativeOperator;
    bool waitingForOperand;

    QLineEdit *display;

    enum {NumDigitButtons = 10};
    QPushButton *digitButtons[NumDigitButtons];
};

Calculator::Calculator()
{
    sumInMemory = 0.0;
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    pendingAdditiveOperator = "";
    pendingMultiplicativeOperator = "";
    waitingForOperand = true;

    display = new QLineEdit("0");
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);
    display->setMaxLength(15);

    QFont font = display->font();
    font.setPointSize(font.pointSize() + 8);
    display->setFont(font);

    createButtons();

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
    mainLayout->addWidget(display, 0, 0, 1, 4);

    for (int i = 0; i < NumDigitButtons; ++i) {
        int row = ((9 - i) / 3) + 1;
        int column = ((i - 1) % 3) + 1;
        mainLayout->addWidget(digitButtons[i], row, column);
    }

    setLayout(mainLayout);
    setWindowTitle(tr("Calculator"));
}

void Calculator::createButtons()
{
    for (int i = 0; i < NumDigitButtons; ++i) {
        digitButtons[i] = createButton(QString::number(i), SLOT(digitClicked()));
    }

    QPushButton *pointButton = createButton(tr("."), SLOT(pointClicked()));
    QPushButton *changeSignButton = createButton(tr("\261"), SLOT(changeSignClicked()));

    QPushButton *backspaceButton = createButton(tr("Backspace"), SLOT(backspaceClicked()));
    QPushButton *clearButton = createButton(tr("Clear"), SLOT(clear()));
    QPushButton *clearAllButton = createButton(tr("Clear All"), SLOT(clearAll()));

    QPushButton *divisionButton = createButton(tr("\367"), SLOT(binaryOperatorClicked()));
    QPushButton *timesButton = createButton(tr("\327
