// 函数: sub_14231d2f0
// 地址: 0x14231d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg2 + 0x1a0)

if (*(arg1 + 0x11a) u> 0)
    *(arg3 + 0x28) = data_143dbb3b8
    
    if (0 u< *(arg1 + 0x11a))
        uint32_t r12_1 = zx.d(*(arg1 + 0x118))
        int64_t r15_1 = *(arg3 + 0x10)
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
        rcx_2[3].d = r12_1
        rcx_2[4] = r15_1
        *rcx_2 = &data_142d5a070
        rcx_2[2] = r14

if (*(arg1 + 0x11e) u<= 0)
    return 

int64_t* rsi_1 = *(arg3 + 0x18)
uint32_t rbp_1 = zx.d(*(arg1 + 0x11c))

if ((*(*rsi_1 + 8))(rsi_1) != 0)
    return 

void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_9[5]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_9[5]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_9
*(arg2 + 8) = &rcx_9[1]
rcx_9[1] = 0
*rcx_9 = &data_142d5a080
rcx_9[2] = r14
rcx_9[3].d = rbp_1
rcx_9[4] = rsi_1
