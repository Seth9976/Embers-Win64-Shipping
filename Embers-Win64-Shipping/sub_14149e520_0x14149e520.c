// 函数: sub_14149e520
// 地址: 0x14149e520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141080ac0(arg1, arg2, *(arg2 + 0x1a0), *(arg3 + 0x10))
int64_t r12 = *(arg4 + 0x10)
int64_t* r14 = data_14395fa10
int64_t r15 = *(arg2 + 0x1a0)

if (*(arg1 + 0x11a) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax = &rcx_2[5]
    
    if (rax u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax = &rcx_2[5]
    
    *(arg2 + 0x30) = rax
    void**** rax_1 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_1 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    result = 0x70
    rcx_2[3].d = rbp_1
    *rcx_2 = &data_142d5a070
    rcx_2[2] = r15
    rcx_2[4] = r12

if (*(arg1 + 0x11e) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x11c))
    result = (*(*r14 + 8))(r14)
    
    if (result == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_4 = &rcx_9[5]
        
        if (rax_4 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_4 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_4
        void**** rax_5 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_5 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        result = -0x80
        *rcx_9 = &data_142d5a080
        rcx_9[2] = r15
        rcx_9[3].d = rsi_1
        rcx_9[4] = r14

return result
