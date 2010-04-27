#ifndef RENAMECONFIG_H
#define RENAMECONFIG_H

#include <QtGui>
#include <QShowEvent>

#include "Configs.h"

namespace Ui {
    class RenameConfig;
}

class RenameConfig : public QDialog {
    Q_OBJECT
public:
    static RenameConfig *getInstance ();
    void setOldName (QString oldname);
    void setFullPath (QString path);

protected:
    void changeEvent(QEvent *e);
    void showEvent (QShowEvent *e);

private:
    static RenameConfig *mInst;
    RenameConfig();
    Ui::RenameConfig *m_ui;
    QString fullPath;

private slots:
    void on_cmdRename_clicked();
    void on_cmdClose_clicked();
};

#endif // RENAMECONFIG_H
