/*Напишите программу, которая принимает строку, состоящую из слов, разделенных пробелами и знаками препинания
 * (, . ; ! ?). Программа должна сформировать новую строку, включающую только те слова, которые начинаются с гласной буквы.
 * Гласные буквы: a, e, i, o, u, y (как в нижнем, так и в верхнем регистрах). В новой строке каждое слово должно начинаться с прописной буквы.*/

#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
