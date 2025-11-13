// 函数: sub_14271c200
// 地址: 0x14271c200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
char* result = sub_1426b3b80(&arg_8, *(arg1 + 0x18))
*(arg1 + 0x28) = *result
float zmm2[0x4] = data_143b58120
float zmm1[0x4] = *(arg1 + 4)

if ((zmm2 ^ 0x80000000)[0] >= zmm1[0] || zmm1[0] >= zmm2[0])
label_14271c27c:
    result = *(arg1 + 0x18)
    
    if (result != 0)
        void* rcx_1 = *(result + 0x130)
        int64_t var_18
        float result_1
        
        if (rcx_1 == 0)
            var_18 = data_143dbb1f8.q
            result_1 = data_143dbb200
        else
            zmm1 = *(rcx_1 + 0x1d0)
            var_18.d = zmm1[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            result_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_18:4.d = temp0_1[0]
        
        result = zx.q(result_1)
        *(arg1 + 4) = var_18
        *(arg1 + 0xc) = result.d
else
    zmm2 = data_143b58124
    zmm1 = *(arg1 + 8)
    
    if ((zmm2 ^ 0x80000000)[0] >= zmm1[0] || zmm1[0] >= zmm2[0])
        goto label_14271c27c
    
    zmm2 = data_143b58128
    zmm1 = *(arg1 + 0xc)
    
    if ((zmm2 ^ 0x80000000)[0] >= zmm1[0] || not(zmm1[0] < zmm2[0]))
        goto label_14271c27c

return result
