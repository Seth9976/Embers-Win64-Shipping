// 函数: sub_14193c5d0
// 地址: 0x14193c5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t rax = *(arg1 + 0x1c)
int32_t rax_1

if (data_143efbce0 == 0)
    if (rax == 0x404)
        rax_1.b = 1
    else if (rax == 0x405)
        rax_1.b = 2
    else
        rax_1.b = 0
else if (rax == 0x404)
    rax_1.b = 2
else if (rax == 0x405)
    rax_1.b = 1
else
    rax_1.b = 0

*(arg2 + 1) = rax_1.b
int32_t rcx = *(arg1 + 0x18)

if (rcx == 0x1b00)
    *arg2 = 0
    *(arg2 + 4) = *(arg1 + 0x20)
    arg2[1].d = *(arg1 + 0x24)
    int32_t rax_7
    rax_7.b = 1
    return rax_7

if (rcx == 0x1b01)
    *arg2 = 1
    *(arg2 + 4) = *(arg1 + 0x20)
    arg2[1].d = *(arg1 + 0x24)
    int32_t rax_5
    rax_5.b = 1
    return rax_5

*arg2 = 2
*(arg2 + 4) = *(arg1 + 0x20)
arg2[1].d = *(arg1 + 0x24)
int32_t rax_3
rax_3.b = 1
return rax_3
