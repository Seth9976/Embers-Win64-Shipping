// 函数: sub_141428c70
// 地址: 0x141428c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 0x11a))
int64_t r12 = *(arg2 + 0x1b0)
int64_t rsi_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
uint32_t rax_1 = zx.d(*(arg1 + 0x118))
int64_t r14 = sx.q(arg4)
int64_t rax_2 = r14 + rsi_2

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, arg4 + 0x10)
    rsi_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_2 = r14 + rsi_2

*(arg2 + 0x30) = rax_2
memcpy(rsi_2, arg3, arg4)
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_4[6]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_4[6]

int64_t* r14_1 = arg5
*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d99550
rcx_4[4].d = rax_1
rcx_4[3] = rsi_2
int32_t i = 0
*(rcx_4 + 0x24) = rax
rcx_4[2] = r12
rcx_4[5].d = arg4

do
    int64_t r12_1 = *(arg2 + 0x1b0)
    int32_t rbp_2 = zx.d(*(arg1 + 0x124)) + i
    int64_t r15_1 = *(*r14_1 + 0x60)
    void*** rax_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_8 = &rax_11[5]
    
    if (rcx_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rax_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_8 = &rax_11[5]
    
    *(arg2 + 0x30) = rcx_8
    i += 1
    int64_t* rcx_10 = *(arg2 + 8)
    r14_1 = &r14_1[1]
    *(arg2 + 0x14) += 1
    *rcx_10 = rax_11
    *(arg2 + 8) = &rax_11[1]
    rax_11[1] = 0
    *rax_11 = &data_142d99560
    rax_11[2] = r12_1
    rax_11[3].d = rbp_2
    rax_11[4] = r15_1
while (i u< 3)

int64_t rbp_3 = *(arg2 + 0x1b0)
uint32_t r14_2 = zx.d(*(arg1 + 0x120))
void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rsi_5 = *(arg6 + 0x18)
void* rax_15 = &rcx_14[5]

if (rax_15 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_14[5]

*(arg2 + 0x30) = rax_15
void**** rax_16 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_16 = rcx_14
*(arg2 + 8) = &rcx_14[1]
rcx_14[1] = 0
*rcx_14 = &data_142da77d8
rcx_14[2] = rbp_3
rcx_14[3].d = r14_2
rcx_14[4] = rsi_5
return &data_142da77d8
