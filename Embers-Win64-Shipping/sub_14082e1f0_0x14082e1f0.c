// 函数: sub_14082e1f0
// 地址: 0x14082e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_648
int64_t rax_1 = __security_cookie ^ &var_648
void* result = data_143ce3b68
void* rdi = arg4

if (*(result + 4) != 0)
    void* r15_1 = *(arg1 + 8)
    
    if (r15_1 != 0)
        result = *(arg4 + 0x1a0)
        
        if (result != 0)
            void* r13_1 = *(r15_1 + 0x18)
            void* var_5b0_1 = r13_1
            
            if (*(r15_1 + 0x10) != 0)
                r13_1 = *(r13_1 + 0x140)
                var_5b0_1 = r13_1
            
            if (r13_1 != 0)
                int64_t* rdx = *(arg1 + 0x208)
                
                if (rdx != 0 && *(r13_1 + 0xb4) != 0 && *(r13_1 + 0xb0) != 0 && data_14396f028 != 0
                        && data_1439c7a0c != 0)
                    uint32_t i
                    
                    for (i = zx.d(*(rdx + 0x5f)); i s< rdx[1].d - 1; i += 1)
                        if (sub_142366560(*(*rdx + (sx.q(i) << 3))) != 0)
                            break
                        
                        rdx = *(arg1 + 0x208)
                    
                    void* rcx_3 = *(**(arg1 + 0x208) + (sx.q(i) << 3))
                    int64_t var_5a0 = 0
                    int32_t i_1 = 0
                    int64_t var_598_1 = 0
                    char var_58f_1 = 0xff
                    int32_t var_58c_1
                    __builtin_memset(&var_58c_1, 0, 0x1c)
                    void* var_5a8 = rcx_3 + 0x200
                    void* var_5d0
                    
                    if (*(rcx_3 + 0x30) s> 0)
                        void* rcx_4 = r15_1 + 0x20
                        var_5d0 = rcx_4
                        
                        do
                            void* rax_10 = *(rcx_3 + 0x28)
                            void* rdi_1 = rcx_3 + 0x10
                            int64_t i_2 = sx.q(i_1)
                            
                            if (rax_10 != 0)
                                rdi_1 = rax_10
                            
                            void* rax_11 = *(rcx_4 + 0x40)
                            int64_t r15_2 = i_2 * 3
                            
                            if (rax_11 != 0)
                                rcx_4 = rax_11
                            
                            int64_t r12_1 = *(rcx_4 + (i_2 << 3))
                            
                            if (*(rdi_1 + (r15_2 << 3) + 8) != 0 && r12_1 != 0)
                                void var_198
                                sub_14081a190(&var_198)
                                int64_t r8 = *(*(arg1 + 0x208) + 0x10)
                                int64_t var_118_1 = r12_1
                                char var_fd_1 = i_1.b
                                char var_fe_1 = i.b
                                int64_t rdx_2 = sx.q(i) * 0x430
                                int64_t var_120_1 = r8 + rdx_2
                                int32_t rax_17 = zx.d(*(arg4 + 0x39)) & 2
                                int32_t var_fc =
                                    ((rax_17 << 0x18 | rax_17) * 2) | (var_fc & 0xfbfffffb)
                                void* rcx_11 = &var_198
                                void* var_130
                                
                                if (var_130 != 0)
                                    rcx_11 = var_130
                                
                                *(rcx_11 + 0x28) = *(r8 + rdx_2 + 0x200)
                                *(rcx_11 + 0x50) = *(rdi_1 + (r15_2 << 3) + 0xc)
                                *(rcx_11 + 0x54) = *(rdi_1 + (r15_2 << 3) + 0x10)
                                int64_t rdi_2 = sx.q(var_598_1.d)
                                int32_t rax_24 = (rdi_2 + 1).d
                                var_598_1.d = rax_24
                                
                                if (rax_24 s> var_598_1:4.d)
                                    sub_140775640(&var_5a0)
                                
                                sub_140819f30(rdi_2 * 0xa0 + var_5a0, &var_198)
                                
                                if (var_130 != 0)
                                    sub_140a74f90(var_130)
                            
                            i_1 += 1
                            rcx_4 = var_5d0
                        while (i_1 s< *(rcx_3 + 0x30))
                        
                        r13_1 = var_5b0_1
                        rdi = arg4
                    
                    int64_t r8_1 = *(r13_1 + 0x18)
                    void* r15_3 = arg1 + 0xb0
                    int32_t rax_26 = *(r13_1 + 0xb0)
                    void* rcx_17 = r15_3
                    float zmm0[0x4] = *(rdi + 0x80)
                    float zmm1[0x4] = *(rdi + 0x90)
                    void* rax_27 = *(r15_3 + 0x100)
                    float var_538[0x4] = zmm0
                    float var_438_1[0x4] = zmm1
                    
                    if (rax_27 != 0)
                        rcx_17 = rax_27
                    
                    int32_t r11_1 = *(rcx_17 + 0x40)
                    int32_t rdx_5 = *rcx_17
                    int32_t r10_1 = *(rcx_17 + 0x30)
                    int32_t rcx_18 = *(r13_1 + 0xb8)
                    int64_t rax_30 = zx.q(r11_1 * rcx_18) + r8_1
                    int64_t var_2e0_1 = rax_30
                    int64_t rsi_3 = zx.q(rdx_5 * rcx_18) + r8_1
                    float (* rbx_3)[0x4] = zx.q((rdx_5 + 1) * rcx_18) + r8_1
                    int64_t r12_4 = zx.q((rdx_5 + 2) * rcx_18) + r8_1
                    int64_t rdx_8 = zx.q(r10_1 * rcx_18) + r8_1
                    float var_378[0x4] = zmm0
                    zmm0 = *(rdi + 0xa0)
                    int64_t r9_2 = zx.q((r10_1 + 1) * rcx_18) + r8_1
                    float var_368_1[0x4] = zmm1
                    zmm1 = *(rdi + 0xb0)
                    int64_t rax_33 = zx.q((r11_1 + 1) * rcx_18) + r8_1
                    uint64_t rdi_3 = zx.q(rax_26)
                    int64_t r10_4 = zx.q((r10_1 + 2) * rcx_18) + r8_1
                    int64_t var_2e8_1 = rax_33
                    var_5d0.d = r11_1
                    int64_t var_2f8_1 = rsi_3
                    float (* var_300_1)[0x4] = rbx_3
                    int64_t var_308_1 = r12_4
                    int64_t rax_36 = zx.q((r11_1 + 2) * rcx_18) + r8_1
                    int64_t var_330_1 = rdx_8
                    int64_t var_2f0_1 = rax_36
                    int64_t var_2d0_1 = r9_2
                    int64_t var_2d8_1 = r10_4
                    float var_428_1[0x4] = zmm0
                    float var_358_1[0x4] = zmm0
                    int64_t rax_39 = zx.q((r11_1 + 3) * rcx_18) + r8_1
                    float var_418_1[0x4] = zmm1
                    int64_t var_338_1 = rax_39
                    float var_348_1[0x4] = zmm1
                    int64_t var_588
                    int32_t* var_570
                    float var_558[0x4]
                    
                    if (rdi_3.d s> 0)
                        int32_t* rdx_9 = rdx_8 - rbx_3
                        int128_t* rcx_20 = rax_33 - rbx_3
                        int128_t* r8_3 = rax_36 - rbx_3
                        float zmm6[0x4]
                        float var_58_1[0x4] = zmm6
                        int32_t* r9_3 = r9_2 - rbx_3
                        float zmm12[0x4]
                        float var_b8_1[0x4] = zmm12
                        int128_t* rsi_4 = rsi_3 - rbx_3
                        float zmm13[0x4]
                        float var_c8_1[0x4] = zmm13
                        float (* r12_5)[0x4] = r12_4 - rbx_3
                        float zmm14[0x4]
                        float var_d8_1[0x4] = zmm14
                        int128_t* r15_5 = rax_30 - rbx_3
                        float zmm15[0x4]
                        float var_e8_1[0x4] = zmm15
                        int32_t* r10_5 = r10_4 - rbx_3
                        float zmm7[0x4]
                        float var_68_1[0x4] = zmm7
                        float zmm8[0x4]
                        float var_78_1[0x4] = zmm8
                        float zmm9[0x4]
                        float var_88_1[0x4] = zmm9
                        float zmm10[0x4]
                        float var_98_1[0x4] = zmm10
                        float zmm11[0x4]
                        float var_a8_1[0x4] = zmm11
                        int128_t* var_5e0_2 = rcx_20
                        int128_t* var_5c8_3 = r8_3
                        int128_t* var_5b8_2 = rax_39 - rbx_3
                        int32_t* var_518_1 = rdx_9
                        int32_t* var_510_1 = r9_3
                        var_570 = r10_5
                        int32_t var_5d8_1
                        var_5d8_1.q = rdi_3
                        
                        while (true)
                            bool cond:8_1 = *(arg1 + 0xa4) != 0
                            zmm6 = data_14399f6e0
                            float zmm3[0x4] = data_14399f6f0
                            float zmm4[0x4] = data_14399f700
                            var_558 = zmm6
                            float zmm5[0x4]
                            
                            if (cond:8_1)
                                zmm5 = data_14399f710
                                float temp0_194[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), zmm3)
                                zmm3[1] = 0
                                float temp0_195[0x4] = _mm_shuffle_ps(0, 0, 0x55)
                                float temp0_196[0x4] = _mm_shuffle_ps(0, 0, 0)
                                float temp0_197[0x4] = _mm_shuffle_ps(0, 0, 0xaa)
                                float temp0_198[0x4] = _mm_mul_ps(temp0_196, zmm6)
                                float temp0_199[0x4] = _mm_mul_ps(temp0_197, zmm4)
                                float temp0_201[0x4] = _mm_mul_ps(_mm_shuffle_ps(0, 0, 0xff), zmm5)
                                float temp0_202[0x4] = _mm_mul_ps(temp0_195, zmm3)
                                zmm4[2] = 0
                                float var_388_1[0x4] = zmm5
                                zmm12 = _mm_add_ps(
                                    _mm_add_ps(_mm_add_ps(temp0_202, temp0_198), temp0_199), 
                                    temp0_201)
                                float temp0_206[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                                float temp0_207[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                                float temp0_208[0x4] = _mm_mul_ps(temp0_206, zmm6)
                                float temp0_209[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                                float temp0_210[0x4] = _mm_mul_ps(temp0_207, zmm4)
                                float temp0_212[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm5)
                                float var_208_1[0x4] = zmm12
                                zmm13 = _mm_add_ps(
                                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_209, zmm3), temp0_208), 
                                        temp0_210), 
                                    temp0_212)
                                float temp0_218[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
                                float temp0_219[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                                float temp0_221[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm4)
                                float temp0_222[0x4] = _mm_mul_ps(temp0_219, zmm3)
                                float temp0_224[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm5)
                                float temp0_225[0x4] = _mm_add_ps(temp0_222, temp0_218)
                                float var_1f8_1[0x4] = zmm13
                                float temp0_227[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm6)
                                float temp0_228[0x4] = _mm_add_ps(temp0_225, temp0_221)
                                float temp0_230[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm4)
                                float temp0_231[0x4] = _mm_add_ps(temp0_194, temp0_227)
                                float temp0_232[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                                zmm14 = _mm_add_ps(temp0_228, temp0_224)
                                float temp0_234[0x4] = _mm_mul_ps(temp0_232, zmm5)
                                float var_1e8_1[0x4] = zmm14
                                zmm15 = _mm_add_ps(_mm_add_ps(temp0_231, temp0_230), temp0_234)
                                float var_1d8_1[0x4] = zmm15
                            label_14082eec2:
                                float var_3c8_2[0x4] = zmm15
                                float var_3d8_2[0x4] = zmm14
                                float var_3e8_2[0x4] = zmm13
                                float var_3f8_2[0x4] = zmm12
                            else
                                zmm12 = *(rsi_4 + rbx_3)
                                zmm7 = 0x3f800000
                                int32_t var_408_1 = 0x3f800000
                                zmm8 = zx.o(0)
                                zmm11 = zx.o(0)
                                zmm10 = zx.o(0)
                                zmm13 = 0x3f800000
                                zmm14 = zx.o(0)
                                zmm9 = zx.o(0)
                                zmm15 = zx.o(0)
                                float zmm2[0x4]
                                
                                if (r11_1 s> 0)
                                    zmm0 = *(rcx_20 + rbx_3)
                                    zmm1 = *(r8_3 + rbx_3)
                                    zmm5 = *(r15_5 + rbx_3)
                                    zmm7 = data_143ce3b80
                                    zmm6 = data_143ce3940
                                    float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
                                    zmm2 = *(var_5b8_2 + rbx_3)
                                    temp0_1[0] = zmm0[0]
                                    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                                    temp0_2[0] = zmm1[0]
                                    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
                                    temp0_3[0] = zmm2[0]
                                    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
                                    float temp0_5[0x4] = _mm_mul_ps(temp0_4, temp0_4)
                                    float temp0_7[0x4] =
                                        _mm_add_ps(temp0_5, _mm_shuffle_ps(temp0_5, temp0_5, 0x4e))
                                    float temp0_9[0x4] =
                                        _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x39), temp0_7)
                                    float temp0_10[0x4] = _mm_rsqrt_ps(temp0_9)
                                    float temp0_11[0x4] = _mm_mul_ps(temp0_9, zmm7)
                                    float temp0_16[0x4] = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm7, 
                                                _mm_mul_ps(_mm_mul_ps(temp0_10, temp0_10), 
                                                    temp0_11)), 
                                            temp0_10), 
                                        temp0_10)
                                    float temp0_19[0x4] = _mm_sub_ps(zmm7, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_16, temp0_16), temp0_11))
                                    float temp0_21[0x4] = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_9, 2)
                                    float temp0_24[0x4] = _mm_mul_ps(
                                        _mm_add_ps(_mm_mul_ps(temp0_19, temp0_16), temp0_16), 
                                        temp0_4)
                                    zmm5 = __andps_xmmxud_memxud(zmm6, data_143ce3950)
                                    float var_1a8_1[0x4] = zmm5
                                    float temp0_26[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                                    zmm7 = _mm_and_ps(temp0_24 ^ data_143ce3b70, temp0_21)
                                        ^ data_143ce3b70
                                    float var_528_1[0x4] = zmm7
                                    float temp0_28[0x4] = _mm_add_ps(zmm7, zmm7)
                                    float var_1c8_1[0x4] = zmm7
                                    float temp0_29[0x4] = _mm_shuffle_ps(zmm7, zmm7, 4)
                                    float temp0_30[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                                    float temp0_31[0x4] = _mm_mul_ps(zmm7, temp0_28)
                                    float temp0_33[0x4] = _mm_mul_ps(temp0_29, 
                                        _mm_shuffle_ps(temp0_28, temp0_28, 0x29))
                                    float temp0_35[0x4] = _mm_mul_ps(temp0_30, 
                                        _mm_shuffle_ps(temp0_28, temp0_28, 0x12))
                                    float temp0_38[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_31, temp0_31, 0x1a), 
                                        _mm_shuffle_ps(temp0_31, temp0_31, 1))
                                    float temp0_39[0x4] = _mm_add_ps(temp0_35, temp0_33)
                                    float temp0_40[0x4] = _mm_sub_ps(temp0_33, temp0_35)
                                    float temp0_41[0x4] = _mm_sub_ps(zmm6, temp0_38)
                                    float temp0_42[0x4] = _mm_mul_ps(temp0_39, zmm5)
                                    float temp0_43[0x4] = _mm_mul_ps(temp0_26, temp0_40)
                                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_41, zmm5), 
                                        data_143ce3950)
                                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_42, zmm1, 0), 
                                        _mm_shuffle_ps(temp0_43, zmm1, 0x32), 0x82)
                                    zmm6[0].q = zmm8 u>> 0x40
                                    float temp0_49[0x4] = _mm_shuffle_ps(zmm8, zmm6, 0xc4)
                                    zmm6 = var_558
                                    float temp0_50[0x4] = _mm_shuffle_ps(temp0_42, zmm1, 0x31)
                                    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_42, temp0_43, 0x12), 
                                        zmm1, 0xe8)
                                    float var_298_1[0x4] = temp0_49
                                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_43, zmm1, 0x10), 
                                        temp0_50, 0x88)
                                    var_408_1.o = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                                    float var_2c8_1[0x4] = zmm7
                                    float var_2b8_1[0x4] = zmm10
                                    float var_2a8_1[0x4] = zmm9
                                    zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                                    zmm11 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                                    zmm13 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                                    zmm14 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                                    zmm15 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                                
                                zmm5 = data_14399f710
                                float var_488_1[0x4] = zmm5
                                
                                if (r10_1 s> 0)
                                    zmm1 = zmm3[0].q:4.d
                                    zmm0 = zmm4[0].12:8.d
                                    zmm2 = zmm6[0]
                                    zmm1[0] = zmm1[0] f* *(r9_3 + rbx_3)
                                    zmm0[0] = zmm0[0] f* *(r10_5 + rbx_3)
                                    zmm2[0] = zmm2[0] f* *(rdx_9 + rbx_3)
                                    float temp0_61[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                                    float temp0_62[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                                    temp0_61[0] = zmm0[0]
                                    temp0_62[0] = zmm1[0]
                                    zmm4 = _mm_shuffle_ps(temp0_61, temp0_61, 0xc9)
                                    zmm3 = _mm_shuffle_ps(temp0_62, temp0_62, 0xe1)
                                    zmm6[0] = zmm2[0]
                                    float var_498_2[0x4] = zmm4
                                    float var_4a8_2[0x4] = zmm3
                                    float var_4b8_2[0x4] = zmm6
                                
                                zmm2 = data_142d3f660
                                float temp0_65[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe1)
                                temp0_65[0] = zmm13[0]
                                float temp0_66[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
                                float temp0_67[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xc6)
                                temp0_66[0] = zmm15[0]
                                temp0_67[0] = zmm14[0]
                                float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xc6)
                                float temp0_69[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x27)
                                float temp0_70[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
                                temp0_70[0] = zmm8[0]
                                float var_448_1[0x4] = zmm2
                                float temp0_71[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xc6)
                                temp0_71[0] = zmm11[0]
                                float temp0_72[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x27)
                                temp0_72[0] = zmm12[0]
                                float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x39)
                                float var_478_1[0x4] = temp0_73
                                float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0x55)
                                float temp0_76[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0), zmm6)
                                float temp0_78[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xaa), zmm4)
                                float temp0_79[0x4] = _mm_mul_ps(temp0_74, zmm3)
                                float temp0_81[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xff), zmm5)
                                float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_76)
                                temp0_69[0] = (*rbx_3)[0]
                                float temp0_83[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x39)
                                float var_468_1[0x4] = temp0_83
                                float temp0_84[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0x55)
                                float temp0_85[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0)
                                float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_78)
                                float temp0_87[0x4] = _mm_mul_ps(temp0_85, zmm6)
                                float temp0_88[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0xaa)
                                float temp0_90[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_83, temp0_83, 0xff), zmm5)
                                float temp0_91[0x4] = _mm_add_ps(temp0_86, temp0_81)
                                float temp0_92[0x4] = _mm_mul_ps(temp0_88, zmm4)
                                float var_288_1[0x4] = temp0_91
                                float temp0_94[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_84, zmm3), temp0_87)
                                temp0_68[0] = var_408_1.o[0]
                                zmm0 = *(r12_5 + rbx_3)
                                float temp0_95[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x27)
                                temp0_95[0] = zmm0[0]
                                float temp0_96[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0x39)
                                float var_458_1[0x4] = temp0_96
                                float temp0_97[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0)
                                float temp0_98[0x4] = _mm_add_ps(temp0_94, temp0_92)
                                float temp0_99[0x4] = _mm_mul_ps(temp0_97, zmm6)
                                float temp0_101[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xaa), zmm4)
                                float temp0_102[0x4] = _mm_add_ps(temp0_98, temp0_90)
                                float temp0_103[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0x55)
                                float temp0_105[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xff), zmm5)
                                float var_278_1[0x4] = temp0_102
                                float temp0_107[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_103, zmm3), temp0_99)
                                float temp0_109[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
                                float temp0_111[0x4] =
                                    _mm_add_ps(_mm_add_ps(temp0_107, temp0_101), temp0_105)
                                float var_268_1[0x4] = temp0_111
                                float temp0_114[0x4] = _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm3), temp0_109)
                                bool cond:7_1 = (*(arg1 + 0xa0) & 1) == 0
                                float temp0_115[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0x55)
                                float temp0_116[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xaa)
                                float temp0_117[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xff)
                                float temp0_118[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                float temp0_119[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xe1)
                                float temp0_120[0x4] = _mm_shuffle_ps(temp0_115, temp0_115, 0xe1)
                                temp0_119[0] = temp0_102[0]
                                float temp0_121[0x4] = _mm_shuffle_ps(temp0_116, temp0_116, 0xe1)
                                float temp0_122[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0xe1)
                                float temp0_123[0x4] = _mm_mul_ps(temp0_118, zmm4)
                                float temp0_124[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0xc6)
                                float temp0_125[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                                temp0_124[0] = temp0_111[0]
                                float temp0_126[0x4] = _mm_mul_ps(temp0_125, zmm5)
                                float temp0_127[0x4] = _mm_add_ps(temp0_114, temp0_123)
                                float temp0_128[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0x27)
                                temp0_120[0] = _mm_shuffle_ps(temp0_102, temp0_102, 0x55)[0]
                                temp0_121[0] = _mm_shuffle_ps(temp0_102, temp0_102, 0xaa)[0]
                                float temp0_131[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xc6)
                                float temp0_132[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0xc6)
                                float temp0_133[0x4] = _mm_add_ps(temp0_127, temp0_126)
                                temp0_122[0] = _mm_shuffle_ps(temp0_102, temp0_102, 0xff)[0]
                                float temp0_135[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0x55)
                                float temp0_136[0x4] = _mm_shuffle_ps(temp0_122, temp0_122, 0xc6)
                                temp0_131[0] = temp0_135[0]
                                float temp0_137[0x4] = _mm_shuffle_ps(temp0_131, temp0_131, 0x27)
                                temp0_132[0] = _mm_shuffle_ps(temp0_111, temp0_111, 0xaa)[0]
                                temp0_136[0] = _mm_shuffle_ps(temp0_111, temp0_111, 0xff)[0]
                                float temp0_140[0x4] = _mm_shuffle_ps(temp0_132, temp0_132, 0x27)
                                float temp0_141[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0x27)
                                float temp0_142[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0x55)
                                float temp0_143[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0xaa)
                                float temp0_144[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0xff)
                                temp0_137[0] = temp0_142[0]
                                zmm13 = _mm_shuffle_ps(temp0_137, temp0_137, 0x39)
                                temp0_140[0] = temp0_143[0]
                                zmm14 = _mm_shuffle_ps(temp0_140, temp0_140, 0x39)
                                temp0_141[0] = temp0_144[0]
                                zmm15 = _mm_shuffle_ps(temp0_141, temp0_141, 0x39)
                                temp0_128[0] = temp0_133[0]
                                zmm12 = _mm_shuffle_ps(temp0_128, temp0_128, 0x39)
                                float var_4e8_1[0x4] = zmm13
                                float var_3e8_1[0x4] = zmm13
                                float var_4d8_1[0x4] = zmm14
                                float var_3d8_1[0x4] = zmm14
                                float var_4c8_1[0x4] = zmm15
                                float var_3c8_1[0x4] = zmm15
                                float var_258_1[0x4] = temp0_133
                                float var_4f8_1[0x4] = zmm12
                                float var_3f8_1[0x4] = zmm12
                                
                                if (not(cond:7_1))
                                    zmm3 = var_538
                                    float temp0_149[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                                    float temp0_150[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
                                    float temp0_151[0x4] = _mm_mul_ps(temp0_149, var_438_1)
                                    float temp0_152[0x4] = _mm_mul_ps(temp0_150, zmm3)
                                    float temp0_154[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xaa), var_428_1)
                                    float temp0_155[0x4] = _mm_add_ps(temp0_151, temp0_152)
                                    float temp0_157[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xff), var_418_1)
                                    float temp0_158[0x4] = _mm_add_ps(temp0_155, temp0_154)
                                    float temp0_160[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xaa), var_428_1)
                                    float temp0_161[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                                    zmm12 = _mm_add_ps(temp0_158, temp0_157)
                                    float temp0_163[0x4] = _mm_mul_ps(temp0_161, var_438_1)
                                    float temp0_165[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0), zmm3)
                                    float temp0_167[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xff), var_418_1)
                                    float var_248_1[0x4] = zmm12
                                    float temp0_169[0x4] =
                                        _mm_add_ps(_mm_add_ps(temp0_163, temp0_165), temp0_160)
                                    float temp0_171[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xaa), var_428_1)
                                    float temp0_172[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                                    zmm13 = _mm_add_ps(temp0_169, temp0_167)
                                    float temp0_174[0x4] = _mm_mul_ps(temp0_172, var_438_1)
                                    float temp0_176[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm3)
                                    float temp0_178[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xff), var_418_1)
                                    float var_238_1[0x4] = zmm13
                                    float temp0_180[0x4] =
                                        _mm_add_ps(_mm_add_ps(temp0_174, temp0_176), temp0_171)
                                    float temp0_182[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xaa), var_428_1)
                                    float temp0_183[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                                    zmm14 = _mm_add_ps(temp0_180, temp0_178)
                                    float temp0_185[0x4] = _mm_mul_ps(temp0_183, var_438_1)
                                    float temp0_186[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
                                    float temp0_188[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xff), var_418_1)
                                    float var_228_1[0x4] = zmm14
                                    zmm15 = _mm_add_ps(
                                        _mm_add_ps(
                                            _mm_add_ps(temp0_185, _mm_mul_ps(temp0_186, zmm3)), 
                                            temp0_182), 
                                        temp0_188)
                                    float var_218_1[0x4] = zmm15
                                    goto label_14082eec2
                            int64_t var_580_1
                            int64_t rdi_4 = sx.q(var_580_1.d)
                            int32_t rax_42 = (rdi_4 + 1).d
                            var_580_1.d = rax_42
                            
                            if (rax_42 s> var_580_1:4.d)
                                sub_1405c4fe0(&var_588)
                                rdx_9 = var_518_1
                                r9_3 = var_510_1
                                r10_5 = var_570
                                r11_1 = var_5d0.d
                                r8_3 = var_5c8_3
                            
                            int64_t rax_43 = var_588
                            int64_t rcx_23 = rdi_4 << 6
                            rbx_3 = &(*rbx_3)[1]
                            int64_t temp1_1 = var_5d8_1.q
                            var_5d8_1.q -= 1
                            *(rcx_23 + rax_43) = zmm12
                            *(rcx_23 + rax_43 + 0x10) = zmm13
                            *(rcx_23 + rax_43 + 0x20) = zmm14
                            *(rcx_23 + rax_43 + 0x30) = zmm15
                            
                            if (temp1_1 == 1)
                                break
                            
                            rcx_20 = var_5e0_2
                            var_418_1 = var_348_1
                            var_428_1 = var_358_1
                            var_438_1 = var_368_1
                            var_538 = var_378
                        
                        r13_1 = var_5b0_1
                        r15_3 = arg1 + 0xb0
                    
                    int64_t* var_578
                    
                    if (*(arg1 + 0xa4) == 1 && sub_14074a1e0((*1111")[sx.q(*(arg1 + 0xac))]) != 0
                            && ((*(sx.q((*1111")[sx.q(*(arg1 + 0xac))]) * 0x14 + &data_143f025fc)
                            u>> 0x15).b & 1) != 0)
                        int32_t rax_50 = *(r13_1 + 0xb0)
                        void* r12_6 = nullptr
                        char var_618_1 = 0
                        char var_620_1 = 0
                        var_5d0.d = rax_50
                        void* rsi_6 = *(arg2 + 0x18)
                        int32_t var_58c_2 = rax_50
                        __builtin_memset(&var_558, 0, 0x1c)
                        sub_140834200(&var_558, 0x30, rax_50, 1, 0, var_620_1, var_618_1)
                        int64_t* var_548
                        int64_t* rax_51 = var_548
                        int64_t* rbx_4 = var_578
                        var_578 = rax_51
                        
                        if (rax_51 != 0)
                            rax_51[1].d += 1
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                char rax_53
                                
                                if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_53 = sub_1405949a0()
                                
                                if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_53 != 0))
                                    (**rbx_4)(rbx_4, 1)
                                else
                                    bool z_1
                                    
                                    if (0 == *(rbx_4 + 0xc))
                                        *(rbx_4 + 0xc) = 1
                                        z_1 = true
                                    else
                                        *(rbx_4 + 0xc)
                                        z_1 = false
                                    
                                    if (z_1)
                                        sub_1405dcc10(&data_143f02390, rbx_4)
                        
                        sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0xac))]), 
                            &var_538, &data_143ce8ae0, 0)
                        void* rdi_5 = var_538[0].q
                        
                        if (rdi_5 != 0)
                            int64_t rdx_13 = sx.q(*(rdi_5 + 0x10c))
                            int64_t* rbx_5 = *(var_538[2].q + 0x10)
                            int64_t rax_59 = rdx_13
                            int64_t r12_7 = rbx_5[3]
                            
                            if (*(r12_7 + (rdx_13 << 3)) == 0)
                                sub_1419ccf30(rbx_5, rdx_13.d)
                                rax_59 = rdx_13
                                r12_7 = rbx_5[3]
                            
                            r12_6 = *(r12_7 + (rax_59 << 3))
                        
                        *(rsi_6 + 0x1b0) = r12_6
                        sub_14198aa60(r12_6)
                        void*** rcx_34 = (*(rsi_6 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_60 = &rcx_34[3]
                        
                        if (rax_60 u> *(rsi_6 + 0x38))
                            sub_140b0e3d0(rsi_6 + 0x30, 0x20)
                            rcx_34 = (*(rsi_6 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_60 = &rcx_34[3]
                        
                        *(rsi_6 + 0x30) = rax_60
                        *(rsi_6 + 0x14) += 1
                        **(rsi_6 + 8) = rcx_34
                        *(rsi_6 + 8) = &rcx_34[1]
                        rcx_34[1] = 0
                        *rcx_34 = &data_142dd5b40
                        rcx_34[2] = r12_6
                        void* rax_63 = *(r15_3 + 0x100)
                        
                        if (rax_63 != 0)
                            r15_3 = rax_63
                        
                        int32_t rax_64 = data_14396fef8
                        int32_t rdx_14
                        
                        if (rax_64 == 0)
                            rdx_14 = *(r15_3 + 0x30)
                        else
                            rdx_14 = *(r15_3 + 0x34)
                        
                        int32_t rcx_38
                        
                        if (rax_64 == 0)
                            rcx_38 = *(r15_3 + 0x40)
                        else
                            rcx_38 = *(r15_3 + 0x44)
                            r15_3 += 4
                        
                        uint32_t r15_6 = var_5d0.d
                        var_570.d = *r15_3
                        int64_t r14_1 = var_558[2].q
                        int32_t var_564_1 = *(arg1 + 0xa0) & 1
                        int64_t var_5f8_1 = r14_1
                        float (* var_600_1)[0x4] = &var_378
                        var_570:4.d = rcx_38
                        var_618_1.d = *(r13_1 + 0x48)
                        var_620_1.d = *(r13_1 + 0xb8) u>> 2
                        int32_t var_568_1 = rdx_14
                        int64_t var_628_1
                        var_628_1.d = 0
                        sub_14088ffe0(rdi_5, rsi_6, r15_6, *(r13_1 + 0x60), var_628_1.d, var_620_1, 
                            var_618_1, *(result + 0x50), &var_570)
                        var_628_1.d = 1
                        sub_1419cd1c0(rsi_6, rdi_5, (r15_6 + 0x3f) u>> 6, 1, var_628_1.d)
                        sub_140891770(rdi_5, rsi_6)
                        int64_t* rdi_8 = (*(rsi_6 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_71 = &rdi_8[1]
                        
                        if (rax_71 u> *(rsi_6 + 0x38))
                            sub_140b0e3d0(rsi_6 + 0x30, 0x10)
                            rdi_8 = (*(rsi_6 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_71 = &rdi_8[1]
                        
                        *(rsi_6 + 0x30) = rax_71
                        *rdi_8 = r14_1
                        void*** rcx_47 = (*(rsi_6 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_72 = &rcx_47[6]
                        
                        if (rax_72 u> *(rsi_6 + 0x38))
                            sub_140b0e3d0(rsi_6 + 0x30, 0x38)
                            rcx_47 = (*(rsi_6 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_72 = &rcx_47[6]
                        
                        *(rsi_6 + 0x30) = rax_72
                        void**** rax_73 = *(rsi_6 + 8)
                        *(rsi_6 + 0x14) += 1
                        *rax_73 = rcx_47
                        *(rsi_6 + 8) = &rcx_47[1]
                        rcx_47[1] = 0
                        *rcx_47 = &data_142da7798
                        rcx_47[2].d = 1
                        rcx_47[3] = rdi_8
                        rcx_47[4].d = 0
                        *(rcx_47 + 0x24) = 3
                        rcx_47[5] = 0
                        sub_140837d00(&var_558)
                        sub_1405ec8a0(&var_548)
                        sub_1405d1550(&var_558[2])
                        sub_14081c9d0(&var_558)
                    
                    sub_1422926f0(&var_5a8)
                    int64_t rbx_6 = sx.q(arg3[1].d)
                    int32_t rax_75 = (rbx_6 + 1).d
                    arg3[1].d = rax_75
                    
                    if (rax_75 s> *(arg3 + 0xc))
                        sub_1407c3b60(arg3)
                    
                    sub_14081b0c0(rbx_6 * 0x38 + *arg3, &var_5a8)
                    sub_1405ec8a0(&var_578)
                    int64_t rcx_60 = var_588
                    
                    if (rcx_60 != 0)
                        sub_140a74f90(rcx_60)
                    
                    result = sub_14081c7d0(&var_5a0)

__security_check_cookie(rax_1 ^ &var_648)
return result
