// 函数: sub_14077c370
// 地址: 0x14077c370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *arg3
int64_t r15 = *(arg4 + 8)

if (arg1[3] u> 0)
    uint32_t r13_1 = zx.d(arg1[2])
    void*** r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &r8_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &r8_2[5]
    
    *(arg2 + 0x30) = rax_1
    int64_t* rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = r8_2
    *(arg2 + 8) = &r8_2[1]
    r8_2[1] = 0
    r8_2[3].d = r13_1
    *r8_2 = &data_142da77d8
    r8_2[2] = r12
    r8_2[4] = r15

if (arg1[3] u> 0)
    return 

int64_t rsi_1 = *(arg4 + 0x10)
int64_t rbp_1 = *arg3

if (arg1[1] u<= 0)
    return 

uint32_t r14_1 = zx.d(*arg1)
void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_3[5]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_3[5]

*(arg2 + 0x30) = rax_4
int64_t* rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_3
*(arg2 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142d99560
rcx_3[2] = rbp_1
rcx_3[3].d = r14_1
rcx_3[4] = rsi_1
