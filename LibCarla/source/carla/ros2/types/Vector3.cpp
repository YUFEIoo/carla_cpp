﻿// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Vector3.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Vector3.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define geometry_msgs_msg_Vector3_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_Vector3_max_key_cdr_typesize 0ULL;
// Vector3类的默认构造函数，用于创建Vector3类型对象时进行初始化
geometry_msgs::msg::Vector3::Vector3()
{
    // 初始化成员变量m_x为0.0，m_x用于表示三维向量在x轴方向上的分量
    m_x = 0.0;
    // 初始化成员变量m_y为0.0，m_y用于表示三维向量在y轴方向上的分量
    m_y = 0.0;
    // 初始化成员变量m_z为0.0，m_z用于表示三维向量在z轴方向上的分量
    m_z = 0.0;
}
// Vector3类的析构函数
geometry_msgs::msg::Vector3::~Vector3()
{
}
// Vector3类的拷贝构造函数
geometry_msgs::msg::Vector3::Vector3(
        const Vector3& x)
{
    m_x = x.m_x;// 将传入对象x的成员变量m_x的值赋给当前正在创建对象的m_x成员变量
    m_y = x.m_y;// 将传入对象x的成员变量m_y的值赋给当前正在创建对象的m_y成员变量
    m_z = x.m_z;// 将传入对象x的成员变量m_z的值赋给当前正在创建对象的m_z成员变量
}
// Vector3类的移动拷贝构造函数
geometry_msgs::msg::Vector3::Vector3(
        Vector3&& x) noexcept
{
    m_x = x.m_x;// 将传入右值对象x的成员变量m_x的值赋给当前对象的m_x成员变量
    m_y = x.m_y;// 将传入右值对象x的成员变量m_y的值赋给当前对象的m_y成员变量
    m_z = x.m_z;// 将传入右值对象x的成员变量m_z的值赋给当前对象的m_z成员变量
}
// Vector3类的普通赋值运算符重载函数
geometry_msgs::msg::Vector3& geometry_msgs::msg::Vector3::operator =(
        const Vector3& x)
{

    m_x = x.m_x;// 将当前对象的成员变量m_x赋值为传入对象x的m_x成员变量的值
    m_y = x.m_y;// 将当前对象的成员变量m_y赋值为传入对象x的m_y成员变量的值
    m_z = x.m_z;// 将当前对象的成员变量m_z赋值为传入对象x的m_z成员变量的值
    // 返回当前对象的引用，以便支持连续赋值
    return *this;
}
// Vector3类的移动赋值运算符重载函数
geometry_msgs::msg::Vector3& geometry_msgs::msg::Vector3::operator =(
        Vector3&& x) noexcept
{
    m_x = x.m_x;// 将当前对象的成员变量m_x赋值为传入右值对象x的m_x成员变量的值
    m_y = x.m_y;// 将当前对象的成员变量m_y赋值为传入右值对象x的m_y成员变量的值
    m_z = x.m_z;// 将当前对象的成员变量m_z赋值为传入右值对象x的m_z成员变量的值

    return *this;// 返回当前对象的引用，用于连续赋值操作
}
// Vector3类的相等运算符重载函数
bool geometry_msgs::msg::Vector3::operator ==(
        const Vector3& x) const
{// 通过比较三个成员变量m_x、m_y、m_z分别是否相等，来确定两个Vector3对象是否相等
    return (m_x == x.m_x && m_y == x.m_y && m_z == x.m_z);
}
// Vector3类的不等运算符重载函数
bool geometry_msgs::msg::Vector3::operator !=(
        const Vector3& x) const
{
    return !(*this == x);
}
// 获取Vector3类型对象在Cdr序列化时的最大尺寸的函数
size_t geometry_msgs::msg::Vector3::getMaxCdrSerializedSize(
        size_t current_alignment)
{// 将current_alignment参数转换为空操作，可能函数接口设计需要接收但实际未用于计算
    static_cast<void>(current_alignment);
    // 直接返回之前定义的表示最大Cdr序列化类型尺寸的宏的值
    return geometry_msgs_msg_Vector3_max_cdr_typesize;
}
// 获取Vector3类型对象实际Cdr序列化尺寸的函数
size_t geometry_msgs::msg::Vector3::getCdrSerializedSize(
        const geometry_msgs::msg::Vector3& data,
        size_t current_alignment)
{// 将传入的data参数转换为空操作，表明未利用对象内容进行尺寸计算相关逻辑
    (void)data;
    // 记录初始的对齐方式
    size_t initial_alignment = current_alignment;
    // 根据fastcdr库中Cdr类的alignment函数对当前对齐方式进行处理，每次加上8字节
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    // 返回调整后的对齐值与初始对齐值的差值，即计算出的序列化尺寸大小
    return current_alignment - initial_alignment;
}
// Vector3类的序列化函数，将对象的内容按照Cdr序列化格式进行存储或传输等操作
void geometry_msgs::msg::Vector3::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    // 使用fastcdr库中重载的<<运算符，将成员变量m_x序列化到scdr对象中
    scdr << m_x;
    // 使用fastcdr库中重载的<<运算符，将成员变量m_y序列化到scdr对象中
    scdr << m_y;
    // 使用fastcdr库中重载的<<运算符，将成员变量m_z序列化到scdr对象中
    scdr << m_z;
}
// Vector3类的反序列化函数，用于将序列化的数据恢复为Vector3类型的对象状态
void geometry_msgs::msg::Vector3::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    // 使用fastcdr库中重载的>>运算符，从dcdr对象中读取数据并赋值给成员变量m_x
    dcdr >> m_x;
    // 使用fastcdr库中重载的>>运算符，从dcdr对象中读取数据并赋值给成员变量m_y
    dcdr >> m_y;
    // 使用fastcdr库中重载的>>运算符，从dcdr对象中读取数据并赋值给成员变量m_z
    dcdr >> m_z;
}


 // 用于设置Vector3类成员变量m_x值的函数
void geometry_msgs::msg::Vector3::x(
        double _x)
{
    // 将传入的新值_x赋给成员变量m_x
    m_x = _x;
}

 // 用于获取Vector3类成员变量m_x值的函数
double geometry_msgs::msg::Vector3::x() const
{
    return m_x;
}

// 用于获取Vector3类成员变量m_x的引用的函数
double& geometry_msgs::msg::Vector3::x()
{
    return m_x;
}

// 用于设置Vector3类成员变量m_y值的函数
void geometry_msgs::msg::Vector3::y(
        double _y)
{
    m_y = _y;
}

// 用于获取Vector3类成员变量m_y值的函数
double geometry_msgs::msg::Vector3::y() const
{
    return m_y;
}

// 用于获取Vector3类成员变量m_y的引用的函数
double& geometry_msgs::msg::Vector3::y()
{
    return m_y;
}

// 用于设置Vector3类成员变量m_z值的函数
void geometry_msgs::msg::Vector3::z(
        double _z)
{
    m_z = _z;// 将传入的新值_z赋给成员变量m_z
}

// 用于获取Vector3类成员变量m_z值的函数
double geometry_msgs::msg::Vector3::z() const
{
    return m_z;
}

// 用于获取Vector3类成员变量m_z的引用的函数
double& geometry_msgs::msg::Vector3::z()
{
    return m_z;
}
// 获取Vector3类型对象键Cdr序列化时的最大尺寸的函数
size_t geometry_msgs::msg::Vector3::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{ // 将current_alignment参数转换为空操作，可能函数接口设计需要接收但实际未用于计算
    static_cast<void>(current_alignment);
    // 直接返回之前定义的表示最大键Cdr序列化尺寸的宏的值
    return geometry_msgs_msg_Vector3_max_key_cdr_typesize;
}
// 判断Vector3类型对象是否定义了键的函数
bool geometry_msgs::msg::Vector3::isKeyDefined()
{
    return false;
}
// 用于对Vector3类型对象的键进行序列化的函数
void geometry_msgs::msg::Vector3::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{// 将传入的scdr参数转换为空操作，表明未进行实际的键序列化操作
    (void) scdr;
}
