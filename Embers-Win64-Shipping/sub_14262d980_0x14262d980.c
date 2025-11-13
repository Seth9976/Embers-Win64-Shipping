// 函数: sub_14262d980
// 地址: 0x14262d980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
uint64_t var_28 = __security_cookie ^ &var_1a8
float zmm1 = *arg2
float var_14c = arg2[1]
float zmm0 = arg2[2]
float var_148 = zmm0
zmm0 = zmm0 - arg1[2]
float var_150 = zmm1
zmm1 = zmm1 - *arg1
float zmm0_1 = sub_142609970(zmm0 * zmm0 + zmm1 * zmm1)
uint64_t result

if (zmm0_1 < 0.00999999978f)
    result.b = 1
else
    zmm1 = var_14c - arg1[1]
    int64_t* rdx = *(arg1 + 0x48)
    int32_t var_160_1 = 0x20
    int32_t result_1
    int32_t* var_168_1 = &result_1
    result_1 = 0
    void var_128
    void* var_170_1 = &var_128
    void var_140
    int64_t* var_178_1 = &var_140
    int32_t var_154
    int32_t* var_180_1 = &var_154
    float zmm3 = _mm_min_ss(zmm0_1 + 0.00999999978f, arg3.d) / zmm0_1
    float var_14c_1 = zmm1 * zmm3 + arg1[1]
    var_150 = (var_150 - *arg1) * zmm3 + *arg1
    float var_148_1 = (var_148 - arg1[2]) * zmm3 + arg1[2]
    sub_1426150f0(arg4, *rdx, arg1, &var_150, arg5, var_180_1, var_178_1, var_170_1, var_168_1, 
        var_160_1)
    result = zx.q(result_1)
    
    if (result.d s<= 1 || var_154 f<= 0.99000001f)
        result.b = 0
    else
        int64_t* var_188_1
        var_188_1.d = result.d
        arg1[0x14] = sub_142628a90(*(arg1 + 0x48), arg1[0x14], arg1[0x15], &var_128, var_188_1.d).d
        result.b = 1

__security_check_cookie(var_28 ^ &var_1a8)
return result
