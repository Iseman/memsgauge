#ifndef ABOUTBOX_H
#define ABOUTBOX_H

#include <QDialog>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QStyle>
#include <QString>
#include "memsinjection.h"

/**
 * The "About" dialog that shows information about the program.
 */
class AboutBox : public QDialog
{
    Q_OBJECT

public:
    AboutBox(QStyle *parentStyle, QString title, libmemsinjection_version version, QWidget *parent);

private:
    void setupWidgets();
    QString makeVersionString(int maj, int min, int patch);

    QStyle *m_style;
    QGridLayout *m_grid;

    libmemsinjection_version m_ver;

    const QString m_urlString;
    const QString m_urlLibString;
    const QString m_aboutString;
    QLabel *m_iconLabel;
    QLabel *m_info;
    QLabel *m_name;
    QLabel *m_infoLib;
    QLabel *m_url;
    QLabel *m_urlLib;
    QPushButton *m_ok;
};

#endif // ABOUTBOX_H

