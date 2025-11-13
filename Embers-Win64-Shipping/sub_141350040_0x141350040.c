// 函数: sub_141350040
// 地址: 0x141350040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int64_t var_88 = 0

if ((*(rax + 0x28) & 1) == 0)
    var_88:1.b = 1
    rax.b = 1
else
    float temp0_1 = arg2[0x23c].d
    0f - temp0_1
    var_88:6.b = arg3
    var_88:7.b = arg4
    var_88:2.b = 0f < temp0_1
    float temp1_1 = arg2[0x23b].d
    0f - temp1_1
    var_88:3.b = 0f < temp1_1
    float temp2_1 = arg2[0x1ff].d
    0f - temp2_1
    var_88.b = 0f < temp2_1
    float temp3_1 = *(arg2 + 0x11dc)
    0f - temp3_1
    var_88:5.b = 0f < temp3_1
    float temp4_1 = *(data_143ebc1f8 + 4)
    0f - temp4_1
    var_88:4.b = 0f < temp4_1
    rax.b = 0

char var_80
char var_70 = var_80
int32_t var_6f = 0
char var_6b = 0

if (rax.b == 0)
    uint32_t zmm3[0x4] = arg2[0x1f6].d
    uint32_t zmm5[0x4] = *(arg2 + 0xfb4)
    uint128_t zmm1 = *(arg2 + 0xfc4)
    uint32_t zmm4[0x4] = arg2[0x1f9].d
    uint32_t zmm7[0x4] = *(arg2 + 0xfa4)
    uint32_t zmm8[0x4] = arg2[0x1f8].d
    uint32_t zmm9[0x4] = arg2[0x1f4].d
    uint32_t zmm10[0x4] = arg2[0x1f7].d
    uint32_t zmm11[0x4] = arg2[0x1f5].d
    
    if (1f f!= *(arg2 + 0xf9c))
        var_6f:2.b = 1
    else
        zmm9[0] = zmm9[0] f- 1f
        zmm7 = _mm_and_ps(zmm7, 0x7fffffff)
        zmm11 = _mm_and_ps(zmm11, 0x7fffffff)
        zmm9 = _mm_and_ps(zmm9, 0x7fffffff)
        
        if (_mm_max_ss(_mm_max_ss(zmm7[0], zmm9[0])[0], zmm11[0])[0] f!= 0f)
            var_6f:2.b = 1
        else
            zmm3 = _mm_and_ps(zmm3, 0x7fffffff)
            zmm5[0] = zmm5[0] f- 1f
            zmm10 = _mm_and_ps(zmm10, 0x7fffffff)
            zmm5 = _mm_and_ps(zmm5, 0x7fffffff)
            
            if (_mm_max_ss(_mm_max_ss(zmm3[0], zmm5[0])[0], zmm10[0])[0] f!= 0f)
                var_6f:2.b = 1
            else
                zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                zmm4[0] = zmm4[0] f- 1f
                
                if (not(_mm_max_ss(_mm_max_ss(zmm1.d, _mm_and_ps(zmm8, 0x7fffffff)[0]).d, 
                        _mm_and_ps(zmm4, 0x7fffffff)[0]).d f== 0f))
                    var_6f:2.b = 1
    
    float temp5_1 = arg2[0x1f3].d
    0f - temp5_1
    var_6f:3.b = 0f < temp5_1
    float temp6_1 = arg2[0x1fa].d
    0f - temp6_1
    bool var_6b_1 = 0f < temp6_1
    
    if (data_1439c7a69 == 0)
        var_88.b = 0
    else if (0f f>= *(arg2 + 0x126c) || ((arg2[0x1c0].b & 1) != 0 && arg2[0x2a9].d s>= 1))
        var_6f.b = 0
        var_6f:1.b = arg2[0xa1a].b
    else
        var_6f.b = 1
        var_6f:1.b = arg2[0xa1a].b
    
    var_88:4.w = 0
    var_88 = var_88
    var_70 = var_80
else
    var_88 = var_88

var_80.d = var_70.d
int16_t var_7c = var_6f:3.w
char var_6a
char var_7a = var_6a
sub_1413672f0(arg1, &var_88)
return arg1
