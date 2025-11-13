// 函数: sub_14205a420
// 地址: 0x14205a420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9d8
int64_t rax_1 = __security_cookie ^ &var_9d8
int64_t* result = *arg2
void* r12 = arg1
int64_t* r11 = arg2
int32_t var_920 = arg4

if (*(*result + 0xadc) == 0)
    uint64_t rbx
    
    if (*(r12 + 0x7f1) == 0 || *(data_143f431b8 + 4) s<= 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    char r10_1 = rbx.b ^ 1
    char var_9a7_1 = rbx.b
    char var_9a5_1 = r10_1
    uint64_t rsi
    rsi.b = *(data_143f431d0 + 4) s> 0
    int32_t r15_1 = 0
    int32_t i = 0
    char var_9a8_1 = rsi.b
    int32_t i_1 = 0
    result = zx.q(*(data_143f43248 + 4))
    int32_t var_928_1 = result.d
    
    if (r11[1].d s> 0)
        int32_t rcx_2 = 1
        uint64_t r13
        uint64_t var_30_1 = r13
        int64_t r8 = 0
        float zmm6[0x4]
        float var_58_1[0x4] = zmm6
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
        float zmm12[0x4]
        float var_b8_1[0x4] = zmm12
        int128_t zmm15
        int128_t var_e8_1 = zmm15
        int64_t var_948_1 = 0
        int32_t var_9a0_1 = 1
        
        do
            if ((arg4 & rcx_2) != 0)
                int64_t* rdi_1 = *(r12 + 0x768)
                int32_t var_704_1 = 0
                int32_t var_718_1 = 1
                void* r14_1 = *(*r11 + (r8 << 3))
                void* var_728 = r12 + 0x680
                void* var_720_1 = r12 + 0x6f0
                int32_t i_2 = i
                uint8_t var_700_1 = *(r12 + 0x36) u>> 1 & 1
                void* var_710_1 = r14_1
                result = zx.q(*(r12 + 0x678))
                bool var_6ff_1 = *(data_143f432c0 + 4) s> 0
                int32_t var_6fc_1 = result.d
                int64_t var_978
                float var_958
                uint32_t var_908[0x4]
                float var_8f8[0x4]
                float var_8e8[0x4]
                float var_8d8[0x4]
                float var_3c8[0x4]
                int16_t var_388
                
                if (rdi_1[1].d == 0)
                label_14205bac4:
                    int32_t rdi_9 = *(r12 + 0x784)
                    int32_t rsi_2 = *(r12 + 0x780)
                    r13 = zx.q(rdi_9 - rsi_2)
                    int32_t var_938_1 = r13.d
                    
                    if (r13.d s> 0)
                        var_388 = 1
                        char var_386_1 = 0
                        int64_t var_380
                        __builtin_memset(&var_380, 0, 0x6c)
                        int64_t var_310
                        __builtin_memset(&var_310, 0, 0xd0)
                        char var_6fe_2 = 0
                        int64_t var_378
                        int64_t var_300
                        int64_t var_280
                        int64_t var_260
                        
                        if (r13.d s>= 0x3e8 || *(r12 + 0x778) s< r13.d)
                            r13.b = *(*(r12 + 0x150) + 8) - 1
                            
                            if (r13.b s< 8)
                                int64_t rcx_90 = sx.q(r13.b)
                                void* rbx_21 = &(&var_300)[rcx_90 * 2]
                                int64_t r15_6 = sx.q(*(rbx_21 + 8))
                                int64_t r8_20
                                
                                if (r15_6.d != 0)
                                    r8_20 = *rbx_21
                                
                                if (r15_6.d == 0 || *(r8_20 + (r15_6 << 2) - 4) + 1 != rsi_2)
                                    int32_t rdx_59 = *(rbx_21 + 0xc)
                                    int32_t r14_6 = (r15_6 + 1).d
                                    *(rbx_21 + 8) = r14_6
                                    
                                    if (r14_6 s> rdx_59)
                                        sub_14113b710(rbx_21, r15_6.d)
                                        rdx_59 = *(rbx_21 + 0xc)
                                        r14_6 = *(rbx_21 + 8)
                                    
                                    int64_t rcx_93 = *rbx_21
                                    *(rbx_21 + 8) = r14_6 + 1
                                    *(rcx_93 + (r15_6 << 2)) = rsi_2
                                    
                                    if (r14_6 + 1 s> rdx_59)
                                        sub_14113b710(rbx_21, r14_6)
                                        rcx_93 = *rbx_21
                                    
                                    *(rcx_93 + (sx.q(r14_6) << 2)) = rdi_9
                                    rcx_90 = sx.q(r13.b)
                                else
                                    *(r8_20 + (r15_6 << 2) - 4) = rdi_9
                                
                                *(&var_280 + (rcx_90 << 2)) += rdi_9 - rsi_2 + 1
                                
                                if (var_388:1.b != 0)
                                    int64_t r15_7 = sx.q(r13.b)
                                    int64_t var_998_2 = r15_7
                                    int32_t* rbx_22 = &(&var_378)[r15_7 * 2]
                                    int64_t rax_166 = r15_7
                                    
                                    do
                                        if (r15_7 s< 8)
                                            *(&var_260 + (r15_7 << 2)) += rdi_9 - rsi_2 + 1
                                            r13 = sx.q(*rbx_22)
                                            int64_t rdx_62
                                            
                                            if (r13.d != 0)
                                                rdx_62 = *(rbx_22 - 8)
                                            
                                            if (r13.d == 0
                                                    || *(rdx_62 + (r13 << 2) - 4) + 1 != rsi_2)
                                                int32_t rdx_64 = rbx_22[1]
                                                int32_t r14_7 = (r13 + 1).d
                                                *rbx_22 = r14_7
                                                
                                                if (r14_7 s> rdx_64)
                                                    sub_14113b710(&rbx_22[-2], r13.d)
                                                    rdx_64 = rbx_22[1]
                                                    r14_7 = *rbx_22
                                                
                                                int64_t rcx_96 = *(rbx_22 - 8)
                                                *rbx_22 = r14_7 + 1
                                                *(rcx_96 + (r13 << 2)) = rsi_2
                                                
                                                if (r14_7 + 1 s> rdx_64)
                                                    sub_14113b710(&rbx_22[-2], r14_7)
                                                    rcx_96 = *(rbx_22 - 8)
                                                
                                                *(rcx_96 + (sx.q(r14_7) << 2)) = rdi_9
                                            else
                                                *(rdx_62 + (r13 << 2) - 4) = rdi_9
                                            
                                            rax_166 = var_998_2
                                        
                                        r15_7 += 1
                                        rbx_22 = &rbx_22[4]
                                    while (r15_7 s<= rax_166)
                        else
                            int32_t rdx_31 = *(*(r12 + 0x150) + 8)
                            int32_t rcx_63 = *(data_143f42f28 + 4)
                            
                            if (rcx_63 s< 0)
                                float zmm13_1
                                float zmm14_1[0x4]
                                zmm13_1, zmm14_1 = sub_140631b10(r12 + 0x80, &var_908)
                                int64_t var_780
                                int64_t* rax_97 = sub_1422e5db0(r14_1, &var_780, 0, rbx.b)
                                int32_t var_83c_1 = 0x3f800000
                                var_978 = 0
                                float zmm1_4[0x4] = *(rax_97 + 4)
                                float var_848[0x4]
                                var_848[0] = (*rax_97)[0]
                                float zmm2_3[0x4] = rax_97[1].d
                                float temp0_214[0x4] = _mm_shuffle_ps(var_848, var_848, 0xe1)
                                temp0_214[0] = zmm1_4[0]
                                int32_t var_970_1 = 0
                                float temp0_215[0x4] = _mm_shuffle_ps(temp0_214, temp0_214, 0xc6)
                                temp0_215[0] = zmm2_3[0]
                                float temp0_216[0x4] = _mm_shuffle_ps(temp0_215, temp0_215, 0xc9)
                                var_848 = temp0_216
                                float temp0_218[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_216, temp0_216, 0xff), var_8d8)
                                float temp0_220[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_216, temp0_216, 0x55), var_8f8)
                                float temp0_222[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_216, temp0_216, 0xaa), var_8e8)
                                float temp0_224[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_216, temp0_216, 0), var_908)
                                var_978.o = _mm_add_ps(_mm_add_ps(temp0_218, temp0_222), 
                                    _mm_add_ps(temp0_220, temp0_224))
                                int64_t var_774
                                int64_t* rax_98 = sub_1422e5db0(r14_1, &var_774, 1, rbx.b)
                                int32_t var_82c_1 = 0x3f800000
                                int64_t var_988_4 = 0
                                zmm1_4 = *(rax_98 + 4)
                                float var_838[0x4]
                                var_838[0] = (*rax_98)[0]
                                zmm2_3 = rax_98[1].d
                                float temp0_228[0x4] = _mm_shuffle_ps(var_838, var_838, 0xe1)
                                temp0_228[0] = zmm1_4[0]
                                int32_t var_980_4 = 0
                                float temp0_229[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xc6)
                                temp0_229[0] = zmm2_3[0]
                                float temp0_230[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0xc9)
                                var_838 = temp0_230
                                float temp0_232[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_230, temp0_230, 0xff), var_8d8)
                                float temp0_234[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_230, temp0_230, 0xaa), var_8e8)
                                float temp0_236[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_230, temp0_230, 0x55), var_8f8)
                                float temp0_237[0x4] = _mm_add_ps(temp0_232, temp0_234)
                                float temp0_239[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_230, temp0_230, 0), var_908)
                                bool cond:3_1 = 1f f> *(r14_1 + 0x2bc)
                                var_988_4.o =
                                    _mm_add_ps(temp0_237, _mm_add_ps(temp0_236, temp0_239))
                                float zmm7_3[0x4]
                                
                                if (cond:3_1)
                                    zmm7_3 = *(data_143f43200 + 4)
                                else
                                    zmm7_3 = zmm14_1
                                
                                float zmm8_2 = *(data_143f43218 + 4)
                                float zmm9_1[0x4] = *(data_143f43230 + 4)
                                float zmm11_1 = data_143a30378:8.d
                                float zmm6_3[0x4] = 0x7f7fffff
                                float zmm10_1[0x4] = *(*(r12 + 0x150) + 0x58)
                                
                                if (not(zmm7_3[0] <= zmm14_1[0]))
                                    zmm6_3 = sub_1422dfe30(zmm7_3[0], zmm10_1[0], r14_1 + 0x280)
                                    zmm6_3[0] = zmm6_3[0] * zmm8_2
                                
                                float zmm0_12[0x4] = *(r14_1 + 0x21c)
                                
                                if (not(zmm0_12[0] <= zmm14_1[0]))
                                    zmm0_12[0] = zmm0_12[0] * zmm11_1
                                    zmm6_3 = _mm_min_ss(zmm0_12[0], zmm6_3[0])
                                
                                float temp0_243[0x4] = _mm_cvtepi32_ps(zx.o(*(r12 + 0x694)))
                                
                                if (not(temp0_243[0] <= zmm14_1[0]))
                                    temp0_243[0] = temp0_243[0] * zmm11_1
                                    zmm6_3 = _mm_min_ss(temp0_243[0], zmm6_3[0])
                                
                                int64_t r11_2 = sx.q(rdx_31)
                                int64_t rdi_10 = 1
                                float var_6f4_2 = zmm6_3[0]
                                int64_t rbx_16 = r11_2
                                int64_t var_828_1 = rbx_16
                                zmm6_3[0] = zmm6_3[0] - zmm9_1[0]
                                void var_3cc
                                void var_11c
                                
                                if (1 s< r11_2)
                                    do
                                        zmm0_12 = sub_1422dfe30(
                                            (*(*(r12 + 0x150) + (rdi_10 << 2) + 0x20))[0], 
                                            zmm10_1[0], r14_1 + 0x280)
                                        zmm0_12[0] = zmm0_12[0] * zmm8_2
                                        float temp0_245[0x4] = _mm_min_ss(zmm0_12[0], zmm6_3[0])
                                        zmm0_12[0] = zmm0_12[0] - zmm9_1[0]
                                        *(&var_3cc + (rdi_10 << 2)) = temp0_245[0]
                                        *(&var_11c + (rdi_10 << 2)) =
                                            _mm_min_ss(zmm0_12[0], zmm6_3[0])[0]
                                        rdi_10 += 1
                                    while (rdi_10 s< rbx_16)
                                    
                                    r11_2 = zx.q(rdx_31)
                                
                                float (* rcx_75)[0x4] = *(r12 + 0x770)
                                int64_t rsi_3 = 0
                                zmm14_1 = var_970_1
                                int64_t rax_104 = 0
                                float zmm15_3[0x4] = var_978:4.d
                                zmm0_12 = var_978.d
                                *(&var_11c + (rbx_16 << 2)) = zmm6_3[0]
                                *(&var_3cc + (rbx_16 << 2)) = zmm6_3[0]
                                float zmm4_4
                                float zmm5_4
                                float zmm12_1
                                
                                if (r11_2.d != 0)
                                    zmm7_3 = (*rcx_75)[3]
                                    zmm8_2 = rcx_75[1][0]
                                    zmm10_1 = *rcx_75
                                    zmm12_1 = (*rcx_75)[1]
                                    zmm9_1 = (*rcx_75)[5]
                                    zmm5_4 = zmm7_3[0] + zmm10_1[0]
                                    zmm11_1 = (*rcx_75)[2]
                                    zmm4_4 = zmm8_2 + zmm12_1
                                    zmm9_1[0] = zmm9_1[0] + zmm11_1
                                    zmm12_1 = zmm12_1 - zmm8_2
                                    zmm5_4 = zmm5_4 * zmm13_1
                                    zmm10_1[0] = zmm10_1[0] - zmm7_3[0]
                                    zmm4_4 = zmm4_4 * zmm13_1
                                    zmm11_1 = zmm11_1 - zmm9_1[0]
                                    zmm9_1[0] = zmm9_1[0] * zmm13_1
                                    zmm0_12[0] = zmm0_12[0] - zmm5_4
                                    zmm15_3[0] = zmm15_3[0] - zmm4_4
                                    zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
                                    zmm14_1[0] = zmm14_1[0] - zmm9_1[0]
                                    zmm0_12[0] = zmm0_12[0] * zmm0_12[0]
                                    zmm15_3[0] = zmm15_3[0] * zmm15_3[0]
                                    zmm12_1 = zmm12_1 * zmm12_1 + zmm10_1[0]
                                    zmm14_1[0] = zmm14_1[0] * zmm14_1[0]
                                    zmm15_3[0] = zmm15_3[0] + zmm0_12[0]
                                    zmm1_4 = var_988_4.d
                                    zmm1_4[0] = zmm1_4[0] - zmm5_4
                                    zmm15_3[0] = zmm15_3[0] + zmm14_1[0]
                                    zmm0_12 = var_980_4
                                    zmm0_12[0] = zmm0_12[0] - zmm9_1[0]
                                    zmm1_4[0] = zmm1_4[0] * zmm1_4[0]
                                    float temp0_247[0x4] = _mm_sqrt_ss(0, zmm15_3[0])
                                    zmm2_3 = var_988_4:4.d
                                    zmm0_12[0] = zmm0_12[0] * zmm0_12[0]
                                    zmm2_3[0] = zmm2_3[0] - zmm4_4
                                    zmm2_3[0] = zmm2_3[0] * zmm2_3[0]
                                    zmm2_3[0] = zmm2_3[0] + zmm1_4[0]
                                    zmm2_3[0] = zmm2_3[0] + zmm0_12[0]
                                    float temp0_248[0x4] =
                                        _mm_sqrt_ss(0, zmm12_1 + zmm11_1 * zmm11_1)
                                    float temp0_249[0x4] = _mm_sqrt_ss(0, zmm2_3[0])
                                    temp0_248[0] = temp0_248[0] * zmm13_1
                                    float temp0_250[0x4] = _mm_max_ss(temp0_249[0], temp0_247[0])
                                    float temp0_251[0x4] = _mm_min_ss(temp0_249[0], temp0_247[0])
                                    temp0_250[0] = temp0_250[0] + temp0_248[0]
                                    temp0_251[0] = temp0_251[0] - temp0_248[0]
                                    
                                    if (rbx_16 s> 0)
                                        while (not(temp0_251[0] <= var_3c8[rax_104]))
                                            r15_1 += 1
                                            rax_104 += 1
                                            
                                            if (rbx_16 s<= rax_104)
                                                break
                                    
                                    int64_t r8_16 = sx.q(r15_1)
                                    
                                    if (rbx_16 s> r8_16)
                                        int64_t j = rbx_16
                                        
                                        if (rbx_16 - r8_16 s>= 4)
                                            void* rdx_42 = &var_8d8[rbx_16 + 0x1ee]
                                            
                                            do
                                                if (temp0_250[0] f>= *(rdx_42 + 4))
                                                    goto label_14205c24a
                                                
                                                if (temp0_250[0] f>= *rdx_42)
                                                    goto label_14205c24a
                                                
                                                if (temp0_250[0] f>= *(rdx_42 - 4))
                                                    goto label_14205c24a
                                                
                                                if (temp0_250[0] f>= *(rdx_42 - 8))
                                                    goto label_14205c24a
                                                
                                                j -= 4
                                                rdx_42 -= 0x10
                                            while (j s> r8_16 + 3)
                                        
                                        if (j s> r8_16)
                                            int32_t* rax_108 = &var_8d8[j + 0x1ef]
                                            
                                            while (not(temp0_250[0] f>= *rax_108))
                                                j -= 1
                                                rax_108 -= 4
                                                
                                                if (j s<= r8_16)
                                                    break
                                    
                                label_14205c24a:
                                    zmm0_12 = var_978.d
                                
                                int32_t r10_3 = 1
                                int64_t rax_109 = sx.q(r13.d)
                                int32_t var_964_1 = 1
                                int32_t r9_9 = 0
                                
                                if (rax_109 s> 1)
                                    int64_t rdi_11 = 0x1c
                                    int64_t r14_3 = sx.q(r15_1)
                                    int64_t j_3 = rax_109 - 1
                                    int64_t var_930_1 = 0x1c
                                    int64_t j_4 = j_3
                                    int64_t j_1
                                    
                                    do
                                        float* rax_110 = *(r12 + 0x770)
                                        int32_t r8_17 = 0
                                        int32_t var_93c_1 = 0
                                        int64_t k = rbx_16
                                        int64_t var_960_3 = 0
                                        
                                        if (rbx_16 != 0)
                                            zmm7_3 = *(rax_110 + rdi_11 + 0xc)
                                            zmm12_1 = *(rax_110 + rdi_11 + 4)
                                            zmm11_1 = *(rax_110 + rdi_11)
                                            zmm4_4 = zmm12_1
                                            zmm10_1 = *(rax_110 + rdi_11 + 8)
                                            zmm12_1 = zmm12_1 f- *(rax_110 + rdi_11 + 0x10)
                                            zmm4_4 = zmm4_4 f+ *(rax_110 + rdi_11 + 0x10)
                                            zmm5_4 = zmm7_3[0]
                                            zmm10_1[0] = zmm10_1[0] f+ *(rax_110 + rdi_11 + 0x14)
                                            zmm10_1[0] = zmm10_1[0] f- *(rax_110 + rdi_11 + 0x14)
                                            zmm5_4 = zmm5_4 + zmm11_1
                                            zmm4_4 = zmm4_4 * zmm13_1
                                            zmm11_1 = zmm11_1 - zmm7_3[0]
                                            zmm10_1[0] = zmm10_1[0] * zmm13_1
                                            zmm15_3[0] = zmm15_3[0] - zmm4_4
                                            zmm5_4 = zmm5_4 * zmm13_1
                                            zmm14_1[0] = zmm14_1[0] - zmm10_1[0]
                                            zmm0_12[0] = zmm0_12[0] - zmm5_4
                                            zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
                                            zmm15_3[0] = zmm15_3[0] * zmm15_3[0]
                                            zmm14_1[0] = zmm14_1[0] * zmm14_1[0]
                                            zmm0_12[0] = zmm0_12[0] * zmm0_12[0]
                                            zmm12_1 =
                                                zmm12_1 * zmm12_1 + zmm11_1 * zmm11_1 + zmm10_1[0]
                                            zmm15_3[0] = zmm15_3[0] + zmm0_12[0]
                                            zmm1_4 = var_988_4.d
                                            zmm1_4[0] = zmm1_4[0] - zmm5_4
                                            zmm15_3[0] = zmm15_3[0] + zmm14_1[0]
                                            zmm0_12 = var_980_4
                                            zmm1_4[0] = zmm1_4[0] * zmm1_4[0]
                                            zmm0_12[0] = zmm0_12[0] - zmm10_1[0]
                                            float temp0_252[0x4] = _mm_sqrt_ss(0, zmm15_3[0])
                                            zmm2_3 = var_988_4:4.d
                                            zmm2_3[0] = zmm2_3[0] - zmm4_4
                                            zmm0_12[0] = zmm0_12[0] * zmm0_12[0]
                                            zmm2_3[0] = zmm2_3[0] * zmm2_3[0]
                                            zmm2_3[0] = zmm2_3[0] + zmm1_4[0]
                                            zmm2_3[0] = zmm2_3[0] + zmm0_12[0]
                                            float temp0_253[0x4] = _mm_sqrt_ss(0, zmm12_1)
                                            float temp0_254[0x4] = _mm_sqrt_ss(0, zmm2_3[0])
                                            temp0_253[0] = temp0_253[0] * zmm13_1
                                            float temp0_255[0x4] =
                                                _mm_max_ss(temp0_254[0], temp0_252[0])
                                            float temp0_256[0x4] =
                                                _mm_min_ss(temp0_254[0], temp0_252[0])
                                            temp0_255[0] = temp0_255[0] + temp0_253[0]
                                            temp0_256[0] = temp0_256[0] - temp0_253[0]
                                            
                                            if (rbx_16 s> 0)
                                                do
                                                    if (temp0_256[0] <= var_3c8[rsi_3])
                                                        if (rbx_16 s> rsi_3)
                                                            if (rbx_16 - rsi_3 s>= 4)
                                                                void* rdx_43 = &var_8d8[rbx_16 + 0x1ee]
                                                                
                                                                do
                                                                    if (temp0_255[0] f>= *(rdx_43 + 4))
                                                                        goto label_14205c426
                                                                    
                                                                    if (temp0_255[0] f>= *rdx_43)
                                                                        goto label_14205c426
                                                                    
                                                                    if (temp0_255[0] f>= *(rdx_43 - 4))
                                                                        goto label_14205c426
                                                                    
                                                                    if (temp0_255[0] f>= *(rdx_43 - 8))
                                                                        goto label_14205c426
                                                                    
                                                                    k -= 4
                                                                    rdx_43 -= 0x10
                                                                while (k s> rsi_3 + 3)
                                                            
                                                            if (k s> rsi_3)
                                                                int32_t* rax_114 = &var_8d8[k + 0x1ef]
                                                                
                                                                while (not(temp0_255[0] f>= *rax_114))
                                                                    k -= 1
                                                                    rax_114 -= 4
                                                                    
                                                                    if (k s<= rsi_3)
                                                                        break
                                                        
                                                        break
                                                    
                                                    r8_17 += 1
                                                    rsi_3 += 1
                                                    var_93c_1 = r8_17
                                                    var_960_3 = rsi_3
                                                while (rbx_16 s> rsi_3)
                                        
                                    label_14205c426:
                                        
                                        if (r8_17 != r15_1)
                                            if (r15_1 s< r11_2.d)
                                                int32_t rax_115 = *(r12 + 0x780)
                                                int32_t rcx_76 = rax_115 + r10_3
                                                int32_t rdi_12 = rcx_76 - 1
                                                int32_t r13_2 = rax_115 + r9_9
                                                
                                                if (var_388.b != 0 && r15_1 s< 8)
                                                    int64_t rdx_44 = sx.q(r15_1)
                                                    int64_t* rbx_17 = &(&var_300)[rdx_44 * 2]
                                                    int64_t rcx_77 = sx.q(rbx_17[1].d)
                                                    var_958 = rcx_77.d
                                                    int64_t r9_10
                                                    
                                                    if (rcx_77.d != 0)
                                                        r9_10 = *rbx_17
                                                    
                                                    if (rcx_77.d == 0
                                                            || *(r9_10 + (rcx_77 << 2) - 4) + 1
                                                            != r13_2)
                                                        int32_t r8_18 = *(rbx_17 + 0xc)
                                                        int32_t r12_2 = (rcx_77 + 1).d
                                                        rbx_17[1].d = r12_2
                                                        
                                                        if (r12_2 s> r8_18)
                                                            sub_14113b710(rbx_17, rcx_77.d)
                                                            r8_18 = *(rbx_17 + 0xc)
                                                            rcx_77 = zx.q(var_958)
                                                            r12_2 = rbx_17[1].d
                                                        
                                                        int64_t rdx_47 = *rbx_17
                                                        *(rdx_47 + (sx.q(rcx_77.d) << 2)) = r13_2
                                                        rbx_17[1].d = r12_2 + 1
                                                        
                                                        if (r12_2 + 1 s> r8_18)
                                                            sub_14113b710(rbx_17, r12_2)
                                                            rdx_47 = *rbx_17
                                                        
                                                        r10_3 = var_964_1
                                                        *(rdx_47 + (sx.q(r12_2) << 2)) = rdi_12
                                                        rdx_44 = sx.q(r15_1)
                                                    else
                                                        *(r9_10 + (rcx_77 << 2) - 4) = rdi_12
                                                    
                                                    *(&var_280 + (rdx_44 << 2)) += rcx_76 - r13_2
                                                
                                                if (var_388:1.b != 0)
                                                    int64_t rax_125 = sx.q(r15_1)
                                                    var_958.q = rax_125
                                                    
                                                    if (r14_3 s<= rax_125)
                                                        int32_t* rbx_18 = &(&var_378)[r14_3 * 2]
                                                        int64_t rax_128 = var_958.q
                                                        
                                                        do
                                                            if (r14_3 s< 8)
                                                                *(&var_260 + (r14_3 << 2)) +=
                                                                    rcx_76 - r13_2
                                                                int64_t r15_5 = sx.q(*rbx_18)
                                                                int64_t rdx_48
                                                                
                                                                if (r15_5.d != 0)
                                                                    rdx_48 = *(rbx_18 - 8)
                                                                
                                                                if (r15_5.d == 0
                                                                        || *(rdx_48 + (r15_5 << 2) - 4) + 1
                                                                        != r13_2)
                                                                    int32_t rdx_50 = rbx_18[1]
                                                                    int32_t rdi_13 = (r15_5 + 1).d
                                                                    *rbx_18 = rdi_13
                                                                    
                                                                    if (rdi_13 s> rdx_50)
                                                                        sub_14113b710(&rbx_18[-2], r15_5.d)
                                                                        rdx_50 = rbx_18[1]
                                                                        rdi_13 = *rbx_18
                                                                    
                                                                    int64_t rcx_82 = *(rbx_18 - 8)
                                                                    *rbx_18 = rdi_13 + 1
                                                                    *(rcx_82 + (r15_5 << 2)) = r13_2
                                                                    
                                                                    if (rdi_13 + 1 s> rdx_50)
                                                                        sub_14113b710(&rbx_18[-2], rdi_13)
                                                                        rcx_82 = *(rbx_18 - 8)
                                                                    
                                                                    rdi_12 = rcx_76 - 1
                                                                    *(rcx_82 + (sx.q(rdi_13) << 2)) = rdi_12
                                                                else
                                                                    *(rdx_48 + (r15_5 << 2) - 4) = rdi_12
                                                                
                                                                rax_128 = var_958.q
                                                            
                                                            r14_3 += 1
                                                            rbx_18 = &rbx_18[4]
                                                        while (r14_3 s<= rax_128)
                                                        
                                                        rsi_3 = var_960_3
                                                        r10_3 = var_964_1
                                                
                                                rdi_11 = var_930_1
                                                j_3 = j_4
                                            
                                            r15_1 = var_93c_1
                                            r14_3 = rsi_3
                                            rbx_16 = var_828_1
                                            r9_9 = r10_3
                                            r12 = arg1
                                            r11_2 = zx.q(rdx_31)
                                        
                                        zmm0_12 = var_978.d
                                        r10_3 += 1
                                        rdi_11 += 0x1c
                                        var_964_1 = r10_3
                                        j_1 = j_3
                                        j_3 -= 1
                                        var_930_1 = rdi_11
                                        j_4 = j_3
                                        rsi_3 = 0
                                    while (j_1 != 1)
                                
                                r13 = zx.q(*(r12 + 0x780) + r9_9)
                                int32_t rdi_15 = var_938_1 + r13.d
                                
                                if (var_388.b != 0 && r15_1 s< 8)
                                    int64_t rcx_83 = sx.q(r15_1)
                                    void* rbx_19 = &(&var_300)[rcx_83 * 2]
                                    int64_t r14_4 = sx.q(*(rbx_19 + 8))
                                    int64_t r8_19
                                    
                                    if (r14_4.d != 0)
                                        r8_19 = *rbx_19
                                    
                                    if (r14_4.d == 0 || *(r8_19 + (r14_4 << 2) - 4) + 1 != r13.d)
                                        int32_t rdx_52 = *(rbx_19 + 0xc)
                                        int32_t rsi_5 = (r14_4 + 1).d
                                        *(rbx_19 + 8) = rsi_5
                                        
                                        if (rsi_5 s> rdx_52)
                                            sub_14113b710(rbx_19, r14_4.d)
                                            rdx_52 = *(rbx_19 + 0xc)
                                            rsi_5 = *(rbx_19 + 8)
                                        
                                        int64_t rcx_86 = *rbx_19
                                        *(rbx_19 + 8) = rsi_5 + 1
                                        *(rcx_86 + (r14_4 << 2)) = r13.d
                                        
                                        if (rsi_5 + 1 s> rdx_52)
                                            sub_14113b710(rbx_19, rsi_5)
                                            rcx_86 = *rbx_19
                                        
                                        *(rcx_86 + (sx.q(rsi_5) << 2)) = rdi_15
                                        rcx_83 = sx.q(r15_1)
                                    else
                                        *(r8_19 + (r14_4 << 2) - 4) = rdi_15
                                    
                                    *(&var_280 + (rcx_83 << 2)) += rdi_15 - r13.d + 1
                                
                                if (var_388:1.b != 0)
                                    int64_t rsi_6 = sx.q(r15_1)
                                    int64_t var_998_1 = rsi_6
                                    void* rbx_20 = &(&var_378)[rsi_6 * 2]
                                    int64_t rax_146 = rsi_6
                                    
                                    do
                                        if (rsi_6 s< 8)
                                            *(&var_260 + (rsi_6 << 2)) += rdi_15 - r13.d + 1
                                            int64_t r14_5 = sx.q(*rbx_20)
                                            int64_t rdx_55
                                            
                                            if (r14_5.d != 0)
                                                rdx_55 = *(rbx_20 - 8)
                                            
                                            if (r14_5.d == 0
                                                    || *(rdx_55 + (r14_5 << 2) - 4) + 1 != r13.d)
                                                int32_t rdx_57 = *(rbx_20 + 4)
                                                int32_t rdi_16 = (r14_5 + 1).d
                                                *rbx_20 = rdi_16
                                                
                                                if (rdi_16 s> rdx_57)
                                                    sub_14113b710(rbx_20 - 8, r14_5.d)
                                                    rdx_57 = *(rbx_20 + 4)
                                                    rdi_16 = *rbx_20
                                                
                                                int64_t rcx_89 = *(rbx_20 - 8)
                                                *rbx_20 = rdi_16 + 1
                                                *(rcx_89 + (r14_5 << 2)) = r13.d
                                                
                                                if (rdi_16 + 1 s> rdx_57)
                                                    sub_14113b710(rbx_20 - 8, rdi_16)
                                                    rcx_89 = *(rbx_20 - 8)
                                                
                                                rdi_15 = var_938_1 + r13.d
                                                *(rcx_89 + (sx.q(rdi_16) << 2)) = rdi_15
                                            else
                                                *(rdx_55 + (r14_5 << 2) - 4) = rdi_15
                                            
                                            rax_146 = var_998_1
                                        
                                        rsi_6 += 1
                                        rbx_20 += 0x10
                                    while (rsi_6 s<= rax_146)
                                    
                                    r12 = arg1
                            else
                                int32_t rax_82 = rdx_31 - 1
                                
                                if (rcx_63 s< rax_82)
                                    rax_82 = rcx_63
                                
                                if (rax_82 s< 8)
                                    int64_t r14_2 = sx.q(rax_82)
                                    void* rbx_14 = &(&var_300)[r14_2 * 2]
                                    r13 = sx.q(*(rbx_14 + 8))
                                    int64_t r8_12
                                    
                                    if (r13.d != 0)
                                        r8_12 = *rbx_14
                                    
                                    if (r13.d == 0 || *(r8_12 + (r13 << 2) - 4) + 1 != rsi_2)
                                        int32_t rdx_32 = *(rbx_14 + 0xc)
                                        int32_t r15_3 = (r13 + 1).d
                                        *(rbx_14 + 8) = r15_3
                                        
                                        if (r15_3 s> rdx_32)
                                            sub_14113b710(rbx_14, r13.d)
                                            rdx_32 = *(rbx_14 + 0xc)
                                            r15_3 = *(rbx_14 + 8)
                                        
                                        int64_t rcx_68 = *rbx_14
                                        *(rbx_14 + 8) = r15_3 + 1
                                        *(rcx_68 + (r13 << 2)) = rsi_2
                                        
                                        if (r15_3 + 1 s> rdx_32)
                                            sub_14113b710(rbx_14, r15_3)
                                            rcx_68 = *rbx_14
                                        
                                        *(rcx_68 + (sx.q(r15_3) << 2)) = rdi_9
                                    else
                                        *(r8_12 + (r13 << 2) - 4) = rdi_9
                                    
                                    *(&var_280 + (r14_2 << 2)) += rdi_9 - rsi_2 + 1
                                    
                                    if (var_388:1.b != 0)
                                        int64_t var_960_2 = r14_2
                                        int32_t* rbx_15 = &(&var_378)[r14_2 * 2]
                                        int64_t r8_13 = r14_2
                                        
                                        do
                                            if (r14_2 s< 8)
                                                *(&var_260 + (r14_2 << 2)) += rdi_9 - rsi_2 + 1
                                                r13 = sx.q(*rbx_15)
                                                int64_t rdx_35
                                                
                                                if (r13.d != 0)
                                                    rdx_35 = *(rbx_15 - 8)
                                                
                                                if (r13.d == 0
                                                        || *(rdx_35 + (r13 << 2) - 4) + 1 != rsi_2)
                                                    int32_t rdx_37 = rbx_15[1]
                                                    int32_t r15_4 = (r13 + 1).d
                                                    *rbx_15 = r15_4
                                                    
                                                    if (r15_4 s> rdx_37)
                                                        sub_14113b710(&rbx_15[-2], r13.d)
                                                        rdx_37 = rbx_15[1]
                                                        r15_4 = *rbx_15
                                                    
                                                    int64_t rcx_71 = *(rbx_15 - 8)
                                                    *rbx_15 = r15_4 + 1
                                                    *(rcx_71 + (r13 << 2)) = rsi_2
                                                    
                                                    if (r15_4 + 1 s> rdx_37)
                                                        sub_14113b710(&rbx_15[-2], r15_4)
                                                        rcx_71 = *(rbx_15 - 8)
                                                    
                                                    r8_13 = var_960_2
                                                    *(rcx_71 + (sx.q(r15_4) << 2)) = rdi_9
                                                else
                                                    *(rdx_35 + (r13 << 2) - 4) = rdi_9
                                            
                                            r14_2 += 1
                                            rbx_15 = &rbx_15[4]
                                        while (r14_2 s<= r8_13)
                        result = sub_142057a60(r12, arg5, &var_728, &var_388)
                        goto label_14205c90a
                else
                    void var_6e8
                    sub_142048100(&var_6e8, r10_1, rbx.b, rsi.b)
                    int32_t rbx_1 = 0
                    float (* var_538_1)[0x4] = nullptr
                    int32_t var_528_1 = 0
                    int32_t var_524_1 = 6
                    int64_t var_498_1 = 0
                    int32_t var_488_1 = 0
                    int32_t var_484_1 = 8
                    int64_t var_3ec_1 = -1
                    int64_t var_3e0_1 = 0
                    int32_t var_3d8_1 = 0
                    int32_t var_430 = *(*(r12 + 0x150) + 8)
                    void* var_450_1 = r14_1
                    int32_t var_808
                    sub_140631b10(r12 + 0x80, &var_808)
                    int128_t* rcx_6 = *(r14_1 + 0x38)
                    rsi.b = 0
                    bool r15_2 = data_143a2e1b1
                    char var_9a6_1 = 0
                    r13.b = *(data_143f43188 + 4) != 0
                    bool var_6f8_1 = rcx_6 != 0
                    int32_t var_7f8
                    int32_t var_7e8
                    void var_598
                    float var_3b8[0x4]
                    float var_3a8[0x4]
                    float zmm2_1[0x4]
                    float zmm3_1[0x4]
                    
                    if (rcx_6 != 0)
                        int32_t j_2 = 0
                        
                        if (rcx_6[7].d s> 0)
                            zmm11 = 0x3f800000
                            int64_t rsi_1 = 0
                            
                            do
                                int128_t* rax_12 = rcx_6[6].q
                                int32_t var_7e4
                                zmm7 = var_7e4
                                int32_t var_7f4
                                zmm10 = var_7f4
                                int32_t var_7f0
                                zmm9 = var_7f0
                                
                                if (rax_12 != 0)
                                    rcx_6 = rax_12
                                
                                zmm8 = var_7f8
                                var_3c8[3] = 0
                                zmm6 = *(rcx_6 + rsi_1)
                                zmm6[0] = zmm6[0] * zmm6[0]
                                float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                float zmm4_1[0x4] = zmm6
                                float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                                temp0_2[0] = temp0_2[0] * temp0_2[0]
                                temp0_2[0] = temp0_2[0] + zmm6[0]
                                temp0_1[0] = temp0_1[0] * temp0_1[0]
                                temp0_2[0] = temp0_2[0] + temp0_1[0]
                                float temp0_4[0x4] = _mm_sqrt_ss(0, temp0_2[0])
                                zmm11[0] = zmm11[0] / temp0_4[0]
                                zmm4_1[0] = zmm4_1[0] * zmm11[0]
                                zmm11[0] = zmm11[0] * temp0_2[0]
                                zmm3_1 = var_7e8
                                zmm11[0] = zmm11[0] * temp0_1[0]
                                int32_t var_7e0
                                zmm2_1 = var_7e0
                                float var_8a4_1 = zmm11[0]
                                zmm11[0] = zmm11[0] f* *(r14_1 + 0x44)
                                float var_8a0_1 = zmm11[0]
                                zmm11[0] = zmm11[0] f* *(r14_1 + 0x48)
                                float var_8a8 = zmm4_1[0]
                                zmm4_1[0] = zmm4_1[0] f* *(r14_1 + 0x40)
                                zmm11[0] = zmm11[0] * temp0_3[0]
                                int32_t var_804
                                zmm6 = var_804
                                zmm4_1[0] = zmm4_1[0] + zmm11[0]
                                zmm7[0] = zmm7[0] * zmm9[0]
                                zmm4_1[0] = zmm4_1[0] + zmm11[0]
                                zmm10[0] = zmm10[0] * zmm2_1[0]
                                zmm10[0] = zmm10[0] - zmm7[0]
                                zmm8[0] = zmm8[0] * zmm2_1[0]
                                zmm11[0] = zmm11[0] - zmm4_1[0]
                                zmm4_1 = var_808
                                var_3c8[0] = zmm10[0]
                                zmm3_1[0] = zmm3_1[0] * zmm9[0]
                                float var_89c_1 = zmm11[0]
                                int32_t var_800
                                float zmm5_1[0x4] = var_800
                                zmm3_1[0] = zmm3_1[0] - zmm8[0]
                                zmm3_1[0] = zmm3_1[0] * zmm10[0]
                                var_3c8[1] = zmm3_1[0]
                                zmm8[0] = zmm8[0] * zmm7[0]
                                zmm8[0] = zmm8[0] - zmm3_1[0]
                                zmm6[0] = zmm6[0] * zmm2_1[0]
                                var_3c8[2] = zmm8[0]
                                zmm5_1[0] = zmm5_1[0] * zmm7[0]
                                zmm5_1[0] = zmm5_1[0] - zmm6[0]
                                zmm5_1[0] = zmm5_1[0] * zmm3_1[0]
                                var_3b8[0] = zmm5_1[0]
                                zmm4_1[0] = zmm4_1[0] * zmm2_1[0]
                                zmm6[0] = zmm6[0] * zmm3_1[0]
                                zmm4_1[0] = zmm4_1[0] - zmm5_1[0]
                                var_3b8[1] = zmm4_1[0]
                                zmm4_1[0] = zmm4_1[0] * zmm7[0]
                                var_3b8[3] = 0
                                var_3a8[3] = 0
                                zmm6[0] = zmm6[0] * zmm9[0]
                                zmm6[0] = zmm6[0] - zmm4_1[0]
                                zmm6[0] = zmm6[0] * zmm8[0]
                                zmm5_1[0] = zmm5_1[0] * zmm8[0]
                                zmm5_1[0] = zmm5_1[0] * zmm10[0]
                                var_3b8[2] = zmm6[0]
                                zmm6[0] = zmm6[0] - zmm5_1[0]
                                zmm4_1[0] = zmm4_1[0] * zmm9[0]
                                zmm4_1[0] = zmm4_1[0] * zmm10[0]
                                zmm5_1[0] = zmm5_1[0] - zmm4_1[0]
                                var_3a8[0] = zmm6[0]
                                float zmm0_1[0x4] = data_142d3f660
                                zmm4_1[0] = zmm4_1[0] - zmm6[0]
                                float var_398_1[0x4] = zmm0_1
                                var_3a8[1] = zmm5_1[0]
                                var_3a8[2] = zmm4_1[0]
                                int32_t var_898
                                zmm11 = sub_142070f60(&var_8a8, &var_898, &var_808, 
                                    sub_14062b8d0(&var_808), &var_3c8)
                                zmm4_1 = var_898
                                int32_t var_894
                                zmm6 = var_894
                                int32_t var_890
                                zmm5_1 = var_890
                                int64_t rbx_2 = sx.q(var_528_1)
                                zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                                int32_t rax_13 = (rbx_2 + 1).d
                                zmm6[0] = zmm6[0] * zmm6[0]
                                var_528_1 = rax_13
                                zmm6[0] = zmm6[0] + zmm4_1[0]
                                zmm6[0] = zmm6[0] + zmm5_1[0]
                                float temp0_5[0x4] = _mm_sqrt_ss(0, zmm6[0])
                                zmm11[0] = zmm11[0] / temp0_5[0]
                                zmm4_1[0] = zmm4_1[0] * zmm11[0]
                                int32_t var_88c
                                zmm11[0] = zmm11[0] f* var_88c
                                zmm11[0] = zmm11[0] * zmm6[0]
                                zmm11[0] = zmm11[0] * zmm5_1[0]
                                float var_884_1 = zmm11[0]
                                float var_888_1 = zmm4_1[0]
                                float var_880_1 = zmm11[0]
                                float var_87c_1 = zmm11[0]
                                
                                if (rax_13 s> var_524_1)
                                    sub_14149c260(&var_598, rbx_2.d)
                                
                                float (* rcx_10)[0x4] = &var_598
                                
                                if (var_538_1 != 0)
                                    rcx_10 = var_538_1
                                
                                j_2 += 1
                                rsi_1 += 0x10
                                rcx_10[rbx_2] = var_888_1.o
                                rcx_6 = *(r14_1 + 0x38)
                            while (j_2 s< rcx_6[7].d)
                            
                            rbx_1 = var_528_1
                            rsi = zx.q(var_9a6_1)
                        
                        r15_2 = rbx_1 == 4
                        goto label_14205b4cc
                    
                    int64_t** rbx_3 = arg2
                    
                    if (sub_1422eb5d0(**rbx_3) != 0)
                        if (i_1 != 0)
                            goto label_14205afc3
                        
                        goto label_14205aa45
                    
                    float zmm5_2[0x4]
                    float zmm14[0x4]
                    
                    if (*(**rbx_3 + 0xd7c) == 0 || i_1 != 0)
                    label_14205afc3:
                        zmm3_1 = *(r12 + 0x80)
                        zmm6 = *(r14_1 + 0x3d0)
                        zmm5_2 = *(r14_1 + 0x3c0)
                        zmm7 = *(r14_1 + 0x3e0)
                        zmm8 = *(r14_1 + 0x3f0)
                        float temp0_88[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                        float temp0_89[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                        float temp0_90[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                        float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8)
                        float temp0_93[0x4] = _mm_mul_ps(temp0_88, zmm5_2)
                        float temp0_94[0x4] = _mm_mul_ps(temp0_89, zmm6)
                        float temp0_95[0x4] = _mm_mul_ps(temp0_90, zmm7)
                        var_908 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_93, temp0_94), temp0_95), 
                            temp0_92)
                        zmm2_1 = *(r12 + 0x90)
                        float temp0_99[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                        float temp0_100[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                        float temp0_101[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                        float temp0_102[0x4] = _mm_mul_ps(temp0_99, zmm5_2)
                        float temp0_103[0x4] = _mm_mul_ps(temp0_100, zmm6)
                        float temp0_104[0x4] = _mm_mul_ps(temp0_101, zmm7)
                        float temp0_105[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                        float temp0_106[0x4] = _mm_add_ps(temp0_102, temp0_103)
                        float temp0_107[0x4] = _mm_mul_ps(temp0_105, zmm8)
                        float temp0_109[0x4] =
                            _mm_add_ps(_mm_add_ps(temp0_106, temp0_104), temp0_107)
                        zmm2_1 = *(r12 + 0xa0)
                        float temp0_110[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                        float temp0_111[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                        float temp0_112[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                        var_8f8 = temp0_109
                        float temp0_113[0x4] = _mm_mul_ps(temp0_111, zmm6)
                        float temp0_114[0x4] = _mm_mul_ps(temp0_112, zmm7)
                        float temp0_116[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm8)
                        float temp0_120[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_110, zmm5_2), temp0_113), 
                                temp0_114), 
                            temp0_116)
                        zmm2_1 = *(r12 + 0xb0)
                        float temp0_121[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                        float temp0_122[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                        float temp0_123[0x4] = _mm_mul_ps(temp0_121, zmm5_2)
                        float temp0_124[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                        float temp0_125[0x4] = _mm_mul_ps(temp0_122, zmm6)
                        float temp0_126[0x4] = _mm_mul_ps(temp0_124, zmm7)
                        float temp0_127[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                        float temp0_128[0x4] = _mm_add_ps(temp0_123, temp0_125)
                        float temp0_129[0x4] = _mm_mul_ps(temp0_127, zmm8)
                        var_8e8 = temp0_120
                        var_8d8 = _mm_add_ps(_mm_add_ps(temp0_128, temp0_126), temp0_129)
                        result = sub_141f8c8a0(&var_598, &var_908, 0)
                    label_14205b0d9:
                        float zmm1_1[0x4]
                        
                        if (not(1f f<= *(r14_1 + 0x2bc)))
                            if (var_528_1 != 5)
                                goto label_14205afa2
                            
                            float (* rbx_9)[0x4] = var_538_1
                            float (* rax_41)[0x4] = &var_598
                            
                            if (rbx_9 != 0)
                                rax_41 = rbx_9
                            
                            __builtin_memcpy(&var_908, 
                                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                            "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                                0x40)
                            int32_t var_528_7 = 4
                            
                            if (rax_41 != 0)
                                zmm1_1 = (*rax_41)[1]
                                var_908[0] = (*rax_41).d
                                var_908[2] = (*rax_41)[2].d
                                var_908[1] = zmm1_1[0]
                            
                            if (rax_41 != -0x10)
                                zmm1_1 = (*rax_41)[5]
                                var_8f8[0] = rax_41[1][0].d
                                var_8f8[2] = (*rax_41)[6].d
                                var_8f8[1] = zmm1_1[0]
                            
                            if (rax_41 != -0x20)
                                zmm1_1 = (*rax_41)[9]
                                var_8e8[0] = rax_41[2][0].d
                                var_8e8[2] = (*rax_41)[0xa].d
                                var_8e8[1] = zmm1_1[0]
                            
                            (*rax_41)[3]
                            (*rax_41)[7]
                            (*rax_41)[0xb]
                            uint32_t var_768[0x4][0x4]
                            float (* rax_42)[0x4]
                            rax_42, zmm6, zmm7, zmm8 = sub_140631b10(&var_908, &var_768)
                            int32_t var_86c_1 = 0
                            float var_878[0x4]
                            var_878[0] = zmm6[0]
                            int64_t var_988_1 = 0
                            zmm1_1 = (*rax_42)[0xb]
                            zmm2_1 = (*rax_42)[0xf]
                            zmm10 = (*rax_42)[2]
                            zmm3_1 = (*rax_42)[3]
                            float zmm4_3[0x4] = (*rax_42)[6]
                            float zmm5_3[0x4] = (*rax_42)[0xa]
                            zmm9 = (*rax_42)[0xe]
                            zmm14 = (*rax_42)[1]
                            zmm11 = (*rax_42)[5]
                            zmm12 = (*rax_42)[9]
                            float zmm13[0x4] = (*rax_42)[0xd]
                            var_978.o = *rax_42
                            float zmm0_6[0x4] = (*rax_42)[7]
                            float temp0_132[0x4] = _mm_shuffle_ps(var_878, var_878, 0xe1)
                            float temp0_133[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                            temp0_132[0] = zmm7[0]
                            temp0_133[0] = zmm0_6[0]
                            float temp0_134[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe1)
                            float temp0_135[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xe1)
                            temp0_134[0] = zmm4_3[0]
                            temp0_135[0] = zmm11[0]
                            float temp0_136[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0xc6)
                            temp0_136[0] = zmm1_1[0]
                            float temp0_137[0x4] = _mm_shuffle_ps(temp0_132, temp0_132, 0xc6)
                            float temp0_138[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xc6)
                            temp0_137[0] = zmm8[0]
                            float temp0_139[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xc9)
                            temp0_138[0] = zmm5_3[0]
                            float temp0_140[0x4] = _mm_shuffle_ps(temp0_135, temp0_135, 0xc6)
                            float temp0_141[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xff)
                            float temp0_142[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xaa)
                            temp0_140[0] = zmm12[0]
                            float temp0_143[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0x27)
                            temp0_143[0] = zmm2_1[0]
                            float temp0_144[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0x55)
                            zmm2_1 = var_978.o
                            float temp0_145[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
                            float temp0_146[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0x27)
                            float temp0_147[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0x39)
                            temp0_146[0] = zmm9[0]
                            float temp0_148[0x4] = _mm_shuffle_ps(temp0_146, temp0_146, 0x39)
                            float temp0_149[0x4] = _mm_mul_ps(temp0_142, temp0_148)
                            int32_t var_980_1 = 0
                            float temp0_150[0x4] = _mm_mul_ps(temp0_141, temp0_147)
                            float temp0_151[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0x27)
                            var_878 = temp0_139
                            temp0_151[0] = zmm13[0]
                            float temp0_152[0x4] = _mm_shuffle_ps(temp0_151, temp0_151, 0x39)
                            float temp0_153[0x4] = _mm_add_ps(temp0_150, temp0_149)
                            float temp0_154[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0)
                            temp0_145[0] = rax_42[1][0][0]
                            float temp0_155[0x4] = _mm_mul_ps(temp0_144, temp0_152)
                            zmm0_6 = rax_42[2][0]
                            float temp0_156[0x4] = _mm_shuffle_ps(temp0_145, temp0_145, 0xc6)
                            temp0_156[0] = zmm0_6[0]
                            float var_398_3[0x4] = temp0_147
                            zmm0_6 = rax_42[3][0]
                            float temp0_157[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0x27)
                            temp0_157[0] = zmm0_6[0]
                            float var_3a8_1[0x4] = temp0_148
                            float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0x39)
                            float temp0_159[0x4] = _mm_mul_ps(temp0_154, temp0_158)
                            float var_3b8_1[0x4] = temp0_152
                            var_3c8 = temp0_158
                            int32_t r8_3 = 0
                            var_988_1.o = _mm_add_ps(temp0_153, _mm_add_ps(temp0_155, temp0_159))
                            int64_t rdx_19 = 0
                            
                            while (true)
                                float (* rcx_43)[0x4] = &var_598
                                
                                if (rbx_9 != 0)
                                    rcx_43 = rbx_9
                                
                                zmm8 = *(rcx_43 + rdx_19)
                                zmm8[0] = zmm8[0] * zmm8[0]
                                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                                zmm6[0] = zmm6[0] * zmm6[0]
                                zmm6[0] = zmm6[0] + zmm8[0]
                                zmm7[0] = zmm7[0] * zmm7[0]
                                zmm6[0] = zmm6[0] + zmm7[0]
                                
                                if (not(zmm6[0] == 1f))
                                    if (zmm6[0] >= 9.99999994e-09f)
                                        zmm3_1 = zx.o(0)
                                        zmm4_3 = zx.o(0)
                                        zmm4_3[0] = 0x3f000000
                                        zmm3_1[0] = zmm6[0]
                                        float temp0_164[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                        zmm3_1[0] = zmm3_1[0] * 0.5f
                                        temp0_164[0] = temp0_164[0] * temp0_164[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_164[0]
                                        zmm4_3[0] = zmm4_3[0] - zmm3_1[0]
                                        temp0_164[0] = temp0_164[0] * zmm4_3[0]
                                        temp0_164[0] = temp0_164[0] + temp0_164[0]
                                        temp0_164[0] = temp0_164[0] * temp0_164[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_164[0]
                                        zmm4_3[0] = 0.5f - zmm3_1[0]
                                        temp0_164[0] = temp0_164[0] * zmm4_3[0]
                                        temp0_164[0] = temp0_164[0] + temp0_164[0]
                                        var_958 = temp0_164[0]
                                        zmm8[0] = zmm8[0] * temp0_164[0]
                                        zmm6[0] = zmm6[0] * temp0_164[0]
                                        zmm7[0] = zmm7[0] * temp0_164[0]
                                    else
                                        zmm8 = data_143dbb1f8
                                        zmm6 = data_143dbb1fc
                                        zmm7 = data_143dbb200
                                
                                float var_8b8_1 = zmm7[0]
                                r8_3 += 1
                                float temp0_165[0x4] = _mm_unpacklo_ps(zmm8, zmm6[0].q)
                                zmm6[0] = zmm6[0] * var_988_1:4.d[0]
                                float var_810_1 = var_8b8_1
                                float var_818[0x4]
                                var_818[0].q = temp0_165.q
                                zmm8[0] = zmm8[0] * var_988_1.d[0]
                                float temp0_166[0x4] = _mm_shuffle_ps(var_818, var_818, 0x93)
                                zmm7[0] = zmm7[0] * var_980_1[0]
                                zmm6[0] = zmm6[0] + zmm8[0]
                                zmm6[0] = zmm6[0] + zmm7[0]
                                temp0_166[0] = zmm6[0]
                                float temp0_167[0x4] = _mm_shuffle_ps(temp0_166, temp0_166, 0x39)
                                *(rcx_43 + rdx_19) = temp0_167
                                rdx_19 += 0x10
                                rbx_1 = var_528_7
                                var_818 = temp0_167
                                
                                if (r8_3 s>= rbx_1)
                                    break
                                
                                rbx_9 = var_538_1
                            
                            goto label_14205b4cc
                        
                        rbx_1 = var_528_1
                        rsi.b = 1
                        r15_2 = false
                    label_14205b4cc:
                        
                        if (rbx_1 != 0)
                            sub_141f8cbb0(&var_598)
                        else
                            r13.b = 1
                        
                        char var_6fe_1 = var_9a7_1
                        int64_t var_798
                        int64_t* rax_44 = sub_1422e5db0(r14_1, &var_798, 0, var_9a7_1)
                        int32_t var_85c_1 = 0x3f800000
                        int64_t var_988_2 = 0
                        zmm1_1 = *(rax_44 + 4)
                        float var_868[0x4]
                        var_868[0] = (*rax_44)[0]
                        zmm2_1 = rax_44[1].d
                        float temp0_168[0x4] = _mm_shuffle_ps(var_868, var_868, 0xe1)
                        temp0_168[0] = zmm1_1[0]
                        int32_t var_980_2 = 0
                        float temp0_169[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0xc6)
                        temp0_169[0] = zmm2_1[0]
                        float temp0_170[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0xc9)
                        var_868 = temp0_170
                        float var_7d8[0x4]
                        float temp0_172[0x4] =
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_170, temp0_170, 0xff), var_7d8)
                        float temp0_174[0x4] = __mulps_xmmps_memps(
                            _mm_shuffle_ps(temp0_170, temp0_170, 0xaa), var_7e8.o)
                        float temp0_176[0x4] = __mulps_xmmps_memps(
                            _mm_shuffle_ps(temp0_170, temp0_170, 0x55), var_7f8.o)
                        float temp0_181[0x4] = _mm_add_ps(_mm_add_ps(temp0_172, temp0_174), 
                            _mm_add_ps(temp0_176, 
                                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_170, temp0_170, 0), 
                                    var_808.o)))
                        float var_7c0_1 = _mm_shuffle_ps(temp0_181, temp0_181, 0xaa)[0]
                        int64_t var_448_1 = (_mm_unpacklo_ps(temp0_181, 
                            _mm_shuffle_ps(temp0_181, temp0_181, 0x55)[0].q)).q
                        float var_440_1 = var_7c0_1
                        int64_t var_78c
                        int64_t* rax_46 = sub_1422e5db0(r14_1, &var_78c, 1, var_9a7_1)
                        int32_t var_84c_1 = 0x3f800000
                        int64_t var_988_3 = 0
                        zmm1_1 = *(rax_46 + 4)
                        float var_858[0x4]
                        var_858[0] = (*rax_46)[0]
                        zmm2_1 = rax_46[1].d
                        float temp0_185[0x4] = _mm_shuffle_ps(var_858, var_858, 0xe1)
                        temp0_185[0] = zmm1_1[0]
                        int32_t var_980_3 = 0
                        float temp0_186[0x4] = _mm_shuffle_ps(temp0_185, temp0_185, 0xc6)
                        temp0_186[0] = zmm2_1[0]
                        float temp0_187[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0xc9)
                        var_858 = temp0_187
                        float temp0_189[0x4] =
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_187, temp0_187, 0xff), var_7d8)
                        float temp0_191[0x4] = __mulps_xmmps_memps(
                            _mm_shuffle_ps(temp0_187, temp0_187, 0x55), var_7f8.o)
                        float temp0_193[0x4] = __mulps_xmmps_memps(
                            _mm_shuffle_ps(temp0_187, temp0_187, 0xaa), var_7e8.o)
                        float temp0_195[0x4] =
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_187, temp0_187, 0), var_808.o)
                        float temp0_198[0x4] = _mm_add_ps(_mm_add_ps(temp0_189, temp0_193), 
                            _mm_add_ps(temp0_191, temp0_195))
                        float temp0_199[0x4] = _mm_shuffle_ps(temp0_198, temp0_198, 0x55)
                        zmm14 = zx.o(0)
                        float var_7b4_1 = _mm_shuffle_ps(temp0_198, temp0_198, 0xaa)[0]
                        int64_t var_43c_1 = (_mm_unpacklo_ps(temp0_198, temp0_199[0].q)).q
                        float var_434_1 = var_7b4_1
                        
                        if (rsi.b == 0)
                            zmm11 = *(data_143f43200 + 4)
                        else
                            zmm11 = zx.o(0)
                        
                        zmm10 = *(data_143f43218 + 4)
                        zmm9 = *(data_143f43230 + 4)
                        zmm12 = data_143a30378:8.d
                        void* rcx_47 = *rdi_1
                        zmm8 = *(rcx_47 + 0x34)
                        zmm8[0] = zmm8[0] f- *(rcx_47 + 0x28)
                        zmm7 = *(rcx_47 + 0x38)
                        zmm7[0] = zmm7[0] f- *(rcx_47 + 0x2c)
                        zmm6 = *(rcx_47 + 0x3c)
                        zmm6[0] = zmm6[0] f- *(rcx_47 + 0x30)
                        zmm8[0] = zmm8[0] * 0.5f
                        zmm7[0] = zmm7[0] * 0.5f
                        zmm8[0] = zmm8[0] f+ *(rcx_47 + 0x28)
                        zmm6[0] = zmm6[0] * 0.5f
                        zmm7[0] = zmm7[0] f+ *(rcx_47 + 0x2c)
                        zmm6[0] = zmm6[0] f+ *(rcx_47 + 0x30)
                        float var_7a8[0x4]
                        int64_t zmm6_1
                        float zmm7_1[0x4]
                        float zmm8_1[0x4]
                        zmm6_1, zmm7_1, zmm8_1 = sub_140ade170(&data_143dbb208, &var_7a8)
                        float zmm0_9[0x4] = var_7a8
                        void* rcx_48 = *(r12 + 0x150)
                        float temp0_202[0x4] = _mm_unpacklo_ps(data_143dbb1f8, data_143dbb200)
                        var_3c8 = zmm0_9
                        var_3b8 =
                            _mm_unpacklo_ps(temp0_202, _mm_unpacklo_ps(data_143dbb1fc, 0)[0].q)
                        var_3a8 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_1, zmm6_1), 
                            _mm_unpacklo_ps(zmm7_1, 0)[0].q)
                        float var_118[0x6]
                        sub_140ae2e90(rcx_48 + 0x40, &var_118, &var_3c8)
                        int32_t var_100
                        zmm8_1 = var_100
                        float zmm6_2[0x4] = 0x7f7fffff
                        
                        if (not(zmm11[0] <= zmm14[0]))
                            zmm6_2 = sub_1422dfe30(zmm11[0], zmm8_1[0], r14_1 + 0x280)
                            zmm6_2[0] = zmm6_2[0] * zmm10[0]
                        
                        float zmm0_10[0x4] = *(r14_1 + 0x21c)
                        
                        if (not(zmm0_10[0] <= zmm14[0]))
                            zmm0_10[0] = zmm0_10[0] * zmm12[0]
                            zmm6_2 = _mm_min_ss(zmm0_10[0], zmm6_2[0])
                        
                        float temp0_209[0x4] = _mm_cvtepi32_ps(zx.o(*(r12 + 0x694)))
                        
                        if (not(temp0_209[0] <= zmm14[0]))
                            temp0_209[0] = temp0_209[0] * zmm12[0]
                            zmm6_2 = _mm_min_ss(temp0_209[0], zmm6_2[0])
                        
                        int32_t rax_52 = var_430
                        int32_t rdi_8 = 1
                        float var_6f4_1 = zmm6_2[0]
                        zmm6_2[0] = zmm6_2[0] - zmm9[0]
                        int32_t var_40c[0x8]
                        
                        if (rax_52 s> 1)
                            void* rbx_11 = &var_40c
                            
                            do
                                zmm0_10 = sub_1422dfe30((*(*(r12 + 0x150) - &var_430 + rbx_11))[0], 
                                    zmm8_1[0], r14_1 + 0x280)
                                zmm0_10[0] = zmm0_10[0] * zmm10[0]
                                rdi_8 += 1
                                float zmm1_3 = zmm0_10[0]
                                float temp0_211[0x4] = _mm_min_ss(zmm0_10[0], zmm6_2[0])
                                *rbx_11 = _mm_min_ss(zmm1_3 - zmm9[0], zmm6_2[0])
                                *(rbx_11 - 0x20) = temp0_211[0]
                                rbx_11 += 4
                                rax_52 = var_430
                            while (rdi_8 s< rax_52)
                        
                        int32_t r10_2 = 0
                        var_40c[sx.q(rax_52 - 1)] = zmm6_2[0]
                        int32_t var_42c[0x8]
                        var_42c[sx.q(var_430 - 1)] = zmm6_2[0]
                        int32_t rdx_24 = var_430
                        
                        if (rdx_24 s> 0)
                            int64_t* rbx_12 = *(r12 + 0x150)
                            void var_478
                            void* r8_7 = &var_478
                            int64_t r9_3 = 0
                            
                            do
                                *r8_7 = 2
                                int32_t r11_1 = *(*(*rbx_12 + r9_3) + 0xec)
                                
                                if (r11_1 != 0)
                                    *r8_7 = divs.dp.d(sx.q(var_928_1), r11_1)
                                
                                rdx_24 = var_430
                                r10_2 += 1
                                r9_3 += 8
                                r8_7 += 4
                            while (r10_2 s< rdx_24)
                            
                            r12 = arg1
                        
                        int32_t rcx_53 = *(r12 + 0x788)
                        
                        if (rcx_53 s>= 0)
                            int32_t rax_62 = *(r12 + 0x78c)
                            
                            if (rax_62 s>= 0 && rcx_53 s<= rax_62)
                                int32_t var_924
                                sub_142058050(r12 + 0x7a0, &var_924, sub_1422e5e40(r14_1))
                                int64_t rax_64 = sx.q(var_924)
                                void* const rax_67
                                
                                if (rax_64.d == 0xffffffff)
                                    rax_67 = nullptr
                                else
                                    rax_67 = rax_64 * 0x30 + *(r12 + 0x7a0)
                                
                                void* rcx_56 = rax_67 + 8
                                
                                if (rax_67 == 0)
                                    rcx_56 = nullptr
                                
                                if (rcx_56 != 0 && *(rcx_56 + 0x18) == data_14399fa54)
                                    int32_t rdx_28 = *(r12 + 0x78c)
                                    int32_t r8_9 = *(r12 + 0x788)
                                    
                                    if (rdx_28 - r8_9 + 1 == *(rcx_56 + 0x14))
                                        int32_t rax_72 = *(rcx_56 + 0x10)
                                        
                                        if (rax_72 s>= 0)
                                            int32_t r9_4 = *(rcx_56 + 8)
                                            
                                            if (rax_72 s< r9_4)
                                                int32_t rax_73 = rax_72 - r8_9
                                                
                                                if (rax_73 + rdx_28 s>= 0
                                                        && rax_73 + rdx_28 s< r9_4)
                                                    var_3ec_1.d = r8_9
                                                    var_3ec_1:4.d = rdx_28
                                                    void* var_3e0_2 = rcx_56
                                                    int32_t var_3d8_2 = *(rcx_56 + 0x10)
                                
                                rdx_24 = var_430
                        
                        int32_t r9_5 = *(r12 + 0x624)
                        int32_t rcx_57 = *(data_143f47698 + 4)
                        int32_t rax_77 = rdx_24 - 1
                        
                        if (rcx_57 s<= rdx_24 - 1)
                            rax_77 = rcx_57
                        
                        if (rax_77 s>= 0)
                            if (r9_5 s>= rax_77)
                                rax_77 = r9_5
                            
                            r9_5 = rax_77
                        
                        int32_t rcx_58 = *(data_143f42f28 + 4)
                        
                        if (rcx_58 s>= 0)
                            r9_5 = rdx_24 - 1
                            
                            if (rcx_58 s< rdx_24 - 1)
                                r9_5 = rcx_58
                            
                            rdx_24 = r9_5
                        
                        if (*(data_143f431a0 + 4) s< 1)
                            char var_9b0_1 = r13.b
                            float (* var_9b8)[0x4]
                            var_9b8.d = rdx_24
                            void* rdx_29 = &var_6e8
                            
                            if (r15_2 == 0)
                                sub_142046d50(r12, rdx_29, 0, r9_5)
                            else
                                sub_142046920(r12, rdx_29, 0, r9_5, zmm6_2, zmm6_2, var_9b8.b)
                        
                        result = sub_142057a60(r12, arg5, &var_728, &var_6e8)
                        
                        if (var_498_1 != 0)
                            result = sub_140a74f90(var_498_1)
                        
                        if (var_538_1 != 0)
                            result = sub_140a74f90(var_538_1)
                        
                        rcx_2 = var_9a0_1
                        r15_1 = 0
                        i = i_1
                        r11 = arg2
                        rbx = zx.q(var_9a7_1)
                        r8 = var_948_1
                        goto label_14205bac4
                    
                label_14205aa45:
                    zmm2_1 = *(r12 + 0x80)
                    zmm14 = *(r12 + 0xa0)
                    zmm12 = *(r12 + 0x90)
                    zmm8 = *(r12 + 0xb0)
                    int64_t* rcx_14 = *rbx_3
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                    void* rax_19 = *rcx_14
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    float temp0_10[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                    float temp0_11[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
                    zmm5_2 = *(rax_19 + 0x3d0)
                    zmm6 = *(rax_19 + 0x3c0)
                    zmm7 = *(rax_19 + 0x3e0)
                    zmm11 = *(rax_19 + 0x3f0)
                    float temp0_12[0x4] = _mm_mul_ps(temp0_6, zmm6)
                    float temp0_13[0x4] = _mm_mul_ps(temp0_9, zmm11)
                    float temp0_14[0x4] = _mm_mul_ps(temp0_7, zmm5_2)
                    float temp0_15[0x4] = _mm_mul_ps(temp0_8, zmm7)
                    float temp0_16[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                    float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_12)
                    float temp0_18[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                    float temp0_19[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
                    float temp0_20[0x4] = _mm_mul_ps(temp0_11, zmm6)
                    float temp0_21[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                    float temp0_22[0x4] = _mm_add_ps(temp0_17, temp0_15)
                    float temp0_23[0x4] = _mm_mul_ps(temp0_16, zmm7)
                    float temp0_24[0x4] = _mm_add_ps(temp0_22, temp0_13)
                    float temp0_25[0x4] = _mm_mul_ps(temp0_10, zmm5_2)
                    var_908 = temp0_24
                    float temp0_26[0x4] = _mm_add_ps(temp0_25, temp0_20)
                    float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0x55), zmm5_2)
                    float temp0_29[0x4] = _mm_mul_ps(temp0_18, zmm11)
                    float temp0_30[0x4] = _mm_add_ps(temp0_26, temp0_23)
                    float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xaa), zmm7)
                    float temp0_33[0x4] = _mm_add_ps(temp0_30, temp0_29)
                    float temp0_34[0x4] = _mm_mul_ps(temp0_19, zmm6)
                    var_8f8 = temp0_33
                    float temp0_36[0x4] = _mm_add_ps(_mm_mul_ps(temp0_21, zmm5_2), temp0_34)
                    float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xff), zmm11)
                    float temp0_39[0x4] = _mm_add_ps(temp0_36, temp0_32)
                    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xaa), zmm7)
                    float temp0_42[0x4] = _mm_add_ps(temp0_39, temp0_38)
                    float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm6)
                    var_8e8 = temp0_42
                    float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xff), zmm11)
                    var_8d8 =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_28, temp0_44), temp0_41), temp0_46)
                    void* rax_20 = rcx_14[1]
                    zmm6 = *(rax_20 + 0x3d0)
                    zmm5_2 = *(rax_20 + 0x3c0)
                    zmm7 = *(rax_20 + 0x3e0)
                    zmm8 = *(rax_20 + 0x3f0)
                    zmm2_1 = *(r12 + 0xb0)
                    float temp0_50[0x4] = _mm_mul_ps(temp0_21, zmm6)
                    int32_t rbx_4 = 0
                    float temp0_51[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                    float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xaa), zmm7)
                    void* var_1d8_1 = nullptr
                    float temp0_54[0x4] = _mm_mul_ps(temp0_51, zmm7)
                    int32_t var_1c8_1 = 0
                    float temp0_55[0x4] = _mm_mul_ps(temp0_19, zmm5_2)
                    int32_t var_1c4_1 = 6
                    float temp0_56[0x4] = _mm_mul_ps(temp0_11, zmm5_2)
                    int64_t var_138_1 = 0
                    float temp0_57[0x4] = _mm_mul_ps(temp0_10, zmm6)
                    int32_t var_128_1 = 0
                    float temp0_58[0x4] = _mm_add_ps(temp0_55, temp0_50)
                    float temp0_59[0x4] = _mm_mul_ps(temp0_16, zmm7)
                    int32_t var_124_1 = 8
                    float temp0_60[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xff)
                    float temp0_61[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                    float temp0_62[0x4] = _mm_add_ps(temp0_56, temp0_57)
                    float temp0_63[0x4] = _mm_mul_ps(temp0_61, zmm5_2)
                    int16_t* var_328_1 = nullptr
                    float temp0_64[0x4] = _mm_add_ps(temp0_58, temp0_53)
                    float temp0_65[0x4] = _mm_mul_ps(temp0_18, zmm8)
                    int32_t var_318 = 0
                    float temp0_66[0x4] = _mm_mul_ps(temp0_60, zmm8)
                    var_318 = 6
                    float temp0_67[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    float temp0_68[0x4] = _mm_add_ps(temp0_62, temp0_59)
                    float temp0_69[0x4] = _mm_mul_ps(temp0_67, zmm6)
                    int64_t var_288_1 = 0
                    float temp0_70[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    float temp0_71[0x4] = _mm_add_ps(temp0_64, temp0_66)
                    float temp0_72[0x4] = _mm_mul_ps(temp0_70, zmm8)
                    int64_t var_278
                    var_278.d = 0
                    var_278:4.d = 8
                    var_3a8 = temp0_71
                    var_3b8 = _mm_add_ps(temp0_68, temp0_65)
                    float temp0_76[0x4] =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_63, temp0_69), temp0_54), temp0_72)
                    zmm2_1 = *(r12 + 0x80)
                    float temp0_77[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                    float temp0_78[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    float temp0_79[0x4] = _mm_mul_ps(temp0_77, zmm5_2)
                    float temp0_80[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                    float temp0_81[0x4] = _mm_mul_ps(temp0_78, zmm6)
                    float temp0_82[0x4] = _mm_mul_ps(temp0_80, zmm7)
                    float temp0_83[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    float temp0_84[0x4] = _mm_add_ps(temp0_79, temp0_81)
                    float temp0_85[0x4] = _mm_mul_ps(temp0_83, zmm8)
                    float var_398_2[0x4] = temp0_76
                    var_3c8 = _mm_add_ps(_mm_add_ps(temp0_84, temp0_82), temp0_85)
                    void var_238
                    sub_141f8c8a0(&var_238, &var_908, 0)
                    result = sub_141f8c8a0(&var_388, &var_3c8, 0)
                    
                    if (var_1c8_1 s>= 5 && var_318 s>= 5)
                        int32_t rcx_17 = var_524_1
                        int32_t var_528_2 = 0
                        
                        if (rcx_17 != 5)
                            sub_14149c8a0(&var_598, 5)
                            rcx_17 = var_524_1
                            rbx_4 = var_528_2
                        
                        if (rbx_4 + 1 s> rcx_17)
                            sub_14149c260(&var_598, rbx_4)
                        
                        void* rdx_7 = &var_238
                        float (* rcx_20)[0x4] = &var_598
                        
                        if (var_1d8_1 != 0)
                            rdx_7 = var_1d8_1
                        
                        if (var_538_1 != 0)
                            rcx_20 = var_538_1
                        
                        rcx_20[sx.q(rbx_4)] = *rdx_7
                        int64_t rbx_5 = sx.q(rbx_4 + 1)
                        int32_t rax_25 = (rbx_5 + 1).d
                        
                        if (rax_25 s> var_524_1)
                            sub_14149c260(&var_598, rbx_5.d)
                        
                        int16_t* rdx_9 = &var_388
                        float (* rcx_22)[0x4] = &var_598
                        
                        if (var_328_1 != 0)
                            rdx_9 = var_328_1
                        
                        if (var_538_1 != 0)
                            rcx_22 = var_538_1
                        
                        rcx_22[rbx_5] = *(rdx_9 + 0x10)
                        int64_t rbx_6 = sx.q(rax_25)
                        int32_t rax_29 = (rbx_6 + 1).d
                        
                        if (rax_29 s> var_524_1)
                            sub_14149c260(&var_598, rbx_6.d)
                        
                        void* rdx_11 = &var_238
                        float (* rcx_24)[0x4] = &var_598
                        
                        if (var_1d8_1 != 0)
                            rdx_11 = var_1d8_1
                        
                        if (var_538_1 != 0)
                            rcx_24 = var_538_1
                        
                        rcx_24[rbx_6] = *(rdx_11 + 0x20)
                        int64_t rbx_7 = sx.q(rax_29)
                        int32_t rax_33 = (rbx_7 + 1).d
                        
                        if (rax_33 s> var_524_1)
                            sub_14149c260(&var_598, rbx_7.d)
                        
                        void* rdx_13 = &var_238
                        float (* rcx_26)[0x4] = &var_598
                        
                        if (var_1d8_1 != 0)
                            rdx_13 = var_1d8_1
                        
                        if (var_538_1 != 0)
                            rcx_26 = var_538_1
                        
                        rcx_26[rbx_7] = *(rdx_13 + 0x30)
                        int64_t rbx_8 = sx.q(rax_33)
                        int32_t rax_37 = (rbx_8 + 1).d
                        var_528_1 = rax_37
                        
                        if (rax_37 s> var_524_1)
                            sub_14149c260(&var_598, rbx_8.d)
                        
                        void* rdx_15 = &var_238
                        float (* rcx_28)[0x4] = &var_598
                        
                        if (var_1d8_1 != 0)
                            rdx_15 = var_1d8_1
                        
                        if (var_538_1 != 0)
                            rcx_28 = var_538_1
                        
                        rcx_28[rbx_8] = *(rdx_15 + 0x40)
                        result = sub_141f8cbb0(&var_598)
                        
                        if (var_288_1 != 0)
                            result = sub_140a74f90(var_288_1)
                        
                        if (var_328_1 != 0)
                            result = sub_140a74f90(var_328_1)
                        
                        if (var_138_1 != 0)
                            result = sub_140a74f90(var_138_1)
                        
                        if (var_1d8_1 != 0)
                            result = sub_140a74f90(var_1d8_1)
                        
                        goto label_14205b0d9
                    
                    if (var_288_1 != 0)
                        result = sub_140a74f90(var_288_1)
                    
                    if (var_328_1 != 0)
                        result = sub_140a74f90(var_328_1)
                    
                    if (var_138_1 != 0)
                        result = sub_140a74f90(var_138_1)
                    
                    if (var_1d8_1 == 0)
                        goto label_14205afa2
                    
                    result = sub_140a74f90(var_1d8_1)
                label_14205afa2:
                    
                    if (var_498_1 != 0)
                        result = sub_140a74f90(var_498_1)
                    
                    if (var_538_1 == 0)
                        goto label_14205c90a
                    
                    result = sub_140a74f90(var_538_1)
                label_14205c90a:
                    r8 = var_948_1
                    r11 = arg2
                    i = i_1
                    rcx_2 = var_9a0_1
                rsi = zx.q(var_9a8_1)
            
            i += 1
            rbx = zx.q(var_9a7_1)
            r8 += 1
            r10_1 = var_9a5_1
            arg4 = var_920
            r15_1 = 0
            rcx_2 = rol.d(rcx_2, 1)
            i_1 = i
            var_9a0_1 = rcx_2
            var_948_1 = r8
        while (i s< r11[1].d)
else
    int64_t* var_9b8_1 = arg5

__security_check_cookie(rax_1 ^ &var_9d8)
return result
