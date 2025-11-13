// 函数: sub_14243c530
// 地址: 0x14243c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_14243c600(arg2)
uint64_t r10 = zx.q(((zx.d((rax u>> 0x20).w) << 6) u/ 0x1f).w)
uint64_t r9_7 = zx.q(((zx.d((rax u>> 0x10).w) << 6) u/ 0x1f).w) u>> 6
uint64_t rdx_4 = zx.q(((zx.d(rax.w) << 6) u/ 0x1f).w) u>> 6
int64_t rcx_26 = ((((((zx.q(r10.d) & 0xffffffffffffff80) << 3 | r9_7) << 0xa | rdx_4) << 0x10
    | (zx.q(r10.d) & 0xffffffffffffffc0)) << 4 | r9_7) << 0xa | rdx_4) << 5 | 3
*arg1 = rcx_26
arg1[1] = zx.q((r10 u>> 9).d) & 1
return arg1
