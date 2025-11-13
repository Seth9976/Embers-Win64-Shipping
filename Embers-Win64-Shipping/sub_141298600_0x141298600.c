// 函数: sub_141298600
// 地址: 0x141298600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1a0)

if (*(arg1 + 0x11a) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x118))
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
    r8_2[3].d = r12_1
    *r8_2 = &data_142d5a070
    r8_2[2] = rbp
    r8_2[4] = arg4

if (*(arg1 + 0x11e) u<= 0)
    return 

uint32_t rsi_1 = zx.d(*(arg1 + 0x11c))

if ((*(*arg3 + 8))(arg3) != 0)
    return 

void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_4[5]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_4[5]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d5a080
rcx_4[2] = rbp
rcx_4[3].d = rsi_1
rcx_4[4] = arg3
