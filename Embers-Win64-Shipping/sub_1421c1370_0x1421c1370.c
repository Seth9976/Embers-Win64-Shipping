// 函数: sub_1421c1370
// 地址: 0x1421c1370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
bool cond:0 = *(arg1 + 0x11a) u<= 0
int64_t* r13 = data_14395fa10
int64_t* rbp = *(arg2 + 0x1a0)
int64_t r12 = *(arg3 + 0x18)
int64_t* arg_8 = data_14395f4d0

if (not(cond:0))
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
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
    rcx_2[2] = rbp
    rcx_2[3].d = r15_1
    rcx_2[4] = r12

if (*(arg1 + 0x11e) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*r13 + 8))(r13) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_9[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_6
        void**** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = rbp
        rcx_9[3].d = r15_2
        rcx_9[4] = r13

int64_t r14_1 = *(arg3 + 0x28)

if (*(arg1 + 0x122) u> 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x120))
    void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_15[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_15[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_15
    *(arg2 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    *rcx_15 = &data_142d5a070
    rcx_15[2] = rbp
    rcx_15[3].d = r15_3
    rcx_15[4] = r14_1

if (*(arg1 + 0x126) u> 0)
    uint32_t r14_2 = zx.d(*(arg1 + 0x124))
    
    if ((*(*r13 + 8))(r13) == 0)
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_14 = &rcx_22[5]
        
        if (rax_14 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_14
        void**** rax_15 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_15 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142d5a080
        rcx_22[2] = rbp
        rcx_22[3].d = r14_2
        rcx_22[4] = r13

int64_t r14_4 = *(arg_20 + 0x18)

if (*(arg1 + 0x12a) u> 0)
    uint32_t r15_4 = zx.d(*(arg1 + 0x128))
    void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_28[5]
    
    if (rax_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_28[5]
    
    *(arg2 + 0x30) = rax_17
    void**** rax_18 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_18 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    *rcx_28 = &data_142d5a070
    rcx_28[2] = rbp
    rcx_28[3].d = r15_4
    rcx_28[4] = r14_4

if (*(arg1 + 0x12e) u> 0)
    uint32_t r14_5 = zx.d(*(arg1 + 0x12c))
    
    if ((*(*r13 + 8))(r13) == 0)
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
        *rcx_35 = &data_142d5a080
        rcx_35[2] = rbp
        rcx_35[3].d = r14_5
        rcx_35[4] = r13

int64_t r14_6 = data_143a2ee58

if (*(arg1 + 0x13a) u> 0)
    uint32_t r15_5 = zx.d(*(arg1 + 0x138))
    void*** rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_25 = &rcx_41[5]
    
    if (rax_25 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_25 = &rcx_41[5]
    
    *(arg2 + 0x30) = rax_25
    void**** rax_26 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_26 = rcx_41
    *(arg2 + 8) = &rcx_41[1]
    rcx_41[1] = 0
    *rcx_41 = &data_142d5a070
    rcx_41[2] = rbp
    rcx_41[3].d = r15_5
    rcx_41[4] = r14_6

if (*(arg1 + 0x13e) u> 0)
    int64_t* r15_6 = arg_8
    uint32_t r14_7 = zx.d(*(arg1 + 0x13c))
    
    if ((*(*r15_6 + 8))(r15_6) == 0)
        void*** rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_30 = &rcx_48[5]
        
        if (rax_30 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_30 = &rcx_48[5]
        
        *(arg2 + 0x30) = rax_30
        void** rax_31 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_31 = rcx_48
        *(arg2 + 8) = &rcx_48[1]
        rcx_48[1] = 0
        *rcx_48 = &data_142d5a080
        rcx_48[2] = rbp
        rcx_48[3].d = r14_7
        rcx_48[4] = r15_6

bool cond:4 = *(arg1 + 0x1a8) u> 0
arg_8 = rbp

if (cond:4 || *(arg1 + 0x1ae) u> 0)
    int64_t r14_8 = *(arg6 + 0x80)
    
    if (r14_8 == 0)
        r14_8 = *(data_143f111a8 + 0x10)
    
    int64_t* r15_7 = data_14396ee58
    
    if (*(arg1 + 0x186) u> 0)
        uint32_t r12_1 = zx.d(*(arg1 + 0x184))
        void*** rcx_54 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_34 = &rcx_54[5]
        
        if (rax_34 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_54 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_34 = &rcx_54[5]
        
        *(arg2 + 0x30) = rax_34
        void**** rax_35 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_35 = rcx_54
        *(arg2 + 8) = &rcx_54[1]
        rcx_54[1] = 0
        *rcx_54 = &data_142d5a070
        rcx_54[2] = rbp
        rcx_54[3].d = r12_1
        rcx_54[4] = r14_8
    
    if (*(arg1 + 0x196) u> 0)
        uint32_t r14_9 = zx.d(*(arg1 + 0x194))
        
        if ((*(*r15_7 + 8))(r15_7) == 0)
            void*** rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_39 = &rcx_61[5]
            
            if (rax_39 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_39 = &rcx_61[5]
            
            *(arg2 + 0x30) = rax_39
            void**** rax_40 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_40 = rcx_61
            *(arg2 + 8) = &rcx_61[1]
            rcx_61[1] = 0
            *rcx_61 = &data_142d5a080
            rcx_61[2] = rbp
            rcx_61[3].d = r14_9
            rcx_61[4] = r15_7
    
    int64_t r14_10 = *(arg6 + 0x88)
    
    if (r14_10 == 0)
        r14_10 = *(data_143f111a8 + 0x10)
    
    int64_t* r15_8 = data_14396ee58
    
    if (*(arg1 + 0x18a) u> 0)
        uint32_t r12_2 = zx.d(*(arg1 + 0x188))
        void*** rcx_67 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_43 = &rcx_67[5]
        
        if (rax_43 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_67 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_43 = &rcx_67[5]
        
        *(arg2 + 0x30) = rax_43
        void**** rax_44 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_44 = rcx_67
        *(arg2 + 8) = &rcx_67[1]
        rcx_67[1] = 0
        *rcx_67 = &data_142d5a070
        rcx_67[2] = rbp
        rcx_67[3].d = r12_2
        rcx_67[4] = r14_10
    
    if (*(arg1 + 0x19a) u> 0)
        uint32_t r14_11 = zx.d(*(arg1 + 0x198))
        
        if ((*(*r15_8 + 8))(r15_8) == 0)
            void*** rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_48 = &rcx_74[5]
            
            if (rax_48 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_48 = &rcx_74[5]
            
            *(arg2 + 0x30) = rax_48
            void**** rax_49 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_49 = rcx_74
            *(arg2 + 8) = &rcx_74[1]
            rcx_74[1] = 0
            *rcx_74 = &data_142d5a080
            rcx_74[2] = rbp
            rcx_74[3].d = r14_11
            rcx_74[4] = r15_8
    
    int64_t r14_12 = *(arg6 + 0x90)
    
    if (r14_12 == 0)
        r14_12 = *(data_143f111a8 + 0x10)
    
    int64_t* r15_9 = data_14396ee58
    
    if (*(arg1 + 0x18e) u> 0)
        uint32_t r12_3 = zx.d(*(arg1 + 0x18c))
        void*** rcx_80 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_52 = &rcx_80[5]
        
        if (rax_52 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_80 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_52 = &rcx_80[5]
        
        *(arg2 + 0x30) = rax_52
        void**** rax_53 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_53 = rcx_80
        *(arg2 + 8) = &rcx_80[1]
        rcx_80[1] = 0
        *rcx_80 = &data_142d5a070
        rcx_80[2] = rbp
        rcx_80[3].d = r12_3
        rcx_80[4] = r14_12
    
    if (*(arg1 + 0x19e) u> 0)
        uint32_t r14_13 = zx.d(*(arg1 + 0x19c))
        
        if ((*(*r15_9 + 8))(r15_9) == 0)
            void*** rcx_87 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_57 = &rcx_87[5]
            
            if (rax_57 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_87 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_57 = &rcx_87[5]
            
            *(arg2 + 0x30) = rax_57
            void**** rax_58 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_58 = rcx_87
            *(arg2 + 8) = &rcx_87[1]
            rcx_87[1] = 0
            *rcx_87 = &data_142d5a080
            rcx_87[2] = rbp
            rcx_87[3].d = r14_13
            rcx_87[4] = r15_9
    
    int64_t r14_14 = *(arg6 + 0x98)
    
    if (r14_14 == 0)
        r14_14 = *(data_143f111a8 + 0x10)
    
    int64_t* r15_10 = data_14396ee58
    
    if (*(arg1 + 0x192) u> 0)
        uint32_t r12_4 = zx.d(*(arg1 + 0x190))
        void*** rcx_93 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_61 = &rcx_93[5]
        
        if (rax_61 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_93 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_61 = &rcx_93[5]
        
        *(arg2 + 0x30) = rax_61
        void**** rax_62 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_62 = rcx_93
        *(arg2 + 8) = &rcx_93[1]
        rcx_93[1] = 0
        *rcx_93 = &data_142d5a070
        rcx_93[2] = rbp
        rcx_93[3].d = r12_4
        rcx_93[4] = r14_14
    
    if (*(arg1 + 0x1a2) u> 0)
        uint32_t r14_15 = zx.d(*(arg1 + 0x1a0))
        
        if ((*(*r15_10 + 8))(r15_10) == 0)
            void*** rcx_100 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_66 = &rcx_100[5]
            
            if (rax_66 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_100 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_66 = &rcx_100[5]
            
            *(arg2 + 0x30) = rax_66
            void**** rax_67 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_67 = rcx_100
            *(arg2 + 8) = &rcx_100[1]
            rcx_100[1] = 0
            *rcx_100 = &data_142d5a080
            rcx_100[2] = rbp
            rcx_100[3].d = r14_15
            rcx_100[4] = r15_10
    
    sub_141083230(arg2, &arg_8, arg1 + 0x1a4, arg6, 4, 0)
    sub_141083230(arg2, &arg_8, arg1 + 0x1aa, arg6 + 0x40, 4, 0)
    sub_1405eb490(arg2, &arg_8, arg1 + 0x1b0, arg6 + 0xa0, 0)
    arg_20.d = 1f f/ *(arg6 + 0xa0)
    sub_1405eb490(arg2, &arg_8, arg1 + 0x1b6, &arg_20, 0)
    sub_1405eb490(arg2, &arg_8, arg1 + 0x1bc, arg6 + 0xa4, 0)

void** const result = arg5
int64_t r14_16 = result[3]

if (*(arg1 + 0x132) u> 0)
    uint32_t r15_11 = zx.d(*(arg1 + 0x130))
    void*** rcx_111 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_69 = &rcx_111[5]
    
    if (rax_69 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_111 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_69 = &rcx_111[5]
    
    *(arg2 + 0x30) = rax_69
    void**** rax_70 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_70 = rcx_111
    *(arg2 + 8) = &rcx_111[1]
    rcx_111[1] = 0
    result = &data_142d5a070
    *rcx_111 = &data_142d5a070
    rcx_111[2] = rbp
    rcx_111[3].d = r15_11
    rcx_111[4] = r14_16

if (*(arg1 + 0x136) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x134))
    result = (*(*r13 + 8))(r13)
    
    if (result.b == 0)
        void*** rcx_118 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_73 = &rcx_118[5]
        
        if (rax_73 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_118 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_73 = &rcx_118[5]
        
        *(arg2 + 0x30) = rax_73
        void**** rax_74 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_74 = rcx_118
        *(arg2 + 8) = &rcx_118[1]
        rcx_118[1] = 0
        result = &data_142d5a080
        *rcx_118 = &data_142d5a080
        rcx_118[2] = rbp
        rcx_118[3].d = rsi_1
        rcx_118[4] = r13

return result
