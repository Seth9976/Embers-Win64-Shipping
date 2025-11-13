// 函数: sub_14096bbe0
// 地址: 0x14096bbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x36a) != 0)
    return sub_14096af60(arg1) __tailcall

int64_t rax = *arg1

if (arg1[0x6d].b != 1)
    jump(*(rax + 0x640))

int64_t result = (*(rax + 0x6d8))(arg2, &arg1[0x5c], &arg1[0x5e])
*(arg1 + 0x369) = 1
return result
