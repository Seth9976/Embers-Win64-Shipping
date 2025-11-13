// 函数: sub_1425ff3f0
// 地址: 0x1425ff3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0
int128_t zmm6

if (((*(arg1 + 0x1ac) u>> 1).b & 1) == 0 && sub_141e631e0(*(arg1 + 0x10)) != 0)
    *arg2 = arg3.d
    arg2[1] = arg3.d
    arg2[2] = arg3.d
    arg2[4] = arg3.d
    arg2[5] = arg3.d
    zmm0 = arg3.d f* *(*(arg1 + 0x10) + 0x210)
    arg2[7] = 0
    arg2[6] = zmm0
    
    if (data_143f70d9c == 6)
        arg2[3] = arg3.d f* *(arg1 + 0x20)
    
    arg2[8] = arg3.d
    arg2[9] = arg3.d
    arg2[0xa] = arg3.d
    arg2[0xc] = arg3.d
    arg2[0xd] = arg3.d
    zmm0 = arg3.d f* *(*(arg1 + 0x10) + 0x210)
    arg2[0xf] = 0
    arg2[0xe] = zmm0
    
    if (data_143f70d9c == 6)
        zmm6.d = arg3.d f* *(arg1 + 0x20)
        arg2[0xb] = zmm6.d
    
    sub_141e6cdf0(arg1)
    uint64_t var_a8[0xc]
    sub_141e62e30(arg1, &var_a8)
    float var_48
    float zmm1_1 = var_48
    void* rax_5 = *(arg1 + 0x80)
    int32_t var_40
    int32_t var_40_1 = (var_40 ^ data_142d3f780).d
    int32_t var_34
    int128_t zmm2 = var_34 ^ data_142d3f780
    float var_44
    var_48 = var_44
    float var_44_1 = zmm1_1
    float var_3c
    zmm1_1 = var_3c
    float var_38
    var_3c = var_38
    int32_t var_34_1 = zmm2.d
    float var_38_1 = zmm1_1
    float var_2c
    sub_1425fd5e0(*(rax_5 + 0x7b0) + 0x20, &data_14399f678, &data_143dbb1f8, &var_48, var_2c, arg2)
    return sub_1425fd5e0(*(*(arg1 + 0x80) + 0x7b0) + 0x20, &data_14399f678, &data_143dbb1f8, 
        &var_3c, var_2c, &arg2[8])

*arg2 = arg3.d
arg2[1] = arg3.d

if (((*(arg1 + 0x1ac) u>> 1).b & 1) == 0 && data_143f70d9c == 6)
    arg2[4] = arg3.d
    arg2[5] = arg3.d
    arg2[3] = arg3.d f* *(arg1 + 0x20) * 0.5f

zmm0 = arg3.d f* *(*(arg1 + 0x10) + 0x210)
arg2[7] = 0
arg2[6] = zmm0
void* result = *(arg1 + 0x10)

if ((*(result + 0x100) & 2) != 0)
    zmm6.d = arg3.d f* *(result + 0xe8)
    arg2[7] = zmm6.d

return result
