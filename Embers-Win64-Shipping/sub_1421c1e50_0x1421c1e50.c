// 函数: sub_1421c1e50
// 地址: 0x1421c1e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = data_14395f4d0
int64_t r12 = *(arg2 + 0x1a0)
int64_t* r14 = data_14395fa10
int64_t rbp = *(arg3 + 0x18)
void** const result_1 = result

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax = &rcx_2[5]
    
    if (rax u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax = &rcx_2[5]
    
    *(arg2 + 0x30) = rax
    int64_t* rax_1 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_1 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    result = &data_142d5a070
    *rcx_2 = &data_142d5a070
    rcx_2[2] = r12
    rcx_2[3].d = r15_1
    rcx_2[4] = rbp

if (*(arg1 + 0x11e) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x11c))
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
        result = &rcx_9[1]
        *(arg2 + 8) = result
        *result = nullptr
        *rcx_9 = &data_142d5a080
        rcx_9[2] = r12
        rcx_9[3].d = rbp_1
        rcx_9[4] = r14

int64_t rbp_2 = *(arg3 + 0x28)

if (*(arg1 + 0x122) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x120))
    void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_15[5]
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_15[5]
    
    *(arg2 + 0x30) = rax_6
    void**** rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_7 = rcx_15
    *(arg2 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    result = &data_142d5a070
    rcx_15[3].d = r15_2
    *rcx_15 = &data_142d5a070
    rcx_15[2] = r12
    rcx_15[4] = rbp_2

if (*(arg1 + 0x126) u> 0)
    uint32_t rbp_3 = zx.d(*(arg1 + 0x124))
    result = (*(*r14 + 8))(r14)
    
    if (result.b == 0)
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_22[5]
        
        if (rax_10 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_10
        void**** rax_11 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_11 = rcx_22
        result = &rcx_22[1]
        *(arg2 + 8) = result
        *result = nullptr
        *rcx_22 = &data_142d5a080
        rcx_22[2] = r12
        rcx_22[3].d = rbp_3
        rcx_22[4] = r14

int64_t rbp_5 = *(arg4 + 0x18)

if (*(arg1 + 0x12a) u> 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x128))
    void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_28[5]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_28[5]
    
    *(arg2 + 0x30) = rax_12
    void**** rax_13 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_13 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    result = &data_142d5a070
    *rcx_28 = &data_142d5a070
    rcx_28[2] = r12
    rcx_28[3].d = r15_3
    rcx_28[4] = rbp_5

if (*(arg1 + 0x12e) u> 0)
    uint32_t rbp_6 = zx.d(*(arg1 + 0x12c))
    result = (*(*r14 + 8))(r14)
    
    if (result.b == 0)
        void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_16 = &rcx_35[5]
        
        if (rax_16 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_16 = &rcx_35[5]
        
        *(arg2 + 0x30) = rax_16
        void**** rax_17 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_17 = rcx_35
        result = &rcx_35[1]
        *(arg2 + 8) = result
        *result = nullptr
        *rcx_35 = &data_142d5a080
        rcx_35[2] = r12
        rcx_35[3].d = rbp_6
        rcx_35[4] = r14

int64_t rbp_7 = data_143a2ee58

if (*(arg1 + 0x13a) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x138))
    void*** rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_18 = &rcx_41[5]
    
    if (rax_18 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_18 = &rcx_41[5]
    
    *(arg2 + 0x30) = rax_18
    void**** rax_19 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_19 = rcx_41
    *(arg2 + 8) = &rcx_41[1]
    rcx_41[1] = 0
    result = &data_142d5a070
    *rcx_41 = &data_142d5a070
    rcx_41[2] = r12
    rcx_41[3].d = r14_1
    rcx_41[4] = rbp_7

if (*(arg1 + 0x13e) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x13c))
    result = (*(*result_1 + 8))(result_1)
    
    if (result.b == 0)
        void*** rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_22 = &rcx_48[5]
        
        if (rax_22 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_22 = &rcx_48[5]
        
        *(arg2 + 0x30) = rax_22
        void** rax_23 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_23 = rcx_48
        result = &rcx_48[1]
        *(arg2 + 8) = result
        *result = nullptr
        *rcx_48 = &data_142d5a080
        rcx_48[2] = r12
        rcx_48[3].d = rsi_1
        rcx_48[4] = result_1

return result
