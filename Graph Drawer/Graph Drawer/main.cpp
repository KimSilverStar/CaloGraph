//############ Graph Drawer ############//
//Leader	2017203090	Seyoung Kim		//
//Member	2017203005	Eunseong Kim	//
//Member	2017203033	Jaeha Lee		//
//Member	2017203061	Chanhyeong Lim	//
//######################################//

#include "StdAfx.h"
#include <math.h>
#include <stdio.h>
#include "pGNUPlotU.h"

int main(void)
{
	// CwpGnuplot�� �����ڿ��� ���ڷ� wgnuplot.exe�� ��ü ��θ� �Ѱ��ش�.
	// Gnuplot�� ��ġ�� ��ο� ���� �� ���� �ٲ�� �Ѵ�.
	CpGnuplotU plot(_T("C:\\Program Files\\gnuplot\\bin\\wgnuplot.exe"));

	FILE* fp = _wfopen(_T("C:\\temp\\1.dat"), _T("wt"));
	if (fp) {
		for (double x = -5; x < 5; x += 0.3) {
			for (double y = -5; y < 5; y += 0.3) {
				fwprintf(fp, _T("%f, %f, %f \n"), x, y, sin(x * x + y * y) / (x * x + y * y));
			}
			fwprintf(fp, _T("\n"));
		}
		fclose(fp);
	}

	plot.cmd(_T("splot 'C:\\temp\\1.dat' with line"));

	getchar();
}