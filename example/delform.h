#ifndef DELFORM_H
#define DELFORM_H

#include <QtGui/QWidget>

#include "../delaunay.h"

namespace Ui {
    class DelForm;
}

#define MAX_POINTS		512

class DelForm : public QWidget {
    Q_OBJECT
    Q_DISABLE_COPY(DelForm)
public:
    explicit DelForm(QWidget *parent = 0);
    virtual ~DelForm();

protected:
    virtual void changeEvent(QEvent *e);
	virtual void mousePressEvent(QMouseEvent *e);
	virtual void paintEvent(QPaintEvent *e);

private:
    Ui::DelForm *m_ui;
	//point2d_t		_points[MAX_POINTS];
	struct point2d {
		float	x, y;
	};
	point2d		points[MAX_POINTS];
	size_t		num_points;
};

#endif // DELFORM_H
