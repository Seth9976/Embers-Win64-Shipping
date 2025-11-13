// 函数: sub_1420c3690
// 地址: 0x1420c3690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x98)
int32_t r9_1 = rbx & 8

if (arg3 == neg.d(sbb.d(arg1.d, arg1.d, r9_1 != 0)) - 1)
    *arg2 = data_14399f638
    return arg2

int32_t r10 = 1
int32_t rax_4 = 1

if (r9_1 == 0)
    rax_4 = -1

if (arg3 == rax_4)
    *arg2 = data_14399f63c
    return arg2

int32_t rcx_3 = 2
int32_t rax_7 = 2

if (r9_1 == 0)
    rax_7 = -1

if (arg3 == rax_7)
    *arg2 = data_14399f640
    return arg2

int32_t rax_11 = rbx & 0x11
int32_t r11

if (rax_11 != 0x10)
    r11 = -1
    r9_1 = rbx & 8
else if (r9_1 == 0)
    r11 = 0
else
    r11 = rax_11 - 0xd

if (arg3 == r11)
    *arg2 = 0xffff8080
    return arg2

if (rax_11 != 0x10)
    r10 = -1
else if (r9_1 != 0)
    r10 = 4

if (arg3 == r10)
    *arg2 = 0xff80ff80
    return arg2

if (rax_11 != 0x10)
    rcx_3 = -1
else if (r9_1 != 0)
    rcx_3 = 5

if (arg3 != rcx_3)
    *arg2 = data_14399f634
    return arg2

*arg2 = 0xff8080ff
return arg2
