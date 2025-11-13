// 函数: sub_1406cdec0
// 地址: 0x1406cdec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
uint128_t zmm10
uint128_t var_88 = zmm10
int128_t zmm11
int128_t var_98 = zmm11
int128_t zmm12
int128_t var_a8 = zmm12
uint128_t zmm13
uint128_t var_b8 = zmm13
uint128_t zmm14
uint128_t var_c8 = zmm14
uint128_t zmm15
uint128_t var_d8 = zmm15
int32_t rbx = arg2.d
int32_t arg_18 = 0
void* result = sub_1423bea40(rbx, (arg2 u>> 0x20).d, 0x25, 0)
int64_t rax = sub_140bcb6b0(**(*(result + 0xd0) + 0x18) + 0x10, 2)
int32_t i = 0
void* rdx_2 = *(result + 0xd0)
int32_t* rsi = **(rdx_2 + 0x18)

if (rsi[1] s> 0)
    do
        int32_t j = 0
        
        if (***(rdx_2 + 0x18) s> 0)
            zmm14.d = _mm_cvtepi32_ps(zx.o(i)).d f/ _mm_cvtepi32_ps(zx.o(arg2:4.d)).d
            zmm15 = _mm_cvtepi32_ps(zx.o(rbx))
            
            do
                int32_t rax_2 = data_14399f634
                int24_t arg_20 = rax_2.3
                zmm13.d = _mm_cvtepi32_ps(zx.o(j)).d f/ zmm15.d
                int64_t* r9_1 = *arg1
                void* r8_1 = r9_1 + sx.q(arg1[1].d) * 0xc
                
                if (r9_1 != r8_1)
                    int64_t* r10_1 = r9_1
                    arg_18:3.b = 0xff
                    
                    do
                        uint64_t var_f8_1 = *r9_1
                        int24_t rcx_7 = (r9_1[1].d).3
                        float zmm9_1 = 1f
                        int64_t* rdx_4 = r10_1
                        zmm10 = var_f8_1:4.d
                        zmm11 = var_f8_1.d
                        uint128_t zmm1_1
                        
                        do
                            uint128_t zmm0_1 = zx.o(*rdx_4)
                            uint128_t zmm5_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                            uint128_t zmm8_1 = zmm0_1.d
                            
                            if (zmm11.d f!= zmm8_1.d || not(zmm10.d f== zmm5_1.d))
                                uint128_t zmm6_1
                                zmm6_1.d = zmm5_1.d f- zmm10.d
                                uint128_t zmm7_1
                                zmm7_1.d = zmm8_1.d f- zmm11.d
                                zmm1_1.d = zmm6_1.d f* zmm6_1.d
                                zmm0_1.d = zmm7_1.d f* zmm7_1.d
                                zmm1_1.d = zmm1_1.d f+ zmm0_1.d
                                float zmm2_1 = ((zmm13.d f- zmm11.d) f* zmm7_1.d
                                    + (zmm14.d f- zmm10.d) f* zmm6_1.d) f/ zmm1_1.d
                                zmm0_1.d = zmm6_1.d f* zmm2_1
                                zmm1_1.d = zmm10.d f+ zmm0_1.d
                                float zmm3_1 = zmm7_1.d * zmm2_1 f+ zmm11.d
                                zmm5_1.d = zmm5_1.d f- zmm1_1.d
                                zmm0_1.d = zmm6_1.d f* zmm5_1.d
                                zmm8_1.d = zmm8_1.d f- zmm3_1
                                zmm8_1.d = zmm8_1.d f* zmm7_1.d
                                
                                if (zmm8_1.d f< 0f || zmm0_1.d f< 0f)
                                    zmm5_1 = zx.o(0)
                                else
                                    zmm5_1 = 0x3f800000
                                
                                zmm1_1.d = zmm1_1.d f- zmm10.d
                                zmm0_1.d = zmm6_1.d f- zmm1_1.d
                                zmm1_1.d = zmm7_1.d f- (zmm3_1 f- zmm11.d)
                                
                                if (zmm7_1.d f!= 0f)
                                    zmm1_1.d = zmm1_1.d f/ zmm7_1.d
                                else
                                    zmm1_1 = zx.o(0)
                                
                                if (zmm6_1.d f!= 0f)
                                    zmm0_1.d = zmm0_1.d f/ zmm6_1.d
                                else
                                    zmm0_1 = zx.o(0)
                                
                                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                                zmm1_1.d = zmm1_1.d f* zmm1_1.d
                                zmm0_1.d = zmm0_1.d f+ zmm1_1.d
                                zmm2_1 = _mm_sqrt_ss(0, zmm0_1.d) f* zmm5_1.d
                                
                                if (zmm2_1 >= 0f)
                                    zmm2_1 = _mm_min_ss(zmm2_1, 0x3f800000)
                                else
                                    zmm2_1 = (zx.o(0)).d
                                
                                zmm9_1 = zmm9_1 * zmm2_1
                            
                            rdx_4 += 0xc
                        while (rdx_4 != r8_1)
                        
                        zmm1_1.d = _mm_cvtepi32_ps(zx.o(rcx_7.b)).d f* zmm9_1
                        zmm1_1.d = zmm1_1.d f+ _mm_cvtepi32_ps(zx.o(rax_2.b)).d
                        char rdx_5 = (int.d(zmm1_1.d)).b
                        zmm1_1.d = _mm_cvtepi32_ps(zx.o(rcx_7:1.b)).d f* zmm9_1
                        zmm1_1.d = zmm1_1.d f+ _mm_cvtepi32_ps(zx.o(arg_20:1.b)).d
                        char rcx_10 = (int.d(zmm1_1.d)).b
                        zmm1_1.d = _mm_cvtepi32_ps(zx.o(rcx_7:2.b)).d f* zmm9_1
                        zmm1_1.d = zmm1_1.d f+ _mm_cvtepi32_ps(zx.o(arg_20:2.b)).d
                        arg_18.b = rdx_5
                        arg_18:1.b = rcx_10
                        arg_18:2.b = (int.d(zmm1_1.d)).b
                        rax_2 = arg_18
                        arg_20 = rax_2.3
                        r9_1 += 0xc
                    while (r9_1 != r8_1)
                
                int64_t rdx_6 = sx.q((i * *rsi + j) << 2)
                *(rdx_6 + rax) = (rax_2 u>> 0x10).b
                *(rdx_6 + rax + 1) = (rax_2 u>> 8).b
                *(rdx_6 + rax + 2) = rax_2.b
                *(rdx_6 + rax + 3) = (rax_2 u>> 0x18).b
                j += 1
                rdx_2 = *(result + 0xd0)
                rsi = **(rdx_2 + 0x18)
            while (j s< *rsi)
        
        i += 1
    while (i s< *(**(rdx_2 + 0x18) + 4))

sub_140bd1d40(**(rdx_2 + 0x18) + 0x10)
(*(*result + 0x2f8))(result)
int64_t rcx_23 = *arg1

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

return result
