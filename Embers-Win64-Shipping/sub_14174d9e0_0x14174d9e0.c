// 函数: sub_14174d9e0
// 地址: 0x14174d9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int64_t r14 = rsi << 3
void*** rdi = *(r14 + *(arg1 + 8))

if (rdi != 0)
    sub_1417059c0(rdi)
    j_sub_140a74f90(rdi)

int32_t rcx_4 = *(arg1 + 0x10)
int32_t rax_3 = rcx_4 - rsi.d - 1

if (rax_3 s>= 1)
    rax_3 = 1

if (rax_3 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + r14, r9_1 + (sx.q(rcx_4 - rax_3) << 3), rax_3 << 3)
    rcx_4 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_4 - 1
return sub_1405c53d0(arg1 + 8) __tailcall
