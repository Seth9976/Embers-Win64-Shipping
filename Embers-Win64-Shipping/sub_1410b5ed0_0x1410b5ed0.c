// 函数: sub_1410b5ed0
// 地址: 0x1410b5ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141080ac0(arg1, arg2, *(arg2 + 0x1a0), *(arg3 + 0x10))
int32_t r8_1 = *(arg3 + 0x1548)
int64_t arg_10 = *(arg2 + 0x1a0)

if (*(arg1 + 0x118) != 0xffff)
    int64_t arg_8
    int64_t* rcx = &arg_8
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8_1)
    
    sub_141083500(arg2, &arg_10, arg1 + 0x118, arg_8)
    sub_1405d1550(&arg_8)

int16_t rax_1 = *(arg1 + 0x11c)
int64_t r13 = *(arg2 + 0x1a0)

if (rax_1 != 0 || *(arg1 + 0x124) u> rax_1 || *(arg1 + 0x12c) u> rax_1)
    int64_t rbp_1 = *(arg3 + 0x1528)
    int64_t* r14_1 = data_14395f4d0
    
    if (rax_1 != 0)
        uint32_t r12_1 = zx.d(*(arg1 + 0x11a))
        void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_2 = &rcx_5[5]
        
        if (rax_2 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_2 = &rcx_5[5]
        
        *(arg2 + 0x30) = rax_2
        void**** rax_3 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_3 = rcx_5
        *(arg2 + 8) = &rcx_5[1]
        rcx_5[1] = 0
        rcx_5[3].d = r12_1
        *rcx_5 = &data_142d5a070
        rcx_5[2] = r13
        rcx_5[4] = rbp_1
    
    if (*(arg1 + 0x120) u> 0)
        uint32_t rbp_2 = zx.d(*(arg1 + 0x11e))
        
        if ((*(*r14_1 + 8))(r14_1) == 0)
            void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_7 = &rcx_12[5]
            
            if (rax_7 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_7 = &rcx_12[5]
            
            *(arg2 + 0x30) = rax_7
            void**** rax_8 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_8 = rcx_12
            *(arg2 + 8) = &rcx_12[1]
            rcx_12[1] = 0
            *rcx_12 = &data_142d5a080
            rcx_12[2] = r13
            rcx_12[3].d = rbp_2
            rcx_12[4] = r14_1
    
    int64_t rbp_3 = *(arg3 + 0x1530)
    int64_t* r14_2 = data_14395f4d0
    
    if (*(arg1 + 0x124) u> 0)
        uint32_t r12_2 = zx.d(*(arg1 + 0x122))
        void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_18[5]
        
        if (rax_10 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_18[5]
        
        *(arg2 + 0x30) = rax_10
        void**** rax_11 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_11 = rcx_18
        *(arg2 + 8) = &rcx_18[1]
        rcx_18[1] = 0
        *rcx_18 = &data_142d5a070
        rcx_18[2] = r13
        rcx_18[3].d = r12_2
        rcx_18[4] = rbp_3
    
    if (*(arg1 + 0x128) u> 0)
        uint32_t rbp_4 = zx.d(*(arg1 + 0x126))
        
        if ((*(*r14_2 + 8))(r14_2) == 0)
            void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_15 = &rcx_25[5]
            
            if (rax_15 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_15 = &rcx_25[5]
            
            *(arg2 + 0x30) = rax_15
            void**** rax_16 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_16 = rcx_25
            *(arg2 + 8) = &rcx_25[1]
            rcx_25[1] = 0
            *rcx_25 = &data_142d5a080
            rcx_25[2] = r13
            rcx_25[3].d = rbp_4
            rcx_25[4] = r14_2
    
    int64_t rbp_5 = *(arg3 + 0x1538)
    int64_t* r14_3 = data_14395f4d0
    
    if (*(arg1 + 0x12c) u> 0)
        uint32_t r15_1 = zx.d(*(arg1 + 0x12a))
        void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_18 = &rcx_31[5]
        
        if (rax_18 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rcx_31[5]
        
        *(arg2 + 0x30) = rax_18
        void**** rax_19 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_19 = rcx_31
        *(arg2 + 8) = &rcx_31[1]
        rcx_31[1] = 0
        *rcx_31 = &data_142d5a070
        rcx_31[2] = r13
        rcx_31[3].d = r15_1
        rcx_31[4] = rbp_5
    
    if (*(arg1 + 0x130) u> 0)
        uint32_t rbp_6 = zx.d(*(arg1 + 0x12e))
        
        if ((*(*r14_3 + 8))(r14_3) == 0)
            void*** rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_23 = &rcx_38[5]
            
            if (rax_23 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_23 = &rcx_38[5]
            
            *(arg2 + 0x30) = rax_23
            void**** rax_24 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_24 = rcx_38
            *(arg2 + 8) = &rcx_38[1]
            rcx_38[1] = 0
            *rcx_38 = &data_142d5a080
            rcx_38[2] = r13
            rcx_38[3].d = rbp_6
            rcx_38[4] = r14_3

int64_t* r14_4 = data_14395f4d0
int64_t rbp_7 = *(arg2 + 0x1a0)
void** const result = *arg4

if (result == 0)
    result = data_143f10dc8

int64_t r15_2 = result[2]

if (*(arg1 + 0x134) u> 0)
    uint32_t r12_3 = zx.d(*(arg1 + 0x132))
    void*** rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_27 = &rcx_44[5]
    
    if (rax_27 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_27 = &rcx_44[5]
    
    *(arg2 + 0x30) = rax_27
    void** rax_28 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_28 = rcx_44
    *(arg2 + 8) = &rcx_44[1]
    rcx_44[1] = 0
    result = &data_142d5a070
    *rcx_44 = &data_142d5a070
    rcx_44[4] = r15_2
    rcx_44[3].d = r12_3
    rcx_44[2] = rbp_7

if (*(arg1 + 0x138) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x136))
    result = (*(*r14_4 + 8))(r14_4)
    
    if (result.b == 0)
        void*** rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_31 = &rcx_51[5]
        
        if (rax_31 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_31 = &rcx_51[5]
        
        *(arg2 + 0x30) = rax_31
        void**** rax_32 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_32 = rcx_51
        *(arg2 + 8) = &rcx_51[1]
        rcx_51[1] = 0
        result = &data_142d5a080
        rcx_51[4] = r14_4
        rcx_51[3].d = rsi_1
        rcx_51[2] = rbp_7
        *rcx_51 = &data_142d5a080

return result
