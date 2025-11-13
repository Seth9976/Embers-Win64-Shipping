// 函数: sub_141470d20
// 地址: 0x141470d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg4
int32_t rbx = arg1.d
float zmm6[0x4]
float var_58[0x4] = zmm6
int128_t zmm7
int128_t var_68 = zmm7
int128_t zmm8
int128_t var_78 = zmm8
int128_t zmm9
int128_t var_88 = zmm9
int128_t zmm10
int128_t var_98 = zmm10
int128_t zmm11
int128_t var_a8 = zmm11
int128_t zmm12
int128_t var_b8 = zmm12
float zmm14[0x4]
float var_d8[0x4] = zmm14
char var_248 = 0
void* rax = arg1 + 0x2120
int96_t var_1e8 = (*(arg1 + 0x6180))[0].12
int32_t r14 = 0
int64_t var_1c8 = (*(rax + 0x4080))[0].q
int128_t zmm15 = zx.o(0)
void* var_1f8 = rax
float var_1d8[0x4] = *(arg1 + 0x6190)
int64_t var_1b8 = 0
int32_t var_1ac = 0

while (true)
    zmm14 = var_1c8.d
    void* rcx = rax
    int32_t rbx_1 = rbx & 0xfffffff0
    uint64_t var_178
    float zmm1[0x4]
    
    do
        uint64_t r12_2 = zx.q(rbx_1) & 7
        uint64_t rsi_1 = zx.q(rbx_1)
        void* rax_1 = *(rcx + (r12_2 << 3) + 0x4018)
        
        if (rax_1 != 0 && (*(rax_1 + 0x4058) & 0x7fffffff) u> 0)
            zmm6 = var_1c8:4.d
            void** rdi_1 = *r15
            float var_230 = zmm14[0]
            uint64_t rax_3 = zx.q(rsi_1.d) & 1
            float var_22c_1 = zmm14[0]
            float var_228_1 = zmm14[0]
            zmm6[0] = zmm6[0] f* *(&data_142e669e0 + (rax_3 << 2))
            uint64_t r13_3 = zx.q(rsi_1.d u>> 1) & 1
            uint64_t rsi_3 = zx.q((rsi_1 u>> 2).d) & 1
            var_178 = rax_3
            zmm6[0] = zmm6[0] f* *(&data_142e669e0 + (r13_3 << 2))
            zmm6[0] = zmm6[0] f* *(&data_142e669e0 + (rsi_3 << 2))
            zmm6[0] = zmm6[0] f+ var_1e8:4.d
            zmm6[0] = zmm6[0] f+ var_1e8.d
            zmm6[0] = zmm6[0] f+ var_1e8:8.d
            float var_238_1 = zmm6[0]
            float var_23c = zmm6[0]
            float var_234_1 = zmm6[0]
            
            if (sub_141f8d780(*rdi_1, &var_23c, &var_230) != 0)
                int32_t* rax_5 = rdi_1[2]
                float zmm2[0x4] = var_234_1
                zmm1 = var_238_1
                float zmm0[0x4] = var_23c
                zmm2[0] = zmm2[0] f+ rax_5[2]
                zmm1[0] = zmm1[0] f+ rax_5[1]
                zmm0[0] = zmm0[0] f+ *rax_5
                void* rcx_2 = rdi_1[1]
                float var_1a0_1 = zmm2[0]
                float var_1a4_1 = zmm1[0]
                float var_1a8 = zmm0[0]
                char rax_6
                float zmm13_1[0x4]
                rax_6, zmm13_1 = sub_141f8d780(rcx_2, &var_1a8, &var_230)
                
                if (rax_6 != 0)
                    int64_t* rdx_2 = r15[1]
                    int64_t* rax_7 = *rdx_2
                    int64_t* rdi_2 = *rax_7
                    void* r15_1 = &rdi_2[sx.q(rax_7[1].d)]
                    
                    if (rdi_2 != r15_1)
                        int32_t* rcx_3 = rdx_2[2]
                        float zmm3_1[0x4] = var_23c
                        zmm0 = *rdx_2[3]
                        zmm3_1[0] = zmm3_1[0] + var_230
                        int64_t zmm4_1
                        zmm4_1.d = var_238_1.d f+ var_22c_1
                        int64_t zmm5_1
                        zmm5_1.d = var_234_1.d f+ var_228_1
                        zmm1 = zmm0
                        zmm2 = zmm0
                        zmm1[0] = zmm1[0] f* *rcx_3
                        zmm2[0] = zmm2[0] f* rcx_3[1]
                        zmm0[0] = zmm0[0] f* rcx_3[2]
                        float var_20c_1 = zmm1[0]
                        float var_208_1 = zmm2[0]
                        float var_244_1 = zmm0[0]
                        float var_204_1 = zmm3_1[0]
                        int32_t var_200_1 = zmm4_1.d
                        int32_t var_240_1 = zmm5_1.d
                        
                        do
                            zmm6 = zmm3_1
                            zmm3_1 = var_22c_1
                            char var_150_1 = 1
                            int128_t* rdx_4 = *(*rdi_2 + 8) + 0xc0
                            zmm9 = *rdx_4
                            zmm8 = *(rdx_4 + 8)
                            zmm7 = *(rdx_4 + 4)
                            zmm12.d = zmm9.d f+ zmm1[0]
                            zmm1 = *(rdx_4 + 0x18)
                            zmm11.d = zmm8.d f+ zmm0[0]
                            zmm0 = var_240_1
                            zmm6[0] = zmm6[0] + zmm1[0]
                            zmm0[0] = zmm0[0] + zmm1[0]
                            zmm5_1.d = zmm4_1.d f+ zmm1[0]
                            float var_188 = zmm12.d
                            zmm3_1[0] = zmm3_1[0] + zmm1[0]
                            zmm4_1.d = var_228_1.d f+ zmm1[0]
                            int32_t var_180_1 = zmm11.d
                            zmm10.d = zmm7.d f+ zmm2[0]
                            zmm2 = var_238_1
                            float var_134_1 = zmm0[0]
                            zmm12.d = zmm12.d f- zmm9.d
                            zmm0 = var_230
                            zmm11.d = zmm11.d f- zmm8.d
                            zmm0[0] = zmm0[0] + zmm1[0]
                            zmm1 = var_23c
                            zmm2[0] = zmm2[0] - zmm3_1[0]
                            int32_t var_184_1 = zmm10.d
                            zmm10.d = zmm10.d f- zmm7.d
                            zmm1[0] = zmm1[0] - zmm0[0]
                            int32_t var_198 = zmm12.d
                            zmm0 = var_234_1
                            zmm0[0] = zmm0[0] f- zmm4_1.d
                            int32_t var_194_1 = zmm10.d
                            int32_t var_190_1 = zmm11.d
                            int64_t var_168 = (_mm_unpacklo_ps(zmm1, zmm2[0].q)).q
                            float var_160_1 = zmm0[0]
                            int64_t var_15c_1 = (_mm_unpacklo_ps(zmm6, zmm5_1)).q
                            float var_154_1 = var_134_1
                            float var_218
                            
                            if (zmm12.d f== zmm15.d)
                                var_218 = 3.39999995e+38f
                            else
                                zmm13_1[0] = zmm13_1[0] f/ zmm12.d
                                var_218 = zmm13_1[0]
                            
                            if (zmm10.d f== zmm15.d)
                                int32_t var_214_2 = 0x7f7fc99e
                            else
                                zmm13_1[0] = zmm13_1[0] f/ zmm10.d
                                float var_214_1 = zmm13_1[0]
                            
                            if (zmm11.d f== zmm15.d)
                                int32_t var_210_2 = 0x7f7fc99e
                            else
                                zmm13_1[0] = zmm13_1[0] f/ zmm11.d
                                float var_210_1 = zmm13_1[0]
                            
                            if (sub_1409cb460(&var_168, rdx_4, &var_188, &var_198, &var_218) != 0)
                                int64_t rdi_3 = sx.q(r14)
                                r14 = (rdi_3 + 1).d
                                
                                if (r14 s> var_1ac)
                                    sub_141238b30(&var_1b8, rdi_3.d)
                                    zmm14 = var_1c8.d
                                
                                int64_t rcx_7 = rdi_3 << 6
                                int64_t* rcx_8 = rcx_7 + var_1b8
                                
                                if (rcx_7 == neg.q(var_1b8))
                                    rcx_8 = nullptr
                                else
                                    *(rcx_8 + 0x1c) = 0x3f800000
                                    rcx_8[2] = 0
                                    rcx_8[3].d = 0
                                    *(rcx_8 + 0x24) = 0
                                    *(rcx_8 + 0x2c) = 0x3f800000
                                    *rcx_8 = 0
                                
                                zmm2 = var_1c8:4.d
                                *rcx_8 = *(var_1f8 + (r12_2 << 3) + 0x4018)
                                zmm2[0] = zmm2[0] f* *(&data_142e669e0 + (var_178 << 2))
                                zmm2[0] = zmm2[0] f+ var_1e8.d
                                rcx_8[2].d = zmm2[0]
                                zmm2[0] = zmm2[0] f* *(&data_142e669e0 + (r13_3 << 2))
                                zmm2[0] = zmm2[0] f+ var_1e8:4.d
                                *(rcx_8 + 0x14) = zmm2[0]
                                zmm2[0] = zmm2[0] f* *(&data_142e669e0 + (rsi_3 << 2))
                                *(rcx_8 + 0x1c) = 0
                                zmm14[0] = zmm14[0] * 0.5f
                                *(rcx_8 + 0x2c) = 0
                                zmm2[0] = zmm2[0] f+ var_1e8:8.d
                                rcx_8[4].d = zmm14[0]
                                zmm14[0] = zmm14[0] * 1.0625f
                                *(rcx_8 + 0x24) = zmm14[0]
                                rcx_8[3].d = zmm2[0]
                                zmm14[0] = zmm14[0] - zmm14[0]
                                rcx_8[5].d = zmm14[0]
                                rcx_8[6].d = zmm14[0]
                                *(rcx_8 + 0x34) = zmm14[0]
                                break
                            
                            zmm0 = var_244_1
                            rdi_2 = &rdi_2[1]
                            zmm1 = var_20c_1
                            zmm2 = var_208_1
                            zmm3_1 = var_204_1
                            zmm4_1 = var_200_1
                        while (rdi_2 != r15_1)
                    
                    r15 = arg4
            
            rcx = rax
        
        if ((rbx_1.b & 7) u>= 7)
            rbx_1 |= 8
        else
            rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    while (((rbx_1 u>> 3).b & 1) == 0)
    
    int32_t i = 0
    char rbx_2 = var_248
    
    while (i s>= 0)
        if (i s>= *(rcx + 0x4008))
            break
        
        void* rax_24 = *(rcx + 0x4000)
        void* r8_3 = rcx
        
        if (rax_24 != 0)
            r8_3 = rax_24
        
        var_178.o = *r15
        char rax_27
        rax_27, zmm15 = sub_141472460(arg1, arg2, r8_3 + (sx.q(i) << 6), arg3, &var_178)
        
        if (rax_27 == 0 && rbx_2 == 0)
            rcx = rax
            i += 1
            continue
        
        rcx = rax
        rbx_2 = 1
        i += 1
    
    var_248 = rbx_2
    
    if (r14 == 0)
        zmm1 = data_142d3f660
        var_1f8.o = 0.o
        float var_f8[0x4]
        var_1c8 = var_f8[0].q
        var_1e8 = zmm1[0].12
        float var_1d8_2[0x4] = zmm1
    else
        int64_t r9_2 = var_1b8
        int64_t rax_29 = sx.q(r14 - 1) << 6
        var_1f8.o = *(rax_29 + r9_2)
        var_1e8 = (*(rax_29 + r9_2 + 0x10))[0].12
        float var_1d8_1[0x4] = *(rax_29 + r9_2 + 0x20)
        var_1c8 = (*(rax_29 + r9_2 + 0x30))[0].q
        
        if (0 != 0)
            memmove((sx.q(r14 - 1) << 6) + r9_2, (sx.q(r14) << 6) + r9_2, 0 << 6)
        
        sub_141238da0(&var_1b8)
        r14 -= 1
    
    rax = var_1f8
    rbx = rbx_1
    
    if (rax == 0)
        break

return zx.q(var_248)
