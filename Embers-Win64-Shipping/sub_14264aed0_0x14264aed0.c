// 函数: sub_14264aed0
// 地址: 0x14264aed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = data_143dbb1f8
float zmm1 = data_143dbb1fc
int64_t* result = arg2
int64_t zmm0 = data_143dbb200
arg2.b = 0
int64_t i_1 = sx.q(*(arg1 + 0x418))
float zmm3 = zmm2
float var_4c = zmm2
float zmm4 = zmm1
float var_48 = zmm1
float zmm5 = zmm0.d
int32_t var_44 = zmm0.d
float var_58 = zmm2
float var_54 = zmm1
int32_t var_50 = zmm0.d
float zmm6[0x4]
float var_18[0x4] = zmm6
char var_40 = 0

if (i_1 s> 0)
    void* rcx_1 = *(arg1 + 0x410) + 0x38
    int64_t i
    
    do
        if (arg2.b == 0)
            arg2.b = 1
            var_4c.q = *(rcx_1 - 8)
            zmm2 = var_4c
            zmm1 = var_48
            zmm3 = zmm2
            zmm4 = zmm1
            zmm0 = *rcx_1
            int32_t var_50_2 = zmm0.d
            zmm5 = zmm0.d
            var_58 = zmm2
            float var_54_2 = zmm1
            char var_40_1 = 1
        else
            zmm6 = *(rcx_1 - 8)
            
            if (not(zmm3 <= zmm6[0]))
                var_58 = zmm6[0]
                zmm3 = zmm6[0]
            
            zmm6 = *(rcx_1 - 4)
            
            if (not(zmm4 <= zmm6[0]))
                float var_54_1 = zmm6[0]
                zmm4 = zmm6[0]
            
            zmm6 = *rcx_1
            
            if (not(zmm5 <= zmm6[0]))
                float var_50_1 = zmm6[0]
                zmm5 = zmm6[0]
            
            zmm6 = *(rcx_1 - 8)
            
            if (not(zmm2 >= zmm6[0]))
                var_4c = zmm6[0]
                zmm2 = zmm6[0]
            
            zmm6 = *(rcx_1 - 4)
            
            if (not(zmm1 >= zmm6[0]))
                var_48 = zmm6[0]
                zmm1 = zmm6[0]
            
            zmm6 = *rcx_1
            
            if (not(zmm0.d f>= zmm6[0]))
                float var_44_1 = zmm6[0]
                zmm0 = zmm6[0].q
        
        zmm6 = *(rcx_1 + 4)
        
        if (not(zmm3 <= zmm6[0]))
            var_58 = zmm6[0]
            zmm3 = zmm6[0]
        
        zmm6 = *(rcx_1 + 8)
        
        if (not(zmm4 <= zmm6[0]))
            float var_54_3 = zmm6[0]
            zmm4 = zmm6[0]
        
        zmm6 = *(rcx_1 + 0xc)
        
        if (not(zmm5 <= zmm6[0]))
            float var_50_3 = zmm6[0]
            zmm5 = zmm6[0]
        
        zmm6 = *(rcx_1 + 4)
        
        if (not(zmm2 >= zmm6[0]))
            var_4c = zmm6[0]
            zmm2 = zmm6[0]
        
        zmm6 = *(rcx_1 + 8)
        
        if (not(zmm1 >= zmm6[0]))
            var_48 = zmm6[0]
            zmm1 = zmm6[0]
        
        zmm6 = *(rcx_1 + 0xc)
        
        if (not(zmm0.d f>= zmm6[0]))
            float var_44_3 = zmm6[0]
            zmm0 = zmm6[0].q
        
        rcx_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_38
sub_140ae2c60(&var_58, &var_38, arg3)
float zmm6_1[0x4] = var_38
int32_t var_24
float zmm0_1[0x4] = var_24
int32_t var_2c
float zmm3_1[0x4] = var_2c
float var_30
zmm0_1[0] = zmm0_1[0] - var_30
zmm3_1[0] = zmm3_1[0] - zmm6_1[0]
int32_t var_34
int64_t zmm5_1 = var_34
int32_t var_28
int64_t zmm2_1
zmm2_1.d = var_28.d f- zmm5_1.d
zmm0_1[0] = zmm0_1[0] * 0.5f
zmm3_1[0] = zmm3_1[0] * 0.5f
float var_60 = zmm0_1[0]
zmm2_1.d = zmm2_1.d f* 0.5f
*(result + 0xc) = (_mm_unpacklo_ps(zmm3_1, zmm2_1)).q
*(result + 0x14) = var_60
zmm6_1[0] = zmm6_1[0] f+ *(result + 0xc)
zmm5_1.d = zmm5_1.d f+ result[2].d
float zmm4_1 = var_30 f+ *(result + 0x14)
*result = (_mm_unpacklo_ps(zmm6_1, zmm5_1)).q
result[1].d = zmm4_1
zmm0_1 = result[2].d
zmm2_1 = *(result + 0xc)
float zmm1_1 = *(result + 0x14)
zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
zmm2_1.d = zmm2_1.d f* zmm2_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_1[0]
zmm2_1.d = zmm2_1.d f+ zmm1_1 * zmm1_1
result[3].d = _mm_sqrt_ss(0, zmm2_1.d)[0]
return result
