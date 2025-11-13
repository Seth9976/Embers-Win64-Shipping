// 函数: sub_142bbb300
// 地址: 0x142bbb300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_45 = *(arg1 + 4)

if (arg3 == 1)
    *arg2 = rax_45
    return rax_45

if (arg3 == 2)
    *arg2 = rax_45 + *(arg1 + 0xc)
    int32_t rax_2 = *(arg1 + 8) + *(arg1 + 0xc)
    arg2[1] = rax_2
    return rax_2

if (arg3 == 3)
    *arg2 = rax_45 + *(arg1 + 0x14) + *(arg1 + 0xc) + *(arg1 + 0x1c)
    arg2[1] = *(arg1 + 8) + *(arg1 + 0xc) + *(arg1 + 0x1c) + *(arg1 + 0x18)
    int32_t rax_13 = *(arg1 + 0x10) + *(arg1 + 0x14) + *(arg1 + 0x1c) + *(arg1 + 0x18)
    arg2[2] = rax_13
    return rax_13

int32_t rax_20 = rax_45 + *(arg1 + 0x34) + *(arg1 + 0x14) + *(arg1 + 0xc) + *(arg1 + 0x3c)
    + *(arg1 + 0x1c) + *(arg1 + 0x2c) + *(arg1 + 0x24)
*arg2 = rax_20
int32_t rax_27 = *(arg1 + 8) + *(arg1 + 0x28) + *(arg1 + 0x38) + *(arg1 + 0xc) + *(arg1 + 0x3c)
    + *(arg1 + 0x1c) + *(arg1 + 0x2c)
arg2[1] = rax_27 + *(arg1 + 0x18)
int32_t rax_35 = *(arg1 + 0x10) + *(arg1 + 0x38) + *(arg1 + 0x34) + *(arg1 + 0x30) + *(arg1 + 0x14)
    + *(arg1 + 0x3c) + *(arg1 + 0x1c)
arg2[2] = rax_35 + *(arg1 + 0x18)
int32_t rax_43 = *(arg1 + 0x20) + *(arg1 + 0x28) + *(arg1 + 0x38) + *(arg1 + 0x34) + *(arg1 + 0x30)
    + *(arg1 + 0x3c) + *(arg1 + 0x2c)
int32_t rax_44 = rax_43 + *(arg1 + 0x24)
arg2[3] = rax_44
return rax_44
