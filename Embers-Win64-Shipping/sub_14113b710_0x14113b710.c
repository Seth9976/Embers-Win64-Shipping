// 函数: sub_14113b710
// 地址: 0x14113b710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
int32_t rax = 4

if (*(arg1 + 0xc) != 0 || r8.d u> 4)
    rax = ((r8 * 3) u>> 3).d + 0x10 + r8.d

if (r8.d s> rax)
    rax = 0x7fffffff

*(arg1 + 0xc) = rax
return sub_140839170(arg1, arg2, rax, 4) __tailcall
