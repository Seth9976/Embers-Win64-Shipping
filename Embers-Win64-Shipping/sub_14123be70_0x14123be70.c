// 函数: sub_14123be70
// 地址: 0x14123be70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_4 = arg3
uint64_t result_1 = arg3
uint64_t result_5 = arg3
int32_t rdx
int32_t r9_1
rdx, r9_1 = sub_141080ac0(arg1, arg2, arg3, *(arg4 + 0x10))
uint64_t r8 = zx.q(*(arg4 + 0x1548))

if (*(arg1 + 0x118) != 0xffff)
    int64_t* rcx_2
    
    if (r8.d s< 3)
        int64_t var_58
        sub_14137b7f0(&var_58, arg2)
        sub_141083500(arg2, &result_4, arg1 + 0x118, var_58)
        rcx_2 = &var_58
    else
        int64_t var_60
        sub_14137baa0(&var_60, arg2, 0xf, r8.d)
        sub_141083500(arg2, &result_4, arg1 + 0x118, var_60)
        rcx_2 = &var_60
    
    rdx, r8, r9_1 = sub_1405d1550(rcx_2)

int64_t* rax = sub_14139bef0(arg2)
bool cond:0 = *(arg1 + 0x11c) u<= 0
int64_t* arg_8 = rax

if (not(cond:0))
    void* rcx_6 = arg5
    
    if (rcx_6 == 0)
        rcx_6 = data_143f10dc8
    
    int64_t r15_1 = *(rcx_6 + 0x10)
    int64_t* r14_1 = data_1439b54b8
    
    if (*(arg1 + 0x11c) u> 0)
        uint32_t r12_1 = zx.d(*(arg1 + 0x11a))
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rcx_10[5]
        
        if (rax_1 u> *(arg2 + 0x38))
            rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rcx_10[5]
        
        *(arg2 + 0x30) = rax_1
        void**** rax_2 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_2 = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        rcx_10[1] = 0
        rcx_10[3].d = r12_1
        *rcx_10 = &data_142d5a070
        rcx_10[2] = result_5
        rcx_10[4] = r15_1
    
    if (*(arg1 + 0x120) u> 0)
        uint32_t r15_2 = zx.d(*(arg1 + 0x11e))
        char rax_5
        rax_5, rdx, r8, r9_1 = (*(*r14_1 + 8))(r14_1)
        
        if (rax_5 == 0)
            void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_6 = &rcx_17[5]
            
            if (rax_6 u> *(arg2 + 0x38))
                rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_6 = &rcx_17[5]
            
            *(arg2 + 0x30) = rax_6
            void**** rax_7 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_7 = rcx_17
            *(arg2 + 8) = &rcx_17[1]
            rcx_17[1] = 0
            *rcx_17 = &data_142d5a080
            rcx_17[2] = result_5
            rcx_17[3].d = r15_2
            rcx_17[4] = r14_1

int64_t* r14_2 = data_14395f4d0
int64_t r15_3 = *(data_1439b7120 + 0x10)

if (*(arg1 + 0x124) u> 0)
    uint32_t r12_2 = zx.d(*(arg1 + 0x122))
    void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_23[5]
    
    if (rax_10 u> *(arg2 + 0x38))
        rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_23[5]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_23
    *(arg2 + 8) = &rcx_23[1]
    rcx_23[1] = 0
    *rcx_23 = &data_142d5a070
    rcx_23[2] = result_5
    rcx_23[3].d = r12_2
    rcx_23[4] = r15_3

if (*(arg1 + 0x128) u> 0)
    uint32_t r15_4 = zx.d(*(arg1 + 0x126))
    char rax_14
    rax_14, rdx, r8, r9_1 = (*(*r14_2 + 8))(r14_2)
    
    if (rax_14 == 0)
        void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_30[5]
        
        if (rax_15 u> *(arg2 + 0x38))
            rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_30[5]
        
        *(arg2 + 0x30) = rax_15
        void**** rax_16 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_16 = rcx_30
        *(arg2 + 8) = &rcx_30[1]
        rcx_30[1] = 0
        *rcx_30 = &data_142d5a080
        rcx_30[2] = result_5
        rcx_30[3].d = r15_4
        rcx_30[4] = r14_2

int64_t* r14_3 = data_14395f4d0
int64_t r15_5 = *(data_1439b7128 + 0x10)

if (*(arg1 + 0x12c) u> 0)
    uint32_t r12_3 = zx.d(*(arg1 + 0x12a))
    void*** rcx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_36[5]
    
    if (rax_19 u> *(arg2 + 0x38))
        rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_36[5]
    
    *(arg2 + 0x30) = rax_19
    void**** rax_20 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_20 = rcx_36
    *(arg2 + 8) = &rcx_36[1]
    rcx_36[1] = 0
    *rcx_36 = &data_142d5a070
    rcx_36[2] = result_5
    rcx_36[3].d = r12_3
    rcx_36[4] = r15_5

if (*(arg1 + 0x130) u> 0)
    uint32_t r15_6 = zx.d(*(arg1 + 0x12e))
    char rax_23
    rax_23, rdx, r8, r9_1 = (*(*r14_3 + 8))(r14_3)
    
    if (rax_23 == 0)
        void*** rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_24 = &rcx_43[5]
        
        if (rax_24 u> *(arg2 + 0x38))
            rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_24 = &rcx_43[5]
        
        *(arg2 + 0x30) = rax_24
        void**** rax_25 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_25 = rcx_43
        *(arg2 + 8) = &rcx_43[1]
        rcx_43[1] = 0
        *rcx_43 = &data_142d5a080
        rcx_43[2] = result_5
        rcx_43[3].d = r15_6
        rcx_43[4] = r14_3

int64_t arg_30
int64_t rax_27 = arg_30
uint64_t result

if (rax_27 == 0)
    result = data_1439b70c0 + 8
else
    result = rax_27 + 0x10

int64_t r15_7 = *result
int64_t* r14_4 = data_14395f4d0

if (*(arg1 + 0x134) u> 0)
    uint32_t r12_4 = zx.d(*(arg1 + 0x132))
    void*** rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_29 = &rcx_49[5]
    
    if (rax_29 u> *(arg2 + 0x38))
        rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_29 = &rcx_49[5]
    
    *(arg2 + 0x30) = rax_29
    void**** rax_30 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_30 = rcx_49
    *(arg2 + 8) = &rcx_49[1]
    rcx_49[1] = 0
    result = &data_142d5a070
    *rcx_49 = &data_142d5a070
    rcx_49[2] = result_5
    rcx_49[3].d = r12_4
    rcx_49[4] = r15_7

if (*(arg1 + 0x138) u> 0)
    uint32_t r15_8 = zx.d(*(arg1 + 0x136))
    result, rdx, r8, r9_1 = (*(*r14_4 + 8))(r14_4)
    
    if (result.b == 0)
        void*** rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_33 = &rcx_56[5]
        
        if (rax_33 u> *(arg2 + 0x38))
            rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_33 = &rcx_56[5]
        
        *(arg2 + 0x30) = rax_33
        void**** rax_34 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_34 = rcx_56
        *(arg2 + 8) = &rcx_56[1]
        rcx_56[1] = 0
        result = &data_142d5a080
        *rcx_56 = &data_142d5a080
        rcx_56[2] = result_5
        rcx_56[3].d = r15_8
        rcx_56[4] = r14_4

if (*(arg1 + 0x13c) u> 0)
    int64_t rax_37 = arg_8[0xb]
    
    if (rax_37 == 0)
        result = data_1439b70c0 + 8
    else
        result = rax_37 + 0x10
    
    int64_t r15_9 = *result
    int64_t* r14_5 = data_14395fa10
    
    if (*(arg1 + 0x13c) u> 0)
        uint32_t r12_5 = zx.d(*(arg1 + 0x13a))
        void*** rcx_62 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_39 = &rcx_62[5]
        
        if (rax_39 u> *(arg2 + 0x38))
            rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_62 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_39 = &rcx_62[5]
        
        *(arg2 + 0x30) = rax_39
        void**** rax_40 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_40 = rcx_62
        *(arg2 + 8) = &rcx_62[1]
        rcx_62[1] = 0
        result = &data_142d5a070
        *rcx_62 = &data_142d5a070
        rcx_62[2] = result_5
        rcx_62[3].d = r12_5
        rcx_62[4] = r15_9
    
    if (*(arg1 + 0x140) u> 0)
        uint32_t r15_10 = zx.d(*(arg1 + 0x13e))
        result, rdx, r8, r9_1 = (*(*r14_5 + 8))(r14_5)
        
        if (result.b == 0)
            void*** rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_43 = &rcx_69[5]
            
            if (rax_43 u> *(arg2 + 0x38))
                rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_43 = &rcx_69[5]
            
            *(arg2 + 0x30) = rax_43
            void**** rax_44 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_44 = rcx_69
            *(arg2 + 8) = &rcx_69[1]
            rcx_69[1] = 0
            result = &data_142d5a080
            *rcx_69 = &data_142d5a080
            rcx_69[2] = result_5
            rcx_69[3].d = r15_10
            rcx_69[4] = r14_5

if (*(arg1 + 0x144) u> 0)
    sub_14139bef0(arg2)
    result, rdx, r8, r9_1 = sub_1422c6ca0(arg2)
    int64_t* r14_6 = data_14395f4d0
    
    if (result == 0)
        result = data_1439b70c8
    
    int64_t r12_6 = *(result + 0x10)
    
    if (*(arg1 + 0x144) u> 0)
        uint32_t r15_11 = zx.d(*(arg1 + 0x142))
        void*** rcx_77 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_46 = &rcx_77[5]
        
        if (rax_46 u> *(arg2 + 0x38))
            rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_77 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_46 = &rcx_77[5]
        
        *(arg2 + 0x30) = rax_46
        void**** rax_47 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_47 = rcx_77
        *(arg2 + 8) = &rcx_77[1]
        rcx_77[1] = 0
        result = &data_142d5a070
        *rcx_77 = &data_142d5a070
        rcx_77[2] = result_5
        rcx_77[3].d = r15_11
        rcx_77[4] = r12_6
    
    if (*(arg1 + 0x148) u> 0)
        uint32_t r15_12 = zx.d(*(arg1 + 0x146))
        result, rdx, r8, r9_1 = (*(*r14_6 + 8))(r14_6)
        
        if (result.b == 0)
            void*** rcx_84 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_50 = &rcx_84[5]
            
            if (rax_50 u> *(arg2 + 0x38))
                rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_84 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_50 = &rcx_84[5]
            
            *(arg2 + 0x30) = rax_50
            void**** rax_51 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_51 = rcx_84
            *(arg2 + 8) = &rcx_84[1]
            rcx_84[1] = 0
            result = &data_142d5a080
            *rcx_84 = &data_142d5a080
            rcx_84[2] = result_5
            rcx_84[3].d = r15_12
            rcx_84[4] = r14_6

if (*(arg1 + 0x152) u> 0)
    int32_t rax_53
    
    if (arg6 == 0)
        rax_53 = 0
    else
        rax_53 = arg6[1].d
    
    arg_30.d = rax_53
    result, rdx, r8, r9_1 = sub_1405eb490(arg2, &result_4, arg1 + 0x14a, &arg_30, 0)
    
    if (arg6 != 0)
        int64_t r15_13 = *arg6
        
        if (r15_13 != 0 && *(arg1 + 0x152) u> 0)
            uint32_t r12_7 = zx.d(*(arg1 + 0x150))
            void*** rcx_91 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_54 = &rcx_91[5]
            
            if (rax_54 u> *(arg2 + 0x38))
                rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_91 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_54 = &rcx_91[5]
            
            *(arg2 + 0x30) = rax_54
            void**** rax_55 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_55 = rcx_91
            *(arg2 + 8) = &rcx_91[1]
            rcx_91[1] = 0
            result = &data_142d5ebf8
            *rcx_91 = &data_142d5ebf8
            rcx_91[2] = result_5
            rcx_91[3].d = r12_7
            rcx_91[4] = r15_13

if (*(arg1 + 0x166) u> 0 && arg6 != 0)
    void* rax_57 = arg6[7]
    
    if (rax_57 == 0)
        rax_57 = data_143f10dc8
    
    int64_t r12_8 = *(rax_57 + 0x10)
    int64_t* r15_14 = data_14395fa10
    
    if (*(arg1 + 0x166) u> 0)
        uint32_t r13 = zx.d(*(arg1 + 0x164))
        void*** rcx_97 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_59 = &rcx_97[5]
        
        if (rax_59 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_97 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_59 = &rcx_97[5]
        
        *(arg2 + 0x30) = rax_59
        void**** rax_60 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_60 = rcx_97
        *(arg2 + 8) = &rcx_97[1]
        rcx_97[1] = 0
        *rcx_97 = &data_142d5a070
        uint64_t result_2 = result_1
        rcx_97[3].d = r13
        result_5 = result_2
        rcx_97[2] = result_2
        rcx_97[4] = r12_8
    
    if (*(arg1 + 0x120) u> 0)
        uint32_t r12_9 = zx.d(*(arg1 + 0x11e))
        
        if ((*(*r15_14 + 8))(r15_14) == 0)
            void*** rcx_104 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_64 = &rcx_104[5]
            
            if (rax_64 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_104 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_64 = &rcx_104[5]
            
            *(arg2 + 0x30) = rax_64
            void**** rax_65 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_65 = rcx_104
            *(arg2 + 8) = &rcx_104[1]
            rcx_104[1] = 0
            *rcx_104 = &data_142d5a080
            rcx_104[2] = result_5
            rcx_104[3].d = r12_9
            rcx_104[4] = r15_14
    
    int32_t rax_67
    rax_67.b = arg6[7] != 0
    arg_8.d = rax_67
    result, rdx, r8, r9_1 = sub_1405eb490(arg2, &result_4, arg1 + 0x176, &arg_8, 0)

if (*(arg1 + 0x156) u> 0 && arg6 != 0)
    result = arg6[2]
    
    if (result != 0)
        int64_t r12_10 = *(result + 8)
        int64_t* r15_15 = data_14395fa10
        
        if (*(arg1 + 0x156) u> 0)
            uint32_t r13_1 = zx.d(*(arg1 + 0x154))
            void*** rcx_111 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_68 = &rcx_111[5]
            
            if (rax_68 u> *(arg2 + 0x38))
                rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_111 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_68 = &rcx_111[5]
            
            *(arg2 + 0x30) = rax_68
            void**** rax_69 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_69 = rcx_111
            *(arg2 + 8) = &rcx_111[1]
            rcx_111[1] = 0
            *rcx_111 = &data_142d5a070
            result = result_1
            rcx_111[2] = result
            rcx_111[3].d = r13_1
            rcx_111[4] = r12_10
        
        if (*(arg1 + 0x120) u> 0)
            uint32_t r12_11 = zx.d(*(arg1 + 0x11e))
            result, rdx, r8, r9_1 = (*(*r15_15 + 8))(r15_15)
            
            if (result.b == 0)
                void*** rcx_118 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_72 = &rcx_118[5]
                
                if (rax_72 u> *(arg2 + 0x38))
                    rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_118 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_72 = &rcx_118[5]
                
                *(arg2 + 0x30) = rax_72
                void**** rax_73 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_73 = rcx_118
                *(arg2 + 8) = &rcx_118[1]
                rcx_118[1] = 0
                *rcx_118 = &data_142d5a080
                result = result_1
                rcx_118[2] = result
                rcx_118[3].d = r12_11
                rcx_118[4] = r15_15

uint64_t result_3

if (*(arg1 + 0x15a) u<= 0 || arg6 == 0)
    result_3 = result_1
else
    result = arg6[3]
    
    if (result == 0)
        result_3 = result_1
    else
        int64_t r12_12 = *(result + 8)
        int64_t* r15_16 = data_14395fa10
        
        if (*(arg1 + 0x15a) u> 0)
            uint32_t r13_2 = zx.d(*(arg1 + 0x158))
            void*** rcx_124 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_75 = &rcx_124[5]
            
            if (rax_75 u> *(arg2 + 0x38))
                rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_124 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_75 = &rcx_124[5]
            
            *(arg2 + 0x30) = rax_75
            void**** rax_76 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_76 = rcx_124
            *(arg2 + 8) = &rcx_124[1]
            rcx_124[1] = 0
            *rcx_124 = &data_142d5a070
            result = result_1
            rcx_124[2] = result
            rcx_124[3].d = r13_2
            rcx_124[4] = r12_12
        
        if (*(arg1 + 0x120) u<= 0)
            result_3 = result_1
        else
            uint32_t r12_13 = zx.d(*(arg1 + 0x11e))
            result, rdx, r8, r9_1 = (*(*r15_16 + 8))(r15_16)
            
            if (result.b != 0)
                result_3 = result_1
            else
                void*** rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_79 = &rcx_131[5]
                
                if (rax_79 u> *(arg2 + 0x38))
                    rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_79 = &rcx_131[5]
                
                *(arg2 + 0x30) = rax_79
                void**** rax_80 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                result_3 = result_1
                *rax_80 = rcx_131
                *(arg2 + 8) = &rcx_131[1]
                rcx_131[1] = 0
                result = &data_142d5a080
                *rcx_131 = &data_142d5a080
                rcx_131[2] = result_3
                rcx_131[3].d = r12_13
                rcx_131[4] = r15_16

if (*(arg1 + 0x15e) u> 0 && arg6 != 0)
    void* r14_7 = arg6[5]
    
    if (r14_7 != 0)
        void* var_50 = r14_7
        *(r14_7 + 8) += 1
        result_3 = result_4
        
        if (*(arg1 + 0x15e) u> 0)
            uint32_t r12_14 = zx.d(*(arg1 + 0x15c))
            void*** rcx_137 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_82 = &rcx_137[5]
            
            if (rax_82 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_137 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_82 = &rcx_137[5]
            
            *(arg2 + 0x30) = rax_82
            void** rax_83 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_83 = rcx_137
            *(arg2 + 8) = &rcx_137[1]
            rcx_137[1] = 0
            *rcx_137 = &data_142d5ebf8
            rcx_137[2] = result_3
            rcx_137[3].d = r12_14
            rcx_137[4] = r14_7
        
        result, rdx, r8, r9_1 = sub_1405ec8a0(&var_50)

if (*(arg1 + 0x162) u> 0 && arg6 != 0)
    void* rbx_2 = arg6[6]
    
    if (rbx_2 != 0)
        void* var_48 = rbx_2
        *(rbx_2 + 8) += 1
        result_3 = result_4
        
        if (*(arg1 + 0x162) u> 0)
            uint32_t r15_17 = zx.d(*(arg1 + 0x160))
            void*** rcx_144 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_85 = &rcx_144[5]
            
            if (rax_85 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_144 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_85 = &rcx_144[5]
            
            *(arg2 + 0x30) = rax_85
            void**** rax_86 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_86 = rcx_144
            *(arg2 + 8) = &rcx_144[1]
            rcx_144[1] = 0
            *rcx_144 = &data_142d5ebf8
            rcx_144[2] = result_3
            rcx_144[3].d = r15_17
            rcx_144[4] = rbx_2
        
        result, rdx, r8, r9_1 = sub_1405ec8a0(&var_48)

if (*(arg1 + 0x16a) u> 0)
    void* rax_88 = data_1439b7108
    
    if (rax_88 == 0)
        rax_88 = data_143f111a8
    
    int64_t r15_18 = *(rax_88 + 0x10)
    result = rax_88 + 0x10
    int64_t* r14_8 = data_14395f4d0
    
    if (*(arg1 + 0x16a) u> 0)
        uint32_t r12_15 = zx.d(*(arg1 + 0x168))
        void*** rcx_151 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_89 = &rcx_151[5]
        
        if (rax_89 u> *(arg2 + 0x38))
            rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_151 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_89 = &rcx_151[5]
        
        *(arg2 + 0x30) = rax_89
        void**** rax_90 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_90 = rcx_151
        *(arg2 + 8) = &rcx_151[1]
        rcx_151[1] = 0
        result = &data_142d5a070
        *rcx_151 = &data_142d5a070
        rcx_151[2] = result_3
        rcx_151[3].d = r12_15
        rcx_151[4] = r15_18
    
    if (*(arg1 + 0x16e) u> 0)
        uint32_t r15_19 = zx.d(*(arg1 + 0x16c))
        result, rdx, r8, r9_1 = (*(*r14_8 + 8))(r14_8)
        
        if (result.b == 0)
            void*** rcx_158 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_93 = &rcx_158[5]
            
            if (rax_93 u> *(arg2 + 0x38))
                rdx, r8, r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_158 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_93 = &rcx_158[5]
            
            *(arg2 + 0x30) = rax_93
            void**** rax_94 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_94 = rcx_158
            *(arg2 + 8) = &rcx_158[1]
            rcx_158[1] = 0
            result = &data_142d5a080
            *rcx_158 = &data_142d5a080
            rcx_158[2] = result_3
            rcx_158[3].d = r15_19
            rcx_158[4] = r14_8

if (*(arg1 + 0x174) u> 0)
    bool var_6c
    bool* rax_96 = sub_1411e1150(&var_6c)
    int32_t var_74 = *rax_96
    char var_70_1 = rax_96[4]
    result_1.d = sub_1411fc260(&var_74, rdx, r8, r9_1)
    result = sub_1405eb490(arg2, &result_4, arg1 + 0x170, &result_1, 0)

if (*(arg1 + 0x180) u<= 0)
    return result

int32_t var_78 = sub_1411e11b0()
return sub_1405eb490(arg2, &result_4, arg1 + 0x17c, &var_78, 0)
