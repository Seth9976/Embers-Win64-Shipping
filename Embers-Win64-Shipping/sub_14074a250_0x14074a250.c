// 函数: sub_14074a250
// 地址: 0x14074a250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg3)
int32_t rax = (rdi + rsi).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1406105e0(arg1)

return memcpy(*arg1 + (rdi << 2), arg2, (rsi << 2).d) __tailcall
