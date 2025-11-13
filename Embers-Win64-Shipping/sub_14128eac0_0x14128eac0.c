// 函数: sub_14128eac0
// 地址: 0x14128eac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15
void* var_30 = r15
void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
sub_141986d90(arg2)
int64_t* rcx_1 = *(arg1 + 8)
float zmm0[0x4] = sub_141422b30(arg1, (*(*rcx_1 + 0x18))(rcx_1, arg2, 0))

if (sub_1414e0700(*(arg1 + 8), arg1 + 0x38) == 0)
    sub_1414dbfe0(*(arg1 + 8), zmm0)
else
    int32_t i = 0
    int64_t* r14_1 = 0xfb8
    
    do
        int64_t* rcx_4 = *(arg1 + 8)
        r15 = *(r14_1 + rcx_4)
        
        if (r15 != 0)
            sub_1414d6f90((*(*rcx_4 + 0x1d0))(), i, r15)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< 2)

sub_140b33630("RenderOther")

if ((*(arg1 + 0x3c) & 0x8000) != 0)
    int128_t zmm2_1
    int128_t zmm3_1
    zmm2_1, zmm3_1 = sub_141433870()
    void*** rcx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_10[2]
    
    if (rax_6 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x18)
        rcx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_10[2]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_6
    *data_143f02ba0 = rcx_10
    data_143f02ba0 = &rcx_10[1]
    rcx_10[1] = 0
    *rcx_10 = &data_142f51db0
    
    if (*(arg2 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3_1)
    
    int32_t rax_9 = sub_1422e48a0(arg1 + 0x10)
    int64_t* r14_2 = *(arg1 + 0xa0)
    int64_t* var_3b0_1 = r14_2
    char rax_10 = sub_1422eb710()
    int64_t* rcx_14 = *(arg1 + 0x28)
    uint64_t r12
    r12.b = rax_10 == 0
    char var_3c5_1 = r12.b
    int64_t rdx_7 = *rcx_14
    int64_t rax_11 = (*(rdx_7 + 8))(rcx_14, rdx_7)
    int64_t* rcx_15 = *(arg1 + 0x28)
    int64_t r8_2 = *rcx_15
    int32_t* rax_15
    void var_308
    
    if (*rax_11 == 0)
        rax_15 = (*(r8_2 + 0x18))(rcx_15, &var_308, r8_2)
    else
        void* rcx_16 = *(*(r8_2 + 8))(rcx_15)
        int32_t var_374 = *(rcx_16 + 0x60)
        int32_t var_370_1 = *(rcx_16 + 0x64)
        rax_15 = &var_374
    int64_t rax_16 = *rax_15
    char rdx_8
    
    if (rax_16.d s> *(arg1 + 0x3c8) || (rax_16 u>> 0x20).d s> *(arg1 + 0x3cc))
        rdx_8 = 1
    else
        rdx_8 = 0
    
    char rax_19
    
    if ((*(*r14_2 + 0x2c) & 0x30000) != 0x30000 && rdx_8 == 0)
        rax_19 = sub_1405949a0()
    
    if ((*(*r14_2 + 0x2c) & 0x30000) == 0x30000 || rdx_8 != 0 || rax_19 != 0
            || *(r14_2 + 0xd72) != rax_19 || *(r14_2 + 0xd74) != rax_19)
        r15.b = 1
    else
        r15.b = 0
    
    char var_3c7_1 = r15.b
    char rax_20 = sub_141294ed0(arg1, arg2, r14_2)
    
    if (*(data_143e8ef88 + 4) == 1 || rax_20 != 0)
        r14_2.b = 1
    else if (r15.b == 0)
        r14_2.b = 0
    else if (*(r14_2 + 0x395c) s> 0 || *(r14_2 + 0xd74) != rax_20)
        r14_2.b = 1
    else if (*(r14_2 + 0xd72) == rax_20)
        r14_2.b = 0
    else
        int32_t rax_21 = *(arg1 + 0x58)
        
        if (rax_21 == 0 || rax_21 == 3)
            r14_2.b = 1
        else
            r14_2.b = 0
    
    char var_3c6_1 = r14_2.b
    char var_3c3_1
    
    if (r12.b != 0)
        var_3c3_1 = 0
    
    if (r12.b == 0 || r15.b != 0)
        var_3c3_1 = 1
    
    int32_t rax_22 = data_1439b7180
    
    if (rax_22 == 4)
        sub_1414cef20(&data_1439b70b0, arg2)
        sub_1414d12e0(&data_1439b70b0, arg2, rax_9)
    else if (rax_9 s> rax_22)
        sub_1414d12e0(&data_1439b70b0, arg2, rax_9)
    
    int64_t* var_388_1 = &data_143ec4c60
    data_143ec5081 = r14_2.b
    int128_t zmm2_2
    int128_t zmm3_2
    zmm2_2, zmm3_2 = sub_1413915f0(&data_143ec4c60, arg2, arg1)
    char rax_23 = sub_1419ba670(rax_9)
    
    if (rax_23 != 0)
        sub_1414fecd0(__iob_func(), arg2, zmm2_2, zmm3_2)
        sub_141501100(__iob_func())
    
    sub_1419ba450(&data_1439c9260, arg2)
    int128_t zmm2_3
    int128_t zmm3_3
    zmm2_3, zmm3_3 = sub_14126d570(arg1, arg2)
    void*** rcx_29 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_26 = &rcx_29[2]
    
    if (rax_26 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x18)
        rcx_29 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_26 = &rcx_29[2]
    
    data_143f02bac += 1
    int64_t r14_3 = 0
    data_143f02bc8 = rax_26
    *data_143f02ba0 = rcx_29
    data_143f02ba0 = &rcx_29[1]
    *rcx_29 = &data_142f51db0
    rcx_29[1] = 0
    int32_t rbx_2 = data_143f029c8
    sub_140b34200("FlushRHIThreadFlushResourcesTotal", rbx_2)
    
    if (data_143f02bac u> 0)
        j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2_3, zmm3_3)
    
    sub_14198b230()
    sub_14198b3f0()
    int64_t rdx_19
    rdx_19.b = 1
    sub_14198b7d0()
    sub_141971910()
    int128_t zmm2_4
    int128_t zmm3_4
    zmm2_4, zmm3_4 = sub_1419712f0(0)
    sub_140b38680("FlushRHIThreadFlushResourcesTotal", rbx_2)
    r12.b = 0
    uint64_t* rbx_4 = data_143f5b298 + 0x9c0
    *(rbx_4 + 0x14) += 1
    int32_t rax_29 = rbx_4[1].d
    int32_t rcx_35 = *(rbx_4 + 0x14)
    int64_t r15_1 = sx.q(rax_29 - 1)
    
    if (rax_29 - 1 s>= 0)
        int64_t r14_5 = r15_1 << 4
        int64_t temp1_1
        
        do
            uint64_t rcx_36 = *rbx_4
            
            if (*(r14_5 + rcx_36 + 8) == 0)
                r12.b = 1
            else
                int64_t* rcx_37 = *(r14_5 + rcx_36)
                
                if (rcx_37 == 0)
                    r12.b = 1
                else if ((*(*rcx_37 + 0x50))(rcx_37) == 0)
                    r12.b = 1
            
            r14_5 -= 0x10
            temp1_1 = r15_1
            r15_1 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_35 = *(rbx_4 + 0x14)
        r14_3 = 0
    
    *(rbx_4 + 0x14) = rcx_35 - 1
    
    if (r12.b != 0 && rcx_35 - 1 s<= 0)
        r12 = zx.q(rbx_4[1].d)
        r15_1 = 0
        int32_t i_1 = r12.d
        
        if (r12.d s> 0)
            do
                uint64_t rcx_38 = *rbx_4
                
                if (*(r14_3 + rcx_38 + 8) == 0)
                    sub_1405a4880(rbx_4, r15_1.d, 1, 1)
                else
                    int64_t* rcx_39 = *(r14_3 + rcx_38)
                    
                    if (rcx_39 == 0)
                        sub_1405a4880(rbx_4, r15_1.d, 1, 1)
                    else if ((*(*rcx_39 + 0x20))(rcx_39) != 0)
                        sub_1405a4880(rbx_4, r15_1.d, 1, 1)
                    else
                        r15_1 = zx.q(r15_1.d + 1)
                        r14_3 += 0x10
                
                i_1 = rbx_4[1].d
            while (r15_1.d s< i_1)
        
        int32_t rax_36 = i_1 * 2
        
        if (rax_36 s<= 2)
            rax_36 = 2
        
        rbx_4[2].d = rax_36
        
        if (r12.d s> rax_36 && *(rbx_4 + 0xc) != i_1)
            sub_1405a5410(rbx_4, i_1)
    
    sub_1419991e0(&data_143e8efc0)
    sub_1419995d0(&data_143e8efd0)
    sub_141999340(&data_143e8efe0)
    
    if (*(arg2 + 0x14) u> 0)
        zmm2_4, zmm3_4 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_4, zmm3_4)
    
    sub_141986d90(arg2)
    char rax_37
    int64_t r9_2
    rax_37, r9_2 = sub_1414e0700(*(arg1 + 8), arg1 + 0x38)
    
    if (rax_37 != 0)
        r9_2, zmm2_4, zmm3_4 = sub_1414d88e0(arg1, arg2)
    
    if (rax_23 != 0)
        r9_2, zmm2_4 = sub_14151c640(__iob_func(), arg2, rax_9, *(arg1 + 8))
    
    int64_t* rcx_46 = *(*(arg1 + 8) + 0x18)
    
    if (rcx_46 != 0 && (*(arg1 + 0x3c) & 2) != 0)
        r9_2.b = *(*(arg1 + 0xa0) + 0xd75) == 0
        (*(*rcx_46 + 0x68))(rcx_46, arg2, 0, r9_2)
        int64_t* rcx_47 = *(*(arg1 + 8) + 0x18)
        void* rax_43 = (*(*rcx_47 + 0x78))(rcx_47)
        
        if (rax_43 != 0)
            zmm2_4, zmm3_4 = sub_142062b90(rax_43, arg2)
    
    void*** rcx_51 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_44 = &rcx_51[2]
    
    if (rax_44 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x18)
        rcx_51 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_44 = &rcx_51[2]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_44
    *data_143f02ba0 = rcx_51
    data_143f02ba0 = &rcx_51[1]
    rcx_51[1] = 0
    *rcx_51 = &data_142f51db0
    
    if (*(arg2 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg2, zmm2_4, zmm3_4)
    
    sub_141986d90(arg2)
    int128_t zmm2_5
    int128_t zmm3_5
    zmm2_5, zmm3_5 = sub_141497200(arg1, arg2)
    void*** rcx_58 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_47 = &rcx_58[2]
    
    if (rax_47 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x18)
        rcx_58 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_47 = &rcx_58[2]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_47
    *data_143f02ba0 = rcx_58
    data_143f02ba0 = &rcx_58[1]
    rcx_58[1] = 0
    *rcx_58 = &data_142f51db0
    
    if (*(arg2 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg2, zmm2_5, zmm3_5)
    
    bool cond:2_1 = *(arg1 + 0xa8) s<= 0
    int32_t rcx_61 = 0
    int32_t var_394_1 = 0
    int64_t r13_1 = 0
    int64_t var_3b8_1 = 0
    int32_t i_2 = 0
    int64_t var_3a0 = 0
    int32_t var_398_1 = 0
    
    if (not(cond:2_1))
        do
            int64_t r14_6 = sx.q(var_398_1)
            int32_t rax_51 = (r14_6 + 1).d
            r15_1 = sx.q(i_2) * 0x5240 + *(arg1 + 0xa0)
            var_398_1 = rax_51
            
            if (rax_51 s> rcx_61)
                sub_1405a4d70(&var_3a0)
                rcx_61 = var_394_1
                r13_1 = var_3a0
            
            i_2 += 1
            *(r13_1 + (r14_6 << 3)) = r15_1
        while (i_2 s< *(arg1 + 0xa8))
        
        var_3b8_1 = r13_1
    
    if (*(arg1 + 0x3d9) != 0)
        sub_141425cb0(arg1, arg2)
    
    r15_1.b = 9
    void* const var_3a8_1 = nullptr
    r12.b = 0x88
    int32_t r14_7 = *(*sub_14139d690(var_388_1) + 0x38)
    void* var_390_1
    void* const var_380
    void* r13_3
    int64_t* r14_8
    
    if (var_3c5_1 == 0 || var_3c7_1 != 0)
        var_390_1 = *sub_14139d690(var_388_1)
        int64_t var_348
        int32_t rax_71
        int32_t rbx_13
        
        if (r14_7 u<= 1)
            rax_71 = 8
            var_3a8_1 = nullptr
            rbx_13 = 0
            var_348 = 0
        else
            void* rcx_82 = *sub_14139d700(var_388_1)
            var_3a8_1 = rcx_82
            var_380 = rcx_82
            
            if (rcx_82 != 0)
                *(rcx_82 + 8) += 1
                var_3b8_1 = var_3a0
                var_3a8_1 = var_380
            
            rbx_13 = 4
            rax_71 = 0
        
        if (rax_71 != 0)
            sub_1405d1550(&var_348)
        
        if (rbx_13 != 0)
            sub_1405d1550(&var_380)
        
        r15_1.b = r14_7 u> 1
        r15_1.b += 9
        r13_3 = *(var_388_1[8] + 8)
        
        if (rax_20 != 0)
            r15_1.b = 9
            r12.b = 0x99
        
        if (var_3c6_1 != 0)
            r12 = zx.q(r12.b)
            
            if (r14_7 u<= 1)
                r12 = 0x99
        
        r14_8 = var_3b0_1
    else
        void* rcx_68
        void* rdx_36
        void** rbx_7
        
        if (r14_7 u<= 1)
            void* rax_57 = sub_14141f6b0(arg1, var_388_1)
            rcx_68 = rax_57
            var_390_1 = rax_57
            rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_36 = &rbx_7[1]
            
            if (rdx_36 u> *(arg2 + 0x38))
                sub_140b0e3d0(&arg2[0x30], 0x10)
                rcx_68 = rax_57
                rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rdx_36 = &rbx_7[1]
        else
            int64_t* rax_54
            
            if (*(var_3b0_1 + 0xd7c) == 0)
                rax_54 = sub_14139d690(var_388_1)
            else
                rax_54 = var_388_1[0x33] + 8
            
            var_390_1 = *rax_54
            void* rax_56 = sub_14141f6b0(arg1, var_388_1)
            r15_1.b = 0xa
            var_3a8_1 = rax_56
            rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_68 = rax_56
            rdx_36 = &rbx_7[1]
            
            if (rdx_36 u> *(arg2 + 0x38))
                sub_140b0e3d0(&arg2[0x30], 0x10)
                rcx_68 = rax_56
                rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rdx_36 = &rbx_7[1]
        
        *(arg2 + 0x30) = rdx_36
        *rbx_7 = rcx_68
        void*** rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_58 = &rcx_74[5]
        
        if (rax_58 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x30)
            rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_58 = &rcx_74[5]
        
        r14_8 = var_3b0_1
        *(arg2 + 0x30) = rax_58
        void**** rax_59 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_59 = rcx_74
        *(arg2 + 8) = &rcx_74[1]
        rcx_74[1] = 0
        rcx_74[4].d = 1
        rcx_74[3] = rbx_7
        rcx_74[2].d = 1
        *rcx_74 = &data_142d549c8
        void* var_368
        void* var_360
        int32_t rax_63
        int32_t rbx_12
        
        if (*(r14_8 + 0xd7c) == 0)
            r13_3 = *(var_388_1[8] + 8)
            var_368 = r13_3
            
            if (r13_3 != 0)
                *(r13_3 + 8) += 1
                r13_3 = var_368
                var_3b8_1 = var_3a0
            
            rbx_12 = 0
            rax_63 = 2
        else
            r13_3 = *(var_388_1[0x34] + 8)
            var_360 = r13_3
            
            if (r13_3 != 0)
                *(r13_3 + 8) += 1
                r13_3 = var_360
                var_3b8_1 = var_3a0
            
            rbx_12 = 1
            rax_63 = 0
        
        if (rax_63 != 0)
            sub_1405d1550(&var_368)
        
        if (rbx_12 != 0)
            sub_1405d1550(&var_360)
    
    void* const rcx_85 = nullptr
    var_380 = nullptr
    
    if (*(var_388_1 + 0x422) != 0 && *(r14_8 + 0xd72) == 0 && *(r14_8 + 0xd74) == 0)
        rcx_85 = *(var_388_1[0x3a] + 0x10)
        var_380 = rcx_85
    
    int32_t rbx_14 = 0
    int32_t r14_9 = 0
    int128_t zmm1_1 = data_142d3f5a0
    int64_t var_1b4_1 = 0
    void* var_288 = var_390_1
    int32_t var_1ac
    __builtin_memset(&var_1ac, 0xff, 0x14)
    int128_t var_198_1 = zmm1_1
    int64_t var_188
    __builtin_memset(&var_188, 0, 0x1a)
    void* const var_280_1 = var_3a8_1
    int32_t var_278_1 = 0xffffffff
    char var_274_1 = 0
    char var_273_1 = r15_1.b
    void* var_1c8_1 = r13_3
    int16_t var_170
    var_170:1.b = *(var_390_1 + 0x38) u> 1
    int64_t var_1c0_1 = 0
    char var_1b8_1 = r12.b
    var_1b4_1.d = 0x22
    int64_t var_180
    sub_1408c8cf0(&var_180, rcx_85)
    void var_270
    memset(&var_270, 0, 0xa8)
    int64_t r10_2 = sx.q(*(arg1 + 0xa8))
    int32_t r8_9 = 0
    int64_t r9_4 = 0
    int64_t var_178
    var_178:7.b = 1
    
    if (r10_2 s>= 2)
        void* rcx_89 = *(arg1 + 0xa0) + 0x4fe8
        int64_t i_10 = ((r10_2 - 2) u>> 1) + 1
        r9_4 = i_10 * 2
        int64_t i_3
        
        do
            int32_t rax_77 = *(rcx_89 + 0x28) + *rcx_89
            rcx_89 += 0xa480
            rbx_14 += rax_77
            r14_9 += *(rcx_89 - 0x5218) + *(rcx_89 - 0x5240)
            i_3 = i_10
            i_10 -= 1
        while (i_3 != 1)
    
    if (r9_4 s< r10_2)
        void* rax_81 = r9_4 * 0x5240 + *(arg1 + 0xa0)
        r8_9 = *(rax_81 + 0x5010) + *(rax_81 + 0x4fe8)
    
    int32_t rax_82 = rbx_14 + r14_9
    var_178.d = r8_9 + rax_82
    var_178:4.b = r8_9 != neg.d(rax_82)
    var_178:6.b = *(var_3b0_1 + 0xd7c)
    sub_1419ba670(rax_9) != 0 && sub_141270f20(sub_1422e5a30(var_3b0_1)) == 0
    int64_t r14_12 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_87 = r14_12 + 0x28
    
    if (rax_87 u> *(arg2 + 0x38))
        sub_140b0e3d0(&arg2[0x30], 0x2a)
        r14_12 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_87 = r14_12 + 0x28
    
    wchar16 const* const rcx_95 = u"SceneColorRendering"
    *(arg2 + 0x30) = rax_87
    wchar16 const i_4
    
    do
        i_4 = *rcx_95
        *(r14_12 - u"SceneColorRendering" + rcx_95) = i_4
        rcx_95 = &rcx_95[1]
    while (i_4 != 0)
    void*** rcx_98 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_88 = &rcx_98[0x27]
    
    if (rax_88 u> *(arg2 + 0x38))
        sub_140b0e3d0(&arg2[0x30], 0x140)
        rcx_98 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_88 = &rcx_98[0x27]
    
    *(arg2 + 0x30) = rax_88
    void**** rax_89 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_89 = rcx_98
    *(arg2 + 8) = &rcx_98[1]
    sub_1405d11b0(rcx_98, &var_288, r14_12)
    arg2[0x1c4] = 1
    sub_1405d19b0(arg2, &var_288)
    arg2[0x178] = var_178:7.b
    arg2[0x179] = 0
    arg2[0x1c4] = 1
    sub_141986d90(arg2)
    sub_1411038f0(arg1, arg2)
    sub_141986d90(arg2)
    int32_t var_330_1 = var_398_1
    int128_t var_2f8 = var_3b8_1.o
    int128_t zmm2_6
    int128_t zmm3_6
    zmm2_6, zmm3_6 = sub_1412913d0(arg1, arg2, &var_2f8)
    
    if (*(arg2 + 0x14) u> 0)
        zmm2_6, zmm3_6 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_6, zmm3_6)
    
    int32_t r15_3 = *(data_143e8efa0 + 4)
    int32_t var_3c0_2 = r15_3
    
    if (r15_3 == 0)
        sub_141986d90(arg2)
        
        if (sub_14141d2d0(arg1, *(arg1 + 0x3b0)) != 0)
            zmm2_6, zmm3_6 = sub_141416bb0(arg1, arg2, 1)
            sub_14141e940(arg1, arg2, zmm2_6, zmm3_6)
        
        if (*(arg2 + 0x14) u> 0)
            zmm2_6, zmm3_6 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_6, zmm3_6)
    
    sub_140b33630("ViewExtensionPostRenderBasePass")
    int32_t i_5 = 0
    
    if (*(arg1 + 0x78) s> 0)
        int32_t rax_96 = *(arg1 + 0x18)
        int64_t* r15_4 = nullptr
        
        do
            int32_t r14_15 = 0
            
            if (rax_96 s> 0)
                do
                    int64_t* rcx_111 = *(r15_4 + *(arg1 + 0x70))
                    int64_t r9_5 = *rcx_111
                    (*(r9_5 + 0x40))(rcx_111, arg2, sx.q(r14_15) * 0x5240 + *(arg1 + 0xa0), r9_5)
                    rax_96 = *(arg1 + 0x18)
                    r14_15 += 1
                while (r14_15 s< rax_96)
            
            i_5 += 1
            r15_4 = &r15_4[2]
        while (i_5 s< *(arg1 + 0x78))
        
        r15_3 = var_3c0_2
    
    sub_140b37f60("ViewExtensionPostRenderBasePass")
    void*** rcx_114 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_99 = &rcx_114[2]
    
    if (rax_99 u> *(arg2 + 0x38))
        sub_140b0e3d0(&arg2[0x30], 0x18)
        rcx_114 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_99 = &rcx_114[2]
    
    *(arg2 + 0x30) = rax_99
    int64_t* rax_100 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_100 = rcx_114
    *(arg2 + 8) = &rcx_114[1]
    rcx_114[1] = 0
    *rcx_114 = &data_142f51da0
    arg2[0x179] += 1
    
    if (rax_20 != 0)
        sub_141096650(arg2)
    
    sub_141986d90(arg2)
    
    if (rax_20 != 0)
        zmm2_6, zmm3_6 = sub_141262490(arg1, arg2, var_3b0_1)
        int32_t rdx_60 = 0x21
        char rcx_121 = 0x44
        
        if (*(arg1 + 0x3d8) == 0)
            rdx_60 = 0x11
        
        if (var_3c6_1 != 0)
            rcx_121 = 0x44
            
            if (r14_7 u<= 1)
                rcx_121 = 0x55
        
        int128_t zmm1_2 = data_142d3f5a0
        void* const var_160_1 = var_3a8_1
        void* const rax_102
        rax_102.b = var_3a8_1 != 0
        rax_102.b += 5
        char var_98_1 = rcx_121
        int32_t var_94_1 = rdx_60
        void* const rdx_61 = var_380
        bool var_4f_1 = *(var_390_1 + 0x38) u> 1
        int32_t var_90_1 = 0
        int32_t var_8c
        __builtin_memset(&var_8c, 0xff, 0x14)
        int128_t var_78_1 = zmm1_2
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x19)
        void* var_168 = var_390_1
        int32_t var_158_1 = 0xffffffff
        char var_154_1 = 0
        char var_153_1 = rax_102.b
        void* var_a8_1 = r13_3
        int64_t var_a0_1 = 0
        int64_t var_60
        sub_1408c8cf0(&var_60, rdx_61)
        void var_150
        memset(&var_150, 0, 0xa8)
        int64_t var_58
        var_58.d = 0
        int64_t r14_19 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        var_58:4.b = 0
        int64_t rax_103 = r14_19 + 0x40
        
        if (rax_103 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x42)
            r14_19 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_103 = r14_19 + 0x40
        
        wchar16 const* const rcx_125 = u"SceneColorTranslucencyRendering"
        *(arg2 + 0x30) = rax_103
        wchar16 const i_6
        
        do
            i_6 = *rcx_125
            *(rcx_125 + r14_19 - u"SceneColorTranslucencyRendering") = i_6
            rcx_125 = &rcx_125[1]
        while (i_6 != 0)
        void*** rcx_128 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_104 = &rcx_128[0x27]
        
        if (rax_104 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x140)
            rcx_128 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_104 = &rcx_128[0x27]
        
        *(arg2 + 0x30) = rax_104
        void**** rax_105 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_105 = rcx_128
        *(arg2 + 8) = &rcx_128[1]
        sub_1405d11b0(rcx_128, &var_168, r14_19)
        arg2[0x1c4] = 1
        sub_1405d19b0(arg2, &var_168)
        arg2[0x178] = var_58:7.b
        arg2[0x179] = 0
        arg2[0x1c4] = 1
        sub_1405d1550(&var_60)
    
    if (*(var_3b0_1 + 0xd75) == 0)
        if ((*(arg1 + 0x38) & 0x200) != 0)
            sub_140b33630("RenderDecals")
            zmm2_6, zmm3_6 = sub_141290230(arg1, arg2)
            sub_140b37f60("RenderDecals")
        
        if ((*(arg1 + 0x3c) & 1) != 0)
            sub_140b33630("RenderShadowProjections")
            zmm2_6, zmm3_6 = sub_141494bc0(arg1, arg2)
            sub_140b37f60("RenderShadowProjections")
    
    int64_t r12_1
    
    if ((*(arg1 + 0x3c) & 8) == 0)
        r12_1 = var_3b8_1
    else
        sub_140b33630("RenderTranslucency")
        int64_t r9_7
        
        if (var_3c5_1 == 0 || var_3c7_1 != 0)
            r9_7.b = 1
        r12_1 = var_3b8_1
        int32_t var_320_1 = var_398_1
        int128_t var_2e8 = r12_1.o
        zmm2_6, zmm3_6 = sub_141294c80(arg1, arg2, &var_2e8)
        void*** rcx_139 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_109 = &rcx_139[2]
        
        if (rax_109 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x18)
            rcx_139 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_109 = &rcx_139[2]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_109
        *data_143f02ba0 = rcx_139
        data_143f02ba0 = &rcx_139[1]
        rcx_139[1] = 0
        *rcx_139 = &data_142f51db0
        
        if (*(arg2 + 0x14) u> 0)
            zmm2_6, zmm3_6 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_6, zmm3_6)
        
        sub_140b37f60("RenderTranslucency")
    
    char r14_22
    
    if (r15_3 == 0)
        r14_22 = var_3c3_1
    else
        sub_141986d90(arg2)
        void*** rcx_145 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_112 = &rcx_145[2]
        
        if (rax_112 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x18)
            rcx_145 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_112 = &rcx_145[2]
        
        *(arg2 + 0x30) = rax_112
        int64_t* rax_113 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_113 = rcx_145
        *(arg2 + 8) = &rcx_145[1]
        *rcx_145 = &data_142dd5b50
        r14_22 = 0
        rcx_145[1] = 0
        
        if (sub_14141d2d0(arg1, *(arg1 + 0x3b0)) != 0)
            zmm2_6, zmm3_6 = sub_141416bb0(arg1, arg2, 1)
            sub_14141e940(arg1, arg2, zmm2_6, zmm3_6)
        
        if (*(arg2 + 0x14) u> 0)
            zmm2_6, zmm3_6 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_6, zmm3_6)
    
    if (var_3c5_1 == 0)
        zmm2_6, zmm3_6 = sub_14128c400(arg1, arg2)
    
    sub_141096650(arg2)
    int64_t* rcx_154 = *(*(arg1 + 8) + 0x18)
    
    if (rcx_154 != 0 && *(arg1 + 0xa8) s> 0)
        void* r8_21 = *(arg1 + 0xa0)
        char rdx_76
        
        if (*(r8_21 + 0xd75) != 0 || *(r8_21 + 0xd72) != 0 || *(r8_21 + 0xd74) != 0)
            rdx_76 = 0
        else
            rdx_76 = 1
        
        (*(*rcx_154 + 0x70))(rcx_154, arg2, *(r8_21 + 0x10), 0, 0, rdx_76, rdx_8, var_3c0_2, 
            var_3b8_1, var_3b0_1, var_3a8_1)
        int64_t* rcx_155 = *(*(arg1 + 8) + 0x18)
        void* rax_120 = (*(*rcx_155 + 0x78))(rcx_155)
        
        if (rax_120 != 0)
            sub_142062a20(rax_120, arg2)
        
        if (*(arg2 + 0x14) u> 0)
            zmm2_6, zmm3_6 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_6, zmm3_6)
    
    if (r14_22 != 0)
        void*** rcx_159 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_121 = &rcx_159[2]
        
        if (rax_121 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x18)
            rcx_159 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_121 = &rcx_159[2]
        
        *(arg2 + 0x30) = rax_121
        int64_t* rax_122 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_122 = rcx_159
        *(arg2 + 8) = &rcx_159[1]
        rcx_159[1] = 0
        *rcx_159 = &data_142dd5b50
        
        if (*(arg2 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg2, zmm2_6, zmm3_6)
    
    char r14_23
    
    if (var_3c5_1 != 0)
        r14_23 = var_3c7_1
    
    if (var_3c5_1 == 0 || r14_23 != 0)
        void** r14_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_124 = &r14_26[1]
        
        if (rax_124 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x10)
            r14_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_124 = &r14_26[1]
        
        *(arg2 + 0x30) = rax_124
        *r14_26 = var_390_1
        void*** rcx_167 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_125 = &rcx_167[5]
        
        if (rax_125 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x30)
            rcx_167 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_125 = &rcx_167[5]
        
        *(arg2 + 0x30) = rax_125
        void**** rax_126 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_126 = rcx_167
        *(arg2 + 8) = &rcx_167[1]
        rcx_167[1] = 0
        rcx_167[3] = r14_26
        r14_23 = var_3c7_1
        *rcx_167 = &data_142d549c8
        rcx_167[2].d = 1
        rcx_167[4].d = 0
    
    sub_141986d90(arg2)
    
    if (*(var_3b0_1 + 0xd7d) == 0)
        sub_141264360(arg1, arg2)
    
    if (rax_23 != 0)
        int32_t rax_128 = *(arg1 + 0xa8)
        void* r9_9 = nullptr
        void* var_298_1 = nullptr
        int32_t var_28c_1 = 4
        int32_t var_290_1 = rax_128
        void var_2d8
        
        if (rax_128 s> 4)
            sub_141104d70(&var_2d8, 0)
            rax_128 = *(arg1 + 0xa8)
            r9_9 = var_298_1
        
        int32_t i_7 = 0
        
        if (rax_128 s> 0)
            int64_t r10_3 = 0
            int64_t r8_23 = 0
            
            do
                int64_t rdx_83 = *(arg1 + 0xa0)
                void* rcx_174 = &var_2d8
                r8_23 += 0x5240
                
                if (r9_9 != 0)
                    rcx_174 = r9_9
                
                i_7 += 1
                void* rcx_175 = rcx_174 + r10_3
                r10_3 += 0x10
                *rcx_175 = *(r8_23 + rdx_83 - 0x3ca8)
                *(rcx_175 + 4) = *(r8_23 + rdx_83 - 0x3ca4)
                *(rcx_175 + 8) = *(r8_23 + rdx_83 - 0x3ca0)
                *(rcx_175 + 0xc) = *(r8_23 + rdx_83 - 0x3c9c)
                r9_9 = var_298_1
            while (i_7 s< *(arg1 + 0xa8))
        
        void* rax_133 = &var_2d8
        
        if (r9_9 != 0)
            rax_133 = r9_9
        
        void* var_318 = rax_133
        int32_t var_310_1 = var_290_1
        sub_14151b870(&var_388_1[0x3c], arg2, &var_318)
        
        if (var_298_1 != 0)
            sub_140a74f90(var_298_1)
    
    if (*(arg1 + 0x53) != 0)
        if (var_3c5_1 == 0)
            int32_t i_8 = 0
            
            if (*(arg1 + 0xa8) s> 0)
                do
                    sub_14131c350(&data_143eb2670, arg2, *(arg1 + 8), 
                        sx.q(i_8) * 0x5240 + *(arg1 + 0xa0))
                    i_8 += 1
                while (i_8 s< *(arg1 + 0xa8))
        else if (r14_23 != 0)
            int32_t i_9 = 0
            
            if (*(arg1 + 0xa8) s> 0)
                do
                    int64_t* rbx_17 = sx.q(i_9) * 0x5240 + *(arg1 + 0xa0)
                    int64_t var_3d8
                    var_3d8.b = sub_1405949a0()
                    sub_141260060(arg1, arg2, rbx_17, rdx_8, var_3d8.b)
                    i_9 += 1
                while (i_9 s< *(arg1 + 0xa8))
    
    sub_141986d90(arg2)
    int128_t zmm2_7
    int128_t zmm3_7
    zmm2_7, zmm3_7 = sub_141426bf0(arg1, arg2)
    void*** rcx_185 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_138 = &rcx_185[2]
    
    if (rax_138 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x18)
        rcx_185 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_138 = &rcx_185[2]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_138
    *data_143f02ba0 = rcx_185
    data_143f02ba0 = &rcx_185[1]
    rcx_185[1] = 0
    *rcx_185 = &data_142f51db0
    
    if (data_143f02bac u> 0)
        j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2_7, zmm3_7)
    
    sub_1405d1550(&var_180)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)

int64_t result = sub_140b37f60("RenderOther")
__security_check_cookie(rax_1 ^ &var_3f8)
return result
