// 函数: sub_1426b6660
// 地址: 0x1426b6660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
void var_1b8
uint64_t var_b8 = __security_cookie ^ &var_1b8
uint64_t result

if (arg2 == 0)
    result.b = 0
else
    if (0f f!= *arg3 || 0f f!= arg3[1] || 0f f!= arg3[2])
        result.b = 0
    else
        result.b = 1
    
    uint64_t var_188
    
    if (result.b == 0)
    label_1426b6716:
        void var_168
        (*(*arg2 + 0x600))(arg2, &var_168, arg1[0x4a])
        void* rdi_1 = arg1[0x4a]
        TEB* gsbase
        
        if (data_143f72108
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f72108)
            
            if (data_143f72108 == 0xffffffff)
                sub_140b58170(&data_143f72100, "LineOfSight", 1)
                _Init_thread_footer(&data_143f72108)
        
        void var_178
        void var_158
        sub_141eb54c0(&var_158, data_143f72100, &var_178, 1, rdi_1)
        sub_141eb8b10(&var_158, arg2)
        int64_t* rbx
        
        if (sub_141ec6cd0((*(*arg1 + 0x150))(arg1), arg3, &var_168, 3, &var_158, &data_143f3a660)
                != 0)
            void* rax_8 = sub_14255d000()
            void* rdx_5 = arg2[2]
            int32_t rdi_2 = 0
            int64_t rax_9 = sx.q(*(rax_8 + 0x38))
            int64_t* r12_1
            
            if (rax_9.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                void* r15_1 = arg2[0x26]
                r12_1 = nullptr
                
                if (r15_1 == 0)
                labelid_c:
                    rbx.b = 0
                else
                    void* rax_11 = sub_142488170()
                    void* rdx_6 = *(r15_1 + 0x10)
                    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                    
                    if (rax_12.d s<= *(rdx_6 + 0x38)
                            && *(*(rdx_6 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30)
                        goto label_1426b6864
                    
                labelid_c:
                    rbx.b = 0
            else
                r12_1 = arg2
            label_1426b6864:
                void* rax_14 = arg2[0x26]
                float var_180_1
                float zmm1_1[0x4]
                
                if (rax_14 == 0)
                    float rax_15 = data_143dbb200
                    var_188 = data_143dbb1f8.q
                    var_180_1 = rax_15
                else
                    zmm1_1 = *(rax_14 + 0x1d0)
                    var_188.d = zmm1_1[0]
                    float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    var_180_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                    var_188:4.d = temp0_1[0]
                
                zmm6 = zx.o(var_188)
                int64_t zmm2_1
                zmm2_1.d = zmm6.q.d f- *arg3
                var_188 = zmm6.q
                float zmm8_1[0x4] = var_188:4.d
                zmm8_1[0] = zmm8_1[0] f- arg3[1]
                float zmm7_1[0x4] = var_180_1
                zmm2_1.d = zmm2_1.d f* zmm2_1.d
                zmm7_1[0] = zmm7_1[0] f- arg3[2]
                zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm8_1[0]
                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm7_1[0]
                
                if (zmm2_1.d f> 64000000f || (r12_1 == 0 && zmm2_1.d f> 4000000f))
                label_1426b6c0b:
                    rbx.b = 0
                else
                    int32_t var_174
                    int32_t var_170
                    (*(*arg2 + 0x560))(arg2, &var_170, &var_174)
                    char rax_20
                    
                    if (arg4 == 0 || (arg1[0x5a].b & 4) == 0)
                        int64_t rax_18 = *arg1
                        zmm7_1[0] = zmm7_1[0] f+ var_174
                        var_188.d = zmm6.d
                        var_188:4.d = zmm8_1[0]
                        float var_180_3 = zmm7_1[0]
                        rax_20, zmm6, zmm7_1, zmm8_1 = sub_141ec6cd0((*(rax_18 + 0x150))(arg1), 
                            arg3, &var_188, 3, &var_158, &data_143f3a660)
                    
                    if ((arg4 != 0 && (arg1[0x5a].b & 4) != 0) || rax_20 != 0)
                        char rax_21 = (arg1[0x5a].d).b
                        
                        if ((rax_21 & 8) != 0 || (arg4 != 0 && (rax_21 & 4) == 0))
                        label_1426b6c0b_1:
                            rbx.b = 0
                        else
                            float zmm9_1[0x4] = var_170
                            int32_t zmm10_1 = *arg3
                            int32_t zmm11_1 = arg3[1]
                            int64_t zmm3_1
                            zmm3_1.d = zmm6.q.d f- zmm10_1
                            int32_t zmm12_1 = arg3[2]
                            zmm2_1.d = zmm8_1[0].q.d f- zmm11_1
                            zmm7_1[0] = zmm7_1[0] f- zmm12_1
                            zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
                            zmm3_1.d = zmm3_1.d f* zmm3_1.d
                            zmm2_1.d = zmm2_1.d f* zmm2_1.d
                            zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                            zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                            zmm3_1.d = zmm3_1.d f+ zmm7_1[0]
                            zmm9_1[0] = zmm9_1[0] f/ zmm3_1.d
                            
                            if (zmm9_1[0] < 9.99999975e-05f)
                            label_1426b6c0b_2:
                                rbx.b = 0
                            else
                                float var_180_4 = zmm7_1[0]
                                zmm9_1[0] = zmm9_1[0] * -1f
                                int32_t r15_2 = 0
                                uint128_t zmm4_1
                                zmm4_1.d = zmm6.d f- zmm9_1[0]
                                float var_e0_1 = var_180_4
                                zmm6.d = zmm6.d f+ zmm9_1[0]
                                zmm2_1.d = zmm8_1[0].q.d f- zmm9_1[0]
                                float var_d4_1 = zmm7_1[0]
                                zmm3_1.d = zmm8_1[0].q.d f+ zmm9_1[0]
                                float var_180_7 = zmm7_1[0]
                                float var_c8_1 = zmm7_1[0]
                                int64_t zmm5_1
                                zmm5_1.d = zmm8_1[0].q.d f- zmm9_1[0]
                                float temp0_3[0x4] = _mm_unpacklo_ps(zmm4_1, zmm2_1)
                                zmm8_1[0] = zmm8_1[0] + zmm9_1[0]
                                int64_t var_e8 = temp0_3.q
                                zmm2_1.d = zmm2_1.d f- zmm11_1
                                float var_bc_1 = var_180_7
                                zmm1_1 = zmm4_1
                                int64_t var_dc_1 = (_mm_unpacklo_ps(zmm6, zmm3_1)).q
                                zmm1_1[0] = zmm1_1[0] f- zmm10_1
                                zmm3_1.d = zmm3_1.d f- zmm11_1
                                zmm9_1 = zmm6
                                int64_t var_d0_1 = (_mm_unpacklo_ps(zmm4_1, zmm5_1)).q
                                zmm9_1[0] = zmm9_1[0] f- zmm10_1
                                zmm2_1.d = zmm2_1.d f* zmm2_1.d
                                int32_t r12_2 = 0
                                int64_t var_c4_1 = (_mm_unpacklo_ps(zmm6, zmm8_1[0].q)).q
                                zmm7_1[0] = zmm7_1[0] f- zmm12_1
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
                                zmm1_1[0] = zmm1_1[0] f+ zmm2_1.d
                                zmm3_1.d = zmm3_1.d f* zmm3_1.d
                                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                                zmm9_1[0] = zmm9_1[0] f+ zmm3_1.d
                                zmm1_1[0] = zmm1_1[0] + zmm7_1[0]
                                zmm7_1[0] = zmm7_1[0] f- zmm12_1
                                zmm2_1 = zmm1_1[0].q
                                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                                zmm9_1[0] = zmm9_1[0] + zmm7_1[0]
                                zmm9_1[0] - zmm1_1[0]
                                
                                if (not(zmm9_1[0] <= zmm1_1[0]))
                                    zmm2_1 = zmm9_1[0].q
                                    r12_2 = 1
                                else if (not(zmm9_1[0] >= zmm1_1[0]))
                                    zmm1_1 = zmm9_1
                                    r15_2 = 1
                                
                                zmm4_1.d = zmm4_1.d f- zmm10_1
                                zmm5_1.d = zmm5_1.d f- zmm11_1
                                zmm7_1[0] = zmm7_1[0] f- zmm12_1
                                zmm4_1.d = zmm4_1.d f* zmm4_1.d
                                zmm5_1.d = zmm5_1.d f* zmm5_1.d
                                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                                zmm4_1.d = zmm4_1.d f+ zmm5_1.d
                                zmm4_1.d = zmm4_1.d f+ zmm7_1[0]
                                
                                if (not(zmm4_1.d f<= zmm2_1.d))
                                    zmm2_1 = zmm4_1.q
                                    r12_2 = 2
                                else if (not(zmm4_1.d f>= zmm1_1[0]))
                                    zmm1_1 = zmm4_1
                                    r15_2 = 2
                                
                                zmm6.d = zmm6.d f- zmm10_1
                                zmm8_1[0] = zmm8_1[0] f- zmm11_1
                                zmm7_1[0] = zmm7_1[0] f- zmm12_1
                                zmm6.d = zmm6.d f* zmm6.d
                                zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
                                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                                zmm6.d = zmm6.d f+ zmm8_1[0]
                                zmm6.d = zmm6.d f+ zmm7_1[0]
                                
                                if (not(zmm6.d f<= zmm2_1.d))
                                    r12_2 = 3
                                else if (zmm1_1[0] f> zmm6.d)
                                    r15_2 = 3
                                
                                while (rdi_2 == r15_2 || rdi_2 == r12_2 || sub_141ec6cd0(
                                        (*(*arg1 + 0x150))(arg1), arg3, 
                                        &var_e8 + sx.q(rdi_2) * 0xc, 3, &var_158, &data_143f3a660) != 0)
                                    rdi_2 += 1
                                    
                                    if (rdi_2 s>= 4)
                                        goto label_1426b6c0b_2
                                
                                rbx.b = 1
                    else
                        rbx.b = 1
        else
            rbx.b = 1
        
        int64_t var_f8
        
        if (var_f8 != 0)
            sub_140a74f90(var_f8)
        
        int64_t var_118
        
        if (var_118 != 0)
            sub_140a74f90(var_118)
        
        result = zx.q(rbx.b)
    else
        (*(*arg1 + 0x5f8))(arg1, arg3, &var_188)
        
        if (0f f!= *arg3 || 0f f!= arg3[1] || 0f f!= arg3[2])
            result.b = 0
        else
            result.b = 1
        
        if (result.b == 0)
            goto label_1426b6716
        
        result.b = 0

__security_check_cookie(var_b8 ^ &var_1b8)
return result
