// 函数: sub_1421c24e0
// 地址: 0x1421c24e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t r15 = *(arg2 + 0x1a0)
int64_t arg_8 = r15
uint64_t result = sub_1405eb490(arg2, &arg_8, arg1 + 0x118, &arg_18, 0)
int64_t* r14 = data_14395fa10

if (*(arg1 + 0x120) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x11e))
    void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax = &rcx_3[5]
    
    if (rax u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax = &rcx_3[5]
    
    *(arg2 + 0x30) = rax
    void**** rax_1 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_1 = rcx_3
    *(arg2 + 8) = &rcx_3[1]
    rcx_3[1] = 0
    result = &data_142d5a070
    *rcx_3 = &data_142d5a070
    rcx_3[2] = r15
    rcx_3[3].d = rbp_1
    rcx_3[4] = arg4

if (*(arg1 + 0x124) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x122))
    result = (*(*r14 + 8))(r14)
    
    if (result.b == 0)
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_4 = &rcx_10[5]
        
        if (rax_4 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_4 = &rcx_10[5]
        
        *(arg2 + 0x30) = rax_4
        void**** rax_5 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_5 = rcx_10
        result = &rcx_10[1]
        *(arg2 + 8) = result
        *result = 0
        *rcx_10 = &data_142d5a080
        rcx_10[2] = r15
        rcx_10[3].d = rbp_2
        rcx_10[4] = r14

if (*(arg1 + 0x128) u> 0)
    uint32_t rbp_3 = zx.d(*(arg1 + 0x126))
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_16[5]
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_16[5]
    
    *(arg2 + 0x30) = rax_6
    void** rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_7 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    *rcx_16 = &data_142d5a070
    result = arg5
    rcx_16[4] = result
    rcx_16[2] = r15
    rcx_16[3].d = rbp_3

if (*(arg1 + 0x12c) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x12a))
    result = (*(*r14 + 8))(r14)
    
    if (result.b == 0)
        void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_23[5]
        
        if (rax_10 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_23[5]
        
        *(arg2 + 0x30) = rax_10
        void**** rax_11 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_11 = rcx_23
        result = &rcx_23[1]
        *(arg2 + 8) = result
        *result = 0
        *rcx_23 = &data_142d5a080
        rcx_23[2] = r15
        rcx_23[3].d = rsi_1
        rcx_23[4] = r14

return result
