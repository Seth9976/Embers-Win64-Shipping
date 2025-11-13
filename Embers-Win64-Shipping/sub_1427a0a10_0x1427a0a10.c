// 函数: sub_1427a0a10
// 地址: 0x1427a0a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x58))
int32_t rax = (rdi + 1).d
*(arg1 + 0x58) = rax

if (rax s> *(arg1 + 0x5c))
    sub_1405a4d70(arg1 + 0x50)

*(*(arg1 + 0x50) + (rdi << 3)) = arg2
return sub_140599090(arg1 + 0x30) __tailcall
