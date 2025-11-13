// 函数: sub_1417d27c0
// 地址: 0x1417d27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int64_t rsi = rbp << 3
sub_142225820((*(arg1 + 0x448))[rbp], 0)
void* rdi = *(rsi + *(arg1 + 0x448))

if (rdi != 0)
    sub_1417ce5b0(rdi)
    j_sub_140a74f90(rdi)

int32_t rcx_6 = *(arg1 + 0x450)
int32_t rax_3 = rcx_6 - rbp.d - 1

if (rax_3 s>= 1)
    rax_3 = 1

if (rax_3 != 0)
    int64_t r9_1 = *(arg1 + 0x448)
    memcpy(rsi + r9_1, r9_1 + (sx.q(rcx_6 - rax_3) << 3), rax_3 << 3)
    rcx_6 = *(arg1 + 0x450)

*(arg1 + 0x450) = rcx_6 - 1
sub_1405c53d0(arg1 + 0x448)
int32_t rdx_2 = *(arg1 + 0x430)
int32_t rax_8 = rdx_2 - rbp.d - 1

if (rax_8 s>= 1)
    rax_8 = 1

if (rax_8 != 0)
    int64_t r9_2 = *(arg1 + 0x428)
    memcpy(rsi + r9_2, r9_2 + (sx.q(rdx_2 - rax_8) << 3), rax_8 << 3)
    rdx_2 = *(arg1 + 0x430)

*(arg1 + 0x430) = rdx_2 - 1
sub_1405c53d0(arg1 + 0x428)
int32_t rax_11 = *(arg1 + 0x460)
int32_t rcx_12 = rax_11 - rbp.d - 1

if (rcx_12 s>= 1)
    rcx_12 = 1

if (rcx_12 != 0)
    int64_t r9_3 = *(arg1 + 0x458)
    memcpy(r9_3 + rsi, r9_3 + (sx.q(rax_11 - rcx_12) << 3), rcx_12 << 3)
    rax_11 = *(arg1 + 0x460)

*(arg1 + 0x460) = rax_11 - 1
return sub_1405c53d0(arg1 + 0x458) __tailcall
