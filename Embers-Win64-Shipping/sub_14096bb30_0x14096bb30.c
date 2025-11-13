// 函数: sub_14096bb30
// 地址: 0x14096bb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x342) != 0)
    return sub_14096aef0(arg1) __tailcall

char rax = arg1[0x68].b
int64_t r9 = *arg1

if (rax == 1)
    int64_t rax_1 = (*(r9 + 0x710))(arg2, &arg1[0x5c], &arg1[0x5e], r9)
    *(arg1 + 0x341) = 1
    return rax_1

if (rax == 2)
    int64_t rax_2 = (*(r9 + 0x718))(arg1, &arg1[0x5c], &arg1[0x5e], r9)
    *(arg1 + 0x341) = 1
    return rax_2

if (rax != 6)
    jump(*(r9 + 0x640))

int64_t rax_3 = (*(r9 + 0x720))(arg1, &arg1[0x5c], &arg1[0x5e])
*(arg1 + 0x341) = 1
return rax_3
