/********************************************************************************
** Form generated from reading UI file 'Stock.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_H
#define UI_STOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stock
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *commande;
    QPushButton *rayon;
    QPushButton *produit;
    QPushButton *fournisseur;
    QStackedWidget *stackedWidget;
    QWidget *widget_1;
    QPushButton *ajputerP;
    QPushButton *modifierP;
    QPushButton *afficherP;
    QPushButton *prec;
    QPushButton *exit;
    QWidget *widget_2;
    QLineEdit *id;
    QLineEdit *nom;
    QLineEdit *quantite_s;
    QLineEdit *quantite_r;
    QLineEdit *prix;
    QLineEdit *code;
    QPushButton *doneP;
    QPushButton *precP;
    QDateEdit *duree;
    QWidget *widget_3;
    QTableView *tableView;
    QLineEdit *lineEdit_recherche;
    QPushButton *supprimerP;
    QPushButton *precAP;
    QWidget *widget_4;
    QLineEdit *nom_2;
    QLineEdit *quantite_s_2;
    QLineEdit *quantite_r_2;
    QLineEdit *prix_2;
    QLineEdit *code_2;
    QPushButton *done_m_p;
    QPushButton *prec_m_p;
    QLineEdit *id_2;
    QDateEdit *duree_2;
    QStackedWidget *stackedWidget_2;
    QWidget *widget_5;
    QPushButton *ajouterF;
    QPushButton *modifierF;
    QPushButton *afficherF;
    QPushButton *emailF;
    QPushButton *precF;
    QPushButton *closeF;
    QWidget *widget_6;
    QLineEdit *id_3;
    QLineEdit *nom_3;
    QLineEdit *tel;
    QLineEdit *adresse;
    QPushButton *doneF;
    QPushButton *precF_2;
    QWidget *widget_7;
    QLineEdit *nom_4;
    QLineEdit *tel_2;
    QLineEdit *adresse_2;
    QPushButton *doneF_2;
    QPushButton *precF_3;
    QLineEdit *id_4;
    QComboBox *idd;
    QPushButton *iddd;
    QWidget *widget_8;
    QTableView *tableView_2;
    QLineEdit *lineEdit_rechercheF;
    QPushButton *rechercheF;
    QPushButton *supprimerF;
    QPushButton *PrecFA;
    QWidget *widget_9;
    QPushButton *envoyer;
    QLineEdit *idf;
    QLineEdit *mail;
    QPushButton *precFF;
    QTextEdit *contenu_mail;
    QStackedWidget *stackedWidget_3;
    QWidget *page1;
    QPushButton *ajouterR;
    QPushButton *modifierR;
    QPushButton *afficherR;
    QPushButton *htR;
    QPushButton *precR;
    QWidget *page2;
    QLineEdit *idR;
    QLineEdit *etat;
    QPushButton *doneR;
    QPushButton *PrecRA;
    QComboBox *nomPR;
    QPushButton *nomproduitB;
    QLineEdit *quantitePR;
    QWidget *page3;
    QComboBox *comboBox;
    QPushButton *iddR;
    QLineEdit *idRR;
    QLineEdit *nomR;
    QLineEdit *etatR;
    QPushButton *doneRM;
    QPushButton *precRM;
    QLineEdit *quantitePR_2;
    QWidget *page4;
    QTableView *tableView_3;
    QLineEdit *lineEdit_rechercheR;
    QPushButton *rechercheR;
    QPushButton *supprimerR;
    QPushButton *precRA;
    QStackedWidget *stackedWidget_4;
    QWidget *page;
    QPushButton *ajouterC;
    QPushButton *modifierC;
    QPushButton *affichC;
    QPushButton *imprimerC;
    QPushButton *precC;
    QWidget *page_2;
    QLineEdit *idC;
    QLineEdit *idPC;
    QLineEdit *quantite;
    QLineEdit *idFC;
    QDateEdit *date;
    QPushButton *doneAC;
    QPushButton *precAC;
    QWidget *page_3;
    QDateEdit *date2;
    QLineEdit *idC2;
    QLineEdit *idCP;
    QLineEdit *quantite2;
    QLineEdit *idCF;
    QPushButton *precAC_2;
    QPushButton *doneAC_2;
    QComboBox *IDDcombo;
    QPushButton *idCC;
    QWidget *page_4;
    QLineEdit *lineEdit_rechercheC;
    QTableView *tableView_4;
    QPushButton *supprimerC;
    QPushButton *rechercherC;
    QPushButton *precAC_3;
    QWidget *page_5;
    QTableView *tableView_5;
    QLineEdit *imp_idp;
    QLineEdit *imp_idf;
    QLineEdit *imp_idc;
    QLineEdit *imp_quantite;
    QDateEdit *imp_date;
    QPushButton *imprimerpdfcom;
    QPushButton *precIMP;
    QToolBar *toolBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Stock)
    {
        if (Stock->objectName().isEmpty())
            Stock->setObjectName(QStringLiteral("Stock"));
        Stock->resize(1280, 720);
        Stock->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #3"
                        "43434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b"
                        "1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0,"
                        " x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png"
                        ");\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcon"
                        "trol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradi"
                        "ent( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical,"
                        " QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232"
                        ", stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the t"
                        "ool bar */\n"
"     background: url(:/images/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
" "
                        "   margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
""
                        "}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/images/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
""
                        "}"));
        centralwidget = new QWidget(Stock);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-1, -1, 1280, 720));
        widget->setStyleSheet(QLatin1String("QWidget{background-image:url(:/the-real-interface);}\n"
"\n"
"\n"
""));
        commande = new QPushButton(widget);
        commande->setObjectName(QStringLiteral("commande"));
        commande->setGeometry(QRect(350, 80, 191, 181));
        commande->setStyleSheet(QLatin1String("\n"
"background:transparent;\n"
"border:none;\n"
""));
        rayon = new QPushButton(widget);
        rayon->setObjectName(QStringLiteral("rayon"));
        rayon->setGeometry(QRect(790, 80, 241, 181));
        rayon->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        produit = new QPushButton(widget);
        produit->setObjectName(QStringLiteral("produit"));
        produit->setGeometry(QRect(490, 400, 191, 181));
        produit->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        fournisseur = new QPushButton(widget);
        fournisseur->setObjectName(QStringLiteral("fournisseur"));
        fournisseur->setGeometry(QRect(900, 400, 201, 181));
        fournisseur->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(210, 0, 1071, 681));
        stackedWidget->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        widget_1 = new QWidget();
        widget_1->setObjectName(QStringLiteral("widget_1"));
        widget_1->setStyleSheet(QLatin1String("background-image:url(:/produit)\n"
"\n"
"\n"
"\n"
""));
        ajputerP = new QPushButton(widget_1);
        ajputerP->setObjectName(QStringLiteral("ajputerP"));
        ajputerP->setGeometry(QRect(80, 180, 131, 111));
        ajputerP->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        modifierP = new QPushButton(widget_1);
        modifierP->setObjectName(QStringLiteral("modifierP"));
        modifierP->setGeometry(QRect(240, 320, 131, 111));
        modifierP->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        afficherP = new QPushButton(widget_1);
        afficherP->setObjectName(QStringLiteral("afficherP"));
        afficherP->setGeometry(QRect(440, 440, 131, 111));
        afficherP->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        prec = new QPushButton(widget_1);
        prec->setObjectName(QStringLiteral("prec"));
        prec->setGeometry(QRect(880, 630, 81, 51));
        prec->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border:none;\n"
"}\n"
"QPushButton:Hover{\n"
"border-color:rgb(0, 99, 148);\n"
"border-style:inset;\n"
"border-width:4px;\n"
"background-color: rgba(255, 255, 255,25%);\n"
"\n"
"}"));
        exit = new QPushButton(widget_1);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(990, 620, 71, 51));
        exit->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        stackedWidget->addWidget(widget_1);
        widget_2 = new QWidget();
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QLatin1String("background-image:url(:/ajout-mod-produit)\n"
"\n"
"\n"
"\n"
""));
        id = new QLineEdit(widget_2);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(360, 80, 311, 41));
        id->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        nom = new QLineEdit(widget_2);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(370, 170, 311, 41));
        nom->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        quantite_s = new QLineEdit(widget_2);
        quantite_s->setObjectName(QStringLiteral("quantite_s"));
        quantite_s->setGeometry(QRect(370, 260, 311, 41));
        quantite_s->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        quantite_r = new QLineEdit(widget_2);
        quantite_r->setObjectName(QStringLiteral("quantite_r"));
        quantite_r->setGeometry(QRect(370, 360, 311, 41));
        quantite_r->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        prix = new QLineEdit(widget_2);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(370, 540, 311, 41));
        prix->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        code = new QLineEdit(widget_2);
        code->setObjectName(QStringLiteral("code"));
        code->setGeometry(QRect(370, 630, 311, 41));
        code->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        doneP = new QPushButton(widget_2);
        doneP->setObjectName(QStringLiteral("doneP"));
        doneP->setGeometry(QRect(764, 620, 101, 61));
        doneP->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        precP = new QPushButton(widget_2);
        precP->setObjectName(QStringLiteral("precP"));
        precP->setGeometry(QRect(890, 630, 71, 41));
        precP->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        duree = new QDateEdit(widget_2);
        duree->setObjectName(QStringLiteral("duree"));
        duree->setGeometry(QRect(350, 450, 341, 61));
        stackedWidget->addWidget(widget_2);
        widget_3 = new QWidget();
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QLatin1String("background-image:url(:/affich-prod)\n"
"\n"
"\n"
"\n"
""));
        tableView = new QTableView(widget_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(155, 170, 781, 371));
        tableView->setStyleSheet(QLatin1String("QTableView{\n"
"background: #2F2F2F\n"
"};"));
        lineEdit_recherche = new QLineEdit(widget_3);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(80, 100, 241, 16));
        lineEdit_recherche->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        supprimerP = new QPushButton(widget_3);
        supprimerP->setObjectName(QStringLiteral("supprimerP"));
        supprimerP->setGeometry(QRect(580, 590, 231, 21));
        supprimerP->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        precAP = new QPushButton(widget_3);
        precAP->setObjectName(QStringLiteral("precAP"));
        precAP->setGeometry(QRect(890, 620, 71, 51));
        precAP->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        stackedWidget->addWidget(widget_3);
        widget_4 = new QWidget();
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QLatin1String("background-image:url(:/ajout-mod-produit)\n"
"\n"
"\n"
"\n"
""));
        nom_2 = new QLineEdit(widget_4);
        nom_2->setObjectName(QStringLiteral("nom_2"));
        nom_2->setGeometry(QRect(372, 180, 311, 31));
        nom_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        quantite_s_2 = new QLineEdit(widget_4);
        quantite_s_2->setObjectName(QStringLiteral("quantite_s_2"));
        quantite_s_2->setGeometry(QRect(370, 270, 311, 31));
        quantite_s_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        quantite_r_2 = new QLineEdit(widget_4);
        quantite_r_2->setObjectName(QStringLiteral("quantite_r_2"));
        quantite_r_2->setGeometry(QRect(370, 370, 311, 31));
        quantite_r_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        prix_2 = new QLineEdit(widget_4);
        prix_2->setObjectName(QStringLiteral("prix_2"));
        prix_2->setGeometry(QRect(370, 550, 311, 31));
        prix_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        code_2 = new QLineEdit(widget_4);
        code_2->setObjectName(QStringLiteral("code_2"));
        code_2->setGeometry(QRect(370, 630, 311, 31));
        code_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        done_m_p = new QPushButton(widget_4);
        done_m_p->setObjectName(QStringLiteral("done_m_p"));
        done_m_p->setGeometry(QRect(780, 630, 61, 51));
        done_m_p->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        prec_m_p = new QPushButton(widget_4);
        prec_m_p->setObjectName(QStringLiteral("prec_m_p"));
        prec_m_p->setGeometry(QRect(890, 630, 71, 51));
        prec_m_p->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        id_2 = new QLineEdit(widget_4);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(370, 90, 311, 31));
        id_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        duree_2 = new QDateEdit(widget_4);
        duree_2->setObjectName(QStringLiteral("duree_2"));
        duree_2->setGeometry(QRect(350, 450, 341, 61));
        stackedWidget->addWidget(widget_4);
        stackedWidget_2 = new QStackedWidget(widget);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(210, 0, 1071, 681));
        stackedWidget_2->setStyleSheet(QStringLiteral(""));
        widget_5 = new QWidget();
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QLatin1String("background-image:url(:/fournisseur)\n"
"\n"
"\n"
"\n"
""));
        ajouterF = new QPushButton(widget_5);
        ajouterF->setObjectName(QStringLiteral("ajouterF"));
        ajouterF->setGeometry(QRect(80, 190, 131, 111));
        ajouterF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        modifierF = new QPushButton(widget_5);
        modifierF->setObjectName(QStringLiteral("modifierF"));
        modifierF->setGeometry(QRect(240, 330, 131, 111));
        modifierF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        afficherF = new QPushButton(widget_5);
        afficherF->setObjectName(QStringLiteral("afficherF"));
        afficherF->setGeometry(QRect(440, 450, 131, 111));
        afficherF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        emailF = new QPushButton(widget_5);
        emailF->setObjectName(QStringLiteral("emailF"));
        emailF->setGeometry(QRect(610, 550, 131, 111));
        emailF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        precF = new QPushButton(widget_5);
        precF->setObjectName(QStringLiteral("precF"));
        precF->setGeometry(QRect(870, 630, 91, 51));
        precF->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border:none;\n"
"}\n"
"QPushButton:Hover{\n"
"border-color:rgb(0, 99, 148);\n"
"border-style:inset;\n"
"border-width:4px;\n"
"background-color: rgba(255, 255, 255,25%);\n"
"\n"
"}"));
        closeF = new QPushButton(widget_5);
        closeF->setObjectName(QStringLiteral("closeF"));
        closeF->setGeometry(QRect(990, 620, 71, 61));
        closeF->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border:none;\n"
"}\n"
"QPushButton:Hover{\n"
"border-color:rgb(0, 99, 148);\n"
"border-style:inset;\n"
"border-width:4px;\n"
"background-color: rgba(255, 255, 255,25%);\n"
"\n"
"}"));
        stackedWidget_2->addWidget(widget_5);
        widget_6 = new QWidget();
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QLatin1String("background-image:url(:/ajou-modf-four)\n"
"\n"
"\n"
""));
        id_3 = new QLineEdit(widget_6);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(350, 129, 331, 31));
        id_3->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        nom_3 = new QLineEdit(widget_6);
        nom_3->setObjectName(QStringLiteral("nom_3"));
        nom_3->setGeometry(QRect(350, 270, 331, 31));
        nom_3->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        tel = new QLineEdit(widget_6);
        tel->setObjectName(QStringLiteral("tel"));
        tel->setGeometry(QRect(350, 380, 331, 31));
        tel->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        adresse = new QLineEdit(widget_6);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(350, 480, 331, 31));
        adresse->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        doneF = new QPushButton(widget_6);
        doneF->setObjectName(QStringLiteral("doneF"));
        doneF->setGeometry(QRect(770, 632, 75, 51));
        doneF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        precF_2 = new QPushButton(widget_6);
        precF_2->setObjectName(QStringLiteral("precF_2"));
        precF_2->setGeometry(QRect(870, 630, 91, 51));
        precF_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border:none;\n"
"}\n"
"QPushButton:Hover{\n"
"border-color:rgb(0, 99, 148);\n"
"border-style:inset;\n"
"border-width:4px;\n"
"background-color: rgba(255, 255, 255,25%);\n"
"\n"
"}"));
        stackedWidget_2->addWidget(widget_6);
        widget_7 = new QWidget();
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setStyleSheet(QLatin1String("background-image:url(:/ajou-modf-four)\n"
"\n"
"\n"
""));
        nom_4 = new QLineEdit(widget_7);
        nom_4->setObjectName(QStringLiteral("nom_4"));
        nom_4->setGeometry(QRect(352, 270, 331, 31));
        nom_4->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        tel_2 = new QLineEdit(widget_7);
        tel_2->setObjectName(QStringLiteral("tel_2"));
        tel_2->setGeometry(QRect(350, 380, 331, 31));
        tel_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        adresse_2 = new QLineEdit(widget_7);
        adresse_2->setObjectName(QStringLiteral("adresse_2"));
        adresse_2->setGeometry(QRect(350, 480, 331, 31));
        adresse_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        doneF_2 = new QPushButton(widget_7);
        doneF_2->setObjectName(QStringLiteral("doneF_2"));
        doneF_2->setGeometry(QRect(770, 630, 75, 51));
        doneF_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        precF_3 = new QPushButton(widget_7);
        precF_3->setObjectName(QStringLiteral("precF_3"));
        precF_3->setGeometry(QRect(870, 630, 91, 51));
        precF_3->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border:none;\n"
"}\n"
"QPushButton:Hover{\n"
"border-color:rgb(0, 99, 148);\n"
"border-style:inset;\n"
"border-width:4px;\n"
"background-color: rgba(255, 255, 255,25%);\n"
"\n"
"}"));
        id_4 = new QLineEdit(widget_7);
        id_4->setObjectName(QStringLiteral("id_4"));
        id_4->setGeometry(QRect(350, 130, 331, 31));
        id_4->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        idd = new QComboBox(widget_7);
        idd->setObjectName(QStringLiteral("idd"));
        idd->setGeometry(QRect(350, 50, 331, 51));
        idd->setStyleSheet(QStringLiteral("background: #2F2F2F"));
        iddd = new QPushButton(widget_7);
        iddd->setObjectName(QStringLiteral("iddd"));
        iddd->setGeometry(QRect(220, 70, 75, 23));
        iddd->setStyleSheet(QStringLiteral("background: #2F2F2F"));
        stackedWidget_2->addWidget(widget_7);
        widget_8 = new QWidget();
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setStyleSheet(QLatin1String("background-image:url(:/affic-fourn)\n"
"\n"
"\n"
""));
        tableView_2 = new QTableView(widget_8);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(155, 170, 781, 371));
        tableView_2->setStyleSheet(QLatin1String("QTableView{\n"
"background: #2F2F2F\n"
"};"));
        lineEdit_rechercheF = new QLineEdit(widget_8);
        lineEdit_rechercheF->setObjectName(QStringLiteral("lineEdit_rechercheF"));
        lineEdit_rechercheF->setGeometry(QRect(80, 100, 241, 21));
        lineEdit_rechercheF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        rechercheF = new QPushButton(widget_8);
        rechercheF->setObjectName(QStringLiteral("rechercheF"));
        rechercheF->setGeometry(QRect(320, 90, 41, 31));
        rechercheF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        supprimerF = new QPushButton(widget_8);
        supprimerF->setObjectName(QStringLiteral("supprimerF"));
        supprimerF->setGeometry(QRect(580, 590, 221, 41));
        supprimerF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        PrecFA = new QPushButton(widget_8);
        PrecFA->setObjectName(QStringLiteral("PrecFA"));
        PrecFA->setGeometry(QRect(880, 630, 81, 41));
        PrecFA->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        stackedWidget_2->addWidget(widget_8);
        widget_9 = new QWidget();
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setStyleSheet(QLatin1String("background-image:url(:/mail-four)\n"
"\n"
"\n"
""));
        envoyer = new QPushButton(widget_9);
        envoyer->setObjectName(QStringLiteral("envoyer"));
        envoyer->setGeometry(QRect(430, 590, 211, 31));
        envoyer->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        idf = new QLineEdit(widget_9);
        idf->setObjectName(QStringLiteral("idf"));
        idf->setGeometry(QRect(392, 99, 291, 41));
        idf->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        mail = new QLineEdit(widget_9);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(390, 220, 271, 41));
        mail->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        precFF = new QPushButton(widget_9);
        precFF->setObjectName(QStringLiteral("precFF"));
        precFF->setGeometry(QRect(880, 640, 81, 31));
        precFF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        contenu_mail = new QTextEdit(widget_9);
        contenu_mail->setObjectName(QStringLiteral("contenu_mail"));
        contenu_mail->setGeometry(QRect(390, 350, 271, 171));
        contenu_mail->setStyleSheet(QStringLiteral("border:none;background:transparent;"));
        stackedWidget_2->addWidget(widget_9);
        stackedWidget_3 = new QStackedWidget(widget);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(210, 0, 1071, 684));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        page1->setStyleSheet(QLatin1String("background-image:url(:/rayon)\n"
"\n"
"\n"
""));
        ajouterR = new QPushButton(page1);
        ajouterR->setObjectName(QStringLiteral("ajouterR"));
        ajouterR->setGeometry(QRect(80, 190, 131, 111));
        ajouterR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        modifierR = new QPushButton(page1);
        modifierR->setObjectName(QStringLiteral("modifierR"));
        modifierR->setGeometry(QRect(240, 330, 131, 111));
        modifierR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        afficherR = new QPushButton(page1);
        afficherR->setObjectName(QStringLiteral("afficherR"));
        afficherR->setGeometry(QRect(440, 440, 131, 111));
        afficherR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        htR = new QPushButton(page1);
        htR->setObjectName(QStringLiteral("htR"));
        htR->setGeometry(QRect(620, 530, 131, 111));
        htR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        precR = new QPushButton(page1);
        precR->setObjectName(QStringLiteral("precR"));
        precR->setGeometry(QRect(870, 630, 91, 51));
        precR->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border:none;\n"
"}\n"
"QPushButton:Hover{\n"
"border-color:rgb(0, 99, 148);\n"
"border-style:inset;\n"
"border-width:4px;\n"
"background-color: rgba(255, 255, 255,25%);\n"
"\n"
"}"));
        stackedWidget_3->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        page2->setStyleSheet(QLatin1String("background-image:url(:/ajout-mod-rayon)\n"
"\n"
"\n"
""));
        idR = new QLineEdit(page2);
        idR->setObjectName(QStringLiteral("idR"));
        idR->setGeometry(QRect(360, 140, 331, 31));
        idR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        etat = new QLineEdit(page2);
        etat->setObjectName(QStringLiteral("etat"));
        etat->setGeometry(QRect(360, 380, 331, 31));
        etat->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        doneR = new QPushButton(page2);
        doneR->setObjectName(QStringLiteral("doneR"));
        doneR->setGeometry(QRect(770, 620, 81, 51));
        doneR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        PrecRA = new QPushButton(page2);
        PrecRA->setObjectName(QStringLiteral("PrecRA"));
        PrecRA->setGeometry(QRect(890, 620, 81, 51));
        PrecRA->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        nomPR = new QComboBox(page2);
        nomPR->setObjectName(QStringLiteral("nomPR"));
        nomPR->setGeometry(QRect(350, 241, 341, 61));
        nomproduitB = new QPushButton(page2);
        nomproduitB->setObjectName(QStringLiteral("nomproduitB"));
        nomproduitB->setGeometry(QRect(80, 262, 241, 31));
        quantitePR = new QLineEdit(page2);
        quantitePR->setObjectName(QStringLiteral("quantitePR"));
        quantitePR->setGeometry(QRect(350, 490, 331, 31));
        quantitePR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        stackedWidget_3->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        page3->setStyleSheet(QLatin1String("background-image:url(:/ajout-mod-rayon)\n"
"\n"
"\n"
""));
        comboBox = new QComboBox(page3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(360, 40, 331, 41));
        comboBox->setStyleSheet(QStringLiteral("background: #2F2F2F"));
        iddR = new QPushButton(page3);
        iddR->setObjectName(QStringLiteral("iddR"));
        iddR->setGeometry(QRect(200, 40, 51, 41));
        iddR->setStyleSheet(QStringLiteral("background: #2F2F2F"));
        idRR = new QLineEdit(page3);
        idRR->setObjectName(QStringLiteral("idRR"));
        idRR->setGeometry(QRect(360, 140, 331, 31));
        idRR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        nomR = new QLineEdit(page3);
        nomR->setObjectName(QStringLiteral("nomR"));
        nomR->setGeometry(QRect(360, 260, 331, 31));
        nomR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        etatR = new QLineEdit(page3);
        etatR->setObjectName(QStringLiteral("etatR"));
        etatR->setGeometry(QRect(360, 380, 331, 31));
        etatR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        doneRM = new QPushButton(page3);
        doneRM->setObjectName(QStringLiteral("doneRM"));
        doneRM->setGeometry(QRect(760, 620, 111, 61));
        doneRM->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        precRM = new QPushButton(page3);
        precRM->setObjectName(QStringLiteral("precRM"));
        precRM->setGeometry(QRect(880, 620, 91, 61));
        precRM->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        quantitePR_2 = new QLineEdit(page3);
        quantitePR_2->setObjectName(QStringLiteral("quantitePR_2"));
        quantitePR_2->setGeometry(QRect(350, 490, 331, 31));
        quantitePR_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        stackedWidget_3->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QStringLiteral("page4"));
        page4->setStyleSheet(QLatin1String("background-image:url(:/affich-rayo)\n"
"\n"
"\n"
""));
        tableView_3 = new QTableView(page4);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(110, 170, 791, 381));
        tableView_3->setStyleSheet(QLatin1String("QTableView{\n"
"background: #2F2F2F\n"
"};"));
        lineEdit_rechercheR = new QLineEdit(page4);
        lineEdit_rechercheR->setObjectName(QStringLiteral("lineEdit_rechercheR"));
        lineEdit_rechercheR->setGeometry(QRect(80, 100, 241, 21));
        lineEdit_rechercheR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        rechercheR = new QPushButton(page4);
        rechercheR->setObjectName(QStringLiteral("rechercheR"));
        rechercheR->setGeometry(QRect(320, 100, 41, 31));
        rechercheR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        supprimerR = new QPushButton(page4);
        supprimerR->setObjectName(QStringLiteral("supprimerR"));
        supprimerR->setGeometry(QRect(570, 590, 221, 41));
        supprimerR->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        precRA = new QPushButton(page4);
        precRA->setObjectName(QStringLiteral("precRA"));
        precRA->setGeometry(QRect(860, 630, 91, 51));
        precRA->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        stackedWidget_3->addWidget(page4);
        stackedWidget_4 = new QStackedWidget(widget);
        stackedWidget_4->setObjectName(QStringLiteral("stackedWidget_4"));
        stackedWidget_4->setGeometry(QRect(210, 0, 0, 0));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setStyleSheet(QLatin1String("background-image:url(:/commande)\n"
"\n"
"\n"
""));
        ajouterC = new QPushButton(page);
        ajouterC->setObjectName(QStringLiteral("ajouterC"));
        ajouterC->setGeometry(QRect(80, 180, 131, 111));
        ajouterC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        modifierC = new QPushButton(page);
        modifierC->setObjectName(QStringLiteral("modifierC"));
        modifierC->setGeometry(QRect(240, 320, 131, 111));
        modifierC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        affichC = new QPushButton(page);
        affichC->setObjectName(QStringLiteral("affichC"));
        affichC->setGeometry(QRect(440, 440, 131, 111));
        affichC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        imprimerC = new QPushButton(page);
        imprimerC->setObjectName(QStringLiteral("imprimerC"));
        imprimerC->setGeometry(QRect(630, 540, 131, 111));
        imprimerC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        precC = new QPushButton(page);
        precC->setObjectName(QStringLiteral("precC"));
        precC->setGeometry(QRect(870, 620, 91, 61));
        precC->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border:none;\n"
"}\n"
"QPushButton:Hover{\n"
"border-color:rgb(0, 99, 148);\n"
"border-style:inset;\n"
"border-width:4px;\n"
"background-color: rgba(255, 255, 255,25%);\n"
"\n"
"}"));
        stackedWidget_4->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QLatin1String("background-image:url(:/ajout-mod-com)\n"
"\n"
"\n"
""));
        idC = new QLineEdit(page_2);
        idC->setObjectName(QStringLiteral("idC"));
        idC->setGeometry(QRect(350, 140, 331, 31));
        idC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        idPC = new QLineEdit(page_2);
        idPC->setObjectName(QStringLiteral("idPC"));
        idPC->setGeometry(QRect(350, 250, 331, 31));
        idPC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        quantite = new QLineEdit(page_2);
        quantite->setObjectName(QStringLiteral("quantite"));
        quantite->setGeometry(QRect(350, 360, 331, 31));
        quantite->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        idFC = new QLineEdit(page_2);
        idFC->setObjectName(QStringLiteral("idFC"));
        idFC->setGeometry(QRect(350, 560, 331, 31));
        idFC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        date = new QDateEdit(page_2);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(350, 460, 331, 61));
        date->setStyleSheet(QLatin1String("\n"
"background: #2F2F2F"));
        doneAC = new QPushButton(page_2);
        doneAC->setObjectName(QStringLiteral("doneAC"));
        doneAC->setGeometry(QRect(750, 610, 111, 71));
        doneAC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        precAC = new QPushButton(page_2);
        precAC->setObjectName(QStringLiteral("precAC"));
        precAC->setGeometry(QRect(870, 620, 81, 51));
        precAC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        stackedWidget_4->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setStyleSheet(QLatin1String("background-image:url(:/ajout-mod-com)\n"
"\n"
"\n"
""));
        date2 = new QDateEdit(page_3);
        date2->setObjectName(QStringLiteral("date2"));
        date2->setGeometry(QRect(350, 460, 331, 61));
        date2->setStyleSheet(QLatin1String("\n"
"background: #2F2F2F"));
        idC2 = new QLineEdit(page_3);
        idC2->setObjectName(QStringLiteral("idC2"));
        idC2->setGeometry(QRect(350, 140, 331, 31));
        idC2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        idCP = new QLineEdit(page_3);
        idCP->setObjectName(QStringLiteral("idCP"));
        idCP->setGeometry(QRect(350, 250, 331, 31));
        idCP->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        quantite2 = new QLineEdit(page_3);
        quantite2->setObjectName(QStringLiteral("quantite2"));
        quantite2->setGeometry(QRect(350, 360, 331, 31));
        quantite2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        idCF = new QLineEdit(page_3);
        idCF->setObjectName(QStringLiteral("idCF"));
        idCF->setGeometry(QRect(350, 570, 331, 31));
        idCF->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        precAC_2 = new QPushButton(page_3);
        precAC_2->setObjectName(QStringLiteral("precAC_2"));
        precAC_2->setGeometry(QRect(870, 620, 81, 51));
        precAC_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        doneAC_2 = new QPushButton(page_3);
        doneAC_2->setObjectName(QStringLiteral("doneAC_2"));
        doneAC_2->setGeometry(QRect(750, 610, 111, 71));
        doneAC_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        IDDcombo = new QComboBox(page_3);
        IDDcombo->setObjectName(QStringLiteral("IDDcombo"));
        IDDcombo->setGeometry(QRect(350, 40, 331, 41));
        IDDcombo->setStyleSheet(QStringLiteral("background: #2F2F2F"));
        idCC = new QPushButton(page_3);
        idCC->setObjectName(QStringLiteral("idCC"));
        idCC->setGeometry(QRect(200, 40, 51, 41));
        idCC->setStyleSheet(QStringLiteral("background: #2F2F2F"));
        stackedWidget_4->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setStyleSheet(QLatin1String("background-image:url(:/affich-comm)\n"
"\n"
"\n"
""));
        lineEdit_rechercheC = new QLineEdit(page_4);
        lineEdit_rechercheC->setObjectName(QStringLiteral("lineEdit_rechercheC"));
        lineEdit_rechercheC->setGeometry(QRect(80, 90, 241, 21));
        lineEdit_rechercheC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        tableView_4 = new QTableView(page_4);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(120, 160, 801, 391));
        tableView_4->setStyleSheet(QLatin1String("QTableView{\n"
"background: #2F2F2F\n"
"};"));
        supprimerC = new QPushButton(page_4);
        supprimerC->setObjectName(QStringLiteral("supprimerC"));
        supprimerC->setGeometry(QRect(590, 590, 221, 41));
        supprimerC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        rechercherC = new QPushButton(page_4);
        rechercherC->setObjectName(QStringLiteral("rechercherC"));
        rechercherC->setGeometry(QRect(330, 80, 41, 41));
        rechercherC->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
""));
        precAC_3 = new QPushButton(page_4);
        precAC_3->setObjectName(QStringLiteral("precAC_3"));
        precAC_3->setGeometry(QRect(890, 630, 81, 51));
        precAC_3->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        stackedWidget_4->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setStyleSheet(QLatin1String("background-image:url(:/imprimer)\n"
""));
        tableView_5 = new QTableView(page_5);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));
        tableView_5->setGeometry(QRect(30, 40, 611, 291));
        tableView_5->setStyleSheet(QLatin1String("QTableView{\n"
"background: #2F2F2F\n"
"};"));
        imp_idp = new QLineEdit(page_5);
        imp_idp->setObjectName(QStringLiteral("imp_idp"));
        imp_idp->setGeometry(QRect(90, 420, 231, 41));
        imp_idp->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        imp_idf = new QLineEdit(page_5);
        imp_idf->setObjectName(QStringLiteral("imp_idf"));
        imp_idf->setGeometry(QRect(90, 530, 231, 41));
        imp_idf->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        imp_idc = new QLineEdit(page_5);
        imp_idc->setObjectName(QStringLiteral("imp_idc"));
        imp_idc->setGeometry(QRect(460, 530, 231, 41));
        imp_idc->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        imp_quantite = new QLineEdit(page_5);
        imp_quantite->setObjectName(QStringLiteral("imp_quantite"));
        imp_quantite->setGeometry(QRect(470, 420, 231, 41));
        imp_quantite->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        imp_date = new QDateEdit(page_5);
        imp_date->setObjectName(QStringLiteral("imp_date"));
        imp_date->setGeometry(QRect(790, 451, 251, 71));
        imprimerpdfcom = new QPushButton(page_5);
        imprimerpdfcom->setObjectName(QStringLiteral("imprimerpdfcom"));
        imprimerpdfcom->setGeometry(QRect(740, 580, 121, 101));
        imprimerpdfcom->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        precIMP = new QPushButton(page_5);
        precIMP->setObjectName(QStringLiteral("precIMP"));
        precIMP->setGeometry(QRect(880, 620, 81, 51));
        precIMP->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        stackedWidget_4->addWidget(page_5);
        Stock->setCentralWidget(centralwidget);
        toolBar = new QToolBar(Stock);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Stock->addToolBar(Qt::TopToolBarArea, toolBar);
        menuBar = new QMenuBar(Stock);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        Stock->setMenuBar(menuBar);

        retranslateUi(Stock);

        QMetaObject::connectSlotsByName(Stock);
    } // setupUi

    void retranslateUi(QMainWindow *Stock)
    {
        Stock->setWindowTitle(QApplication::translate("Stock", "MainWindow", nullptr));
        commande->setText(QString());
        rayon->setText(QString());
        produit->setText(QString());
        fournisseur->setText(QString());
        ajputerP->setText(QString());
        modifierP->setText(QString());
        afficherP->setText(QString());
        prec->setText(QString());
        exit->setText(QString());
        doneP->setText(QString());
        precP->setText(QString());
        supprimerP->setText(QString());
        precAP->setText(QString());
        done_m_p->setText(QString());
        prec_m_p->setText(QString());
        ajouterF->setText(QString());
        modifierF->setText(QString());
        afficherF->setText(QString());
        emailF->setText(QString());
        precF->setText(QString());
        closeF->setText(QString());
        doneF->setText(QString());
        precF_2->setText(QString());
        doneF_2->setText(QString());
        precF_3->setText(QString());
        iddd->setText(QApplication::translate("Stock", "ID", nullptr));
        rechercheF->setText(QString());
        supprimerF->setText(QString());
        PrecFA->setText(QString());
        envoyer->setText(QString());
        precFF->setText(QString());
        ajouterR->setText(QString());
        modifierR->setText(QString());
        afficherR->setText(QString());
        htR->setText(QString());
        precR->setText(QString());
        doneR->setText(QString());
        PrecRA->setText(QString());
        nomproduitB->setText(QApplication::translate("Stock", "Nom produit :", nullptr));
        iddR->setText(QApplication::translate("Stock", "ID", nullptr));
        doneRM->setText(QString());
        precRM->setText(QString());
        rechercheR->setText(QString());
        supprimerR->setText(QString());
        precRA->setText(QString());
        ajouterC->setText(QString());
        modifierC->setText(QString());
        affichC->setText(QString());
        imprimerC->setText(QString());
        precC->setText(QString());
        doneAC->setText(QString());
        precAC->setText(QString());
        precAC_2->setText(QString());
        doneAC_2->setText(QString());
        idCC->setText(QApplication::translate("Stock", "ID", nullptr));
        supprimerC->setText(QString());
        rechercherC->setText(QString());
        precAC_3->setText(QString());
        imprimerpdfcom->setText(QString());
        precIMP->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("Stock", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stock: public Ui_Stock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_H
