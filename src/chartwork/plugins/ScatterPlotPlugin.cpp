#include <chartwork/plugins/ScatterPlotPlugin.h>

#include <QtPlugin>

#include <chartwork/ScatterPlot.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// ScatterPlotPlugin
//
////////////////////////////////////////////////////////////////////////////////////////////////////

ScatterPlotPlugin::ScatterPlotPlugin(QObject *parent)
:	QObject(parent)
{
	m_isInitialized = false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void ScatterPlotPlugin::initialize(QDesignerFormEditorInterface *)
{
	if (m_isInitialized)
		return;

	m_isInitialized = true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

bool ScatterPlotPlugin::isInitialized() const
{
	return m_isInitialized;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

QWidget *ScatterPlotPlugin::createWidget(QWidget *parent)
{
	return new chartwork::ScatterPlot(parent);
}

////////////////////////////////////////////////////////////////////////////////////////////////////

QString ScatterPlotPlugin::name() const
{
	return "chartwork::ScatterPlot";
}

////////////////////////////////////////////////////////////////////////////////////////////////////

QString ScatterPlotPlugin::group() const
{
	return "Chartwork";
}

////////////////////////////////////////////////////////////////////////////////////////////////////

QIcon ScatterPlotPlugin::icon() const
{
	return QIcon("://icons/icon-scatter-plot.png");
}

////////////////////////////////////////////////////////////////////////////////////////////////////

QString ScatterPlotPlugin::toolTip() const
{
	return "";
}

////////////////////////////////////////////////////////////////////////////////////////////////////

QString ScatterPlotPlugin::whatsThis() const
{
	return "Scatter Plot";
}

////////////////////////////////////////////////////////////////////////////////////////////////////

bool ScatterPlotPlugin::isContainer() const
{
	return false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

QString ScatterPlotPlugin::domXml() const
{
	return
		("<ui language=\"c++\" displayname=\"ScatterPlot\">\
			<widget class=\"chartwork::ScatterPlot\" name=\"scatterPlot\">\
				<property name=\"geometry\">\
					<rect>\
						<x>0</x>\
						<y>0</y>\
						<width>400</width>\
						<height>300</height>\
					</rect>\
				</property>\
			</widget>\
		</ui>");
}

////////////////////////////////////////////////////////////////////////////////////////////////////

QString	ScatterPlotPlugin::includeFile() const
{
	return QLatin1String("<chartwork/ScatterPlot.h>");
}
