#include "qtread_example_wxb.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTread_example_wxb w;
	w.show();
	return a.exec();
}
