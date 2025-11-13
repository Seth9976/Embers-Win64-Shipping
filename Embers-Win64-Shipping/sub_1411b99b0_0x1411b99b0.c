// 函数: sub_1411b99b0
// 地址: 0x1411b99b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = data_14395f4d0
int64_t r15 = *(*(arg4 + 0x10) + 0x10)

if (arg1[1] u> 0)
    uint32_t rbp_1 = zx.d(*arg1)
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    int64_t* rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d5a070
    rcx_2[2] = arg3
    rcx_2[3].d = rbp_1
    rcx_2[4] = r15

if (arg1[7] u> 0)
    uint32_t rbp_2 = zx.d(arg1[6])
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_9[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_6
        void** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = arg3
        rcx_9[3].d = rbp_2
        rcx_9[4] = r14

int64_t* r14_1 = data_14395f4d0
int64_t rbp_3 = *(*(arg4 + 0x18) + 0x10)

if (arg1[3] u> 0)
    uint32_t r15_1 = zx.d(arg1[2])
    void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_15[5]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_15[5]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_15
    *(arg2 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    rcx_15[3].d = r15_1
    *rcx_15 = &data_142d5a070
    rcx_15[2] = arg3
    rcx_15[4] = rbp_3

if (arg1[7] u> 0)
    uint32_t rbp_4 = zx.d(arg1[6])
    
    if ((*(*r14_1 + 8))(r14_1) == 0)
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_22[5]
        
        if (rax_15 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_15
        void**** rax_16 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_16 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142d5a080
        rcx_22[2] = arg3
        rcx_22[3].d = rbp_4
        rcx_22[4] = r14_1

void** const result = *(arg4 + 0x20)
int64_t* r14_2 = data_14395f4d0
int64_t rbp_5 = result[2]

if (arg1[5] u> 0)
    uint32_t r15_2 = zx.d(arg1[4])
    void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_18 = &rcx_28[5]
    
    if (rax_18 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_18 = &rcx_28[5]
    
    *(arg2 + 0x30) = rax_18
    void**** rax_19 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_19 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    result = &data_142d5a070
    *rcx_28 = &data_142d5a070
    rcx_28[2] = arg3
    rcx_28[3].d = r15_2
    rcx_28[4] = rbp_5

if (arg1[7] u> 0)
    uint32_t rsi_1 = zx.d(arg1[6])
    result = (*(*r14_2 + 8))(r14_2)
    
    if (result.b == 0)
        void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_22 = &rcx_35[5]
        
        if (rax_22 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_22 = &rcx_35[5]
        
        *(arg2 + 0x30) = rax_22
        void**** rax_23 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_23 = rcx_35
        *(arg2 + 8) = &rcx_35[1]
        rcx_35[1] = 0
        result = &data_142d5a080
        *rcx_35 = &data_142d5a080
        rcx_35[2] = arg3
        rcx_35[3].d = rsi_1
        rcx_35[4] = r14_2

return result
