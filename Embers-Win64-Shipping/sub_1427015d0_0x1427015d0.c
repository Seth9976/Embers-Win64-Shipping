// 函数: sub_1427015d0
// 地址: 0x1427015d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
void* rcx

if (arg3 == 0)
    rcx = *(arg1 + 0xe8)

float var_48
int32_t var_44
int64_t var_38
float zmm0[0x4]
float zmm1[0x4]

if (arg3 != 0 || rcx == 0 || *(arg1 + 0x278) != arg3)
    int32_t rax_9 = data_143dbb200
    *arg2 = data_143dbb1f8.q
    arg2[2] = rax_9
    char rax_10
    
    if (arg3 != 0)
        rax_10 = sub_140d3e110(arg1 + 0x138)
    
    float rax_12
    
    if (arg3 == 0 || rax_10 == 0)
        sub_1426fbf30(arg1, &var_48)
        int512_t zmm6_1
        zmm6_1.o = data_143b57f5c
        int64_t* rax_14
        rax_14, zmm6 = sub_141e912d0(arg1 + 0x148, &var_38)
        int32_t var_40
        zmm0 = var_40
        float zmm2_1[0x4] = var_48
        zmm0[0] = zmm0[0] * zmm6[0]
        zmm2_1[0] = zmm2_1[0] * zmm6[0]
        zmm0[0] = zmm0[0] f+ rax_14[1].d
        int64_t zmm1_1
        zmm1_1.d = var_44.d f* zmm6[0]
        zmm2_1[0] = zmm2_1[0] f+ *rax_14
        zmm1_1.d = zmm1_1.d f+ *(rax_14 + 4)
        rax_12 = zmm0[0]
        zmm0 = _mm_unpacklo_ps(zmm2_1, zmm1_1)
    else
        void* rcx_5 = *(sub_140d3c6e0(arg1 + 0x138) + 0x130)
        
        if (rcx_5 == 0)
            float rax_13 = data_143dbb200
            var_38 = data_143dbb1f8.q
            zmm0 = zx.o(var_38)
            rax_12 = rax_13
        else
            zmm1 = *(rcx_5 + 0x1d0)
            var_48 = zmm1[0]
            float var_44_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
            float var_40_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            zmm0 = zx.o(var_48.q)
            rax_12 = var_40_2
    
    *arg2 = zmm0.q
    arg2[2] = rax_12
else
    void* rax = *(rcx + 0xb0)
    float var_58
    float var_50_1
    
    if (rax == 0)
        var_58 = 3.40282347e+38f
        int32_t var_54_2 = 0x7f7fffff
        var_50_1 = 3.40282347e+38f
    else
        zmm1 = *(rax + 0x1d0)
        var_58 = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_50_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_54_1 = temp0_1[0]
    
    void* rcx_1 = *(rcx + 0xa0)
    var_48.q = var_58.q
    int64_t* rax_6
    uint128_t zmm2
    
    if (rcx_1 == 0)
    label_142701721:
        zmm6 = *(arg1 + 0x268)
        float zmm7[0x4] = *(arg1 + 0x26c)
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm6[0] = zmm6[0] + zmm7[0]
        float var_54_4
        
        if (zmm6[0] != 1f)
            if (zmm6[0] >= 9.99999994e-09f)
                float temp0_6[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
                zmm6[0] = zmm6[0] * 0.5f
                temp0_6[0] = temp0_6[0] * temp0_6[0]
                zmm6[0] = zmm6[0] * temp0_6[0]
                zmm2.d = 0.5f - zmm6[0]
                temp0_6[0] = temp0_6[0] f* zmm2.d
                temp0_6[0] = temp0_6[0] + temp0_6[0]
                temp0_6[0] = temp0_6[0] * temp0_6[0]
                zmm6[0] = zmm6[0] * temp0_6[0]
                temp0_6[0] = temp0_6[0] * (0.5f - zmm6[0])
                temp0_6[0] = temp0_6[0] + temp0_6[0]
                int32_t var_50_6 = 0
                zmm6[0] = zmm6[0] * temp0_6[0]
                zmm7[0] = zmm7[0] * temp0_6[0]
                var_54_4 = zmm7[0]
                var_58 = zmm6[0]
            else
                zmm1 = data_143dbb1fc
                var_58 = data_143dbb1f8[0]
                float var_50_5 = data_143dbb200[0]
                float var_54_3 = zmm1[0]
        else if (zx.o(0)[0] f!= *(arg1 + 0x270))
            int32_t var_50_4 = 0
            var_54_4 = zmm7[0]
            var_58 = zmm6[0]
        else
            var_58.q = *(arg1 + 0x268)
            int32_t var_50_3 = *(arg1 + 0x270)
        rax_6 = &var_58
    else
        if (*(arg1 + 0x1b8) == 3)
            void* rax_2 = *(arg1 + 0x260)
            
            if (rax_2 == 0 || *(rax_2 + 0x168) != 3)
                if (_mm_and_ps(*(arg1 + 0x268), 0x7fffffff)[0] > 9.99999975e-05f)
                    goto label_142701721
                
                if (_mm_and_ps(*(arg1 + 0x26c), 0x7fffffff)[0] > 9.99999975e-05f)
                    goto label_142701721
                
                if (_mm_and_ps(*(arg1 + 0x270), 0x7fffffff)[0] > 9.99999975e-05f)
                    goto label_142701721
        
        void* rcx_2 = *(rcx_1 + 0x130)
        float* rax_3
        
        if (rcx_2 == 0)
            int32_t var_50_2 = data_14399f6a0
            rax_3 = &var_58
            var_58.q = data_14399f698.q
        else
            rax_3 = sub_141f133e0(rcx_2, &var_58)
        
        int32_t var_30_1 = rax_3[2]
        rax_6 = &var_38
        var_38 = *rax_3
    
    zmm2 = zx.o(*rax_6)
    float zmm3[0x4] = data_143b57f5c
    zmm0 = zmm2
    int32_t rax_8 = rax_6[1].d
    zmm1 = zmm2
    zmm0[0] = zmm0[0] * zmm3[0]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    temp0_7[0] = temp0_7[0] * zmm3[0]
    zmm0[0] = zmm0[0] + var_48
    temp0_7[0] = temp0_7[0] f+ var_44
    *arg2 = zmm0[0]
    zmm0 = rax_8
    zmm0[0] = zmm0[0] * zmm3[0]
    arg2[1] = temp0_7[0]
    zmm0[0] = zmm0[0] + var_50_1
    arg2[2] = zmm0[0]
return arg2
