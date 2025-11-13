// 函数: sub_1411a4610
// 地址: 0x1411a4610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(arg2[1].d)

if (i_2.d == 0)
    return 

int64_t* rdi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r14_1 = *arg2
int32_t rdx = (i_2 << 3).d
int64_t r12_1 = sx.q(rdx)
void* rax_1 = r12_1 + rdi_3

if (rax_1 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, rdx + 8)
    rdi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = r12_1 + rdi_3

*(arg1 + 0x30) = rax_1
int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t* rcx_1 = rdi_3
    int64_t i
    
    do
        *rcx_1 = *(r14_1 - rdi_3 + rcx_1)
        rcx_1 = &rcx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_4[6]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_4[6]

*(arg1 + 0x30) = rax_3
void**** rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = i_2.d
rcx_4[3] = rdi_3
rcx_4[4].d = 0
*(rcx_4 + 0x24) = 3
rcx_4[5] = 0
int64_t rdi_6 = sx.q(arg2[1].d)
int32_t temp0_1 = rdi_6.d

if (temp0_1 s< 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) s< 0)
        sub_1405a4d70(arg2)
    
    memset(*arg2 + (rdi_6 << 3), 0, sx.q(neg.d(rdi_6.d)) << 3)
else if (temp0_1 s> 0 && rdi_6.d != 0)
    arg2[1].d = 0
