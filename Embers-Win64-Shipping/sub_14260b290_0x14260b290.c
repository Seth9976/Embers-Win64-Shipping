// 函数: sub_14260b290
// 地址: 0x14260b290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
arg1[0xf].d = 0
float* var_130 = arg5
uint64_t result

if (arg2 == 0 || arg3 == 0)
    result = 0x80000008
else
    void* rbx_1 = *arg1
    
    if (sub_1426126b0(rbx_1, arg2) == 0)
        result = 0x80000008
    else if (sub_1426126b0(rbx_1, arg3) == 0)
        result = 0x80000008
    else
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        float var_100[0x4]
        
        if (arg2 != arg3)
            int128_t zmm9 = zx.o(0)
            int128_t zmm12 = *(arg7 + 0x20c)
            
            if (not(zmm12.d f> 0f))
                zmm12 = 0x3f800000
            
            void* rbx_2 = arg1[0xd]
            char rax_6 = *(arg7 + 0x215)
            zmm12.d = zmm12.d f* arg7[0x41].d
            memset(*(rbx_2 + 8), 0xff, sx.q(*(rbx_2 + 0x1c)) * 2)
            *(rbx_2 + 0x24) = 0
            int32_t rbx_3 = 0
            *(arg1[0xe] + 0xc) = 0
            int32_t* rax_8 = sub_14260fcd0(arg1[0xd], arg2)
            void* var_140_1 = rax_8
            *rax_8 = *arg4
            rax_8[1] = arg4[1]
            rax_8[2] = arg4[2]
            rax_8[5] &= 0xc0000000
            rax_8[3] = 0
            float zmm0_2 = arg5[2] f- arg4[2]
            float zmm2 = arg5[1] f- arg4[1]
            float zmm1 = *arg5 f- *arg4
            *(rax_8 + 0x18) = arg2
            rax_8[5] = 0x40000000
            rax_8[4] = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0_2 * zmm0_2) f* zmm12.d
            sub_142613e10(arg1[0xe], rax_8)
            arg1[0xf].d += 1
            uint64_t r14_1 = 1
            int32_t result_2 = 0x40000000
            int32_t result_3 = 0x40000000
            float zmm11[0x4] = *(var_140_1 + 0x10)
            int64_t* rax_11 = arg1[0xe]
            uint64_t r9_1 = zx.q(*(arg1[0xd] + 0x20) + 1)
            int32_t var_168_1 = r9_1.d
            
            if (*(rax_11 + 0xc) != 0)
                float zmm7[0x4]
                float var_58_1[0x4] = zmm7
                float zmm8[0x4]
                float var_68_1[0x4] = zmm8
                
                while (true)
                    void* rax_12
                    float zmm0_3[0x4]
                    rax_12, zmm0_3 = sub_1426136c0(rax_11)
                    r9_1 = zx.q(var_168_1)
                    r14_1 = 1
                    float* var_148_1 = rax_12
                    float* rdi_1 = *(rax_12 + 0x18)
                    int32_t r8_4 = (*(rax_12 + 0x14) & 0x3fffffff) | 0x80000000
                    *(rax_12 + 0x14) = r8_4
                    
                    if (rdi_1 == arg3)
                        var_140_1 = rax_12
                        break
                    
                    if (rbx_3 + 1 s>= (r9_1 << 2).d)
                        break
                    
                    void* rdx_5 = *arg1
                    char r9_2 = (*(rdx_5 + 0xa0)).b
                    int64_t r11_1 = *(rdx_5 + 0x90)
                    uint64_t r10_2 = zx.q((1 << (*(rdx_5 + 0x9c)).b).d - 1)
                    float* rdx_7 = (zx.q((rdi_1 u>> r9_2).d) & r10_2) * 0xb0 + r11_1
                    float* var_180_1 = rdx_7
                    int64_t var_160_1 = 0
                    int32_t* rdi_5 =
                        ((zx.q(rdi_1.d) & zx.q((1 << r9_2).d - 1)) << 5) + *(rdx_7 + 0x10)
                    float* var_120_1 = nullptr
                    int32_t* var_128_1 = nullptr
                    int32_t r8_5 = r8_4 & 0x3fffffff
                    int64_t r8_6
                    
                    if (r8_5 == 0)
                        r8_6 = 0
                    else
                        r8_6 = *((zx.q(r8_5 - 1) << 5) + *arg1[0xd] + 0x18)
                        var_160_1 = r8_6
                        
                        if (r8_6 != 0)
                            float* rdx_12 = (zx.q((r8_6 u>> r9_2).d) & r10_2) * 0xb0 + r11_1
                            var_120_1 = rdx_12
                            var_128_1 =
                                ((zx.q(r8_6.d) & zx.q((1 << r9_2).d - 1)) << 5) + *(rdx_12 + 0x10)
                        
                        rdx_7 = var_180_1
                    
                    int32_t i = *rdi_5
                    
                    while (i != 0xffffffff)
                        int32_t rcx_20 = *(*(rdx_7 + 8) + 0x20)
                        int64_t* rax_27
                        
                        if (i u>= rcx_20)
                            rax_27 = (sx.q(i - rcx_20) << 4) + *(rdx_7 + 0x80)
                        else
                            rax_27 = (zx.q(i) << 4) + *(rdx_7 + 0x20)
                        
                        float* r15_1 = *rax_27
                        i = rax_27[1].d
                        
                        if (r15_1 == 0 || r15_1 == r8_6)
                            result_2 = result_3
                        else
                            char rcx_21 = *(rax_27 + 0xd)
                            uint32_t rax_32
                            
                            if ((rcx_21 & 0x60) == 0x40)
                                rax_32 = zx.d(rcx_21) u>> 4
                                
                                if (*(arg7 + 0x214) == 0)
                                    rax_32 = not.d(rax_32)
                            
                            if ((rcx_21 & 0x60) == 0x40 && (rax_32 & 1) == 0)
                                result_2 = result_3
                            else
                                void* r8_7 = *arg1
                                char r9_3 = (*(r8_7 + 0xa0)).b
                                float* r14_3 = (((r14_1 << (*(r8_7 + 0x9c)).b) - 1)
                                    & zx.q((r15_1 u>> r9_3).d)) * 0xb0 + *(r8_7 + 0x90)
                                int32_t* rdi_8 = ((zx.q((1 << r9_3).d - 1) & zx.q(r15_1.d)) << 5)
                                    + *(r14_3 + 0x10)
                                
                                if (arg7[0x43].b == 0)
                                    int16_t rax_40 = rdi_8[7].w
                                    
                                    if ((arg7[0x42].w & rax_40) == 0
                                            || (*(arg7 + 0x212) & rax_40) != 0)
                                        goto label_14260b734
                                    
                                    uint64_t rax_42 = zx.q(*(rdi_8 + 0x1f)) & 0x3f
                                    
                                    if (3.40282347e+38f f<= *(arg7 + (rax_42 << 2) + 8) ||
                                            not(3.40282347e+38f f> *(arg7 + (rax_42 << 2) + 0x108)))
                                        goto label_14260b734
                                    
                                    goto label_14260b78c
                                
                                float* var_1c8
                                int32_t* var_1c0
                                float* var_1b8
                                float* var_1b0
                                int32_t* var_1a8
                                float* var_1a0
                                float* var_198
                                int32_t* var_190
                                char rax_44 = (*(*arg7 + 8))(arg7, r15_1, r14_3, rdi_8, var_1c8, 
                                    var_1c0, var_1b8, var_1b0, var_1a8, var_1a0, var_198, var_190, 
                                    result_3, var_180_1, rax_6, rdi_5, var_168_1, var_160_1, arg3, 
                                    rdi_1, var_148_1, var_140_1, rbx_3 + 1, var_130, var_128_1, 
                                    var_120_1, arg8)
                                
                                if (rax_44 == 0)
                                label_14260b734:
                                    rdx_7 = var_180_1
                                    r14_1 = 1
                                    result_2 = result_3
                                else
                                label_14260b78c:
                                    
                                    if (sub_142613610(arg1, r14_3, r15_1.d) == 0)
                                        goto label_14260b734
                                    
                                    void* rax_46 = sub_14260fcd0(arg1[0xd], r15_1)
                                    
                                    if (rax_46 != 0)
                                        if (rax_6 != 0 && *(rax_46 + 0x14) s< 0)
                                            goto label_14260b734
                                        
                                        int64_t var_e8 = 0
                                        float var_e0_1 = 0f
                                        float zmm5_1
                                        
                                        if (zmm12.d f<= 1f || *(rax_46 + 0x14) u< 0x40000000)
                                            var_1b0 = &var_e8
                                            var_1b8 = r14_3
                                            var_1c0 = rdi_8
                                            var_1c8 = r15_1
                                            zmm0_3 = sub_14260f6f0(arg1, rdi_1, rdi_5, var_180_1, 
                                                var_1c8, var_1c0, var_1b8, var_1b0)
                                            zmm5_1 = var_e8:4.d
                                            zmm7 = var_e0_1
                                            zmm6 = var_e8.d
                                        else
                                            zmm6 = *rax_46
                                            var_e8.d = zmm6[0]
                                            zmm5_1 = *(rax_46 + 4)
                                            var_e8:4.d = zmm5_1
                                            zmm7 = *(rax_46 + 8)
                                            var_e0_1 = zmm7[0]
                                        
                                        char rax_47 = arg7[0x43].b
                                        float* r14_4
                                        float zmm3
                                        float zmm4_1
                                        
                                        if (r15_1 == arg3)
                                            if (rax_47 != 0)
                                                int64_t rax_59 = *arg7
                                                __builtin_memset(&var_1a0, 0, 0x18)
                                                var_1a8 = rdi_8
                                                var_1b0 = r14_3
                                                var_1b8 = r15_1
                                                var_1c0 = rdi_5
                                                var_1c8 = var_180_1
                                                (*(rax_59 + 0x10))(arg7, &var_e8, var_130, rdi_1, 
                                                    var_1c8, var_1c0, var_1b8, var_1b0, var_1a8, 
                                                    var_1a0, var_198, var_190, result_3, var_180_1, 
                                                    rax_6, rdi_5, var_168_1, var_160_1, arg3, 
                                                    rdi_1, var_148_1, var_140_1, rbx_3 + 1, 
                                                    var_130, var_128_1, var_120_1, arg8)
                                                zmm8 = zmm0_3
                                                
                                                if (arg7[0x43].b == 0)
                                                    zmm7 = var_e0_1
                                                    zmm5_1 = var_e8:4.d
                                                    zmm6 = var_e8.d
                                                    goto label_14260ba5c
                                                
                                                int64_t rax_66 = *arg7
                                                var_190 = rdi_8
                                                var_198 = r14_3
                                                r14_4 = var_148_1
                                                var_1a0 = r15_1
                                                var_1a8 = rdi_5
                                                var_1b0 = var_180_1
                                                var_1b8 = rdi_1
                                                var_1c0 = var_128_1
                                                var_1c8 = var_120_1
                                                (*(rax_66 + 0x10))(arg7, r14_4, &var_e8, var_160_1, 
                                                    var_1c8, var_1c0, var_1b8, var_1b0, var_1a8, 
                                                    var_1a0, var_198, var_190)
                                                zmm4_1 = zmm0_3[0]
                                            else
                                                zmm1 = *var_130 - zmm6[0]
                                                zmm0_3 = var_130[2]
                                                zmm2 = var_130[1] - zmm5_1
                                                uint32_t rax_57 = zx.d(*(rdi_8 + 0x1f))
                                                zmm0_3[0] = zmm0_3[0] - zmm7[0]
                                                zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
                                                zmm8 = _mm_sqrt_ss(zx.o(0)[0], 
                                                    zmm2 * zmm2 + zmm1 * zmm1 + zmm0_3[0])
                                                zmm8[0] = zmm8[0] f*
                                                    *(arg7 + ((zx.q(rax_57) & 0x3f) << 2) + 8)
                                            label_14260ba5c:
                                                char rcx_38 = *(rdi_5 + 0x1f)
                                                char rdx_24
                                                
                                                if (rdi_8 != 0)
                                                    rdx_24 = *(rdi_8 + 0x1f)
                                                
                                                if (rdi_8 == 0 || ((rcx_38 ^ rdx_24) & 0x3f) == 0)
                                                    zmm0_3 = zx.o(0)
                                                else
                                                    zmm0_3 = *(arg7 + ((zx.q(rdx_24) & 0x3f) << 2)
                                                        + 0x108)
                                                
                                                r14_4 = var_148_1
                                                zmm5_1 = zmm5_1 - r14_4[1]
                                                zmm6[0] = zmm6[0] - *r14_4
                                                zmm7[0] = zmm7[0] - r14_4[2]
                                                zmm6[0] = zmm6[0] * zmm6[0]
                                                zmm7[0] = zmm7[0] * zmm7[0]
                                                zmm4_1 = _mm_sqrt_ss((zx.o(0)).d, 
                                                    zmm5_1 * zmm5_1 + zmm6[0] + zmm7[0]) f*
                                                    *(arg7 + ((zx.q(rcx_38) & 0x3f) << 2) + 8)
                                                    + zmm0_3[0]
                                            
                                            zmm6 = zx.o(0)
                                            zmm3 = zmm4_1 + r14_4[3] + zmm8[0]
                                        else
                                            if (rax_47 != 0)
                                                int64_t rax_54 = *arg7
                                                var_190 = rdi_8
                                                var_198 = r14_3
                                                r14_4 = var_148_1
                                                var_1a0 = r15_1
                                                var_1a8 = rdi_5
                                                var_1b0 = var_180_1
                                                var_1b8 = rdi_1
                                                var_1c0 = var_128_1
                                                var_1c8 = var_120_1
                                                (*(rax_54 + 0x10))(arg7, r14_4, &var_e8, var_160_1, 
                                                    var_1c8, var_1c0, var_1b8, var_1b0, var_1a8, 
                                                    var_1a0, var_198, var_190, result_3, var_180_1, 
                                                    rax_6, rdi_5, var_168_1, var_160_1, arg3, 
                                                    rdi_1, var_148_1, var_140_1, rbx_3 + 1, 
                                                    var_130, var_128_1, var_120_1, arg8)
                                                zmm7 = var_e0_1
                                                zmm4_1 = zmm0_3[0]
                                                zmm5_1 = var_e8:4.d
                                                zmm6 = var_e8.d
                                            else
                                                char rcx_28
                                                
                                                if (rdi_8 == 0)
                                                    rcx_28 = *(rdi_5 + 0x1f)
                                                    zmm3 = (zx.o(0)).d
                                                else
                                                    char rdx_21 = *(rdi_8 + 0x1f)
                                                    rcx_28 = *(rdi_5 + 0x1f)
                                                    
                                                    if (((rcx_28 ^ rdx_21) & 0x3f) == 0)
                                                        zmm3 = (zx.o(0)).d
                                                    else
                                                        zmm3 = *(arg7 + ((zx.q(rdx_21) & 0x3f) << 2)
                                                            + 0x108)
                                                
                                                r14_4 = var_148_1
                                                zmm2 = zmm5_1 - r14_4[1]
                                                zmm1 = zmm6[0] - *r14_4
                                                zmm7[0] = zmm7[0] - r14_4[2]
                                                zmm7[0] = zmm7[0] * zmm7[0]
                                                zmm4_1 = _mm_sqrt_ss((zx.o(0)).d, 
                                                    zmm2 * zmm2 + zmm1 * zmm1 + zmm7[0]) f*
                                                    *(arg7 + ((zx.q(rcx_28) & 0x3f) << 2) + 8) + zmm3
                                            
                                            zmm3 = zmm4_1 + r14_4[3]
                                            zmm1 = *var_130 - zmm6[0]
                                            zmm0_3 = var_130[2]
                                            zmm2 = var_130[1] - zmm5_1
                                            zmm0_3[0] = zmm0_3[0] - zmm7[0]
                                            zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
                                            zmm6 = _mm_sqrt_ss(zx.o(0)[0], 
                                                zmm2 * zmm2 + zmm1 * zmm1 + zmm0_3[0])
                                            zmm6[0] = zmm6[0] f* zmm12.d
                                        
                                        int32_t rdx_26 = *(rax_46 + 0x14)
                                        zmm0_3 = zmm6
                                        zmm0_3[0] = zmm0_3[0] + zmm3
                                        uint8_t rax_68 = (rdx_26 u>> 0x1e).b
                                        
                                        if (((rax_68 & 1) != 0 && zmm0_3[0] f>= *(rax_46 + 0x10))
                                                || ((rax_68 & 2) != 0
                                                && zmm0_3[0] f>= *(rax_46 + 0x10))
                                                || zmm4_1 == 3.40282347e+38f
                                                || zmm0_3[0] f> arg6.d)
                                            goto label_14260b734
                                        
                                        void* rcx_46 = r14_4 - *arg1[0xd]
                                        *(rax_46 + 0xc) = zmm3
                                        *(rax_46 + 0x10) = zmm0_3[0]
                                        *(rax_46 + 0x18) = r15_1
                                        *(rax_46 + 0x14) = (((rcx_46 s>> 5).d + 1) & 0x3fffffff)
                                            | (rdx_26 & 0x40000000)
                                        *rax_46 = var_e8.d[0]
                                        *(rax_46 + 4) = var_e8:4.d
                                        *(rax_46 + 8) = var_e0_1[0]
                                        int32_t rax_70 = *(rax_46 + 0x14)
                                        
                                        if (not(test_bit(rax_70, 0x1e)))
                                            *(rax_46 + 0x14) = rax_70 | 0x40000000
                                            zmm0_3 = sub_142613e10(arg1[0xe], rax_46)
                                            arg1[0xf].d += 1
                                        else
                                            zmm0_3 = sub_142612a00(arg1[0xe], rax_46)
                                        
                                        rdx_7 = var_180_1
                                        r14_1 = 1
                                        result_2 = result_3
                                        
                                        if (not(zmm6[0] >= zmm11[0]))
                                            zmm11 = zmm6
                                            var_140_1 = rax_46
                                    else
                                        r14_1 = zx.q((rax_46 + 1).d)
                                        rdx_7 = var_180_1
                                        result_2 = result_3 | 0x20
                                        result_3 = result_2
                        
                        r8_6 = var_160_1
                    
                    rax_11 = arg1[0xe]
                    rbx_3 += 1
                    
                    if (*(rax_11 + 0xc) == 0)
                        r9_1 = zx.q(var_168_1)
                        break
            
            int32_t result_1 = result_2 | 0x40
            void* rdx_29 = var_140_1
            
            if (*(var_140_1 + 0x18) == arg3)
                result_1 = result_2
            
            void* const rbx_8 = nullptr
            
            while (true)
                int32_t r8_15 = *(rdx_29 + 0x14)
                int32_t rax_73 = r8_15 & 0x3fffffff
                void* rcx_53
                
                if (rax_73 != 0)
                    rcx_53 = (zx.q(rax_73 - 1) << 5) + *arg1[0xd]
                else
                    rcx_53 = nullptr
                
                int32_t rbx_9
                
                if (rbx_8 != 0)
                    rbx_9 = ((rbx_8 - *arg1[0xd]) s>> 5).d + 1
                else
                    rbx_9 = 0
                
                *(rdx_29 + 0x14) = ((rbx_9 ^ r8_15) & 0x3fffffff) ^ r8_15
                rbx_8 = rdx_29
                rdx_29 = rcx_53
                
                if (rcx_53 != 0)
                    r14_1 = zx.q(r14_1.d + 1)
                    
                    if (r14_1.d s< r9_1.d)
                        continue
                else if (r14_1.d s< r9_1.d)
                    sub_142616200(arg8, r14_1.d)
                    sub_142616200(arg8, 0)
                    
                    do
                        int64_t rax_76 = *(rbx_8 + 0x18)
                        int32_t rdx_32 = arg8[1].d + 1
                        zmm6 = *(rbx_8 + 0xc)
                        zmm6[0] = zmm6[0] f- zmm9.d
                        int32_t var_f8_2 = 0
                        sub_142616200(arg8, rdx_32)
                        int64_t rax_77 = *arg8
                        float zmm0_4[0x4] = rax_76.o
                        int64_t rcx_62 = sx.q(arg8[1].d) << 5
                        float temp0_8[0x4] = _mm_shuffle_ps(zmm0_4, zmm0_4, 0xd2)
                        temp0_8[0] = zmm6[0]
                        float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
                        *(rcx_62 + rax_77 - 0x20) = temp0_9
                        int64_t var_110_2
                        var_110_2.o = temp0_9
                        *(rcx_62 + rax_77 - 0x10) = var_100
                        zmm9 = *(rbx_8 + 0xc)
                        int32_t rax_79 = *(rbx_8 + 0x14) & 0x3fffffff
                        
                        if (rax_79 == 0)
                            break
                        
                        int64_t* rax_80 = arg1[0xd]
                        uint64_t rbx_16 = zx.q(rax_79 - 1) << 5
                        rbx_8 = rbx_16 + *rax_80
                        
                        if (rbx_16 == neg.q(*rax_80))
                            break
                        
                        r14_1 = zx.q(r14_1.d - 1)
                    while (r14_1.d s> 0)
                    
                    if (arg9 != 0)
                        *arg9 = *(var_140_1 + 0x10)
                    
                    result = zx.q(result_1)
                    break
                
                result = 0x80000080
                break
        else
            int32_t var_f8_1 = 0
            sub_142616200(arg8, arg8[1].d + 1)
            int64_t rax_5 = *arg8
            float zmm0_1[0x4] = arg2.o
            int64_t rcx_5 = sx.q(arg8[1].d) << 5
            float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
            temp0_1[0] = 0
            *(rcx_5 + rax_5 - 0x20) = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
            *(rcx_5 + rax_5 - 0x10) = var_100
            result = 0x40000000

__security_check_cookie(rax_1 ^ &var_1e8)
return result
