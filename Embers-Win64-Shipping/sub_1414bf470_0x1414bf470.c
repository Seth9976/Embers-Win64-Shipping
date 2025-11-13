// 函数: sub_1414bf470
// 地址: 0x1414bf470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *arg3

if (arg1[3] u> 0)
    uint32_t r15_1 = zx.d(arg1[2])
    void*** r9_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &r9_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        r9_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &r9_2[5]
    
    *(arg2 + 0x30) = rax_1
    int64_t* rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = r9_2
    *(arg2 + 8) = &r9_2[1]
    r9_2[1] = 0
    *r9_2 = &data_142da77d8
    r9_2[3].d = r15_1
    r9_2[4] = arg5
    r9_2[2] = rbp

if (arg1[3] u> 0)
    return 

int64_t rsi_1 = *arg3

if (arg1[1] u<= 0)
    return 

uint32_t rbp_1 = zx.d(*arg1)
void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_3[5]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_3[5]

*(arg2 + 0x30) = rax_4
void**** rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_3
*(arg2 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142da77b8
rcx_3[2] = rsi_1
rcx_3[3].d = rbp_1
rcx_3[4] = arg4
