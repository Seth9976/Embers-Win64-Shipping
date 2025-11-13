// 函数: sub_1420e3b00
// 地址: 0x1420e3b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_58[0x4] = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
uint32_t zmm8[0x4]
uint32_t var_78[0x4] = zmm8
uint32_t zmm9[0x4]
uint32_t var_88[0x4] = zmm9
uint32_t zmm10[0x4]
uint32_t var_98[0x4] = zmm10
uint128_t zmm11
uint128_t var_a8 = zmm11
uint128_t zmm13
uint128_t var_b8 = zmm13
void var_1b8
void** var_c8 = __security_cookie ^ &var_1b8
uint64_t* rbx = arg3
void** result

if (arg2 == 0 || arg2[0x26] == 0)
label_1420e406e:
    result.b = 1
else
    int32_t rsi_1 = arg3[1].d
    zmm13 = zx.o(*arg3)
    uint64_t zmm0 = *arg4
    int32_t var_160_1 = arg4[1].d
    int64_t var_150
    int64_t* var_198_1 = &var_150
    var_150 = 0
    int32_t var_148_1 = 0
    uint64_t var_140_1 = zmm13.q
    uint64_t var_168 = zmm0
    uint64_t var_188 = zmm13.q
    int32_t var_180_1 = rsi_1
    result, zmm7, zmm13 = sub_1420e1940(arg1, arg2, &var_188, &var_168, var_198_1)
    
    if (result.b == 0)
    label_1420e406e_1:
        result.b = 1
    else
        zmm6 = var_150.d
        zmm9 = 0x7fffffff
        zmm8 = 0x38d1b717
        zmm10 = _mm_and_ps(zmm6, 0x7fffffff)
        zmm11 = var_148_1
        
        if (zmm10[0] f> 9.99999975e-05f)
            result.b = 0
        else if (_mm_and_ps(var_150:4.d, 0x7fffffff).d f> 9.99999975e-05f)
            result.b = 0
        else if (_mm_and_ps(zmm11, 0x7fffffff).d f> 9.99999975e-05f)
            result.b = 0
        else
            result.b = 1
        
        if (result.b == 0)
            result.b = _mm_and_ps(zmm11, 0x7fffffff).d f<= 9.99999975e-05f
            char var_178_1 = result.b
            
            if (result.b != 0)
                goto label_1420e3d42
            
            int32_t var_180_2 = arg4[1].d
            uint128_t zmm0_1
            zmm0_1.d = zmm11.d f+ rbx[1].d
            int64_t* var_198_2 = nullptr
            rbx[1].d = zmm0_1.d
            int32_t rax_6 = rbx[1].d
            var_188 = *arg4
            var_168 = *rbx
            int32_t var_160_2 = rax_6
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm13 =
                sub_1420e1940(arg1, arg2, &var_168, &var_188, var_198_2)
            
            if (result.b == 0)
            label_1420e406e_2:
                result.b = 1
            else
                *rbx = zmm13.q
                rbx[1].d = rsi_1
            label_1420e3d42:
                bool cond:1_1 = zmm10[0] f<= zmm8[0]
                bool rcx = _mm_and_ps(var_150:4.d, zmm9).d f<= zmm8[0]
                
                if (cond:1_1 == 0)
                    if (rcx != 0)
                        goto label_1420e3d79
                    
                    goto label_1420e3d6b
                
                if (rcx == 0)
                    zmm6 = zx.o(0)
                label_1420e3d6b:
                    zmm7 = var_150:4.d
                label_1420e3d79:
                    char rdx_4 = *(arg2 + 0x5c) & 0x60
                    int32_t var_180_3 = 0
                    uint64_t var_128_1 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
                    int32_t var_120 = 0
                    uint32_t zmm1_1[0x4]
                    uint128_t zmm2_1
                    
                    if (rdx_4 != 0x40)
                        if (cond:1_1 != 0 || rcx != 0)
                            int32_t var_180_7 = 0
                            zmm2_1 = zmm6 ^ 0x80000000
                            int32_t var_114_2 = 0
                            int32_t var_180_8 = 0
                            zmm1_1 = zmm7 ^ 0x80000000
                            uint64_t var_11c_2 = (_mm_unpacklo_ps(zmm2_1, zmm1_1[0].q)).q
                            uint64_t var_110_2 = (_mm_unpacklo_ps(zmm7, zmm6[0].q)).q
                            int32_t var_108_2 = 0
                            int32_t var_180_9 = 0
                            uint64_t var_104_2 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                            int32_t var_fc_2 = 0
                            
                            if (rcx == 0)
                                zmm6 = zmm7
                            
                            zmm1_1 = zmm6 ^ 0x80000000
                            uint64_t var_f8_2 = (_mm_unpacklo_ps(zmm6, zmm6[0].q)).q
                            uint64_t var_ec_2 = (_mm_unpacklo_ps(zmm6, zmm1_1[0].q)).q
                            uint64_t var_e0_2 = (_mm_unpacklo_ps(zmm1_1, zmm6[0].q)).q
                            zmm0_1 = _mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)
                        else
                            int32_t var_180_4 = 0
                            uint32_t zmm3_1[0x4] = zmm6 ^ data_142d3f780
                            zmm2_1 = zmm7 ^ data_142d3f780
                            uint64_t var_11c_1 = (_mm_unpacklo_ps(zmm3_1, zmm7.q)).q
                            uint64_t var_110_1 = (_mm_unpacklo_ps(zmm6, zmm2_1.q)).q
                            uint64_t var_104_1 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
                            uint64_t var_f8_1 = (_mm_unpacklo_ps(zmm7, zmm6[0].q)).q
                            uint64_t var_ec_1 = (_mm_unpacklo_ps(zmm2_1, zmm6[0].q)).q
                            int32_t var_114_1 = 0
                            int32_t var_180_5 = 0
                            uint64_t var_e0_1 = (_mm_unpacklo_ps(zmm7, zmm3_1[0].q)).q
                            int32_t var_108_1 = 0
                            int32_t var_180_6 = 0
                            zmm0_1 = _mm_unpacklo_ps(zmm2_1, zmm3_1[0].q)
                            int32_t var_fc_1 = 0
                        
                        int32_t var_180_10 = 0
                        int32_t var_f0_1 = 0
                        int32_t var_180_11 = 0
                        int32_t var_e4_1 = 0
                        int32_t var_180_12 = 0
                        int32_t var_d8_1 = 0
                        int32_t var_180_13 = 0
                        int32_t var_cc_1 = 0
                        uint64_t var_d4_1 = zmm0_1.q
                    
                    zmm6 = rsi_1
                    int32_t* rdi_2 = &var_120
                    zmm7 = var_140_1:4.d
                    int64_t rsi_2 = 0
                    zmm8 = var_140_1.d
                    int64_t r12_1 = 8
                    
                    if (rdx_4 == 0x40)
                        r12_1 = 1
                    
                    while (true)
                        int32_t var_180_14 = arg4[1].d
                        zmm8[0] = zmm8[0] f+ rdi_2[-2]
                        int64_t* var_198_3 = nullptr
                        zmm0_1.d = zmm6.d f+ *rdi_2
                        zmm2_1.d = zmm7.d f+ rdi_2[-1]
                        int32_t var_138_2 = zmm0_1.d
                        zmm0_1 = zx.o(*arg4)
                        zmm1_1 = _mm_unpacklo_ps(zmm8, zmm2_1.q)
                        *rbx = zmm1_1.q
                        rbx[1].d = var_138_2
                        int32_t var_160_3 = var_138_2
                        var_188 = zmm0_1.q
                        var_168 = zmm1_1.q
                        result, zmm6, zmm7, zmm8, zmm11, zmm13 =
                            sub_1420e1940(arg1, arg2, &var_168, &var_188, var_198_3)
                        
                        if (result.b == 0)
                            goto label_1420e406e_2
                        
                        rsi_2 += 1
                        rdi_2 = &rdi_2[3]
                        
                        if (rsi_2 s>= r12_1)
                            if (var_178_1 == 0)
                                int64_t rsi_3 = 0
                                void* rdi_3 = &var_120
                                
                                do
                                    int64_t* var_198_4 = nullptr
                                    zmm8[0] = zmm8[0] f+ *(rdi_3 - 8)
                                    zmm0_1.d = zmm6.d f+ *rdi_3
                                    zmm2_1.d = zmm7.d f+ *(rdi_3 - 4)
                                    int32_t var_138_3 = zmm0_1.d
                                    *rbx = (_mm_unpacklo_ps(zmm8, zmm2_1.q)).q
                                    rbx[1].d = var_138_3
                                    zmm0_1.d = zmm11.d f+ rbx[1].d
                                    int32_t var_180_15 = arg4[1].d
                                    rbx[1].d = zmm0_1.d
                                    int32_t rax_10 = rbx[1].d
                                    var_188 = *arg4
                                    var_168 = *rbx
                                    int32_t var_160_4 = rax_10
                                    result, zmm6, zmm7, zmm8, zmm11, zmm13 =
                                        sub_1420e1940(arg1, arg2, &var_168, &var_188, var_198_4)
                                    
                                    if (result.b == 0)
                                        goto label_1420e406e_2
                                    
                                    rsi_3 += 1
                                    rdi_3 += 0xc
                                while (rsi_3 s< r12_1)
                            
                            break
                
                *rbx = zmm13.q
                result.b = 0
                rbx[1].d = rsi_1
        else
            int64_t rax_2 = sub_14254ab60()
            int64_t r8_2 = *arg2
            result = (*(r8_2 + 0x610))(arg2, rax_2, r8_2)
            int64_t* rcx_2
            
            if (result != 0)
                rcx_2 = result[0x17]
            
            int64_t rax_3
            
            if (result == 0 || rcx_2 == 0)
                int64_t* rdi_1 = arg2[0x26]
                
                if (rdi_1 != 0)
                    void* rax_4 = sub_142577430()
                    void* rcx_3 = rdi_1[2]
                    result = sx.q(*(rax_4 + 0x38))
                    
                    if (result.d s<= *(rcx_3 + 0x38) && (*(rcx_3 + 0x30))[result] == rax_4 + 0x30)
                        rax_3 = *rdi_1
                        rcx_2 = rdi_1
                        goto label_1420e3ca4
            else
                rax_3 = *rcx_2
            label_1420e3ca4:
                (*(rax_3 + 0x720))(rcx_2, &var_188, zx.o(0))
                
                if (var_188.d == 1)
                    sub_1424814a0()
            *rbx = zmm13.q
            result.b = 0
            rbx[1].d = rsi_1

__security_check_cookie(var_c8 ^ &var_1b8)
return result
