/***************************************************************************
**                                                                        **
**  QCustomPlot, an easy to use, modern plotting widget for Qt            **
**  Copyright (C) 2011-2021 Emanuel Eichhammer                            **
**                                                                        **
**  This program is free software: you can redistribute it and/or modify  **
**  it under the terms of the GNU General Public License as published by  **
**  the Free Software Foundation, either version 3 of the License, or     **
**  (at your option) any later version.                                   **
**                                                                        **
**  This program is distributed in the hope that it will be useful,       **
**  but WITHOUT ANY WARRANTY; without even the implied warranty of        **
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         **
**  GNU General Public License for more details.                          **
**                                                                        **
**  You should have received a copy of the GNU General Public License     **
**  along with this program.  If not, see http://www.gnu.org/licenses/.   **
**                                                                        **
****************************************************************************
**           Author: Emanuel Eichhammer                                   **
**  Website/Contact: http://www.qcustomplot.com/                          **
**             Date: 29.03.21                                             **
**          Version: 2.1.0                                                **
****************************************************************************/

#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
    QApplication::setGraphicsSystem("raster");
#endif
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

/*
//QVector<double> sx_vec,xAxis_vec 存放数据的容器
//m_chartPoint_counter  计数器  一直增加 来一条数据增加一下 控制x轴前进 实现动态效果

//这时容器里面还没10个点 所有一直向里面存
if(m_chartPoint_counter < 10)
{
    sx_vec.append(sx_);
    xAxis_vec.append(m_chartPoint_counter);
    //设置范围正好 能显示当前点
    sx_plot->xAxis->setRange(0,xAxis_vec.at(xAxis_vec.size()-1));
}
else
{
//容器数据现在是正好10个  把第一个出栈  把第11个入栈  正好还是10个数据
sx_vec.removeFirst();
xAxis_vec.removeFirst();

//入栈
xAxis_vec.append(m_chartPoint_counter);
sx_vec.append(sx_);

//设置范围正好 能显示当前点
sx_plot->xAxis->setRange(xAxis_vec.at(0),xAxis_vec.at(
                             xAxis_vec.size()-1));
}
//设置Y轴坐标系 自动缩放以正常显示所有的数据
sx_plot->yAxis->rescale(true);
//设置数据
sx_plot->graph()->setData(xAxis_vec,sx_vec);
//重绘制
sx_plot->replot();

//这里必须要一直增加 如果增加到10就不增加 效果就是第10个点一直变化 不会出现动态效果
m_chartPoint_counter++;

*/
