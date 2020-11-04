#-------------------------------------------------
#
# Project created by QtCreator 2017-10-02T15:01:03
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = infinium-gui
TEMPLATE = app

!win32: QMAKE_CXXFLAGS += -std=c++14 -Wall -Wextra -pedantic
macx: QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.11
macx: ICON = images/infinium.icns
win32: RC_ICONS = images/infinium.ico
win32: VERSION = 3.19.4.18

#QMAKE_CXXFLAGS += -fno-omit-frame-pointer -fsanitize=address,undefined
#LIBS += -lasan -lubsan

CONFIG += c++14 strict_c++ no-opengl

DESTDIR = $$PWD/../bin

# copy walletd adjacent to Infinium-gui binary on all 3 platforms
win32 {
WALLETD_BY_SRC_PATH = $$shell_path($$clean_path("$$PWD/../../Infinium/bin/walletd.exe"))
WALLETD2_BY_SRC_PATH = $$shell_path($$clean_path("$$PWD/../../Infinium/bin/walletd.pdb"))
BYTECOIND_BY_SRC_PATH = $$shell_path($$clean_path("$$PWD/../../Infinium/bin/infiniumd.exe"))
BYTECOIND2_BY_SRC_PATH = $$shell_path($$clean_path("$$PWD/../../Infinium/bin/infiniumd.pdb"))
LIBUSB_BY_SRC_PATH = $$shell_path($$clean_path("$$PWD/../../Infinium/bin/libusb-1.0.dll"))
Debug:BY_DST_PATH = $$shell_path($$clean_path("$$DESTDIR"))
Release:BY_DST_PATH = $$shell_path($$clean_path("$$DESTDIR"))
copywalletd.commands = $(COPY_FILE) $${WALLETD_BY_SRC_PATH} $${BY_DST_PATH}
# copywalletd2.commands = $(COPY_FILE) $${WALLETD2_BY_SRC_PATH} $${BY_DST_PATH}
copybytecoind.commands = $(COPY_FILE) $${BYTECOIND_BY_SRC_PATH} $${BY_DST_PATH}
# copybytecoind2.commands = $(COPY_FILE) $${BYTECOIND2_BY_SRC_PATH} $${BY_DST_PATH}
#copylibusb.commands = $(COPY_FILE) $${LIBUSB_BY_SRC_PATH} $${BY_DST_PATH}
#first.depends = $(first) copywalletd copywalletd2 copybytecoind copybytecoind2 copylibusb
#QMAKE_EXTRA_TARGETS += first copywalletd copywalletd2 copybytecoind copybytecoind2 copylibusb
# don't include libusb in first version
first.depends = $(first) copywalletd copywalletd2 copybytecoind copybytecoind2
QMAKE_EXTRA_TARGETS += first copywalletd copywalletd2 copybytecoind copybytecoind2
}else:macx {
copywalletd.commands += $(COPY_FILE) $$PWD/../../Infinium/bin/walletd $$DESTDIR/infinium-gui.app/Contents/MacOS
copybytecoind.commands += $(COPY_FILE) $$PWD/../../Infinium/bin/infiniumd $$DESTDIR/infinium-gui.app/Contents/MacOS
first.depends = copywalletd copybytecoind
copywalletd.depends = $(TARGET)
copybytecoind.depends = $(TARGET)
QMAKE_EXTRA_TARGETS += first copywalletd copybytecoind
}else {
copywalletd.commands += $(COPY_FILE) $$PWD/../../Infinium/bin/walletd $$DESTDIR
copybytecoind.commands += $(COPY_FILE) $$PWD/../../Infinium/bin/infiniumd $$DESTDIR
first.depends = $(first) copywalletd copybytecoind
QMAKE_EXTRA_TARGETS += first copywalletd copybytecoind
}
#export(first.depends)
#export(copywalletd.commands)
#export(copybytecoind.commands)

SOURCES += main.cpp\
    mainwindow.cpp \
    signalhandler.cpp \
    overviewframe.cpp \
    aboutdialog.cpp \
    JsonRpc/JsonRpcClient.cpp \
    JsonRpc/JsonRpcNotification.cpp \
    JsonRpc/JsonRpcObject.cpp \
    JsonRpc/JsonRpcObjectFactory.cpp \
    JsonRpc/JsonRpcRequest.cpp \
    JsonRpc/JsonRpcResponse.cpp \
    application.cpp \
    logger.cpp \
    okbutton.cpp \
    statusbar.cpp \
    windoweditemmodel.cpp \
    walletmodel.cpp \
    sendframe.cpp \
    transferframe.cpp \
    resizablescrollarea.cpp \
    common.cpp \
    connectionoptionsframe.cpp \
    settings.cpp \
    Miner/Miner.cpp \
    Miner/StratumClient.cpp \
    Miner/Worker.cpp \
    MinerDelegate.cpp \
    MinerModel.cpp \
    MiningFrame.cpp \
    MiningManager.cpp \
    connectselectiondialog.cpp \
    walletd.cpp \
    rpcapi.cpp \
    progressbar.cpp \
    addressbookframe.cpp \
    addressbookmodel.cpp \
    addressbooksortedmodel.cpp \
    newaddressdialog.cpp \
    addressbookdelegate.cpp \
    addressbookmanager.cpp \
    balanceoverviewframe.cpp \
    miningoverviewframe.cpp \
    crashdialog.cpp \
    changepassworddialog.cpp \
    sendconfirmationdialog.cpp \
    addressbookdialog.cpp \
    popup.cpp \
    logframe.cpp \
    askpassworddialog.cpp \
    importkeydialog.cpp \
    questiondialog.cpp \
    PoolTreeView.cpp \
    createproofdialog.cpp \
    checkproofdialog.cpp \
    walletdparamsdialog.cpp \
    exportkeydialog.cpp \
    filedownloader.cpp \
    version.cpp \
    mnemonicdialog.cpp

HEADERS  += mainwindow.h \
    signalhandler.h \
    overviewframe.h \
    aboutdialog.h \
    JsonRpc/JsonRpcClient.h \
    JsonRpc/JsonRpcNotification.h \
    JsonRpc/JsonRpcObject.h \
    JsonRpc/JsonRpcObjectFactory.h \
    JsonRpc/JsonRpcRequest.h \
    JsonRpc/JsonRpcResponse.h \
    application.h \
    logger.h \
    okbutton.h \
    statusbar.h \
    windoweditemmodel.h \
    walletmodel.h \
    sendframe.h \
    transferframe.h \
    resizablescrollarea.h \
    common.h \
    connectionoptionsframe.h \
    settings.h \
    Miner/Miner.h \
    Miner/StratumClient.h \
    Miner/Worker.h \
    MinerDelegate.h \
    MinerModel.h \
    MiningFrame.h \
    MiningManager.h \
    IMinerWorker.h \
    IMiningManager.h \
    IPoolClient.h \
    IPoolMiner.h \
    connectselectiondialog.h \
    walletd.h \
    rpcapi.h \
    progressbar.h \
    addressbookframe.h \
    addressbookmodel.h \
    addressbooksortedmodel.h \
    newaddressdialog.h \
    addressbookdelegate.h \
    addressbookmanager.h \
    balanceoverviewframe.h \
    miningoverviewframe.h \
    crashdialog.h \
    changepassworddialog.h \
    sendconfirmationdialog.h \
    addressbookdialog.h \
    popup.h \
    logframe.h \
    askpassworddialog.h \
    importkeydialog.h \
    questiondialog.h \
    PoolTreeView.h \
    createproofdialog.h \
    checkproofdialog.h \
    walletdparamsdialog.h \
    exportkeydialog.h \
    version.h \
    filedownloader.h \
    mnemonicdialog.h

FORMS    += mainwindow.ui \
    overviewframe.ui \
    aboutdialog.ui \
    sendframe.ui \
    transferframe.ui \
    connectionoptionsframe.ui \
    optionsdialog.ui \
    MiningFrame.ui \
    connectselectiondialog.ui \
    addressbookframe.ui \
    newaddressdialog.ui \
    balanceoverviewframe.ui \
    miningoverviewframe.ui \
    crashdialog.ui \
    changepassworddialog.ui \
    addressbookdialog.ui \
    logframe.ui \
    askpassworddialog.ui \
    importkeydialog.ui \
    questiondialog.ui \
    createproofdialog.ui \
    checkproofdialog.ui \
    walletdparamsdialog.ui \
    exportkeydialog.ui \
    mnemonicdialog.ui

RESOURCES += \
    resources.qrc \


unix|win32: LIBS += -L$$PWD/../../Infinium/libs/ -linfinium-crypto

INCLUDEPATH += $$PWD/../../Infinium/src
DEPENDPATH += $$PWD/../../Infinium/src

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../Infinium/libs/infinium-crypto.lib
else:unix|win32-g++: PRE_TARGETDEPS += $$PWD/../../Infinium/libs/libinfinium-crypto.a

# to add necessary dependencies,
# 1. delete built bytecoin-gui.app to delete old dependencies (dylibs and frameworks)
# 2. build
# 3. run /Users/user/Qt/5.9.2/clang_64/bin/macdeployqt bytecoin-gui.app
# P.S. in 3, change path accroding to your Qt installation location
