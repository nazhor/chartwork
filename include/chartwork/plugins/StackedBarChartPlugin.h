#ifndef __PLUGINS__STACKED_BAR_CHART_PLUGIN_H
#define __PLUGINS__STACKED_BAR_CHART_PLUGIN_H

#include <QtUiPlugin/QDesignerCustomWidgetInterface>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// StackedBarChartPlugin
//
////////////////////////////////////////////////////////////////////////////////////////////////////

class StackedBarChartPlugin : public QObject, public QDesignerCustomWidgetInterface
{
	Q_OBJECT
	Q_INTERFACES(QDesignerCustomWidgetInterface)

	public:
		StackedBarChartPlugin(QObject *parent = nullptr);

		bool isContainer() const;
		bool isInitialized() const;
		QIcon icon() const;
		QString domXml() const;
		QString group() const;
		QString includeFile() const;
		QString name() const;
		QString toolTip() const;
		QString whatsThis() const;
		QWidget *createWidget(QWidget *parent);
		void initialize(QDesignerFormEditorInterface *core);

	private:
		bool m_isInitialized;
};

#endif
