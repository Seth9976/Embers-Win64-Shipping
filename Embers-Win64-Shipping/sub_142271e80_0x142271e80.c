// 函数: sub_142271e80
// 地址: 0x142271e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int32_t rax = arg3[1].d
*(arg1 + 0x40) = *arg3
*(arg1 + 0x48) = rax
int32_t result = arg4[1].d
*(arg1 + 0x4c) = *arg4
*(arg1 + 0x54) = result
int64_t zmm0
zmm0.d = arg4[1].d.d f- arg3[1].d
float zmm1 = *arg4 f- *arg3
float zmm2 = *(arg4 + 4) f- *(arg3 + 4)
int32_t var_70 = zmm0.d
zmm0.d = zmm0.d f* zmm0.d
char arg_8 = 0
float var_78 = zmm1
float var_74 = zmm2
int64_t temp0 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0.d)
int32_t arg_18 = temp0.d

if (temp0.d f<= 9.99999975e-05f)
    result.b = 0
    return result

void* var_30 = arg1
int64_t* var_58 = &arg_10
int64_t* var_48 = arg3
void arg_28
void* var_50 = &arg_28
int64_t* var_28 = arg4
float* var_40 = &var_78
int32_t* var_38 = &arg_18
void arg_30
void* var_20 = &arg_30
char* var_18 = &arg_8
int64_t** var_60 = &var_58
uint64_t (* var_68)(int64_t* arg1, int64_t* arg2) = j_sub_14225b4c0
sub_142269e40(arg2 + 0xf0, &var_68)
return zx.q(arg_8)
