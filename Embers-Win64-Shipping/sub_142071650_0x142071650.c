// 函数: sub_142071650
// 地址: 0x142071650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1b0)

if (*(arg1 + 0x140) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x13e))
    void*** r8_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &r8_3[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        r8_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &r8_3[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = r8_3
    *(arg2 + 8) = &r8_3[1]
    r8_3[3].d = r14_1
    r8_3[1] = 0
    *r8_3 = &data_142da77d8
    r8_3[2] = rbp
    r8_3[4] = 0

if (*(arg1 + 0x144) u<= 0)
    return 

uint32_t rsi_1 = zx.d(*(arg1 + 0x142))
void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_3[5]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_3[5]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_3
*(arg2 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142da77d8
rcx_3[2] = rbp
rcx_3[3].d = rsi_1
rcx_3[4] = 0
