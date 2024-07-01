#include <QCoreApplication>
#include <QSqlDatabase>
#include <QAuthenticator>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

QSqlDatabase db;
QAuthenticator authenticator;

//db.addDatabase(ghj);
//authenticator.setPassword(gfhoj56kll);

    return a.exec();
}
