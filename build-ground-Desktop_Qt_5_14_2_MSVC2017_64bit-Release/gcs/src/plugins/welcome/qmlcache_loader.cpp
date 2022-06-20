#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,1,0,0,0,1,0,0,0,
8,0,2,0,0,0,1,0,0,0,2,0,0,0,28,0,
2,0,0,0,7,0,0,0,3,0,0,0,226,0,0,0,
0,0,1,0,0,0,0,0,0,0,132,0,0,0,0,0,
1,0,0,0,0,0,0,0,40,0,0,0,0,0,1,0,
0,0,0,0,0,1,4,0,0,0,0,0,1,0,0,0,
0,0,0,0,194,0,0,0,0,0,1,0,0,0,0,0,
0,0,84,0,0,0,0,0,1,0,0,0,0,0,0,0,
154,0,0,0,0,0,1,0,0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,7,13,194,166,213,0,119,0,
101,0,108,0,99,0,111,0,109,0,101,0,3,0,0,120,
60,0,113,0,109,0,108,0,19,8,188,11,220,0,83,0,
99,0,114,0,111,0,108,0,108,0,68,0,101,0,99,0,
111,0,114,0,97,0,116,0,111,0,114,0,46,0,113,0,
109,0,108,0,21,14,136,106,220,0,87,0,101,0,108,0,
99,0,111,0,109,0,101,0,80,0,97,0,103,0,101,0,
66,0,117,0,116,0,116,0,111,0,110,0,46,0,113,0,
109,0,108,0,8,8,1,90,92,0,109,0,97,0,105,0,
110,0,46,0,113,0,109,0,108,0,17,15,182,57,28,0,
65,0,99,0,116,0,105,0,118,0,105,0,116,0,121,0,
80,0,97,0,110,0,101,0,108,0,46,0,113,0,109,0,
108,0,13,13,34,93,252,0,78,0,101,0,119,0,115,0,
80,0,97,0,110,0,101,0,108,0,46,0,113,0,109,0,
108,0,14,5,230,78,188,0,83,0,105,0,116,0,101,0,
115,0,80,0,97,0,110,0,101,0,108,0,46,0,113,0,
109,0,108,0,18,12,49,184,28,0,67,0,111,0,109,0,
109,0,117,0,110,0,105,0,116,0,121,0,80,0,97,0,
110,0,101,0,108,0,46,0,113,0,109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _welcome_qml_CommunityPanel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _welcome_qml_SitesPanel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _welcome_qml_NewsPanel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _welcome_qml_ActivityPanel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _welcome_qml_main_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _welcome_qml_WelcomePageButton_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _welcome_qml_ScrollDecorator_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/welcome/qml/CommunityPanel.qml"), &QmlCacheGeneratedCode::_welcome_qml_CommunityPanel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/welcome/qml/SitesPanel.qml"), &QmlCacheGeneratedCode::_welcome_qml_SitesPanel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/welcome/qml/NewsPanel.qml"), &QmlCacheGeneratedCode::_welcome_qml_NewsPanel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/welcome/qml/ActivityPanel.qml"), &QmlCacheGeneratedCode::_welcome_qml_ActivityPanel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/welcome/qml/main.qml"), &QmlCacheGeneratedCode::_welcome_qml_main_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/welcome/qml/WelcomePageButton.qml"), &QmlCacheGeneratedCode::_welcome_qml_WelcomePageButton_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/welcome/qml/ScrollDecorator.qml"), &QmlCacheGeneratedCode::_welcome_qml_ScrollDecorator_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_welcome)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(welcome_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_welcome))
int QT_MANGLE_NAMESPACE(qCleanupResources_welcome)() {
    Q_CLEANUP_RESOURCE(welcome_qmlcache);
    return 1;
}
