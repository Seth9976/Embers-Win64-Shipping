// 函数: sub_140ab40f0
// 地址: 0x140ab40f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a54510(arg2, u"HalfToEven")

if (rax == 0)
    *arg1 = rax
    rax.b = 1
    return rax

if (sub_140a54510(arg2, u"HalfFromZero") == 0)
    *arg1 = 1
    int32_t rax_1
    rax_1.b = 1
    return rax_1

if (sub_140a54510(arg2, u"HalfToZero") == 0)
    *arg1 = 2
    int32_t rax_2
    rax_2.b = 1
    return rax_2

if (sub_140a54510(arg2, u"FromZero") == 0)
    *arg1 = 3
    int32_t rax_3
    rax_3.b = 1
    return rax_3

if (sub_140a54510(arg2, u"ToZero") == 0)
    *arg1 = 4
    int32_t rax_4
    rax_4.b = 1
    return rax_4

if (sub_140a54510(arg2, u"ToNegativeInfinity") == 0)
    *arg1 = 5
    int32_t rax_5
    rax_5.b = 1
    return rax_5

int32_t rax_6

if (sub_140a54510(arg2, u"ToPositiveInfinity") != 0)
    rax_6.b = 0
    return rax_6

*arg1 = 6
rax_6.b = 1
return rax_6
