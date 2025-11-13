// 函数: sub_141105a40
// 地址: 0x141105a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg2 + 0x1b0)
int64_t r9 = *(arg3 + 0x10)
int64_t arg_8 = rsi
sub_1410809a0(arg1, arg2, rsi, r9)
int64_t r15 = *(arg4 + 0x90)

if (*(arg1 + 0x122) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x120))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d99560
    rcx_2[2] = rsi
    rcx_2[3].d = r14_1
    rcx_2[4] = r15

int64_t r14_2 = *(arg4 + 0xb0)

if (*(arg1 + 0x126) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x124))
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_8[5]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_8[5]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142d99560
    rcx_8[2] = rsi
    rcx_8[3].d = r15_1
    rcx_8[4] = r14_2

void** rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = *(arg5 + 0x10)
void* rcx_12 = &rbx_2[1]

if (rcx_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_12 = &rbx_2[1]

*(arg2 + 0x30) = rcx_12
*rbx_2 = rax_7
void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_16[6]

if (rax_8 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_16[6]

*(arg2 + 0x30) = rax_8
void**** rax_9 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_9 = rcx_16
*(arg2 + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142da7798
rcx_16[2].d = 1
rcx_16[3] = rbx_2
rcx_16[4].d = 2
*(rcx_16 + 0x24) = 3
rcx_16[5] = 0
sub_141083370(arg1 + 0x118, arg2, &arg_8, *(arg5 + 8), *(arg5 + 0x10))
return sub_14077c4b0(arg2, &arg_8, arg1 + 0x128, arg4 + 0x10, 0)
