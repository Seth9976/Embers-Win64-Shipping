// 函数: sub_1413bf050
// 地址: 0x1413bf050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x300) = 0
*(arg1 + 0x310) = 0
int32_t rax = arg3 & 0xfffffff0
*(arg1 + 0x314) = 0x10
*(arg1 + 0x320) = arg2
*(arg1 + 0x368) = 0x80000000

do
    *(arg1 + ((zx.q(rax) & 7) << 3) + 0x328) = 0
    
    if ((rax.b & 7) u>= 7)
        rax |= 8
    else
        rax ^= ((rax + 1) ^ rax) & 7
while (((rax u>> 3).b & 1) == 0)

return arg1
