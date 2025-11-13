// 函数: sub_141ab4480
// 地址: 0x141ab4480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = *arg3
uint128_t zmm3 = data_143dbb1fc
uint128_t zmm4 = data_143dbb1f8
uint128_t zmm8 = *(arg3 + 4)
uint128_t zmm9 = *(arg3 + 8)
uint128_t zmm10 = 0x3f800000
uint128_t zmm11
zmm11.d = (*arg4).d f- zmm5.d
uint128_t zmm12
zmm12.d = (*(arg4 + 4)).d f- zmm8.d
uint128_t zmm13
zmm13.d = (*(arg4 + 8)).d f- zmm9.d
uint128_t zmm0
zmm0.d = zmm11.d f* zmm11.d
uint128_t zmm15 = data_143dbb200
uint128_t zmm2
zmm2.d = zmm12.d f* zmm12.d
zmm2.d = zmm2.d f+ zmm0.d
int32_t arg_10 = zmm5.d
int32_t arg_18 = zmm8.d
int32_t arg_20 = zmm9.d
zmm2.d = zmm2.d f+ zmm13.d f* zmm13.d

if (not(zmm2.d f== 1f))
    if (zmm2.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
        zmm3.d = zmm2.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm2.d = 0.5f - zmm3.d f* zmm0.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
        zmm4.d = 0.5f f- zmm3.d
        zmm3 = data_143dbb1fc
        zmm0.d = zmm5.d f* zmm4.d
        zmm4 = data_143dbb1f8
        zmm5.d = zmm5.d f+ zmm0.d
        zmm11.d = zmm11.d f* zmm5.d
        zmm12.d = zmm12.d f* zmm5.d
        zmm13.d = zmm13.d f* zmm5.d
        zmm5 = arg_10
    else
        zmm11 = zmm4
        zmm12 = zmm3
        zmm13 = zmm15

int32_t rax = *(arg2 + 8)
uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm7
uint128_t var_28 = zmm7

if (rax - 2 s< 0)
label_141ab4785:
    int32_t rax_4 = data_14399f680
    *arg1 = data_14399f678
    arg1[1].d = rax_4
else
    int64_t rcx = sx.q(rax - 2)
    int128_t* rax_3 = rcx * 0x3c + *arg2
    
    while (true)
        zmm7.d = (*rax_3).d f- zmm5.d
        zmm6.d = (*(rax_3 + 4)).d f- zmm8.d
        zmm8.d = (*(rax_3 + 8)).d f- zmm9.d
        zmm0.d = zmm7.d f* zmm7.d
        zmm2.d = zmm6.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
        
        if (not(zmm2.d f== zmm10.d))
            if (zmm2.d f>= 9.99999994e-09f)
                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                zmm3.d = zmm2.d f* 0.5f
                zmm0.d = zmm5.d f* zmm5.d
                zmm2.d = 0.5f - zmm3.d f* zmm0.d
                zmm0.d = zmm5.d f* zmm2.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
                zmm4.d = 0.5f f- zmm3.d
                zmm0.d = zmm5.d f* zmm4.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm7.d = zmm7.d f* zmm5.d
                zmm6.d = zmm6.d f* zmm5.d
                zmm8.d = zmm8.d f* zmm5.d
                zmm5 = arg_10
            else
                zmm7 = zmm4
                zmm6 = zmm3
                zmm8 = zmm15
        
        zmm0.d = zmm6.d f* zmm13.d
        zmm9.d = zmm8.d f* zmm12.d
        zmm10.d = zmm7.d f* zmm13.d
        zmm9.d = zmm9.d f- zmm0.d
        zmm6.d = zmm6.d f* zmm11.d
        zmm8.d = zmm8.d f* zmm11.d
        zmm7.d = zmm7.d f* zmm12.d
        zmm10.d = zmm10.d f- zmm8.d
        zmm0.d = zmm9.d f* zmm9.d
        zmm6.d = zmm6.d f- zmm7.d
        zmm2.d = zmm10.d f* zmm10.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm6.d f* zmm6.d
        
        if (zmm2.d f> 9.99999994e-09f)
            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            zmm3.d = zmm2.d f* 0.5f
            zmm0.d = zmm5.d f* zmm5.d
            zmm2.d = 0.5f - zmm3.d f* zmm0.d
            zmm0.d = zmm5.d f* zmm2.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
            zmm4.d = 0.5f f- zmm3.d
            zmm0.d = zmm5.d f* zmm4.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm9.d = zmm9.d f* zmm5.d
            zmm10.d = zmm10.d f* zmm5.d
            zmm6.d = zmm6.d f* zmm5.d
            *arg1 = zmm9.d
            *(arg1 + 4) = zmm10.d
            arg1[1].d = zmm6.d
            break
        
        zmm3 = data_143dbb1fc
        rax_3 -= 0x3c
        int64_t temp1_1 = rcx
        rcx -= 1
        zmm4 = data_143dbb1f8
        zmm8 = arg_18
        zmm9 = arg_20
        zmm10 = 0x3f800000
        
        if (temp1_1 - 1 s< 0)
            goto label_141ab4785

return arg1
