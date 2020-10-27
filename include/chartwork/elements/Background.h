#ifndef __ELEMENTS__BACKGROUND_H
#define __ELEMENTS__BACKGROUND_H

#include <QRect>
#include <QWidget>

class QPainter;

namespace chartwork
{
namespace elements
{

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Background
//
////////////////////////////////////////////////////////////////////////////////////////////////////

class Background
{
	public:
		Background(QWidget *parent);

		void paint(QPainter &painter);

		void set_background_color(QColor new_color);
		QColor get_background_color() const;

	private:
		QWidget *m_parent;
		QColor background_color_;
};

////////////////////////////////////////////////////////////////////////////////////////////////////

}
}

#endif
