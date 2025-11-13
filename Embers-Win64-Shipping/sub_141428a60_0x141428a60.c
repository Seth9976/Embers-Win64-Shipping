// 函数: sub_141428a60
// 地址: 0x141428a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 0x11a))
int64_t r13 = *(arg2 + 0x1b0)
int64_t rdi_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
uint32_t rax_1 = zx.d(*(arg1 + 0x118))
int64_t r14 = sx.q(arg4)
int64_t rax_2 = r14 + rdi_2

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, arg4 + 0x10)
    rdi_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_2 = r14 + rdi_2

*(arg2 + 0x30) = rax_2
memcpy(rdi_2, arg3, arg4)
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_4[6]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_4[6]

*(arg2 + 0x30) = rax_3
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d99550
rcx_4[4].d = rax_1
*(rcx_4 + 0x24) = rax
rcx_4[2] = r13
rcx_4[3] = rdi_2
rcx_4[5].d = arg4
int64_t rbp_1 = *(arg2 + 0x1b0)
uint32_t r14_1 = zx.d(*(arg1 + 0x124))
int64_t rdi_5 = *(*arg5 + 0x60)
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_11[5]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_11[5]

*(arg2 + 0x30) = rax_9
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_11
*(arg2 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142d99560
rcx_11[2] = rbp_1
rcx_11[3].d = r14_1
rcx_11[4] = rdi_5
int64_t rdi_6 = *(arg6 + 0x18)
int64_t rbp_2 = *(arg2 + 0x1b0)
void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint32_t r14_2 = zx.d(*(arg1 + 0x120))
void* rax_13 = &rcx_17[5]

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_17[5]

*(arg2 + 0x30) = rax_13
void**** rax_14 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_14 = rcx_17
*(arg2 + 8) = &rcx_17[1]
rcx_17[1] = 0
*rcx_17 = &data_142da77d8
rcx_17[2] = rbp_2
rcx_17[3].d = r14_2
rcx_17[4] = rdi_6
return &data_142da77d8
