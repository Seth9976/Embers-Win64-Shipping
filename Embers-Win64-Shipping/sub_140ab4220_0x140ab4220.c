// 函数: sub_140ab4220
// 地址: 0x140ab4220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a54510(arg2, u"Default")

if (rax == 0)
    *arg1 = rax
    rax.b = 1
    return rax

if (sub_140a54510(arg2, u"Short") == 0)
    *arg1 = 1
    int32_t rax_1
    rax_1.b = 1
    return rax_1

if (sub_140a54510(arg2, u"Medium") == 0)
    *arg1 = 2
    int32_t rax_2
    rax_2.b = 1
    return rax_2

if (sub_140a54510(arg2, u"Long") == 0)
    *arg1 = 3
    int32_t rax_3
    rax_3.b = 1
    return rax_3

int32_t rax_4

if (sub_140a54510(arg2, u"Full") != 0)
    rax_4.b = 0
    return rax_4

*arg1 = 4
rax_4.b = 1
return rax_4
