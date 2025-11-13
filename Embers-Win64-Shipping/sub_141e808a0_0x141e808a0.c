// 函数: sub_141e808a0
// 地址: 0x141e808a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2

if ((*(arg1 + 0x180) & 2) != 0)
    if (arg2 == 0)
        rdi = *(arg1 + 0x50)
    
    if (sub_141dce670(arg1) == 0)
        int32_t zmm3 = 0x3f800000
        
        if ((*(arg1 + 0x180) & 4) == 0)
        label_141e80901:
            float zmm1[0x4] = *(arg1 + 0x230)
            int128_t zmm2 = *(arg1 + 0x210)
            float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            float var_18 = zmm1[0]
            zmm2.d = zmm2.d f/ zmm3
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            float var_14 = temp0[0]
            float var_10 = temp0_1[0]
            return sub_141e81570(rdi, &var_18, zmm2)
        
        if ((*(arg1 + 0x328) & 1) != 0)
            zmm3 = *(arg1 + 0x25c)
            
            if (not(zmm3 f>= 9.99999975e-05f))
                zmm3 = 0x38d1b717
            
            goto label_141e80901

return 1
