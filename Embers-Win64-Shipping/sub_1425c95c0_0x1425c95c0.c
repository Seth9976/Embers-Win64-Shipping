// 函数: sub_1425c95c0
// 地址: 0x1425c95c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
sub_140d11050()

if (*(arg2 + 0x30) == &data_143e1b9d0)
    void* r9 = *(arg2 + 0x20)
    bool cond:0 = (*(r9 + 0x7b)
        & *(sx.q(*(r9 + 0x3c) * arg3) + zx.q(*(r9 + 0x79)) + sx.q(*(r9 + 0x4c)) + *(arg2 + 0x18))) != 0
    int64_t* var_210 = *(arg1 + 8)
    void* rax_6 = *(arg1 + 0x10)
    arg_10.b = cond:0
    void* var_208 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    return sub_1425c4530(&var_210, arg2, &arg_10)

sub_140ccf960()
int64_t result

if (*(arg2 + 0x30) != &data_143e1b210)
    sub_140d11100()
    int64_t rcx_16
    
    if (*(arg2 + 0x30) == &data_143e1ba20)
        int64_t* r14_1 = *(arg2 + 0x20)
        int64_t rax_18 = (*(*r14_1 + 0x140))(r14_1)
        char* rdx_8 = sx.q(*(r14_1 + 0x3c) * arg3) + sx.q(*(r14_1 + 0x4c)) + *(arg2 + 0x18)
        
        if (rax_18 != 0)
            int64_t var_1f0 = *(arg1 + 8)
            void* rax_20 = *(arg1 + 0x10)
            void* var_1e8_1 = rax_20
            
            if (rax_20 != 0)
                *(rax_20 + 8) += 1
            
            int64_t var_90
            result = sub_1425c42f0(&var_1f0, arg2, sub_140bdef30(r14_1[0xf], &var_90, zx.q(*rdx_8)))
            rcx_16 = var_90
            goto label_1425ca0a3
        
        int64_t* rax_23 = *(arg1 + 8)
        int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(*rdx_8))
        int64_t* var_1e0 = rax_23
        void* rax_24 = *(arg1 + 0x10)
        void* var_1d8_1 = rax_24
        uint64_t arg_20 = temp0_1
        
        if (rax_24 != 0)
            *(rax_24 + 8) += 1
        
        return sub_1425c4010(&var_1e0, arg2, &arg_20)
    
    sub_140d11310()
    
    if (*(arg2 + 0x30) == &data_143e1c010)
        void* rcx_18 = *(arg2 + 0x20)
        int64_t* r8_9 = sx.q(*(rcx_18 + 0x3c) * arg3) + sx.q(*(rcx_18 + 0x4c)) + *(arg2 + 0x18)
        int64_t* var_1d0 = *(arg1 + 8)
        void* rax_29 = *(arg1 + 0x10)
        void* var_1c8_1 = rax_29
        
        if (rax_29 != 0)
            *(rax_29 + 8) += 1
        
        return sub_1425c4010(&var_1d0, arg2, r8_9)
    
    sub_140d113c0()
    
    if (*(arg2 + 0x30) == &data_143e1bfc0)
        void* rcx_20 = *(arg2 + 0x20)
        int128_t* r8_12 = sx.q(*(rcx_20 + 0x3c) * arg3) + sx.q(*(rcx_20 + 0x4c)) + *(arg2 + 0x18)
        int64_t* var_1c0 = *(arg1 + 8)
        void* rax_34 = *(arg1 + 0x10)
        void* var_1b8_1 = rax_34
        
        if (rax_34 != 0)
            *(rax_34 + 8) += 1
        
        return sub_1425c3d30(&var_1c0, arg2, r8_12)
    
    sub_140d11680()
    
    if (*(arg2 + 0x30) == &data_143e1be30)
        void* rcx_22 = *(arg2 + 0x20)
        int64_t* rax_39 = *(arg1 + 8)
        int64_t temp0_2 = _mm_cvtepi32_pd(zx.q(
            *(sx.q(*(rcx_22 + 0x3c) * arg3) + sx.q(*(rcx_22 + 0x4c)) + *(arg2 + 0x18))))
        int64_t* var_1b0 = rax_39
        void* rax_40 = *(arg1 + 0x10)
        void* var_1a8_1 = rax_40
        uint64_t var_228 = temp0_2
        
        if (rax_40 != 0)
            *(rax_40 + 8) += 1
        
        return sub_1425c4010(&var_1b0, arg2, &var_228)
    
    sub_140d115d0()
    
    if (*(arg2 + 0x30) == &data_143e1bd90)
        void* rcx_24 = *(arg2 + 0x20)
        int32_t rcx_25 =
            sx.d(*(sx.q(*(rcx_24 + 0x3c) * arg3) + sx.q(*(rcx_24 + 0x4c)) + *(arg2 + 0x18)))
        int64_t* var_1a0 = *(arg1 + 8)
        void* rax_46 = *(arg1 + 0x10)
        void* var_198_1 = rax_46
        uint64_t var_248 = _mm_cvtepi32_pd(zx.q(rcx_25))
        
        if (rax_46 != 0)
            *(rax_46 + 8) += 1
        
        return sub_1425c4010(&var_1a0, arg2, &var_248)
    
    sub_140d11470()
    
    if (*(arg2 + 0x30) == &data_143e1bde0)
        void* rcx_27 = *(arg2 + 0x20)
        int32_t rcx_28 =
            sx.d(*(sx.q(*(rcx_27 + 0x3c) * arg3) + sx.q(*(rcx_27 + 0x4c)) + *(arg2 + 0x18)))
        int64_t* var_190 = *(arg1 + 8)
        void* rax_52 = *(arg1 + 0x10)
        void* var_188_1 = rax_52
        uint64_t var_240 = _mm_cvtepi32_pd(zx.q(rcx_28))
        
        if (rax_52 != 0)
            *(rax_52 + 8) += 1
        
        return sub_1425c4010(&var_190, arg2, &var_240)
    
    sub_140d11520()
    
    if (*(arg2 + 0x30) == &data_143e1be80)
        void* rcx_30 = *(arg2 + 0x20)
        int64_t zmm0_5 =
            float.d(*(sx.q(*(rcx_30 + 0x3c) * arg3) + sx.q(*(rcx_30 + 0x4c)) + *(arg2 + 0x18)))
        int64_t* var_180 = *(arg1 + 8)
        void* rax_58 = *(arg1 + 0x10)
        void* var_178_1 = rax_58
        int64_t var_238 = zmm0_5
        
        if (rax_58 != 0)
            *(rax_58 + 8) += 1
        
        return sub_1425c4010(&var_180, arg2, &var_238)
    
    sub_140d120d0()
    
    if (*(arg2 + 0x30) == &data_143e1bed0)
        void* rcx_32 = *(arg2 + 0x20)
        uint32_t rcx_33 =
            zx.d(*(sx.q(*(rcx_32 + 0x3c) * arg3) + sx.q(*(rcx_32 + 0x4c)) + *(arg2 + 0x18)))
        int64_t* var_170 = *(arg1 + 8)
        void* rax_64 = *(arg1 + 0x10)
        void* var_168_1 = rax_64
        uint64_t var_230 = _mm_cvtepi32_pd(zx.q(rcx_33))
        
        if (rax_64 != 0)
            *(rax_64 + 8) += 1
        
        return sub_1425c4010(&var_170, arg2, &var_230)
    
    sub_140d12180()
    
    if (*(arg2 + 0x30) == &data_143e1bf20)
        void* rcx_35 = *(arg2 + 0x20)
        uint64_t rcx_36 =
            zx.q(*(sx.q(*(rcx_35 + 0x3c) * arg3) + sx.q(*(rcx_35 + 0x4c)) + *(arg2 + 0x18)))
        int64_t* var_160 = *(arg1 + 8)
        void* rax_70 = *(arg1 + 0x10)
        void* var_158_1 = rax_70
        int64_t var_218 = float.d(rcx_36)
        
        if (rax_70 != 0)
            *(rax_70 + 8) += 1
        
        return sub_1425c4010(&var_160, arg2, &var_218)
    
    sub_140d12230()
    
    if (*(arg2 + 0x30) == &data_143e1bf70)
        void* rcx_38 = *(arg2 + 0x20)
        int64_t rcx_39 = *(sx.q(*(rcx_38 + 0x3c) * arg3) + sx.q(*(rcx_38 + 0x4c)) + *(arg2 + 0x18))
        int64_t zmm0_8 = float.d(rcx_39)
        
        if (rcx_39 s< 0)
            zmm0_8 = zmm0_8 f+ 1.8446744073709552e+19
        
        int64_t* var_150 = *(arg1 + 8)
        void* rax_76 = *(arg1 + 0x10)
        int64_t var_220 = zmm0_8
        void* var_148_1 = rax_76
        
        if (rax_76 != 0)
            *(rax_76 + 8) += 1
        
        return sub_1425c4010(&var_150, arg2, &var_220)
    
    sub_140d11b50()
    
    if (*(arg2 + 0x30) == &data_143e1bcf0)
        void* rcx_41 = *(arg2 + 0x20)
        int32_t* r8_22 = sx.q(*(rcx_41 + 0x3c) * arg3) + sx.q(*(rcx_41 + 0x4c)) + *(arg2 + 0x18)
        int64_t var_140 = *(arg1 + 8)
        void* rax_81 = *(arg1 + 0x10)
        void* var_138_1 = rax_81
        
        if (rax_81 != 0)
            *(rax_81 + 8) += 1
        
        int64_t var_80
        result = sub_1425c42f0(&var_140, arg2, sub_140b63b70(r8_22, &var_80))
        rcx_16 = var_80
        goto label_1425ca0a3
    
    sub_140d11f70()
    
    if (*(arg2 + 0x30) == &data_143e1c450)
        void* rcx_44 = *(arg2 + 0x20)
        int64_t* r8_26 = sx.q(*(rcx_44 + 0x3c) * arg3) + sx.q(*(rcx_44 + 0x4c)) + *(arg2 + 0x18)
        int64_t var_130 = *(arg1 + 8)
        void* rax_87 = *(arg1 + 0x10)
        void* var_128_1 = rax_87
        
        if (rax_87 != 0)
            *(rax_87 + 8) += 1
        
        return sub_1425c42f0(&var_130, arg2, r8_26)
    
    int512_t zmm1_1
    int512_t zmm2_1
    zmm1_1, zmm2_1 = sub_140d2df10()
    
    if (*(arg2 + 0x30) == &data_143e1d7f0)
        void* rcx_46 = *(arg2 + 0x20)
        int64_t* rdx_40 = sx.q(*(rcx_46 + 0x3c) * arg3) + sx.q(*(rcx_46 + 0x4c)) + *(arg2 + 0x18)
        
        if ((*(arg1 + 0x18) & 1) == 0)
            int64_t var_110 = *(arg1 + 8)
            void* rax_94 = *(arg1 + 0x10)
            void* var_108_1 = rax_94
            
            if (rax_94 != 0)
                *(rax_94 + 8) += 1
            
            return sub_1425c42f0(&var_110, arg2, sub_140ac6680(rdx_40))
        
        int64_t var_298 = 0
        int64_t var_290_1 = 0
        sub_140aca310(&var_298, rdx_40, 0, zmm1_1, zmm2_1)
        int64_t var_120 = *(arg1 + 8)
        void* rax_92 = *(arg1 + 0x10)
        void* var_118_1 = rax_92
        
        if (rax_92 != 0)
            *(rax_92 + 8) += 1
        
        result = sub_1425c42f0(&var_120, arg2, &var_298)
        rcx_16 = var_298
        goto label_1425ca0a3
    
    sub_140d111b0()
    
    if (*(arg2 + 0x30) != &data_143e1ba70)
        sub_140d11e10()
        
        if (*(arg2 + 0x30) != &data_143e1c360)
            sub_140d11cb0()
            
            if (*(arg2 + 0x30) != &data_143e1c060)
                sub_140d122e0()
                
                if (*(arg2 + 0x30) != &data_143e1c500)
                    result = sub_140d11ec0()
                    
                    if (*(arg2 + 0x30) == &data_143e1c3b0)
                        void* rcx_78 = *(arg2 + 0x20)
                        int64_t var_b0
                        sub_140d30800(
                            *(arg2 + 0x18) + 0x10 + sx.q(*(rcx_78 + 0x3c) * arg3)
                                + sx.q(*(rcx_78 + 0x4c)), 
                            &var_b0)
                        int64_t var_c0 = *(arg1 + 8)
                        void* rax_134 = *(arg1 + 0x10)
                        void* var_b8_1 = rax_134
                        
                        if (rax_134 != 0)
                            *(rax_134 + 8) += 1
                        
                        result = sub_1425c42f0(&var_c0, arg2, &var_b0)
                        rcx_16 = var_b0
                        goto label_1425ca0a3
                else
                    void* rdx_55 = *(arg2 + 0x20)
                    int32_t* rbx_9 =
                        sx.q(*(rdx_55 + 0x3c) * arg3) + sx.q(*(rdx_55 + 0x4c)) + *(arg2 + 0x18)
                    int64_t var_258
                    int64_t var_40
                    int32_t rbx_10
                    int64_t* r8_32
                    
                    if (sub_140d3e110(rbx_9) == 0)
                        var_258 = 0
                        r8_32 = &var_258
                        int64_t var_250_1 = 0
                        rbx_10 = 0x80
                    else
                        r8_32 = sub_140d21e10(sub_140d3c6e0(rbx_9), &var_40, 0)
                        rbx_10 = 0x40
                    
                    int64_t var_d0 = *(arg1 + 8)
                    void* rax_129 = *(arg1 + 0x10)
                    void* var_c8_1 = rax_129
                    
                    if (rax_129 != 0)
                        *(rax_129 + 8) += 1
                    
                    result = sub_1425c42f0(&var_d0, arg2, r8_32)
                    
                    if (rbx_10.b s< 0)
                        int64_t rcx_77 = var_258
                        rbx_10 &= 0xffffff7f
                        
                        if (rcx_77 != 0)
                            result = sub_140a74f90(rcx_77)
                    
                    if ((rbx_10.b & 0x40) != 0)
                        rcx_16 = var_40
                        goto label_1425ca0a3
            else
                void* rcx_69 = *(arg2 + 0x20)
                void* rcx_70 =
                    *(sx.q(*(rcx_69 + 0x3c) * arg3) + sx.q(*(rcx_69 + 0x4c)) + *(arg2 + 0x18))
                int64_t var_288
                int64_t var_50
                int32_t rbx_6
                int64_t* r8_31
                
                if (rcx_70 == 0)
                    var_288 = 0
                    r8_31 = &var_288
                    int64_t var_280_1 = 0
                    rbx_6 = 0x20
                else
                    r8_31 = sub_140d21e10(rcx_70, &var_50, 0)
                    rbx_6 = 0x10
                
                int64_t var_e0 = *(arg1 + 8)
                void* rax_121 = *(arg1 + 0x10)
                void* var_d8_1 = rax_121
                
                if (rax_121 != 0)
                    *(rax_121 + 8) += 1
                
                result = sub_1425c42f0(&var_e0, arg2, r8_31)
                
                if ((rbx_6.b & 0x20) != 0)
                    int64_t rcx_72 = var_288
                    rbx_6 &= 0xffffffdf
                    
                    if (rcx_72 != 0)
                        result = sub_140a74f90(rcx_72)
                
                if ((rbx_6.b & 0x10) != 0)
                    rcx_16 = var_50
                    goto label_1425ca0a3
        else
            void* rcx_55 = *(arg2 + 0x20)
            int32_t* r14_4 = sx.q(*(rcx_55 + 0x3c) * arg3) + sx.q(*(rcx_55 + 0x4c)) + *(arg2 + 0x18)
            uint64_t rax_106 = sub_140d3c6e0(r14_4)
            int64_t var_268
            int64_t var_60
            int64_t* rax_110
            int32_t rbx_4
            
            if (rax_106 != 0)
            label_1425c9de4:
                uint64_t rax_111 = sub_140d3c6e0(r14_4)
                uint64_t rcx_61 = rax_111
                
                if (rax_111 == 0 && *(r14_4 + 0x10) != 0)
                    if (rax_111.d == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        rax_111 = zx.q(data_1439aaa30)
                    
                    if (rax_111.d != r14_4[2] || *r14_4 != 0xffffffff)
                        void* rax_112 = sub_140d2bce0(&r14_4[4])
                        sub_140d3a3a0(r14_4, rax_112)
                        
                        if (rax_112 != 0 || data_143e1d7b4 == 0)
                            int32_t rax_113 = 0
                            
                            if (0 == data_1439aaa30)
                                data_1439aaa30 = 0
                            else
                                rax_113 = data_1439aaa30
                            
                            r14_4[2] = rax_113
                        
                        rcx_61 = sub_140d3c6e0(r14_4)
                
                rax_110 = sub_140d21e10(rcx_61, &var_60, 0)
                rbx_4 = 4
            else
                if (*(r14_4 + 0x10) != 0)
                    if (rax_106.d == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        rax_106 = zx.q(data_1439aaa30)
                    
                    if (rax_106.d == r14_4[2] && *r14_4 == 0xffffffff)
                        goto label_1425c9dcb
                    
                    void* rax_107 = sub_140d2bce0(&r14_4[4])
                    sub_140d3a3a0(r14_4, rax_107)
                    
                    if (rax_107 != 0 || data_143e1d7b4 == 0)
                        int32_t rax_108 = 0
                        
                        if (0 == data_1439aaa30)
                            data_1439aaa30 = 0
                        else
                            rax_108 = data_1439aaa30
                        
                        r14_4[2] = rax_108
                    
                    if (sub_140d3c6e0(r14_4) != 0)
                        goto label_1425c9de4
                    
                    goto label_1425c9dcb
                
            label_1425c9dcb:
                var_268 = 0
                rax_110 = &var_268
                int64_t var_260_1 = 0
                rbx_4 = 8
            
            int64_t var_f0 = *(arg1 + 8)
            void* rcx_66 = *(arg1 + 0x10)
            void* var_e8_1 = rcx_66
            
            if (rcx_66 != 0)
                *(rcx_66 + 8) += 1
            
            result = sub_1425c42f0(&var_f0, arg2, rax_110)
            
            if ((rbx_4.b & 8) != 0)
                int64_t rcx_68 = var_268
                rbx_4 &= 0xfffffff7
                
                if (rcx_68 != 0)
                    result = sub_140a74f90(rcx_68)
            
            if ((rbx_4.b & 4) != 0)
                rcx_16 = var_60
                goto label_1425ca0a3
    else
        void* rcx_51 = *(arg2 + 0x20)
        void* rcx_52 = *(sx.q(*(rcx_51 + 0x3c) * arg3) + sx.q(*(rcx_51 + 0x4c)) + *(arg2 + 0x18))
        int64_t var_278
        int64_t var_70
        int32_t rbx_2
        int64_t* r8_29
        
        if (rcx_52 == 0)
            var_278 = 0
            r8_29 = &var_278
            int64_t var_270_1 = 0
            rbx_2 = 2
        else
            r8_29 = sub_140d21e10(rcx_52, &var_70, 0)
            rbx_2 = 1
        
        int64_t var_100 = *(arg1 + 8)
        void* rax_102 = *(arg1 + 0x10)
        void* var_f8_1 = rax_102
        
        if (rax_102 != 0)
            *(rax_102 + 8) += 1
        
        result = sub_1425c42f0(&var_100, arg2, r8_29)
        
        if ((rbx_2.b & 2) != 0)
            int64_t rcx_54 = var_278
            rbx_2 &= 0xfffffffd
            
            if (rcx_54 != 0)
                result = sub_140a74f90(rcx_54)
        
        if ((rbx_2.b & 1) != 0)
            rcx_16 = var_70
        label_1425ca0a3:
            
            if (rcx_16 != 0)
                return sub_140a74f90(rcx_16)
else
    void* rcx_5 = *(arg2 + 0x20)
    int64_t* r8_1 = *(rcx_5 + 0x78)
    void* rbx_1 = *(rcx_5 + 0x80)
    int64_t rdx_3 = sx.q(*(rcx_5 + 0x3c) * arg3) + sx.q(*(rcx_5 + 0x4c)) + *(arg2 + 0x18)
    int64_t var_200 = *(arg1 + 8)
    void* rax_12 = *(arg1 + 0x10)
    void* var_1f8_1 = rax_12
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1
    
    int64_t var_a0
    result = sub_1425c42f0(&var_200, arg2, 
        sub_140bdef30(rbx_1, &var_a0, (*(*r8_1 + 0x168))(r8_1, rdx_3)))
    int64_t rcx_9 = var_a0
    
    if (rcx_9 != 0)
        return sub_140a74f90(rcx_9)

return result
