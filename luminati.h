#ifndef LUMINATI_H
#define LUMINATI_H

#include <QtCore/QObject>

#ifdef _WIN32
#include "lum_sdk.h"
#endif

class Luminati : public QObject
{
	Q_OBJECT
	public:
		explicit Luminati(QObject *parent = 0);
		virtual ~Luminati() {};
		public slots :
		int getChoice(void);
		void askForChoice(void);
		void clearChoice(void);
};
#endif
