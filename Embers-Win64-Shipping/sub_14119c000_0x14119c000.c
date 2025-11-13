// 函数: sub_14119c000
// 地址: 0x14119c000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1a0)
sub_141080ac0(arg1, arg2, rbp, *(arg3 + 0x10))
void** const result = *arg4
int64_t* r14 = data_14395fa10
int64_t r12 = result[2]

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
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
    result = &data_142d5a070
    rcx_2[3].d = r15_1
    *rcx_2 = &data_142d5a070
    rcx_2[2] = rbp
    rcx_2[4] = r12

if (*(arg1 + 0x11e) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x11c))
    result = (*(*r14 + 8))(r14)
    
    if (result.b == 0)
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
        result = &data_142d5a080
        *rcx_9 = &data_142d5a080
        rcx_9[2] = rbp
        rcx_9[3].d = rsi_1
        rcx_9[4] = r14

return result
