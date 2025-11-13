// 函数: sub_1409db090
// 地址: 0x1409db090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *arg3 - *arg2
float zmm2 = arg3[1] f- arg2[1]
float zmm3 = arg3[2] f- arg2[2]
float var_48 = zmm4
float var_44 = zmm2
float var_40 = zmm3
float var_58

if (zmm4 == 0f)
    var_58 = 3.39999995e+38f
else
    var_58 = 1f / zmm4

if (zmm2 == 0f)
    int32_t var_54_1 = 0x7f7fc99e
else
    float var_54 = 1f / zmm2

if (zmm3 == 0f)
    int32_t var_50_1 = 0x7f7fc99e
else
    float var_50 = 1f / zmm3

float* var_28 = arg2
float* var_18 = &var_48
int32_t* var_20 = arg3
float* var_10 = &var_58
float** var_30 = &var_28
int64_t (* var_38)(int64_t* arg1, int128_t* arg2) = sub_1409b2250
return sub_1409db510(arg1, &var_38, arg4)
