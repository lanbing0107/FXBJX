#include "flyanalysis.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	flyAnalysis w;
	w.show();
	return a.exec();
}
