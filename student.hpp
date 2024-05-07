//
// Created by WhitePaper on 24-5-7.
//

#ifndef YUME_STUDENT_HPP
#define YUME_STUDENT_HPP

#include <cstdint>
#include <string>
#include <map>
#include <utility>

struct Student {
    std::string name, class_name, gender; // 姓名 班级 性别
    std::map<std::string, double> scores; // 得分情况
    int64_t no{}; // 学号

    Student(const char * name, const char * class_name, const char * gender, int64_t no);

    double& operator[] (const char *subject);

    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        return os << "姓名: " << student.name << " | 班级: " << student.class_name << " | 性别: " << student.gender << " | 学号: " << student.no;
    }
};

// 构造学生对象
Student::Student(const char * name, const char * class_name, const char * gender, int64_t no) {
    this->name = name;
    this->class_name = class_name;
    this->gender = gender;
    this->no = no;
}

// 添加/查询成绩
double& Student::operator[](const char *subject) {
    if (!this->scores.count(subject)) {
        this->scores.insert({subject, 0});
    }
    return this->scores[subject];
}

#endif //YUME_STUDENT_HPP
