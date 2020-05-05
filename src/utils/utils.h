#ifndef UTILS_H
#define UTILS_H

#include <QObject>
#include <QFileInfo>

class Utils : public QObject
{
    Q_OBJECT

public:
    explicit Utils(QObject *parent = nullptr);

    static QString getFileContent(const QString &path);
    static QPixmap renderSVG(const QString &path, const QSize &size);
    static QString getUserName();
    static QString getPlatform();
    static QString getDistribution();
    static QString getKernelVersion();
    static QString getBootTime();
    static QString getDebianVersion();

    static void getCpuInfo(QString &cpuModel, QString &cpuCore);
    static void getCpuTime(unsigned long long &workTime, unsigned long long &totalTime);
    static void getMemoryInfo(QString &memory, float &percent);
    static void getDiskInfo(QString &disk, float &percent);
    static void getNetworkBandWidth(unsigned long long &receiveBytes, unsigned long long &sendBytes);
    static double getCpuTemperature();
    static QString formatBytes(unsigned long long bytes, bool space = false);
    static quint64 getFileSize(const QString &path);

    static QFileInfoList getDpkgPackages();
    static QFileInfoList getCrashReports();
    static QFileInfoList getAppLogs();
    static QFileInfoList getAppCaches();
    static QString getHomePath();
    static QString sudoExec(const QString &cmd, QStringList args);

    static QList<int> getTaskPIDList();
};

#endif // UTILS_H
