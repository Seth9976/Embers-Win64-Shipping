// 函数: sub_140d18db0
// 地址: 0x140d18db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg4 == 0
        || ((*(arg1 + 0x10) + 0xf) & 0xfffffffffffffff0) + sx.q(arg2) u> sx.q(*arg1) + *(arg1 + 8))
    rax.b = 0
else
    rax.b = 1

if (arg4 == 0)
    if (rax.b == 0)
        return sub_140a82f30(sx.q((arg2 + 0xf) & 0xfffffff0), 0) __tailcall
else if (rax.b == 0)
    *(arg1 + 0x18) = ((*(arg1 + 0x18) + 0xf) & 0xfffffffffffffff0) + sx.q(arg2)
    return sub_140a82f30(sx.q((arg2 + 0xf) & 0xfffffff0), 0) __tailcall

int64_t result = (*(arg1 + 0x10) + 0xf) & 0xfffffffffffffff0
int64_t rdx_2 = sx.q(arg2) + result
*(arg1 + 0x10) = rdx_2

if (*(arg1 + 0x18) u>= rdx_2)
    return result

*(arg1 + 0x18) = rdx_2
return result
