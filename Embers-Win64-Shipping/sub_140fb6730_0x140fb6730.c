// 函数: sub_140fb6730
// 地址: 0x140fb6730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
uint64_t result = sub_140b16090(&data_143de57d0)

if (result.b != 0)
    int64_t r12
    int64_t arg_18 = r12
    int32_t r14_1 = 0
    char i_1 = 1
    int32_t var_1a4_1 = 0
    char i
    
    do
        int16_t* var_138
        sub_140a2e390(&var_138, u"Theme%i", zx.q(r14_1))
        int16_t* const r9_1 = &data_142d40450
        int32_t var_130
        
        if (var_130 != 0)
            r9_1 = var_138
        
        int16_t* var_158
        sub_140af5b50(data_143ddb400, &var_158, u"ColorThemes", r9_1, &data_143de57d0)
        int16_t* rcx_3 = var_138
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int32_t result_2
        result = zx.q(result_2)
        
        if (result.d s<= 1)
            i = 0
            i_1 = nullptr
        else
            int32_t rdi_1 = 0
            int128_t var_180
            int64_t* rbx_2
            
            if (data_143e2b7c8 s<= 0)
            label_140fb68b0:
                rbx_2 = nullptr
                var_180 = zx.o(0)
            label_140fb68bc:
                int64_t var_128 = 0
                int64_t var_120_1 = 0
                void var_c8
                int64_t* rax_4 = sub_140fbc770(&var_c8, &var_158, &var_128)
                
                if (&var_180 != rax_4)
                    var_180.q = *rax_4
                    *rax_4 = 0
                    int64_t rcx_8 = rax_4[1]
                    
                    if (rcx_8 != rbx_2)
                        rax_4[1] = 0
                        var_180:8.q = rcx_8
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                (**rbx_2)(rbx_2)
                                int32_t temp6_1 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (temp6_1 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, 1)
                
                int64_t* var_c0
                
                if (var_c0 != 0)
                    var_c0[1].d -= 1
                    
                    if (var_c0[1].d == 1)
                        (**var_c0)(var_c0)
                        int32_t temp4_1 = *(var_c0 + 0xc)
                        *(var_c0 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*var_c0 + 8))(var_c0, 1)
            else
                int64_t* rbx_1 = nullptr
                int64_t rsi_1
                
                while (true)
                    rsi_1 = data_143e2b7c0
                    int16_t* const rdx_2 = &data_142d40450
                    
                    if (result.d != 0)
                        rdx_2 = var_158
                    
                    int64_t* rcx_4 = *(rbx_1 + rsi_1)
                    int16_t* const rcx_5
                    
                    if (rcx_4[1].d == 0)
                        rcx_5 = &data_142d40450
                    else
                        rcx_5 = *rcx_4
                    
                    if (sub_140a54510(rcx_5, rdx_2) == 0)
                        break
                    
                    rdi_1 += 1
                    rbx_1 = &rbx_1[2]
                    
                    if (rdi_1 s>= data_143e2b7c8)
                        goto label_140fb68b0
                    
                    result = zx.q(result_2)
                
                int64_t rax_3 = *(rbx_1 + rsi_1)
                rbx_2 = *(rbx_1 + rsi_1 + 8)
                var_180.q = rax_3
                var_180:8.q = rbx_2
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                if (rax_3 == 0)
                    goto label_140fb68bc
            r12.b = 1
            int32_t r15_1 = 0
            
            do
                int16_t* var_118
                sub_140a2e390(&var_118, u"Theme%iColor%i", zx.q(r14_1))
                int16_t* const r9_3 = &data_142d40450
                int32_t var_110
                
                if (var_110 != 0)
                    r9_3 = var_118
                
                int16_t* var_190
                uint32_t zmm0_2[0x4]
                uint32_t zmm6_1[0x4]
                int32_t zmm7_1
                zmm0_2, zmm6_1, zmm7_1 =
                    sub_140af5b50(data_143ddb400, &var_190, ColorThemes", r9_3, &data_143de57d0)
                int16_t* rcx_15 = var_118
                
                if (rcx_15 != 0)
                    zmm0_2 = sub_140a74f90(rcx_15)
                
                int32_t result_1
                result = zx.q(result_1)
                
                if (result.d s<= 1)
                    r12.b = 0
                else
                    int64_t var_19c = 0
                    int16_t* const rcx_16 = &data_142d40450
                    int32_t var_1a0 = 0
                    
                    if (result.d != 0)
                        rcx_16 = var_190
                    
                    int32_t var_194 = 0x3f800000
                    
                    if (sub_140b2abf0(rcx_16, &data_142d6acec, &var_1a0, zmm0_2[0].q) != 0)
                        int16_t* const rcx_17 = &data_142d40450
                        
                        if (result_1 != 0)
                            rcx_17 = var_190
                        
                        if (sub_140b2abf0(rcx_17, &data_142d6acf4, &var_19c, zmm0_2[0].q) != 0)
                            int16_t* rcx_18 = &data_142d40450
                            
                            if (result_1 != 0)
                                rcx_18 = var_190
                            
                            sub_140b2abf0(rcx_18, &data_142d6acfc, &var_19c:4, zmm0_2[0].q)
                    
                    int16_t* rcx_19 = &data_142d40450
                    
                    if (result_1 != 0)
                        rcx_19 = var_190
                    
                    sub_140b2abf0(rcx_19, &data_142d6ad04, &var_194, zmm0_2[0].q)
                    void* r14_2 = var_180.q
                    int32_t rdi_2 = 0
                    
                    if (*(r14_2 + 0x18) s> 0)
                        uint64_t** rsi_2 = nullptr
                        int64_t* rbx_4
                        
                        while (true)
                            uint64_t* rcx_20 = *(rsi_2 + *(r14_2 + 0x10))
                            rbx_4 = rcx_20[1]
                            result = *rcx_20
                            
                            if (rbx_4 != 0)
                                rbx_4[1].d += 1
                            
                            zmm0_2 = *result
                            zmm0_2[0] = zmm0_2[0] f- var_1a0
                            
                            if (not(_mm_and_ps(zmm0_2, zmm6_1)[0] f>= zmm7_1))
                                zmm0_2 = *(result + 4)
                                zmm0_2[0] = zmm0_2[0] f- var_19c.d
                                
                                if (not(_mm_and_ps(zmm0_2, zmm6_1)[0] f>= zmm7_1))
                                    zmm0_2 = *(result + 8)
                                    zmm0_2[0] = zmm0_2[0] f- var_19c:4.d
                                    
                                    if (not(_mm_and_ps(zmm0_2, zmm6_1)[0] f>= zmm7_1))
                                        zmm0_2 = *(result + 0xc)
                                        zmm0_2[0] = zmm0_2[0] f- var_194
                                        
                                        if (_mm_and_ps(zmm0_2, zmm6_1)[0] f< zmm7_1)
                                            break
                            
                            if (rbx_4 != 0)
                                rbx_4[1].d -= 1
                                
                                if (rbx_4[1].d == 1)
                                    (**rbx_4)(rbx_4)
                                    int32_t temp10_1 = *(rbx_4 + 0xc)
                                    *(rbx_4 + 0xc) -= 1
                                    
                                    if (temp10_1 == 1)
                                        (*(*rbx_4 + 8))(rbx_4, 1)
                            
                            rdi_2 += 1
                            rsi_2 = &rsi_2[2]
                            
                            if (rdi_2 s>= *(r14_2 + 0x18))
                                goto label_140fb6b70
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                result = (**rbx_4)(rbx_4)
                                int32_t temp15_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp15_1 == 1)
                                    result = (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    if (*(r14_2 + 0x18) s<= 0 || rdi_2 == 0xffffffff)
                    label_140fb6b70:
                        int64_t* rax_16 = j_sub_140a82f30(0x28)
                        int64_t* rdi_3 = rax_16
                        
                        if (rax_16 == 0)
                            rdi_3 = nullptr
                        else
                            int128_t* rax_17 = j_sub_140a82f30(0x10)
                            int128_t* rbx_5 = rax_17
                            
                            if (rax_17 == 0)
                                rbx_5 = nullptr
                            else
                                *rax_17 = var_1a0.o
                            
                            void*** rax_18 = j_sub_140a82f30(0x18)
                            
                            if (rax_18 != 0)
                                rax_18[1].d = 1
                                *rax_18 = &data_142ec7b18
                                *(rax_18 + 0xc) = 1
                                rax_18[2] = rbx_5
                            
                            *rdi_3 = 0
                            rdi_3[1] = 0
                            sub_140a96170(&rdi_3[2])
                            uint128_t zmm1_1 = rbx_5.o
                            uint128_t var_108 = zmm1_1
                            void* rax_19 = _mm_bsrli_si128(zmm1_1, 8).q
                            
                            if (rax_19 != 0)
                                *(rax_19 + 8) += 1
                            
                            if (&var_108 != rdi_3)
                                uint128_t var_60_1 = zmm1_1
                                var_108 = *rdi_3
                                *rdi_3 = zmm1_1
                            
                            int64_t* rbx_6 = var_108:8.q
                            
                            if (rbx_6 != 0)
                                rbx_6[1].d -= 1
                                
                                if (rbx_6[1].d == 1)
                                    (**rbx_6)(rbx_6)
                                    int32_t temp14_1 = *(rbx_6 + 0xc)
                                    *(rbx_6 + 0xc) -= 1
                                    
                                    if (temp14_1 == 1)
                                        (*(*rbx_6 + 8))(rbx_6, 1)
                            
                            void var_90
                            int64_t* rax_22 = sub_140a96170(&var_90)
                            int64_t rdx_6 = rdi_3[2]
                            rdi_3[2] = *rax_22
                            *rax_22 = rdx_6
                            int64_t rdx_7 = rdi_3[3]
                            rdi_3[3] = rax_22[1]
                            rax_22[1] = rdx_7
                            rdi_3[4].d = rax_22[2].d
                            int64_t* var_88
                            
                            if (var_88 != 0)
                                var_88[1].d -= 1
                                
                                if (var_88[1].d == 1)
                                    (**var_88)(var_88)
                                    int32_t rax_26 = *(var_88 + 0xc)
                                    *(var_88 + 0xc) -= 1
                                    
                                    if (rax_26 == 1)
                                        (*(*var_88 + 8))(var_88, 1)
                            
                            if (rax_18 != 0)
                                rax_18[1].d -= 1
                                
                                if (rax_18[1].d == 1)
                                    (**rax_18)(rax_18)
                                    int32_t temp19_1 = *(rax_18 + 0xc)
                                    *(rax_18 + 0xc) -= 1
                                    
                                    if (temp19_1 == 1)
                                        (*rax_18)[1](rax_18, 1)
                        
                        void*** rax_30 = j_sub_140a82f30(0x18)
                        
                        if (rax_30 != 0)
                            rax_30[1].d = 1
                            *rax_30 = &data_142ef1708
                            *(rax_30 + 0xc) = 1
                            rax_30[2] = rdi_3
                        
                        int16_t* var_f8
                        sub_140a2e390(&var_f8, u"Theme%iLabel%i", zx.q(var_1a4_1))
                        int16_t* const r9_5 = &data_142d40450
                        int32_t var_f0
                        
                        if (var_f0 != 0)
                            r9_5 = var_f8
                        
                        int64_t var_e8
                        sub_140af5b50(data_143ddb400, &var_e8, ColorThemes", r9_5, &data_143de57d0)
                        int16_t* rcx_37 = var_f8
                        
                        if (rcx_37 != 0)
                            sub_140a74f90(rcx_37)
                        
                        int32_t var_e0
                        
                        if (var_e0 s> 1)
                            void var_78
                            int64_t* rax_31 = sub_140aae420(&var_78, &var_e8)
                            int64_t rdx_11 = rdi_3[2]
                            rdi_3[2] = *rax_31
                            *rax_31 = rdx_11
                            int64_t rdx_12 = rdi_3[3]
                            rdi_3[3] = rax_31[1]
                            rax_31[1] = rdx_12
                            rdi_3[4].d = rax_31[2].d
                            int64_t* var_70
                            
                            if (var_70 != 0)
                                var_70[1].d -= 1
                                
                                if (var_70[1].d == 1)
                                    (**var_70)(var_70)
                                    int32_t rax_35 = *(var_70 + 0xc)
                                    *(var_70 + 0xc) -= 1
                                    
                                    if (rax_35 == 1)
                                        (*(*var_70 + 8))(var_70, 1)
                        
                        uint128_t zmm0_5 = rdi_3.o
                        uint128_t var_d8 = zmm0_5
                        void* rax_37 = _mm_bsrli_si128(zmm0_5, 8).q
                        
                        if (rax_37 != 0)
                            *(rax_37 + 8) += 1
                        
                        void* r14_3 = var_180.q
                        sub_140fb62d0(r14_3 + 0x10, &var_d8, 0)
                        result = sub_140599090(r14_3 + 0x20)
                        int64_t* rbx_11 = var_d8:8.q
                        
                        if (rbx_11 != 0)
                            rbx_11[1].d -= 1
                            
                            if (rbx_11[1].d == 1)
                                result = (**rbx_11)(rbx_11)
                                int32_t temp16_1 = *(rbx_11 + 0xc)
                                *(rbx_11 + 0xc) -= 1
                                
                                if (temp16_1 == 1)
                                    result = (*(*rbx_11 + 8))(rbx_11, 1)
                        
                        int64_t rcx_47 = var_e8
                        
                        if (rcx_47 != 0)
                            result = sub_140a74f90(rcx_47)
                        
                        if (rax_30 != 0)
                            rax_30[1].d -= 1
                            
                            if (rax_30[1].d == 1)
                                result = (**rax_30)(rax_30)
                                int32_t temp20_1 = *(rax_30 + 0xc)
                                *(rax_30 + 0xc) -= 1
                                
                                if (temp20_1 == 1)
                                    result = (*rax_30)[1](rax_30, 1)
                    
                    r14_1 = var_1a4_1
                    r15_1 += 1
                
                int16_t* rcx_50 = var_190
                
                if (rcx_50 != 0)
                    result = sub_140a74f90(rcx_50)
            while (r12.b != 0)
            
            int64_t* rbx_13 = var_180:8.q
            r14_1 += 1
            var_1a4_1 = r14_1
            
            if (rbx_13 != 0)
                rbx_13[1].d -= 1
                
                if (rbx_13[1].d == 1)
                    result = (**rbx_13)(rbx_13)
                    int32_t temp8_1 = *(rbx_13 + 0xc)
                    *(rbx_13 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        result = (*(*rbx_13 + 8))(rbx_13, 1)
            
            i = i_1
        
        int16_t* rcx_53 = var_158
        
        if (rcx_53 != 0)
            result = sub_140a74f90(rcx_53)
    while (i != 0)

if (data_143e2b7c8 == 0)
    void var_a8
    _vfprintf_p_l(&var_a8, u"New Theme", u"ColorThemesViewer")
    void var_b8
    result = sub_140fb2e20(&var_b8, sub_140ac6680(&var_a8))
    int64_t* var_a0
    
    if (var_a0 != 0)
        result = zx.q(var_a0[1].d)
        var_a0[1].d -= 1
        
        if (result.d == 1)
            result = (**var_a0)(var_a0)
            int32_t r13_1 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (r13_1 == 1)
                result = (*(*var_a0 + 8))(var_a0, zx.q(r13_1))
    
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            result = (**var_b0)(var_b0)
            int32_t temp2_1 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*var_b0 + 8))(var_b0, 1)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
