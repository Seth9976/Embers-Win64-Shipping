// 函数: sub_140ad6d00
// 地址: 0x140ad6d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = arg2
int64_t result
float zmm0
float zmm6_1
int32_t zmm9_1

if (arg3.d f!= 0f)
    arg2 = 0x43b40000
    
    if (arg3.d f< 360f)
        float zmm0_1[0x4]
        float zmm7_1[0x4]
        int32_t zmm9_2
        zmm0_1, zmm7_1, zmm9_2 = sub_140a454f0(arg1, arg2)
        
        if (not(zmm0_1[0] f>= zmm9_2))
            zmm7_1[0]
        
        float zmm6_3[0x4]
        float zmm7_2[0x4]
        uint32_t zmm8_1[0x4]
        int32_t zmm9_3
        arg1, zmm6_3, zmm7_2, zmm8_1, zmm9_3 = sub_140a454f0(zmm10, zmm7_1)
        
        if (not(arg1[0] f>= zmm9_3))
            arg1[0] = arg1[0] + zmm7_2[0]
        
        bool cond:2_1 = zmm6_3[0] <= arg1[0]
        uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm8_1, data_142d3f770)
        float temp0_4[0x4]
        
        if (cond:2_1)
            arg1[0] = arg1[0] - zmm6_3[0]
            
            if (arg1[0] >= 180f)
                zmm6_3[0] = zmm6_3[0] + zmm7_2[0]
                zmm6_3[0] = zmm6_3[0] - arg1[0]
                temp0_4 = _mm_min_ss(zmm6_3[0], temp0_1[0])
                zmm6_3[0] = zmm6_3[0] - temp0_4[0]
            else
                float temp0_3[0x4] = _mm_min_ss(arg1[0], temp0_1[0])
                temp0_3[0] = temp0_3[0] + zmm6_3[0]
                zmm6_3 = temp0_3
        else
            zmm6_3[0] = zmm6_3[0] - arg1[0]
            
            if (zmm6_3[0] < 180f)
                temp0_4 = _mm_min_ss(zmm6_3[0], temp0_1[0])
                zmm6_3[0] = zmm6_3[0] - temp0_4[0]
            else
                arg1[0] = arg1[0] + zmm7_2[0]
                arg1[0] = arg1[0] - zmm6_3[0]
                float temp0_2[0x4] = _mm_min_ss(arg1[0], temp0_1[0])
                temp0_2[0] = temp0_2[0] + zmm6_3[0]
                zmm6_3 = temp0_2
        arg2 = zmm7_2
        arg1 = zmm6_3
    else
        arg1 = zmm10
    
    float zmm0_2
    float zmm7_3
    int32_t zmm9_4
    zmm0_2, result, zmm7_3, zmm9_4 = sub_140a454f0(arg1, arg2)
else
    zmm0, result, zmm6_1, zmm9_1 = sub_140a454f0(arg1, 0x43b40000)
return result
