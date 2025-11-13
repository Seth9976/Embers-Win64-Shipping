// 函数: sub_1426cd560
// 地址: 0x1426cd560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = data_143dbb200
uint128_t zmm2 = data_143dbb1f8
float zmm1 = data_143dbb1fc
int32_t result = data_143dbb210
int32_t var_60 = zmm0.d
int32_t var_70 = zmm0.d
int64_t var_58 = data_143dbb208
int32_t var_68 = zmm2.d
int32_t var_78 = zmm2.d
int32_t result_1 = result

if (arg2 == 0)
    result.b = 0
else if ((*(arg4 + 0x24) & 1) == 0 || *(arg4 + 0x20) != 0xff)
    if (sub_1426b2560(arg2, zx.q(*(arg3 + 0x20)), &var_68).b == 0)
        result.b = 0
    else if (sub_1426b2560(arg2, zx.q(*(arg4 + 0x20)), &var_78).b == 0)
        result.b = 0
    else
        uint128_t zmm6
        zmm6.d = var_78.d f- var_68
        uint128_t zmm7
        zmm7.d = zmm1.d f- zmm1
        int128_t zmm8
        zmm8.d = var_70.d f- var_60
        uint128_t zmm0_2
        zmm0_2.d = zmm6.d f* zmm6.d
        zmm2.d = zmm7.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm0_2.d
        zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
        
        if (zmm2.d f== 1f)
            goto label_1426cd745
        
        int32_t var_70_1
        
        if (zmm2.d f>= 9.99999994e-09f)
            float zmm3 = zmm2.d
            float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3)
            zmm3 = zmm3 * 0.5f
            zmm0_2.d = temp0_1.d f* temp0_1[0]
            zmm2.d = 0.5f - zmm3 f* zmm0_2.d
            zmm0_2.d = temp0_1.d f* zmm2.d
            temp0_1[0] = temp0_1[0] f+ zmm0_2.d
            zmm0_2.d = temp0_1.d f* (0.5f - zmm3 * temp0_1[0] * temp0_1[0])
            temp0_1[0] = temp0_1[0] f+ zmm0_2.d
            zmm6.d = zmm6.d f* temp0_1[0]
            zmm7.d = zmm7.d f* temp0_1[0]
            zmm8.d = zmm8.d f* temp0_1[0]
        label_1426cd745:
            var_70_1 = zmm8.d
            int32_t var_74_2 = zmm7.d
            var_78 = zmm6.d
        else
            zmm1 = data_143dbb1fc
            var_78 = data_143dbb1f8.d
            var_70_1 = data_143dbb200.d
            float var_74_1 = zmm1
        
        *arg5 = var_78.q
        arg5[1].d = var_70_1
        result.b = 1
else if (sub_1426b2ff0(arg2, zx.q(*(arg3 + 0x20)), &var_58).b == 0)
    result.b = 0
else
    void var_48
    int32_t* rax = sub_140ae4210(&var_58, &var_48)
    *arg5 = *rax
    arg5[1].d = rax[2]
    result.b = 1

return result
