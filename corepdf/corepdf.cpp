#include "corepdf.h"

#include <QFile>
#include <QVBoxLayout>

corepdf::corepdf(QWidget *parent):QWidget(parent)
{
    openPdfFile("/home/shaber/Desktop/p.pdf");

    this->setStyleSheet("QWidget{background-color: #3E3E3E;border: 1px #2A2A2A;}");
}

corepdf::~corepdf()
{
    delete PdfWidget;
}

void corepdf::openPdfFile(const QString path)
{
    QVBoxLayout * mainLayout = new QVBoxLayout();
    PdfWidget = new QPdfWidget();

//    PdfWidget = new QPdfWidget();
    connect(PdfWidget, &QPdfWidget::initialized, [this]() {
        PdfWidget->setToolbarVisible(false);
    });

    PdfWidget->setToolbarVisible(false);
    mainLayout->setContentsMargins(0,0,0,0);
    mainLayout->addWidget(PdfWidget);
    setLayout(mainLayout);
    QFile f(path);
    if (f.open(QIODevice::ReadOnly)) {
        QByteArray data = f.readAll();
        PdfWidget->loadData(data);
        f.close();
    }
//    QPdfWidget *pPdf = new QPdfWidget();
//    connect(pPdf, &QPdfWidget::initialized, [=]() {
//        pPdf->setToolbarVisible(false);
//    });

}
