// 函数: sub_140e1a4e0
// 地址: 0x140e1a4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rbx = arg3
int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9
void* const* result

if (data_143e24361 != 0)
    result.b = 0
else
    int128_t zmm2 = *(arg2 + 8)
    int128_t zmm3 = *(arg2 + 0xc)
    zmm9 = *arg2
    zmm8 = *(arg2 + 4)
    zmm7.d = zmm2.d f- zmm9.d
    int128_t zmm5 = *arg3
    zmm6.d = zmm3.d f- zmm8.d
    int128_t zmm4 = *(arg3 + 4)
    int32_t zmm1 = arg3[3].d
    zmm7.d = zmm7.d f* 0.5f
    zmm6.d = zmm6.d f* 0.5f
    zmm7.d = zmm7.d f* data_1439ae6b0
    zmm6.d = zmm6.d f* data_1439ae6b0
    zmm9.d = zmm9.d f- zmm7.d
    int32_t var_68 = *(arg3 + 0x2c)
    zmm7.d = zmm7.d f+ zmm2.d
    int32_t var_64_1 = zmm1
    zmm8.d = zmm8.d f- zmm6.d
    zmm2.d = zmm5.d f* *(arg3 + 0x1c)
    zmm6.d = zmm6.d f+ zmm3.d
    zmm5.d = zmm5.d f* arg3[2].d
    zmm3.d = zmm4.d f* *(arg3 + 0x24)
    zmm4.d = zmm4.d f* *(arg3 + 0x28)
    int32_t var_60_1 = zmm2.d
    int32_t var_58_1 = zmm3.d
    int32_t var_5c_1 = zmm5.d
    int32_t var_54_1 = zmm4.d
    float var_78
    result, zmm6, zmm7, zmm8 = sub_140dbe170(&var_68, &var_78)
    int32_t var_74
    int32_t var_70
    int32_t var_6c
    
    if (var_70 f< zmm9.d || zmm7.d f< var_78 || var_6c f< zmm8.d || not(zmm6.d f>= var_74))
        float zmm3_1 = rbx[2]
        zmm1 = rbx[4]
        float zmm2_1 = zmm3_1 * rbx[1]
        var_5c_1.q = 0
        zmm3_1 = zmm3_1 * *rbx
        float var_54_2 = zmm2_1
        var_68 = rbx[3]
        int32_t var_64_2 = zmm1
        float var_60_2 = zmm3_1
        result, zmm6, zmm7, zmm8 = sub_140dbe170(&var_68, &var_78)
        
        if (var_70 f< zmm9.d || zmm7.d f< var_78 || var_6c f< zmm8.d)
            if (*(*(rbx + 0x38) + 0x2c) == 2)
                result.b = 0
            else
                result.b = 1
        else if (zmm6.d f>= var_74 || *(*(rbx + 0x38) + 0x2c) == 2)
            result.b = 0
        else
            result.b = 1
    else
        result.b = 0

return result
