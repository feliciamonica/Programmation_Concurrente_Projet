QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    client.cpp \
    client_worker.cpp \
    commande.cpp \
    commande_worker.cpp \
    cuisine.cpp \
    database.cpp \
    employe.cpp \
    ingredients.cpp \
    ingredients_worker.cpp \
    location.cpp \
    main.cpp \
    materiel_commun.cpp \
    materiel_cuisine.cpp \
    materiel_worker.cpp \
    materielcuisine_worker.cpp \
    menu.cpp \
    plat.cpp \
    plat_worker.cpp \
    restauranttable.cpp \
    restauranttable_worker.cpp \
    salle_restauration.cpp \
    tableau_bord.cpp

HEADERS += \
    client.h \
    client_worker.h \
    commande.h \
    commande_worker.h \
    cuisine.h \
    database.h \
    employe.h \
    ingredients.h \
    ingredients_worker.h \
    location.h \
    materiel_commun.h \
    materiel_cuisine.h \
    materiel_worker.h \
    materielcuisine_worker.h \
    menu.h \
    plat.h \
    plat_worker.h \
    restauranttable.h \
    restauranttable_worker.h \
    salle_restauration.h \
    tableau_bord.h

FORMS += \
    cuisine.ui \
    salle_restauration.ui \
    tableau_bord.ui

RESOURCES  += images.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
