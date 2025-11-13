// 函数: sub_141f3ebb0
// 地址: 0x141f3ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = arg2[1]
int32_t var_110 = arg2[3].d
uint128_t var_d8 = *arg2
int64_t rax_1 = *arg1
int128_t var_c8 = zmm1.o
zmm1.o = arg2[3]
uint128_t var_b8 = arg2[2]
int128_t var_a8 = zmm1.o
zmm1.o = arg2[5]
uint128_t var_98 = arg2[4]
int128_t var_88 = zmm1.o
zmm1.o = arg2[7]
uint128_t var_78 = arg2[6]
int128_t var_68 = zmm1.o
zmm1.o = zx.o(*(arg2 + 0x28))
uint64_t var_58 = arg2[8].q
int64_t var_118 = (zmm1.o).q
int32_t var_f8
(*(rax_1 + 0x4e0))(arg1, &var_f8, &var_118)
int512_t zmm2
zmm2.o = *arg3
zmm1.o = zmm2.o
zmm1.d = zmm1.d f* arg1[0x19].d
uint8_t r9 = arg1[0x1f].b u>> 6 & 1
uint128_t var_e8 = *(arg1[0x16] + 0x1c0)
uint128_t zmm0
zmm0.d = zmm2.o.d f* *(arg1 + 0xc4)
zmm2.d = zmm2.d f* *(arg1 + 0xcc)
var_118.d = zmm0.d
var_118:4.d = zmm1.d
int32_t result_1 = zmm2.d
sub_141f231f0(arg1, &var_118, &var_e8, r9, zmm0.q, zmm1, zmm2, arg2, 0)
int32_t result

if (arg1[0x16] == 0 || (*(arg1 + 0x8a) & 1) == 0)
    result.b = 0
else
    uint128_t zmm0_1
    
    if ((*arg2 & 1) == 0)
        uint128_t zmm3 = *arg3
        int32_t var_100_1 = *(arg1 + 0xcc)
        int64_t rax_5 = *arg1
        uint64_t var_108 = *(arg1 + 0xc4)
        (*(rax_5 + 0x518))(arg1, &var_118, &var_108, zmm3)
        float zmm9[0x4] = *(arg1 + 0xc4)
        uint128_t zmm7
        zmm7.d = var_118.d.d f- zmm9[0]
        uint128_t zmm8
        zmm8.d = var_118:4.d.d f- arg1[0x19].d
        int32_t var_f4
        uint128_t zmm4_1 = var_f4
        zmm3 = var_f8
        int128_t zmm6
        zmm6.d = result_1.d f- *(arg1 + 0xcc)
        int32_t var_f0
        int128_t zmm5_1 = var_f0
        zmm2.o = zmm7
        zmm2.d = zmm2.d f* zmm3.d
        zmm1.o = zmm5_1
        zmm0_1.d = zmm4_1.d f* zmm8.d
        zmm1.d = zmm1.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0_1.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (zmm2.d f>= 0f)
            result = result_1
            *(arg1 + 0xc4) = var_118
        else
            zmm3.d = zmm3.d f* zmm2.d
            zmm4_1.d = zmm4_1.d f* zmm2.d
            zmm7.d = zmm7.d f- zmm3.d
            zmm5_1.d = zmm5_1.d f* zmm2.d
            zmm2.d = zmm2.d f* arg1[0x23].d
            zmm8.d = zmm8.d f- zmm4_1.d
            zmm6.d = zmm6.d f- zmm5_1.d
            zmm7.d = zmm7.d f+ zmm9[0]
            zmm2.o ^= data_142d3f780
            zmm8.d = zmm8.d f+ arg1[0x19].d
            zmm6.d = zmm6.d f+ *(arg1 + 0xcc)
            zmm0_1.d = zmm7.d f* zmm7.d
            zmm3.d = zmm8.d f* zmm8.d
            zmm1.o = zmm6
            zmm1.d = zmm1.d f* zmm6.d
            zmm3.d = zmm3.d f+ zmm0_1.d
            zmm3.d = zmm3.d f+ zmm1.d
            float temp0_2[0x4] = _mm_min_ss(_mm_sqrt_ss(zx.o(0)[0], zmm3.d)[0], zmm2.d)
            
            if (not(zmm3.d f!= 1f))
                zmm3 = zmm7
                zmm1.o = zmm8
                zmm2.o = zmm6
            else if (zmm3.d f>= 9.99999994e-09f)
                zmm4_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm2.o = 0x3f000000
                zmm3.d = zmm3.d f* 0.5f
                zmm0_1.d = zmm4_1.d f* zmm4_1.d
                zmm1.o = zmm3
                zmm1.d = zmm1.d f* zmm0_1.d
                zmm2.d = 0.5f f- zmm1.d
                zmm0_1.d = zmm4_1.d f* zmm2.d
                zmm4_1.d = zmm4_1.d f+ zmm0_1.d
                zmm2.o = zmm4_1
                zmm1.o = zmm4_1
                zmm1.d = zmm1.d f* zmm4_1.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm5_1.d = 0.5f f- zmm3.d
                zmm2.d = zmm2.d f* zmm5_1.d
                zmm2.d = zmm2.d f+ zmm4_1.d
                zmm1.o = zmm2.o
                zmm3.d = zmm2.o.d f* zmm7.d
                zmm1.d = zmm1.d f* zmm8.d
                zmm2.d = zmm2.d f* zmm6.d
            else
                zmm3 = data_143dbb1f8
                zmm1.o = data_143dbb1fc
                zmm2.o = data_143dbb200
            
            zmm1.d = zmm1.d f* temp0_2[0]
            zmm0_1.d = temp0_2.d f* zmm3.d
            temp0_2[0] = temp0_2[0] f* zmm2.d
            zmm8.d = zmm8.d f- zmm1.d
            zmm7.d = zmm7.d f- zmm0_1.d
            zmm6.d = zmm6.d f- temp0_2[0]
            zmm0_1 = _mm_unpacklo_ps(zmm7, zmm8.q)
            var_e8:8.d = zmm6.d
            int32_t var_100_2 = var_e8:8.d
            int64_t rax_7 = *arg1
            var_108 = zmm0_1.q
            int64_t* rax_8 = (*(rax_7 + 0x4e0))(arg1, &var_e8, &var_108)
            *(arg1 + 0xc4) = *rax_8
            result = rax_8[1].d
        
        zmm3 = *(arg1 + 0x11c)
        *(arg1 + 0xcc) = result
        zmm0_1 = arg1[0x19].d
        zmm2.o = *(arg1 + 0xc4)
        zmm1.o = *(arg1 + 0xcc)
        zmm2.d = zmm2.d f* zmm2.d
        zmm0_1.d = zmm0_1.d f* zmm0_1.d
        zmm1.d = zmm1.d f* zmm1.d
        zmm2.d = zmm2.d f+ zmm0_1.d
        zmm3.d = zmm3.d f* zmm3.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (zmm2.d f>= zmm3.d)
            *arg3 = 0
            result.b = 1
        else
            (*(*arg1 + 0x520))(arg1, &var_d8, zmm2, zmm3)
            result.b = 0
    else
        zmm2.o = *arg3
        zmm1.o = zmm2.o
        zmm0_1.d = 1f f- *(arg2 + 8)
        zmm0_1.d = zmm0_1.d f* zmm2.d
        *arg3 = zmm0_1.d
        zmm0_1.d = zmm2.o.d f* *(arg1 + 0xc4)
        zmm1.d = zmm1.d f* arg1[0x19].d
        var_118.d = zmm0_1.d
        zmm0_1.d = zmm2.o.d f* *(arg1 + 0xcc)
        var_118:4.d = zmm1.d
        int32_t var_110_1 = zmm0_1.d
        
        if ((*(*arg1 + 0x548))(zmm0_1, arg2, zmm2, &var_118, arg3) == 2 || arg1[0x16] == 0
                || (*(arg1 + 0x8a) & 1) == 0)
            result.b = 0
        else
            result.b = 1

return result
