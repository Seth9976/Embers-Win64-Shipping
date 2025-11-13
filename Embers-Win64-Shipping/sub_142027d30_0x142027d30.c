// 函数: sub_142027d30
// 地址: 0x142027d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = data_143dbb200
uint128_t zmm7 = data_143dbb1f8
uint128_t zmm8 = data_143dbb1fc
uint128_t zmm9 = zmm7
uint128_t zmm10 = zmm8
uint128_t zmm11 = zmm6
uint64_t rbp
rbp.b = 0
int32_t i = 0
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if (arg1[1].d s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t* r10_1 = *(rbx_1 + *arg1)
        
        if (r10_1 != 0)
            int32_t rax_2 = *(r10_1 + 0xc)
            void* const rax_6
            
            if (rax_2 s>= data_143e1d9b4)
                rax_6 = nullptr
            else
                uint32_t rdx = zx.d(rax_2.w)
                
                if (rax_2 s< 0)
                    rax_2 += 0xffff
                    rdx -= 0x10000
                
                rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(rdx) * 0x18
            
            if (((*(rax_6 + 8) u>> 0x1d).b & 1) == 0)
                void var_98
                int128_t* rax_10 = (*(*r10_1 + 0x548))(r10_1, &var_98, arg2 ^ 1, 0)
                
                if (rbp.b == 0)
                    if (*(rax_10 + 0x18) != 0)
                        zmm1 = zx.o(rax_10[1].q)
                        zmm2 = *rax_10
                        int32_t rax_11 = *(rax_10 + 0x18)
                        rbp = zx.q(rax_11.b)
                        zmm8 = zmm1.d
                        int96_t var_b8_1 = zmm2.12
                        int32_t var_a0_1 = rax_11
                        zmm11 = var_b8_1:8.d
                        zmm6 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        zmm10 = var_b8_1:4.d
                        zmm9 = var_b8_1.d
                        zmm7 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                else if (*(rax_10 + 0x18) != 0)
                    zmm0 = *rax_10
                    
                    if (not(zmm9.d f<= zmm0.d))
                        zmm9 = zmm0
                    
                    zmm0 = *(rax_10 + 4)
                    
                    if (not(zmm10.d f<= zmm0.d))
                        zmm10 = zmm0
                    
                    zmm0 = *(rax_10 + 8)
                    
                    if (not(zmm11.d f<= zmm0.d))
                        zmm11 = zmm0
                    
                    zmm0 = *(rax_10 + 0xc)
                    
                    if (not(zmm7.d f>= zmm0.d))
                        zmm7 = zmm0
                    
                    zmm0 = rax_10[1].d
                    
                    if (not(zmm8.d f>= zmm0.d))
                        zmm8 = zmm0
                    
                    zmm0 = *(rax_10 + 0x14)
                    
                    if (not(zmm6.d f>= zmm0.d))
                        zmm6 = zmm0
        
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< arg1[1].d)

*arg4 = data_143dbb1f8.q
arg4[1].d = data_143dbb200
*arg3 = *arg4
int32_t result = arg4[1].d
arg3[1].d = result

if (rbp.b != 0)
    zmm0.d = zmm6.d f+ zmm11.d
    zmm2.d = zmm7.d f+ zmm9.d
    zmm7.d = zmm7.d f- zmm9.d
    zmm1.d = zmm8.d f+ zmm10.d
    zmm8.d = zmm8.d f- zmm10.d
    zmm0.d = zmm0.d f* 0.5f
    zmm6.d = zmm6.d f- zmm11.d
    zmm2.d = zmm2.d f* 0.5f
    zmm1.d = zmm1.d f* 0.5f
    zmm7.d = zmm7.d f* 0.5f
    *arg3 = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
    arg3[1].d = zmm0.d
    zmm8.d = zmm8.d f* 0.5f
    zmm6.d = zmm6.d f* 0.5f
    *arg4 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
    result = zmm6.d
    arg4[1].d = result

return result
