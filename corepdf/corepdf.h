#ifndef COREPDF_H
#define COREPDF_H

#include <QWidget>
#include <QPdfWidget>

class corepdf : public QWidget
{
    Q_OBJECT

public:
    corepdf(QWidget *parent = 0);
    ~corepdf();
    void openPdfFile(const QString path);

private:
    QPdfWidget *PdfWidget;

};

#endif // COREPDF_H
