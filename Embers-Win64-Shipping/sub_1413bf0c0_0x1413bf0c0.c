// 函数: sub_1413bf0c0
// 地址: 0x1413bf0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x4000) = 0
*(arg1 + 0x4008) = 0
int32_t rax = arg3 & 0xfffffff0
*(arg1 + 0x400c) = 0x100
*(arg1 + 0x4010) = arg2
*(arg1 + 0x4058) = 0x80000000

do
    *(arg1 + ((zx.q(rax) & 7) << 3) + 0x4018) = 0
    
    if ((rax.b & 7) u>= 7)
        rax |= 8
    else
        rax ^= ((rax + 1) ^ rax) & 7
while (((rax u>> 3).b & 1) == 0)

return arg1
