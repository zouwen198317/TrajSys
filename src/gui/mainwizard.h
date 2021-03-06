#ifndef MAINWIZARD_H
#define MAINWIZARD_H

#include <QtGui>

#include "sourcespage.h"
#include "trackerspage.h"
#include "appspage.h"

class MainWizard : public QWizard
{
    Q_OBJECT

public:
    explicit MainWizard(QWidget *parent = 0);

    void accept();

    inline void getSources(QStringList &sources) {
        sourcesPage->getSources(sources);
    }
    inline void getTrackers(QStringList &trackersTypes, QStringList &trackersParams, QVector<bool> &trackersNeedDisplay) {
        trackersPage->getTrackers(trackersTypes, trackersParams, trackersNeedDisplay);
    }
    inline void getApps(QStringList &appsTypes, QStringList &appsParams, QVector<bool> &appsNeedDisplay) {
        appsPage->getApps(appsTypes, appsParams, appsNeedDisplay);
    }

private:
    SourcesPage *sourcesPage;
    TrackersPage *trackersPage;
    AppsPage *appsPage;
};

#endif // MAINWIZARD_H
