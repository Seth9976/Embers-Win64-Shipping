// 函数: sub_140b0f890
// 地址: 0x140b0f890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d68
int64_t rax_1 = __security_cookie ^ &var_d68
void* var_d48 = nullptr
void* rcx = *(arg1 + 0x20)
int64_t* result_1 = arg2
int64_t var_d40 = 0
int32_t* rdi = arg4
void* r13 = arg3
int32_t rax_2 = *arg1
int32_t rdx_1 = *(rcx + 8) - rax_2

if (rdx_1 s> 0)
    sub_1408e7380(&var_d48, rdx_1)
    rcx = *(arg1 + 0x20)
    rax_2 = *arg1

int32_t* var_c58 = arg1
int32_t r12 = 0
int64_t* var_c60 = &var_d48
int32_t var_198
void var_188
int64_t* result

if (rax_2 s< *(rcx + 8))
    while (true)
        int64_t* rbx_1 = *(arg1 + 0x18)
        int64_t* r13_2 = sx.q(rax_2) * 0x58 + *rcx
        int64_t* var_d00 = r13_2
        int32_t var_d24
        sub_140910250(rbx_1, &var_d24, r13_2)
        int64_t rax_4 = sx.q(var_d24)
        int64_t rcx_3
        
        if (rax_4.d == 0xffffffff)
            rcx_3 = 0
        else
            rcx_3 = *rbx_1 + rax_4 * 0x28
        
        int64_t r9 = rcx_3 + 0x10
        
        if (rcx_3 == 0)
            r9 = 0
        
        if (r9 == 0)
            if (rdi != 0 && ((*(r13_2 + 0xc) ^ rdi[3]) | (r13_2[1].d ^ rdi[2])
                    | (*(r13_2 + 4) ^ rdi[1]) | (*rdi ^ *r13_2)) == 0)
                result_1 = arg2
                goto label_140b10d7a
            
            if (r12 == 0)
                void var_cc8
                
                if (*sub_140b162a0(*(arg1 + 0x18) + 0x50, &var_cc8, r13_2) == 0xffffffff)
                    void* rbx_3 = *(arg1 + 0x18)
                    int32_t var_d28
                    sub_140b160d0(rbx_3 + 0xf0, &var_d28, r13_2)
                    int64_t rax_25 = sx.q(var_d28)
                    int64_t rcx_22
                    
                    if (rax_25.d == 0xffffffff)
                        rcx_22 = 0
                    else
                        rcx_22 = *(rbx_3 + 0xf0) + rax_25 * 0x24
                    
                    int64_t rax_27 = rcx_22 + 0x10
                    
                    if (rcx_22 == 0)
                        rax_27 = 0
                    
                    if (rax_27 != 0)
                        int64_t var_b30
                        void var_948
                        int64_t* rax_204 =
                            sub_140aae2f0(&var_948, sub_140b1b350(&r13_2[8], &var_b30))
                        void var_980
                        char* var_968
                        char** rax_206 = sub_140a96390(&var_968, 
                            _vfprintf_p_l(&var_980, 
                                Syntax error: No operand specified for operator '{0}'", 
                            ExpressionParser"))
                        int64_t rcx_139 = *rax_204
                        int64_t* rcx_140 = rax_204[1]
                        int32_t var_6e0_1 = 4
                        
                        if (rcx_140 != 0)
                            rcx_140[1].d += 1
                        
                        int32_t rcx_141 = rax_204[2].d
                        char var_6b8_1 = 1
                        int32_t* var_cf0 = nullptr
                        int32_t var_ce8_1 = 1
                        sub_1405a4b40(&var_cf0, 1, 0)
                        int32_t* rcx_143 = var_cf0
                        *rcx_143 = var_6e0_1
                        int64_t var_6d8
                        *(rcx_143 + 8) = var_6d8
                        *(rcx_143 + 8) = var_6d8
                        rcx_143[2] = var_6d8.d
                        *(rcx_143 + 8) = var_6d8
                        rcx_143[0xa].b = 0
                        
                        if (var_6b8_1 != 0)
                            *(rcx_143 + 0x10) = rcx_139
                            *(rcx_143 + 0x18) = rcx_140
                            
                            if (rcx_140 != 0)
                                rcx_140[1].d += 1
                            
                            rcx_143[8] = rcx_141
                            rcx_143[0xa].b = 1
                        
                        char* var_ca0 = *rax_206
                        void* rax_214 = rax_206[1]
                        void* var_c98_1 = rax_214
                        
                        if (rax_214 != 0)
                            *(rax_214 + 8) += 1
                        
                        void var_9c8
                        int64_t* rax_215 = sub_140aac870(&var_9c8, &var_ca0, &var_cf0)
                        int64_t* rbx_39 = rax_215[1]
                        int64_t r12_3 = *rax_215
                        
                        if (rbx_39 != 0)
                            rbx_39[1].d += 1
                        
                        int32_t r15_3 = rax_215[2].d
                        int64_t* var_9c0
                        
                        if (var_9c0 != 0)
                            var_9c0[1].d -= 1
                            
                            if (var_9c0[1].d == 1)
                                (**var_9c0)(var_9c0)
                                int32_t rax_218 = *(var_9c0 + 0xc)
                                *(var_9c0 + 0xc) -= 1
                                
                                if (rax_218 == 1)
                                    (*(*var_9c0 + 8))(var_9c0, 1)
                        
                        sub_140596f50(&var_cf0)
                        
                        if (var_6b8_1 != 0)
                            char var_6b8_2 = 0
                            
                            if (rcx_140 != 0)
                                rcx_140[1].d -= 1
                                
                                if (rcx_140[1].d == 1)
                                    (**rcx_140)(rcx_140)
                                    int32_t rax_222 = *(rcx_140 + 0xc)
                                    *(rcx_140 + 0xc) -= 1
                                    
                                    if (rax_222 == 1)
                                        (*(*rcx_140 + 8))(rcx_140, 1)
                        
                        int64_t* rdi_12 = rax_206[1]
                        
                        if (rdi_12 != 0)
                            rdi_12[1].d -= 1
                            
                            if (rdi_12[1].d == 1)
                                (**rdi_12)(rdi_12)
                                int32_t rax_226 = *(rdi_12 + 0xc)
                                *(rdi_12 + 0xc) -= 1
                                
                                if (rax_226 == 1)
                                    (*(*rdi_12 + 8))(rdi_12, 1)
                        
                        int64_t* rdi_13 = rax_204[1]
                        
                        if (rdi_13 != 0)
                            rdi_13[1].d -= 1
                            
                            if (rdi_13[1].d == 1)
                                (**rdi_13)(rdi_13)
                                int32_t rax_230 = *(rdi_13 + 0xc)
                                *(rdi_13 + 0xc) -= 1
                                
                                if (rax_230 == 1)
                                    (*(*rdi_13 + 8))(rdi_13, 1)
                        
                        if (rbx_39 != 0)
                            rbx_39[1].d += 1
                        
                        *arg2 = r12_3
                        arg2[1] = rbx_39
                        
                        if (rbx_39 != 0)
                            rbx_39[1].d += 1
                        
                        arg2[2].d = r15_3
                        arg2[3].b = 1
                        
                        if (rbx_39 != 0)
                            rbx_39[1].d -= 1
                            
                            if (rbx_39[1].d == 1)
                                (**rbx_39)(rbx_39)
                                int32_t rax_234 = *(rbx_39 + 0xc)
                                *(rbx_39 + 0xc) -= 1
                                
                                if (rax_234 == 1)
                                    (*(*rbx_39 + 8))(rbx_39, 1)
                            
                            rbx_39[1].d -= 1
                            
                            if (rbx_39[1].d == 1)
                                (**rbx_39)(rbx_39)
                                int32_t rax_238 = *(rbx_39 + 0xc)
                                *(rbx_39 + 0xc) -= 1
                                
                                if (rax_238 == 1)
                                    (*(*rbx_39 + 8))(rbx_39, 1)
                        
                        int64_t* var_978
                        
                        if (var_978 != 0)
                            var_978[1].d -= 1
                            
                            if (var_978[1].d == 1)
                                (**var_978)(var_978)
                                int32_t r13_5 = *(var_978 + 0xc)
                                *(var_978 + 0xc) -= 1
                                
                                if (r13_5 == 1)
                                    (*(*var_978 + 8))(var_978, zx.q(r13_5))
                        
                        int64_t rcx_160 = var_b30
                        
                        if (rcx_160 != 0)
                            sub_140a74f90(rcx_160)
                        
                        int32_t i_11 = var_d40.d
                        
                        if (i_11 != 0)
                            void* rbx_42 = var_d48 + 0x60
                            int32_t i
                            
                            do
                                if (*rbx_42 != 0)
                                    *rbx_42 = 0
                                
                                void* rcx_161 = rbx_42 - 0x50
                                
                                if ((*(rbx_42 - 0x60) | *(rbx_42 - 0x5c) | *(rbx_42 - 0x58)
                                        | *(rbx_42 - 0x54)) == 0)
                                    rcx_161 = nullptr
                                
                                if (rcx_161 != 0)
                                    (**rcx_161)(rcx_161, 0)
                                
                                rbx_42 += 0x70
                                i = i_11
                                i_11 -= 1
                            while (i != 1)
                        
                        void* rcx_162 = var_d48
                        
                        if (rcx_162 != 0)
                            sub_140a74f90(rcx_162)
                        
                        result = arg2
                        goto label_140b10dfd
                    
                    void var_cc4
                    
                    if (*sub_140b162a0(*(arg1 + 0x18) + 0xa0, &var_cc4, r13_2) == 0xffffffff)
                        int64_t var_ba0 = 0
                        int64_t var_b98_1 = 0
                        sub_140b0c1e0(&var_ba0, r13_2)
                        int128_t zmm0_10 = *(r13_2 + 0x40)
                        int64_t var_3e8 = 0
                        int64_t var_3e0_1 = 0
                        uint64_t var_b50_1 = r13_2[0xa]
                        sub_140b0c1e0(&var_3e8, &var_ba0)
                        void var_b90
                        void* rcx_47 = &var_b90
                        
                        if ((var_b98_1:4.d | var_b98_1.d | var_ba0:4.d | var_ba0.d) == 0)
                            rcx_47 = nullptr
                        
                        int32_t var_390_1 = 0
                        char var_388_1 = 0
                        
                        if (rcx_47 != 0)
                            (**rcx_47)(rcx_47, 0)
                        
                        int64_t rbx_11 = sx.q(arg1[4])
                        int32_t rax_74 = (rbx_11 + 1).d
                        arg1[4] = rax_74
                        
                        if (rax_74 s> arg1[5])
                            sub_1405fde00(&arg1[2])
                        
                        int64_t* rbx_13 = rbx_11 * 0x68 + *(arg1 + 8)
                        *rbx_13 = 0
                        rbx_13[1] = 0
                        sub_140b0c1e0(rbx_13, &var_3e8)
                        void var_3d8
                        void* rcx_50 = &var_3d8
                        *(rbx_13 + 0x40) = zmm0_10
                        uint64_t var_398_1
                        rbx_13[0xa] = var_398_1
                        rbx_13[0xb].d = var_390_1
                        rbx_13[0xc].b = 0
                        char var_388_2 = 0
                        
                        if ((var_3e0_1:4.d | var_3e0_1.d | var_3e8:4.d | var_3e8.d) == 0)
                            rcx_50 = nullptr
                        
                        if (rcx_50 != 0)
                            (**rcx_50)(rcx_50, 0)
                        
                        r12 = 1
                    else
                        int32_t i_1 = var_d40.d
                        r12 = 1
                        
                        if (i_1 s> 0)
                            do
                                void* r8_5 = var_d48
                                
                                if (*(sx.q(i_1 - 1) * 0x70 + r8_5 + 0x68) s> 0)
                                    break
                                
                                int64_t var_378 = 0
                                void* rbx_5 = sx.q(i_1) * 0x70 + r8_5
                                int64_t var_370_1 = 0
                                int64_t r14_1 = sx.q(*(rbx_5 - 4))
                                sub_140b0c1e0(&var_378, rbx_5 - 0x70)
                                int128_t zmm0_4 = *(rbx_5 - 0x30)
                                int64_t rcx_27 = sx.q(var_d40.d)
                                void* r9_1 = var_d48
                                int64_t r15 = rcx_27
                                uint64_t var_328_1 = *(rbx_5 - 0x20)
                                int32_t rax_32 = *(rbx_5 - 0x18)
                                char var_318_1 = 0
                                int32_t rbx_6 = (rcx_27 - 1).d
                                int32_t var_310_1 = *(rbx_5 - 8)
                                int64_t rdi_2 = sx.q(rbx_6) * 0x70
                                void* rdx_15 = r9_1 + rdi_2
                                
                                if (*(r9_1 + rdi_2 + 0x60) != 0)
                                    *(rdx_15 + 0x60) = 0
                                    rcx_27 = zx.q(var_d40.d)
                                    r9_1 = var_d48
                                
                                void* r8_6 = rdx_15 + 0x10
                                
                                if ((*(rdx_15 + 0xc) | *(rdx_15 + 8) | *(rdx_15 + 4) | *rdx_15)
                                        == 0)
                                    r8_6 = nullptr
                                
                                if (r8_6 != 0)
                                    (**r8_6)(r8_6, 0)
                                    rcx_27 = zx.q(var_d40.d)
                                    r9_1 = var_d48
                                
                                int32_t rax_41 = rcx_27.d - rbx_6
                                
                                if (rax_41 != 1)
                                    memmove(r9_1 + rdi_2, r15 * 0x70 + r9_1, (rax_41 - 1) * 0x70)
                                    rcx_27 = zx.q(var_d40.d)
                                
                                int64_t var_458 = 0
                                var_d40.d = rcx_27.d - 1
                                int64_t var_450_1 = 0
                                sub_140b0c1e0(&var_458, &var_378)
                                char var_3f8_1 = 0
                                int64_t rbx_7 = sx.q(arg1[4])
                                int32_t rax_45 = (rbx_7 + 1).d
                                arg1[4] = rax_45
                                
                                if (rax_45 s> arg1[5])
                                    sub_1405fde00(&arg1[2])
                                
                                int64_t* rbx_9 = rbx_7 * 0x68 + *(arg1 + 8)
                                *rbx_9 = 0
                                rbx_9[1] = 0
                                sub_140b0c1e0(rbx_9, &var_458)
                                void var_448
                                void* rcx_34 = &var_448
                                *(rbx_9 + 0x40) = zmm0_4
                                uint64_t var_408_1
                                rbx_9[0xa] = var_408_1
                                rbx_9[0xb].d = rax_32
                                rbx_9[0xc].b = 0
                                char var_3f8_2 = 0
                                
                                if ((var_450_1:4.d | var_450_1.d | var_458:4.d | var_458.d) == 0)
                                    rcx_34 = nullptr
                                
                                if (rcx_34 != 0)
                                    (**rcx_34)(rcx_34, 0)
                                
                                void var_368
                                void* rcx_35 = &var_368
                                char var_318_2 = 0
                                
                                if ((var_370_1:4.d | var_370_1.d | var_378:4.d | var_378.d) == 0)
                                    rcx_35 = nullptr
                                
                                if (rcx_35 != 0)
                                    (**rcx_35)(rcx_35, 0)
                                
                                if (r14_1.d != 0xffffffff)
                                    int32_t* rdx_23 = *(arg1 + 8) + 0x5c + r14_1 * 0x68
                                    void var_cc0
                                    
                                    if (&var_cc0 != rdx_23)
                                        *rdx_23 = arg1[4] - 1
                                        rdx_23[1].b = 1
                                
                                i_1 = var_d40.d
                            while (i_1 s> 0)
                            
                            r13_2 = var_d00
                        
                        int64_t var_bf8 = 0
                        int64_t var_bf0_1 = 0
                        sub_140b0c1e0(&var_bf8, r13_2)
                        int128_t zmm0_7 = *(r13_2 + 0x40)
                        int64_t var_4c8 = 0
                        int64_t var_4c0_1 = 0
                        uint64_t var_ba8_1 = r13_2[0xa]
                        sub_140b0c1e0(&var_4c8, &var_bf8)
                        void var_be8
                        void* rcx_39 = &var_be8
                        
                        if ((var_bf0_1:4.d | var_bf0_1.d | var_bf8:4.d | var_bf8.d) == 0)
                            rcx_39 = nullptr
                        
                        int32_t var_470_1 = 2
                        char var_468_1 = 0
                        
                        if (rcx_39 != 0)
                            (**rcx_39)(rcx_39, 0)
                        
                        int64_t rdi_3 = sx.q(var_d40.d)
                        int32_t rax_62 = (rdi_3 + 1).d
                        var_d40.d = rax_62
                        
                        if (rax_62 s> var_d40:4.d)
                            sub_1405fdd60(&var_d48)
                        
                        void* rbx_10 = var_d48
                        int64_t var_a30 = 0
                        int64_t var_a28_1 = 0
                        sub_140b0c1e0(&var_a30, &var_4c8)
                        int128_t var_9f0_1 = zmm0_7
                        uint64_t var_478_1
                        uint64_t var_9e0_1 = var_478_1
                        int32_t var_9d8_1 = var_470_1
                        char var_9d0_1 = 0
                        sub_140b0b3d0(rdi_3 * 0x70 + rbx_10, &var_a30, 0, 0xffffffff)
                        void var_4b8
                        void* rcx_44 = &var_4b8
                        char var_468_2 = 0
                        
                        if ((var_4c0_1:4.d | var_4c0_1.d | var_4c8:4.d | var_4c8.d) == 0)
                            rcx_44 = nullptr
                        
                        if (rcx_44 != 0)
                            (**rcx_44)(rcx_44, 0)
                else
                    int64_t var_c50 = 0
                    int64_t var_c48_1 = 0
                    sub_140b0c1e0(&var_c50, r13_2)
                    int128_t zmm0_1 = *(r13_2 + 0x40)
                    int64_t var_538 = 0
                    int64_t zmm1_1 = r13_2[0xa]
                    int64_t var_530_1 = 0
                    sub_140b0c1e0(&var_538, &var_c50)
                    void var_c40
                    void* rcx_15 = &var_c40
                    
                    if ((var_c48_1:4.d | var_c48_1.d | var_c50:4.d | var_c50.d) == 0)
                        rcx_15 = nullptr
                    
                    int32_t var_4e0_1 = 1
                    char var_4d8_1 = r12.b
                    
                    if (rcx_15 != 0)
                        (**rcx_15)(rcx_15, 0)
                    
                    int64_t rdi_1 = sx.q(var_d40.d)
                    int32_t rax_18 = (rdi_1 + 1).d
                    var_d40.d = rax_18
                    
                    if (rax_18 s> var_d40:4.d)
                        sub_1405fdd60(&var_d48)
                    
                    void* rbx_2 = var_d48
                    int64_t var_a98 = 0
                    int64_t var_a90_1 = 0
                    sub_140b0c1e0(&var_a98, &var_538)
                    int128_t var_a58_1 = zmm0_1
                    int64_t var_a48_1 = zmm1_1
                    int32_t var_a40_1 = var_4e0_1
                    char var_a38_1 = 0
                    sub_140b0b3d0(rdi_1 * 0x70 + rbx_2, &var_a98, 0, 0xffffffff)
                    void var_528
                    void* rcx_20 = &var_528
                    char var_4d8_2 = 0
                    
                    if ((var_530_1:4.d | var_530_1.d | var_538:4.d | var_538.d) == 0)
                        rcx_20 = nullptr
                    
                    if (rcx_20 != 0)
                        (**rcx_20)(rcx_20, 0)
                
                rdi = arg4
            else if (r12 == 1)
                void var_cbc
                
                if (*sub_140b162a0(*(arg1 + 0x18) + 0xa0, &var_cbc, r13_2) == 0xffffffff)
                    int32_t* rax_113 = sub_140b18740(*(arg1 + 0x18), r13_2)
                    void* rcx_94
                    bool cond:13_1
                    
                    if (rax_113 == 0)
                        char var_ca4_1 = 0
                        void var_ca8
                        void var_7a0
                        int32_t var_128
                        int32_t* rax_152 =
                            sub_140b0a230(&var_128, 0, sub_140b0a690(&var_7a0, r13_2), &var_ca8)
                        int64_t rdi_8 = sx.q(arg1[4])
                        int32_t rax_153 = (rdi_8 + 1).d
                        arg1[4] = rax_153
                        
                        if (rax_153 s> arg1[5])
                            sub_1405fde00(&arg1[2])
                        
                        sub_140b0a1e0(rdi_8 * 0x68 + *(arg1 + 8), rax_152)
                        void var_118
                        rcx_94 = &var_118
                        int32_t var_124
                        int32_t var_120
                        int32_t var_11c
                        cond:13_1 = (var_128 | var_124 | var_120 | var_11c) == 0
                        char var_c8_1 = 0
                    else
                        for (int32_t i_2 = var_d40.d; i_2 s> 0; i_2 = var_d40.d)
                            void* r9_2 = var_d48
                            int32_t r8_14 = *rax_113
                            int32_t rcx_72 = *(sx.q(i_2 - 1) * 0x70 + r9_2 + 0x68)
                            bool rax_116
                            
                            if (rax_113[1] != 1)
                                rax_116 = rcx_72 s< r8_14
                            else
                                rax_116 = rcx_72 s<= r8_14
                            
                            if (rax_116 == 0)
                                break
                            
                            int64_t var_298 = 0
                            void* rbx_22 = sx.q(i_2) * 0x70 + r9_2
                            int64_t var_290_1 = 0
                            int64_t r14_3 = sx.q(*(rbx_22 - 4))
                            sub_140b0c1e0(&var_298, rbx_22 - 0x70)
                            int128_t zmm0_17 = *(rbx_22 - 0x30)
                            int64_t zmm1_4 = *(rbx_22 - 0x20)
                            int32_t rax_118 = *(rbx_22 - 0x18)
                            char var_238_1 = 0
                            int32_t var_230_1 = *(rbx_22 - 8)
                            sub_140b25e70(&var_d48, var_d40.d - 1, 1, 0)
                            int64_t var_5a8 = 0
                            int64_t var_5a0_1 = 0
                            sub_140b0c1e0(&var_5a8, &var_298)
                            char var_548_1 = 0
                            int64_t rbx_23 = sx.q(arg1[4])
                            int32_t rax_121 = (rbx_23 + 1).d
                            arg1[4] = rax_121
                            
                            if (rax_121 s> arg1[5])
                                sub_1405fde00(&arg1[2])
                            
                            int32_t* rbx_25 = rbx_23 * 0x68 + *(arg1 + 8)
                            *rbx_25 = 0
                            *(rbx_25 + 8) = 0
                            sub_140b0c1e0(rbx_25, &var_5a8)
                            void var_598
                            void* rcx_78 = &var_598
                            *(rbx_25 + 0x40) = zmm0_17
                            *(rbx_25 + 0x50) = zmm1_4
                            rbx_25[0x16] = rax_118
                            rbx_25[0x18].b = 0
                            char var_548_2 = 0
                            
                            if ((var_5a0_1:4.d | var_5a0_1.d | var_5a8:4.d | var_5a8.d) == 0)
                                rcx_78 = nullptr
                            
                            if (rcx_78 != 0)
                                (**rcx_78)(rcx_78, 0)
                            
                            void var_288
                            void* rcx_79 = &var_288
                            char var_238_2 = 0
                            
                            if ((var_290_1:4.d | var_290_1.d | var_298:4.d | var_298.d) == 0)
                                rcx_79 = nullptr
                            
                            if (rcx_79 != 0)
                                (**rcx_79)(rcx_79, 0)
                            
                            if (r14_3.d != 0xffffffff)
                                int32_t* rdx_57 = *(arg1 + 8) + 0x5c + r14_3 * 0x68
                                
                                if (&var_d00 != rdx_57)
                                    *rdx_57 = arg1[4] - 1
                                    rdx_57[1].b = 1
                        
                        int32_t rdi_5 = -1
                        
                        if (rax_113[2].b != 0)
                            int32_t var_cf8 = arg1[4]
                            char var_cf4_1 = 1
                            void var_8e8
                            void var_850
                            int32_t var_b8
                            int64_t* rax_136 = sub_140b0a230(&var_b8, 4, 
                                sub_140b0a6d0(&var_850, &r13_2[8], sub_140b121d0(r13_2, &var_8e8)), 
                                &var_cf8)
                            int64_t rdi_6 = sx.q(arg1[4])
                            int32_t rax_137 = (rdi_6 + 1).d
                            arg1[4] = rax_137
                            
                            if (rax_137 s> arg1[5])
                                sub_1405fde00(&arg1[2])
                            
                            sub_140b0a1e0(rdi_6 * 0x68 + *(arg1 + 8), rax_136)
                            void var_a8
                            void* rcx_87 = &var_a8
                            char var_58_1 = 0
                            int32_t var_b4
                            int32_t var_b0
                            int32_t var_ac
                            
                            if ((var_b8 | var_b4 | var_b0 | var_ac) == 0)
                                rcx_87 = nullptr
                            
                            if (rcx_87 != 0)
                                (**rcx_87)(rcx_87, 0)
                            
                            rdi_5 = arg1[4] - 1
                        
                        char var_cac_1 = 0
                        void var_cb0
                        void var_7f8
                        int32_t* rax_144 =
                            sub_140b0a230(&var_198, 3, sub_140b0a690(&var_7f8, r13_2), &var_cb0)
                        int64_t r14_5 = sx.q(var_d40.d)
                        int32_t rax_145 = (r14_5 + 1).d
                        var_d40.d = rax_145
                        
                        if (rax_145 s> var_d40:4.d)
                            sub_1405fdd60(&var_d48)
                        
                        void var_748
                        sub_140b0b3d0(r14_5 * 0x70 + var_d48, sub_140b0a1e0(&var_748, rax_144), 
                            *rax_113, rdi_5)
                        rcx_94 = &var_188
                        int32_t var_194
                        int32_t var_190
                        int32_t var_18c
                        cond:13_1 = (var_198 | var_194 | var_190 | var_18c) == 0
                        char var_138_1 = 0
                    
                    if (cond:13_1)
                        rcx_94 = nullptr
                    
                    if (rcx_94 != 0)
                        (**rcx_94)(rcx_94, 0)
                    
                    r12 = 0
                else
                    for (int32_t i_3 = var_d40.d; i_3 s> 0; i_3 = var_d40.d)
                        void* r8_11 = var_d48
                        
                        if (*(sx.q(i_3 - 1) * 0x70 + r8_11 + 0x68) s> 0)
                            break
                        
                        int64_t var_308 = 0
                        void* rbx_15 = sx.q(i_3) * 0x70 + r8_11
                        int64_t var_300_1 = 0
                        int64_t r14_2 = sx.q(*(rbx_15 - 4))
                        sub_140b0c1e0(&var_308, rbx_15 - 0x70)
                        int128_t zmm0_12 = *(rbx_15 - 0x30)
                        int64_t zmm1_2 = *(rbx_15 - 0x20)
                        int32_t rax_85 = *(rbx_15 - 0x18)
                        char var_2a8_1 = 0
                        int32_t var_2a0_1 = *(rbx_15 - 8)
                        sub_140b25e70(&var_d48, var_d40.d - 1, 1, 0)
                        int64_t var_688 = 0
                        int64_t var_680_1 = 0
                        sub_140b0c1e0(&var_688, &var_308)
                        char var_628_1 = 0
                        int64_t rbx_16 = sx.q(arg1[4])
                        int32_t rax_88 = (rbx_16 + 1).d
                        arg1[4] = rax_88
                        
                        if (rax_88 s> arg1[5])
                            sub_1405fde00(&arg1[2])
                        
                        int32_t* rbx_18 = rbx_16 * 0x68 + *(arg1 + 8)
                        *rbx_18 = 0
                        *(rbx_18 + 8) = 0
                        sub_140b0c1e0(rbx_18, &var_688)
                        void var_678
                        void* rcx_59 = &var_678
                        *(rbx_18 + 0x40) = zmm0_12
                        *(rbx_18 + 0x50) = zmm1_2
                        rbx_18[0x16] = rax_85
                        rbx_18[0x18].b = 0
                        char var_628_2 = 0
                        
                        if ((var_680_1:4.d | var_680_1.d | var_688:4.d | var_688.d) == 0)
                            rcx_59 = nullptr
                        
                        if (rcx_59 != 0)
                            (**rcx_59)(rcx_59, 0)
                        
                        void var_2f8
                        void* rcx_60 = &var_2f8
                        char var_2a8_2 = 0
                        
                        if ((var_300_1:4.d | var_300_1.d | var_308:4.d | var_308.d) == 0)
                            rcx_60 = nullptr
                        
                        if (rcx_60 != 0)
                            (**rcx_60)(rcx_60, 0)
                        
                        if (r14_2.d != 0xffffffff)
                            int32_t* rdx_42 = *(arg1 + 8) + 0x5c + r14_2 * 0x68
                            void var_cb8
                            
                            if (&var_cb8 != rdx_42)
                                *rdx_42 = arg1[4] - 1
                                rdx_42[1].b = 1
                    
                    void var_8a8
                    int64_t* rax_100 = sub_140b0a690(&var_8a8, r13_2)
                    int64_t var_618 = 0
                    int64_t var_610_1 = 0
                    sub_140b0c1e0(&var_618, rax_100)
                    int128_t zmm0_15 = *(rax_100 + 0x40)
                    void* rcx_64 = &rax_100[2]
                    int64_t zmm1_3 = rax_100[0xa]
                    int32_t var_5c0_1 = 2
                    char var_5b8_1 = 0
                    
                    if ((*(rax_100 + 0xc) | rax_100[1].d | *(rax_100 + 4) | *rax_100) == 0)
                        rcx_64 = nullptr
                    
                    if (rcx_64 != 0)
                        (**rcx_64)(rcx_64, 0)
                    
                    int64_t rdi_4 = sx.q(var_d40.d)
                    int32_t rax_106 = (rdi_4 + 1).d
                    var_d40.d = rax_106
                    
                    if (rax_106 s> var_d40:4.d)
                        sub_1405fdd60(&var_d48)
                    
                    void* rbx_20 = var_d48
                    int64_t var_b00 = 0
                    int64_t var_af8_1 = 0
                    sub_140b0c1e0(&var_b00, &var_618)
                    int128_t var_ac0_1 = zmm0_15
                    int64_t var_ab0_1 = zmm1_3
                    int32_t var_aa8_1 = var_5c0_1
                    char var_aa0_1 = 0
                    sub_140b0b3d0(rdi_4 * 0x70 + rbx_20, &var_b00, 0, 0xffffffff)
                    void var_608
                    void* rcx_69 = &var_608
                    char var_5b8_2 = 0
                    
                    if ((var_610_1:4.d | var_610_1.d | var_618:4.d | var_618.d) == 0)
                        rcx_69 = nullptr
                    
                    if (rcx_69 != 0)
                        (**rcx_69)(rcx_69, 0)
                
                rdi = arg4
        else
            *arg1 += 1
            int64_t var_6b0
            sub_140b0f890(arg1, &var_6b0, r13_2, r9)
            char var_698
            char rcx_5 = var_698
            
            if (rcx_5 != 0)
                result_1 = arg2
                int64_t* var_6a8
                int64_t* rbx_34 = var_6a8
                result_1[3].b = 0
                *result_1 = var_6b0
                result_1[1] = rbx_34
                
                if (rbx_34 != 0)
                    rbx_34[1].d += 1
                    rcx_5 = var_698
                    rbx_34 = var_6a8
                
                int32_t var_6a0
                result_1[2].d = var_6a0
                result_1[3].b = 1
                
                if (rcx_5 != 0)
                    char var_698_1 = 0
                    
                    if (rbx_34 != 0)
                        rbx_34[1].d -= 1
                        
                        if (rbx_34[1].d == 1)
                            (**rbx_34)(rbx_34)
                            int32_t r14_8 = *(rbx_34 + 0xc)
                            *(rbx_34 + 0xc) -= 1
                            
                            if (r14_8 == 1)
                                (*(*rbx_34 + 8))(rbx_34, zx.q(r14_8))
                
                int32_t i_9 = var_d40.d
                
                if (i_9 != 0)
                    void* rbx_36 = var_d48 + 0x60
                    int32_t i_4
                    
                    do
                        if (*rbx_36 != 0)
                            *rbx_36 = 0
                        
                        void* rcx_129 = rbx_36 - 0x50
                        
                        if ((*(rbx_36 - 0x60) | *(rbx_36 - 0x5c) | *(rbx_36 - 0x58)
                                | *(rbx_36 - 0x54)) == 0)
                            rcx_129 = nullptr
                        
                        if (rcx_129 != 0)
                            (**rcx_129)(rcx_129, 0)
                        
                        rbx_36 += 0x70
                        i_4 = i_9
                        i_9 -= 1
                    while (i_4 != 1)
                
                goto label_140b10de1
            
            r12 = 1
        
        rax_2 = *arg1 + 1
        *arg1 = rax_2
        rcx = *(arg1 + 0x20)
        
        if (rax_2 s>= *(rcx + 8))
            result_1 = arg2
            r13 = arg3
            break

if (rdi == 0)
label_140b10d7a:
    
    while (var_d40.d s> 0)
        sub_140b0d6a0(&var_c60)
    
    int32_t i_10 = var_d40.d
    result_1[3].b = 0
    
    if (i_10 != 0)
        void* rbx_38 = var_d48 + 0x60
        int32_t i_5
        
        do
            if (*rbx_38 != 0)
                *rbx_38 = 0
            
            void* rcx_131 = rbx_38 - 0x50
            
            if ((*(rbx_38 - 0x60) | *(rbx_38 - 0x5c) | *(rbx_38 - 0x58) | *(rbx_38 - 0x54)) == 0)
                rcx_131 = nullptr
            
            if (rcx_131 != 0)
                (**rcx_131)(rcx_131, 0)
            
            rbx_38 += 0x70
            i_5 = i_10
            i_10 -= 1
        while (i_5 != 1)
else
    int32_t rdx_69 = *(r13 + 0x54)
    int32_t rbx_27 = *(r13 + 0x50)
    int128_t var_c80
    __builtin_memset(&var_c80, 0, 0x20)
    int128_t var_c70
    void var_930
    int64_t* rax_160 = sub_140aa10e0(&var_930, rdx_69, nullptr, &var_c70)
    void var_918
    int64_t* rax_161 = sub_140aa10e0(&var_918, rbx_27, nullptr, &var_c80)
    int64_t var_b10
    void var_900
    int64_t* rax_163 = sub_140aae2f0(&var_900, sub_140b1b350(r13 + 0x40, &var_b10))
    void var_9b0
    char* var_958
    char** rax_165 = sub_140a96390(&var_958, 
        _vfprintf_p_l(&var_9b0, 
            Syntax error: Reached end of expression before matching end of group '{0}' at l", 
        ExpressionParser"))
    int64_t var_218_1 = *rax_163
    void* rcx_107 = rax_163[1]
    int32_t var_228 = 4
    void* var_210_1 = rcx_107
    
    if (rcx_107 != 0)
        *(rcx_107 + 8) += 1
    
    int64_t var_1e8_1 = *rax_161
    void* rax_167 = rax_161[1]
    int32_t var_208_1 = rax_163[2].d
    char var_200_1 = 1
    int32_t var_1f8_1 = 4
    void* var_1e0_1 = rax_167
    
    if (rax_167 != 0)
        *(rax_167 + 8) += 1
    
    int32_t var_1d8_1 = rax_161[2].d
    int64_t var_1b8_1 = *rax_160
    void* rax_170 = rax_160[1]
    char var_1d0_1 = 1
    int32_t var_1c8_1 = 4
    void* var_1b0_1 = rax_170
    
    if (rax_170 != 0)
        *(rax_170 + 8) += 1
    
    int32_t var_1a8_1 = rax_160[2].d
    int32_t* var_cd8 = &var_228
    int32_t* var_cd0_1 = &var_198
    int128_t zmm0_20 = var_cd8.o
    char* var_c90 = *rax_165
    void* rax_173 = rax_165[1]
    char var_1a0_1 = 1
    var_cd8.o = zmm0_20
    void* var_c88_1 = rax_173
    
    if (rax_173 != 0)
        *(rax_173 + 8) += 1
    
    void var_b20
    void var_998
    int64_t* rax_175 = sub_140aac870(&var_998, &var_c90, sub_1405d4de0(&var_b20, &var_cd8))
    void* rbx_29 = rax_175[1]
    int64_t r14_7 = *rax_175
    int64_t var_d18 = r14_7
    void* var_d10_1 = rbx_29
    
    if (rbx_29 != 0)
        *(rbx_29 + 8) += 1
        rbx_29 = var_d10_1
        r14_7 = var_d18
    
    int32_t rsi_1 = rax_175[2].d
    int32_t var_d08_1 = rsi_1
    sub_1405970a0(&var_998)
    sub_140596f50(&var_b20)
    void* rdi_9 = &var_188
    int64_t i_12 = 3
    int64_t i_6
    
    do
        rdi_9 -= 0x30
        sub_1405d57e0(rdi_9)
        i_6 = i_12
        i_12 -= 1
    while (i_6 != 1)
    sub_1405970a0(rax_165)
    sub_1405970a0(rax_163)
    sub_1405970a0(rax_161)
    sub_1405970a0(rax_160)
    int64_t var_b48 = r14_7
    void* var_b40_1 = rbx_29
    
    if (rbx_29 != 0)
        *(rbx_29 + 8) += 1
        rsi_1 = var_d08_1
        rbx_29 = var_d10_1
        r14_7 = var_d18
    
    result_1 = arg2
    int32_t var_b38_1 = rsi_1
    *result_1 = r14_7
    result_1[1] = rbx_29
    
    if (rbx_29 != 0)
        *(rbx_29 + 8) += 1
        rsi_1 = var_d08_1
    
    result_1[2].d = rsi_1
    result_1[3].b = 1
    sub_1405970a0(&var_b48)
    sub_1405970a0(&var_d18)
    sub_1405970a0(&var_9b0)
    int64_t rcx_121 = var_b10
    
    if (rcx_121 != 0)
        sub_140a74f90(rcx_121)
    
    int64_t* rbx_30 = var_c80:8.q
    
    if (rbx_30 != 0)
        rbx_30[1].d -= 1
        
        if (rbx_30[1].d == 1)
            (**rbx_30)(rbx_30)
            int32_t rax_178 = *(rbx_30 + 0xc)
            *(rbx_30 + 0xc) -= 1
            
            if (rax_178 == 1)
                (*(*rbx_30 + 8))(rbx_30, 1)
    
    int64_t* var_c68
    
    if (var_c68 != 0)
        var_c68[1].d -= 1
        
        if (var_c68[1].d == 1)
            (**var_c68)(var_c68)
            int32_t r13_4 = *(var_c68 + 0xc)
            *(var_c68 + 0xc) -= 1
            
            if (r13_4 == 1)
                (*(*var_c68 + 8))(var_c68, zx.q(r13_4))
    
    int32_t i_8 = var_d40.d
    
    if (i_8 != 0)
        char* rbx_33 = var_d48 + 0x60
        int32_t i_7
        
        do
            if (*rbx_33 != 0)
                *rbx_33 = 0
            
            void* rcx_126 = &rbx_33[-0x50]
            
            if ((*(rbx_33 - 0x60) | *(rbx_33 - 0x5c) | *(rbx_33 - 0x58) | *(rbx_33 - 0x54)) == 0)
                rcx_126 = nullptr
            
            if (rcx_126 != 0)
                (**rcx_126)(rcx_126, 0)
            
            rbx_33 = &rbx_33[0x70]
            i_7 = i_8
            i_8 -= 1
        while (i_7 != 1)

label_140b10de1:
void* rcx_132 = var_d48

if (rcx_132 != 0)
    sub_140a74f90(rcx_132)

result = result_1
label_140b10dfd:
__security_check_cookie(rax_1 ^ &var_d68)
return result
