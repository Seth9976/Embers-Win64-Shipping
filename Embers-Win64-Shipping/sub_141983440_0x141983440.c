// 函数: sub_141983440
// 地址: 0x141983440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 4
int64_t r9 = sx.q(arg1[1].d)

if (*(arg1 + 0xc) != 0 || r9.d u> 4)
    rax = ((r9 * 3) u>> 3).d + 0x10 + r9.d

if (r9.d s> rax)
    rax = 0x7fffffff

*(arg1 + 0xc) = rax
return sub_140839170(arg1, arg2, rax, 0x80) __tailcall
