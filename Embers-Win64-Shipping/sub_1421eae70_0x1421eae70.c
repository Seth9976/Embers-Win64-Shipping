// 函数: sub_1421eae70
// 地址: 0x1421eae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1
void* rdi = *(arg2 + 0x90)
int32_t* rbx = *(arg2 + 0xb0)
char r8

if ((*(arg1 + 0x28) & 1) == 0 || rbx == 0)
    r8 = 0
else
    r8 = 1

int32_t i = 0
int64_t rdx = *(arg1 + 0x78)
char arg_10 = r8
int64_t var_140 = rdx
int32_t i_1 = 0
int128_t zmm11
zmm11.d = 2f f/ _mm_cvtepi32_ps(zx.o(*(arg2 + 0x88))).d

if (*(arg1 + 0x5c) s> 0)
    int64_t rcx = 0
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    uint128_t zmm8
    uint128_t var_78_1 = zmm8
    uint128_t zmm9
    uint128_t var_88_1 = zmm9
    int128_t zmm10
    int128_t var_98_1 = zmm10
    int128_t zmm12 = 0x3f800000
    int64_t var_138_1 = 0
    
    do
        int64_t* r14_2 = sx.q(zx.d(*(*(r15 + 0x80) + rcx)) * *(r15 + 0x60)) + rdx
        int32_t* rsi_2 = sx.q(*(r15 + 0x130)) + r14_2
        int32_t* var_148_1 = rsi_2
        int32_t rcx_3 = *rsi_2
        int32_t rax_3 = rcx_3 & 0xf0000000
        
        if ((rax_3 == 0x40000000 || rax_3 == 0x10000000) && (rcx_3 & 0x3fff) != 0x3fff)
            int64_t r9_1 = *(r15 + 0x78)
            void* rdx_1 = r15 + 0x50
            uint32_t rcx_4 = rcx_3 & 0x3fff
            int64_t var_150_1 = r9_1
            int64_t var_120_1 = r9_1
            void* var_128 = rdx_1
            int128_t var_118_1
            __builtin_memset(&var_118_1, 0, 0x20)
            int64_t* var_f8_1 = r14_2
            int32_t* var_f0_1 = rsi_2
            uint128_t var_e8
            int64_t* r12_2
            
            if (rcx_4 == 0x3fff)
                r12_2 = zx.o(0).q
            else
                r12_2 = sx.q(*(rdx_1 + 0x10) * rcx_4) + r9_1
                var_e8.q = r12_2
                var_e8:8.q = sx.q(*(rdx_1 + 0xe0)) + r12_2
            
            rcx_4.b = 0
            int32_t* var_188_1
            __builtin_memset(&var_188_1, 0, 0x18)
            int32_t rax_10 = 0
            int32_t arg_20 = 0
            char arg_18 = 0
            uint64_t r13_1 = 0
            uint64_t var_178_1
            
            if (r8 != 0)
                rax_10 = 0x10
                arg_20 = 0x10
                r13_1 = 0x10
                var_178_1 = 0x10
                
                if (*(r15 + 0xe4) s> 0)
                    rcx_4.b = 1
                    var_178_1 = 0x10
                    arg_18 = 1
            
            if (r14_2 != 0)
                while (true)
                    int32_t rsi_3 = rsi_2[7]
                    int64_t* var_180_1
                    int128_t var_108_1
                    float var_1a8
                    int32_t var_1a4
                    uint128_t var_198
                    int64_t var_170
                    int32_t var_168
                    uint64_t var_160
                    int32_t var_158
                    uint128_t var_d8
                    uint64_t var_c8[0x2]
                    float zmm1[0x4]
                    
                    if (rsi_3 s<= 1 || r14_2 == 0 || var_108_1.q == 0)
                        uint128_t* rax_15 = &var_198
                        var_198 = data_142d3f670
                        
                        if (rcx_4.b == 0)
                            rax_15 = nullptr
                        
                        int32_t zmm11_2
                        zmm6, zmm11_2, zmm12 = sub_1421db0a0(&var_128, zx.o(0), &var_c8, &var_170, 
                            &var_160, &var_1a8, &var_1a4, &var_d8, rax_15)
                        
                        if ((*(r15 + 0x3c) & 0x20) == 0)
                            zmm1 = zmm6
                        else
                            zmm1 = var_1a8
                        
                        zmm7 = var_1a4
                        zmm8 = var_d8
                        r8 = arg_10
                        int32_t zmm2_2 = var_198:0xc.d
                        int32_t zmm3_2 = var_198:8.d
                        int32_t zmm4_2 = var_198:4.d
                        int32_t zmm5_2 = var_198.d
                        *rdi = var_170
                        *(rdi + 8) = var_168
                        *(rdi + 0x10) = *r14_2
                        int32_t rax_17 = r14_2[1].d
                        *(rdi + 0x20) = zmm7.d
                        *(rdi + 0x24) = zmm7.d
                        *(rdi + 0x40) = zmm6[0]
                        *(rdi + 0x48) = zmm1[0]
                        *(rdi + 0x18) = rax_17
                        *(rdi + 0x1c) = 0
                        *(rdi + 0x44) = 0
                        *(rdi + 0x4c) = 0
                        *(rdi + 0x28) = *(r14_2 + 0x2c)
                        *(rdi + 0x30) = zmm8
                        uint64_t rcx_7
                        
                        if (r8 == 0)
                            rcx_7 = zx.q(arg_20)
                        else
                            *rbx = zmm5_2
                            rcx_7 = r13_1
                            rbx[1] = zmm4_2
                            rbx[2] = zmm3_2
                            rbx[3] = zmm2_2
                            rbx += r13_1
                        
                        *(rdi + 0x50) = var_160
                        *(rdi + 0x58) = var_158
                        *(rdi + 0x60) = *r14_2
                        int32_t rax_20 = r14_2[1].d
                        *(rdi + 0x70) = zmm7.d
                        *(rdi + 0x74) = zmm7.d
                        *(rdi + 0x90) = zmm6[0]
                        *(rdi + 0x98) = zmm1[0]
                        *(rdi + 0x68) = rax_20
                        *(rdi + 0x6c) = 0
                        *(rdi + 0x94) = 0x3f800000
                        *(rdi + 0x9c) = 0x3f800000
                        *(rdi + 0x78) = *(r14_2 + 0x2c)
                        *(rdi + 0x80) = zmm8
                        
                        if (r8 != 0)
                            *rbx = zmm5_2
                            rbx[1] = zmm4_2
                            rbx[2] = zmm3_2
                            rbx[3] = zmm2_2
                            rbx += rcx_7
                        
                        rdi += 0xa0
                        zmm6[0] = zmm6[0] f+ zmm11_2
                        rdx_1 = r15 + 0x50
                        r9_1 = var_150_1
                    else
                        int32_t rsi_4 = rsi_3 - 1
                        zmm10.d = zmm12.d f/ _mm_cvtepi32_ps(zx.o(rsi_3)).d
                        var_198 = data_142d3f670
                        
                        if (rsi_3 - 1 s>= 0)
                            int32_t* r13_2 = &var_198
                            uint64_t r15_1 = zx.q(rax_10)
                            
                            if (rcx_4.b == 0)
                                r13_2 = nullptr
                            
                            int32_t temp1_1
                            
                            do
                                float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(rsi_4))
                                temp0_3[0] = temp0_3[0] f* zmm10.d
                                int32_t zmm11_1
                                zmm6, zmm10, zmm11_1, zmm12 = sub_1421db0a0(&var_128, temp0_3, 
                                    &var_c8, &var_170, &var_160, &var_1a8, &var_1a4, &var_d8, r13_2)
                                float zmm2_1
                                
                                if ((*(arg1 + 0x3c) & 0x20) == 0)
                                    zmm2_1 = zmm6[0]
                                else
                                    zmm2_1 = var_1a8
                                
                                zmm1 = zx.o(var_170)
                                zmm8 = var_1a4
                                zmm9 = var_d8
                                r8 = arg_10
                                int32_t zmm3_1 = var_198:0xc.d
                                int32_t zmm4_1 = var_198:8.d
                                int32_t zmm5_1 = var_198:4.d
                                zmm7 = var_198.d
                                *rdi = zmm1.q
                                *(rdi + 0x10) = zmm1.q
                                *(rdi + 8) = var_168
                                *(rdi + 0x18) = var_168
                                *(rdi + 0x20) = zmm8.d
                                *(rdi + 0x24) = zmm8.d
                                *(rdi + 0x40) = zmm6[0]
                                *(rdi + 0x48) = zmm2_1
                                *(rdi + 0x1c) = 0
                                *(rdi + 0x44) = 0
                                *(rdi + 0x4c) = 0
                                *(rdi + 0x28) = *(r14_2 + 0x2c)
                                *(rdi + 0x30) = zmm9
                                
                                if (r8 != 0)
                                    *rbx = zmm7.d
                                    rbx[1] = zmm5_1
                                    rbx[2] = zmm4_1
                                    rbx[3] = zmm3_1
                                    rbx += r15_1
                                
                                zmm1 = zx.o(var_160)
                                *(rdi + 0x50) = zmm1.q
                                *(rdi + 0x60) = zmm1.q
                                *(rdi + 0x58) = var_158
                                *(rdi + 0x68) = var_158
                                *(rdi + 0x70) = zmm8.d
                                *(rdi + 0x74) = zmm8.d
                                *(rdi + 0x90) = zmm6[0]
                                *(rdi + 0x98) = zmm2_1
                                *(rdi + 0x6c) = 0
                                *(rdi + 0x94) = 0x3f800000
                                *(rdi + 0x9c) = 0x3f800000
                                *(rdi + 0x78) = *(r14_2 + 0x2c)
                                *(rdi + 0x80) = zmm9
                                
                                if (r8 != 0)
                                    *rbx = zmm7.d
                                    rbx[1] = zmm5_1
                                    rbx[2] = zmm4_1
                                    rbx[3] = zmm3_1
                                    rbx += r15_1
                                
                                rdi += 0xa0
                                zmm6[0] = zmm6[0] f+ zmm11_1
                                temp1_1 = rsi_4
                                rsi_4 -= 1
                            while (temp1_1 - 1 s>= 0)
                            r12_2 = var_180_1
                            r15 = arg1
                            rdx_1 = var_128
                            r9_1 = var_150_1
                    int64_t rsi_5 = var_108_1.q
                    var_118_1:8.q = var_108_1:8.q
                    var_108_1:8.q = var_148_1
                    int32_t* rax_24 = var_188_1
                    var_118_1.q = rsi_5
                    rsi_2 = rax_24
                    var_108_1.q = r14_2
                    r14_2 = r12_2
                    var_148_1 = rax_24
                    int32_t* var_f0_2 = rax_24
                    int64_t* var_f8_2 = r12_2
                    
                    if (r12_2 == 0)
                        break
                    
                    r13_1 = var_178_1
                    int32_t rcx_9 = *rax_24 & 0x3fff
                    
                    if (rcx_9 == 0x3fff)
                        rcx_4 = zx.d(arg_18)
                        uint128_t zmm0 = zx.o(0)
                        r12_2 = zmm0.q
                        var_188_1 = zmm0:8.q
                        rax_10 = arg_20
                        var_180_1 = r12_2
                    else
                        rcx_4 = zx.d(arg_18)
                        r12_2 = sx.q(*(rdx_1 + 0x10) * rcx_9) + r9_1
                        int32_t* rax_28 = sx.q(*(rdx_1 + 0xe0)) + r12_2
                        var_180_1 = r12_2
                        var_188_1 = rax_28
                        var_e8:8.q = rax_28
                        rax_10 = arg_20
                        var_e8.q = r12_2
                
                i = i_1
            
            rdx = var_140
        
        i += 1
        rcx = var_138_1 + 2
        i_1 = i
        var_138_1 = rcx
    while (i s< *(r15 + 0x5c))

return 0
