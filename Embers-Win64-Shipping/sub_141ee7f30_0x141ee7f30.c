// 函数: sub_141ee7f30
// 地址: 0x141ee7f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = arg4
int32_t rbp = arg4[1].d
uint128_t zmm12 = zx.o(*arg4)
uint8_t r8 = *arg5 u>> 1 & 1
uint64_t var_98 = zmm12.q

if ((*arg5 & 1) == 0)
label_141ee81cb:
    
    if (r8 != 0)
        goto label_141ee81dd
    
    *arg2 = zmm12.q
    arg2[1].d = rbp
else
    uint128_t zmm0
    uint128_t zmm1
    uint128_t zmm2
    
    if (r8 != 0)
    label_141ee81dd:
        zmm0.d = var_98.d.d f* *(arg5 + 0x28)
        uint64_t* rax_5 = &var_98
        zmm2.d = var_98:4.d.d f* *(arg5 + 0x2c)
        zmm1.d = rbp.d f* *(arg5 + 0x30)
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (zmm2.d f<= 0f)
            rax_5 = &data_143dbb1f8
        
        int32_t rax_6 = rax_5[1].d
        *arg2 = *rax_5
        arg2[1].d = rax_6
    else
        if (0.00100000005f f>= *(arg5 + 0x30))
            goto label_141ee81cb
        
        if (arg6 == r8)
        label_141ee7fc0:
            uint128_t zmm3 = *(arg5 + 0x30)
            uint128_t zmm6 = *(arg5 + 0x28)
            int128_t zmm7 = zx.o(0)
            uint128_t zmm8 = *(arg5 + 0x2c)
            uint128_t zmm9 = *rsi
            uint128_t zmm10 = *(rsi + 4)
            zmm2.d = zmm6.d f* zmm9.d
            zmm0.d = zmm10.d f* zmm8.d
            uint128_t zmm11 = *(rsi + 8)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm1.d = zmm11.d f* zmm3.d
            zmm2.d = zmm2.d f+ zmm1.d
            
            if (not(zmm2.d f>= 0f))
                zmm1.d = zmm6.d f* zmm6.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f!= 1f)
                    if (zmm1.d f>= 9.99999994e-09f)
                        float temp0_2[0x4] = _mm_rsqrt_ss(zmm1[0], zmm1.d)
                        zmm3.d = zmm1.d f* 0.5f
                        zmm0.d = temp0_2.d f* temp0_2[0]
                        zmm1.d = zmm3.d f* zmm0.d
                        zmm2.d = 0.5f f- zmm1.d
                        zmm0.d = temp0_2.d f* zmm2.d
                        temp0_2[0] = temp0_2[0] f+ zmm0.d
                        zmm1.d = temp0_2.d f* temp0_2[0]
                        zmm3.d = zmm3.d f* zmm1.d
                        zmm0.d = temp0_2.d f* (0.5f f- zmm3.d)
                        temp0_2[0] = temp0_2[0] f+ zmm0.d
                        zmm6.d = zmm6.d f* temp0_2[0]
                        zmm8.d = zmm8.d f* temp0_2[0]
                        zmm3 = zmm8
                    else
                        zmm6 = data_143dbb1f8
                        zmm3 = data_143dbb1fc
                        zmm7 = data_143dbb200
                else if (zmm3.d f!= 0f)
                    zmm3 = zmm8
                else
                    zmm0 = zx.o(*(arg5 + 0x28))
                    zmm7 = *(arg5 + 0x30)
                    zmm6 = zmm0.d
                    zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                
                zmm2.d = zmm10.d f* zmm3.d
                zmm1.d = zmm11.d f* zmm7.d
                zmm0.d = zmm9.d f* zmm6.d
                zmm2.d = zmm2.d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm1.d
                zmm1.d = zmm2.d f* zmm3.d
                zmm0.d = zmm2.d f* zmm6.d
                zmm10.d = zmm10.d f- zmm1.d
                zmm2.d = zmm2.d f* zmm7.d
                zmm9.d = zmm9.d f- zmm0.d
                zmm11.d = zmm11.d f- zmm2.d
                zmm1.d = zmm9.d
                _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                zmm1.d = zmm10.d
                rbp = zmm11.d
                zmm12 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        else if ((*(*arg1 + 0x8c8))(0x3a83126f, &arg5[0x10], arg5) == 0)
            goto label_141ee7fc0
        
        *arg2 = zmm12.q
        arg2[1].d = rbp

return arg2
