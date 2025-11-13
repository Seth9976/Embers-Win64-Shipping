// 函数: sub_1414718f0
// 地址: 0x1414718f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg4
int32_t rbx = arg1.d
int128_t zmm6
int128_t var_58 = zmm6
int128_t zmm7
int128_t var_68 = zmm7
int128_t zmm8
int128_t var_78 = zmm8
float zmm9[0x4]
float var_88[0x4] = zmm9
int128_t zmm10
int128_t var_98 = zmm10
int128_t zmm11
int128_t var_a8 = zmm11
int128_t zmm12
int128_t var_b8 = zmm12
char var_1d8 = 0
int32_t r14 = 0
void* rax = arg1 + 0x2120
int96_t var_198 = (*(arg1 + 0x6180)).12
int64_t var_178 = (*(rax + 0x4080)).q
void* var_1a8 = rax
int128_t var_188 = *(arg1 + 0x6190)
int64_t var_168 = 0
int32_t var_15c = 0

while (true)
    zmm8 = var_178:4.d
    void* rcx = rax
    zmm7 = var_178.d
    int32_t rbx_1 = rbx & 0xfffffff0
    zmm10 = var_198:8.d
    zmm11 = var_198:4.d
    zmm12 = var_198.d
    int128_t zmm1
    
    do
        uint64_t r12_2 = zx.q(rbx_1) & 7
        uint64_t r13_1 = zx.q(rbx_1)
        void* rax_1 = *(rcx + (r12_2 << 3) + 0x4018)
        
        if (rax_1 != 0 && (*(rax_1 + 0x4058) & 0x7fffffff) u> 0)
            void** rdi_1 = *rsi
            int32_t var_158 = zmm7.d
            uint64_t rcx_2 = zx.q(r13_1.d) & 1
            int32_t var_154_1 = zmm7.d
            int32_t var_150_1 = zmm7.d
            uint64_t rax_4 = zx.q(r13_1.d u>> 1) & 1
            int128_t zmm0
            zmm0.d = zmm7.d f+ zmm7.d
            uint64_t r13_3 = zx.q((r13_1 u>> 2).d) & 1
            zmm0.d = zmm0.d f+ zmm7.d
            zmm1.d = zmm8.d f* *(&data_142e669e0 + (r13_3 << 2))
            float zmm2 = zmm8.d f* *(&data_142e669e0 + (rax_4 << 2)) f+ zmm11.d
            zmm1.d = zmm1.d f+ zmm10.d
            zmm0.d = zmm0.d f* zmm7.d
            float var_1c0 = zmm8.d f* *(&data_142e669e0 + (rcx_2 << 2)) f+ zmm12.d
            _mm_sqrt_ss(zx.o(0)[0], zmm0.d)
            float var_1b8_1 = zmm1.d
            char rax_5
            rax_5, zmm7, zmm8, zmm10, zmm11, zmm12 = sub_141f8d780(*rdi_1, &var_1c0, &var_158)
            
            if (rax_5 != 0)
                int32_t* rax_6 = rdi_1[2]
                zmm1.d = zmm2.d f+ rax_6[1]
                zmm0.d = var_1c0.d f+ *rax_6
                void* rcx_4 = rdi_1[1]
                float var_144_1 = var_1b8_1 f+ rax_6[2]
                int32_t var_148_1 = zmm1.d
                int32_t var_14c = zmm0.d
                char rax_7
                int32_t zmm13_1
                rax_7, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1 =
                    sub_141f8d780(rcx_4, &var_14c, &var_158)
                
                if (rax_7 != 0)
                    int64_t* r15_1 = rsi[1]
                    int64_t* rax_8 = *r15_1
                    int64_t* i = *rax_8
                    
                    for (void* rsi_1 = &i[sx.q(rax_8[1].d)]; i != rsi_1; i = &i[1])
                        int32_t* rdx_3 = *(*i + 8) + 0xc0
                        zmm1 = *r15_1[3]
                        int32_t* rax_12 = r15_1[2]
                        zmm6.d = rdx_3[6].d f+ zmm9[0]
                        zmm2 = zmm1.d f* rax_12[2]
                        zmm0.d = zmm1.d f* rax_12[1]
                        zmm1.d = zmm1.d f* *rax_12
                        zmm0.d = zmm0.d f+ rdx_3[1]
                        zmm1.d = zmm1.d f+ *rdx_3
                        float var_138_1 = zmm2 f+ rdx_3[2]
                        int32_t var_13c_1 = zmm0.d
                        int32_t var_140 = zmm1.d
                        zmm0, zmm6 = sub_140addc20(&var_1c0, rdx_3, &var_140)
                        zmm6.d = zmm6.d f* zmm6.d
                        
                        if (zmm0.d f< zmm6.d)
                            int64_t rdi_2 = sx.q(r14)
                            r14 = (rdi_2 + 1).d
                            
                            if (r14 s> var_15c)
                                sub_141238b30(&var_168, rdi_2.d)
                                zmm8 = var_178:4.d
                                zmm7 = var_178.d
                                zmm10 = var_198:8.d
                                zmm11 = var_198:4.d
                                zmm12 = var_198.d
                            
                            int64_t rcx_8 = rdi_2 << 6
                            int64_t* rcx_9 = rcx_8 + var_168
                            
                            if (rcx_8 == neg.q(var_168))
                                rcx_9 = nullptr
                            else
                                *(rcx_9 + 0x1c) = 0x3f800000
                                rcx_9[2] = 0
                                rcx_9[3].d = 0
                                *(rcx_9 + 0x24) = 0
                                *(rcx_9 + 0x2c) = 0x3f800000
                                *rcx_9 = 0
                            
                            *rcx_9 = *(var_1a8 + (r12_2 << 3) + 0x4018)
                            zmm0.d = zmm8.d f* *(&data_142e669e0 + (rcx_2 << 2))
                            zmm0.d = zmm0.d f+ zmm12.d
                            rcx_9[2].d = zmm0.d
                            zmm1.d = zmm8.d f* *(&data_142e669e0 + (rax_4 << 2))
                            zmm1.d = zmm1.d f+ zmm11.d
                            *(rcx_9 + 0x14) = zmm1.d
                            zmm0.d = zmm8.d f* *(&data_142e669e0 + (r13_3 << 2))
                            *(rcx_9 + 0x1c) = 0
                            zmm1.d = zmm7.d f* zmm13_1
                            *(rcx_9 + 0x2c) = 0
                            zmm0.d = zmm0.d f+ zmm10.d
                            rcx_9[4].d = zmm7.d
                            *(rcx_9 + 0x24) = zmm7.d
                            zmm1.d = zmm1.d f* 1.0625f
                            rcx_9[5].d = zmm7.d
                            rcx_9[3].d = zmm0.d
                            zmm0.d = zmm7.d f- zmm1.d
                            rcx_9[6].d = zmm1.d
                            *(rcx_9 + 0x34) = zmm0.d
                            break
                    
                    rsi = arg4
            
            rcx = rax
        
        if ((rbx_1.b & 7) u>= 7)
            rbx_1 |= 8
        else
            rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    while (((rbx_1 u>> 3).b & 1) == 0)
    
    uint64_t var_1d0
    var_1d0.d = r14
    int32_t i_1 = 0
    uint64_t var_1b0
    var_1b0.d = rbx_1
    char rbx_2 = var_1d8
    
    while (i_1 s>= 0)
        if (i_1 s>= *(rcx + 0x4008))
            break
        
        void* rax_24 = *(rcx + 0x4000)
        void* r8_3 = rcx
        
        if (rax_24 != 0)
            r8_3 = rax_24
        
        int128_t var_128 = *rsi
        
        if (sub_141472a20(arg1, arg2, r8_3 + (sx.q(i_1) << 6), arg3, &var_128) == 0 && rbx_2 == 0)
            rcx = rax
            i_1 += 1
            continue
        
        rcx = rax
        rbx_2 = 1
        i_1 += 1
    
    r14 = var_1d0.d
    var_1d8 = rbx_2
    
    if (r14 == 0)
        zmm1 = data_142d3f660
        var_1a8.o = 0.o
        int128_t var_e8
        var_178 = var_e8.q
        var_198 = zmm1.12
        int128_t var_188_2 = zmm1
    else
        int64_t r9_1 = var_168
        int64_t rax_29 = sx.q(r14 - 1) << 6
        var_1a8.o = *(rax_29 + r9_1)
        var_198 = (*(rax_29 + r9_1 + 0x10)).12
        int128_t var_188_1 = *(rax_29 + r9_1 + 0x20)
        var_178 = (*(rax_29 + r9_1 + 0x30)).q
        
        if (0 != 0)
            memmove((sx.q(r14 - 1) << 6) + r9_1, (sx.q(r14) << 6) + r9_1, 0 << 6)
        
        sub_141238da0(&var_168)
        r14 -= 1
    
    rax = var_1a8
    rbx = var_1b0.d
    
    if (rax == 0)
        break

return zx.q(var_1d8)
