// 函数: sub_1417c75c0
// 地址: 0x1417c75c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x30) = data_14399f720
int32_t rcx = *arg3
int32_t var_18

if (rcx != 2)
    if (rcx == 1)
        if (not(9.99999975e-05f f< arg3[1]) && not(9.99999975e-05f f< arg3[2])
                && not(9.99999975e-05f f< arg3[3]))
            goto label_1417c76bc
    else if (rcx == 2)
        if (9.99999975e-05f f>= arg3[1] != 0)
            goto label_1417c76bc
    else if (rcx != 3 || 9.99999975e-05f f>= arg3[1] != 0)
    label_1417c76bc:
        var_18 = 0
        int32_t var_14 = 0x38d1b717
        *arg1 = var_18.q
        return arg1

uint128_t zmm0
float zmm2
float zmm3

if (rcx == 1)
    zmm3 = arg3[1]
    zmm2 = arg3[2]
    zmm0 = arg3[3]
    
    if (not(zmm3 >= 9.99999975e-05f))
        zmm3 = 9.99999975e-05f
    
    if (not(zmm2 >= 9.99999975e-05f))
        zmm2 = 9.99999975e-05f
    
    if (not(zmm0.d f>= 9.99999975e-05f))
        zmm0 = 0x38d1b717
    
    *arg1 = 3
    *(arg1 + 4) = zmm3
    arg1[1].d = zmm2
    *(arg1 + 0xc) = zmm0.d
    *(arg1 + 0x30) = *arg2
else
    if (rcx == 2)
        zmm0 = _mm_max_ss(arg3[1].d, 0x38d1b717)
        var_18 = 0
        int32_t var_14_2 = zmm0.d
        *arg1 = var_18.q
        return arg1
    
    if (rcx == 3)
        zmm3 = arg3[1]
        zmm0 = arg3[2]
        zmm2 = _mm_max_ss(zmm3, 0x38d1b717)
        
        if (zmm3 f>= zmm0.d)
            float var_14_1 = zmm2
            var_18 = 0
            *arg1 = var_18.q
            return arg1
        
        zmm0.d = zmm0.d f- zmm3
        var_18 = 2
        int32_t var_10 = _mm_max_ss(zmm0.d, 0x38d1b717).d
        zmm0 = zx.o(var_18.q)
        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        zmm0.d = zmm2
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        *arg1 = zmm0.q
        arg1[1].d = var_10
        var_18.q = zmm0.q
        *(arg1 + 0x30) = *sub_1417c8090(&var_18, arg2)
return arg1
