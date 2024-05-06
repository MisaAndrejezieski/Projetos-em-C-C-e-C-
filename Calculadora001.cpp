#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;

    QLabel *label = new QLabel("0");
    QLineEdit *lineEdit = new QLineEdit;
    QPushButton *button0 = new QPushButton("0");
    QPushButton *button1 = new QPushButton("1");
    QPushButton *button2 = new QPushButton("2");
    QPushButton *button3 = new QPushButton("3");
    QPushButton *buttonPlus = new QPushButton("+");
    QPushButton *buttonMinus = new QPushButton("-");
    QPushButton *buttonMultiply = new QPushButton("*");
    QPushButton *buttonDivide = new QPushButton("/");
    QPushButton *buttonEquals = new QPushButton("=");

    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(button0);
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(buttonPlus);
    layout->addWidget(buttonMinus);
    layout->addWidget(buttonMultiply);
    layout->addWidget(buttonDivide);
    layout->addWidget(buttonEquals);

    window->setLayout(layout);
    window->show();

    return app.exec();
}
