// 函数: sub_141ee77b0
// 地址: 0x141ee77b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg3)

if ((result.b & 1) == 0)
    result.b = 0
else
    int128_t zmm0
    
    if ((result.b & 2) == 0)
        if ((*(*arg1 + 0x820))(arg1, arg3).b == 0)
            result.b = 0
        else
            zmm0 = *(arg3 + 0x18)
            void* rcx = *(arg1[0x29] + 0x290)
            float zmm1[0x4] = *(rcx + 0x1e0)
            float temp0_2[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm1, zmm1, 0x55)[0], zmm1[0])
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            temp0_3[0] = temp0_3[0] f* *(rcx + 0x420)
            temp0_2[0] = temp0_2[0] f* *(rcx + 0x424)
            zmm0.d = zmm0.d f- temp0_3[0]
            zmm0.d = zmm0.d f+ temp0_2[0]
            
            if (zmm0.d f<= *(arg3 + 0x24))
                result.b = 0
            else
                int512_t zmm3
                zmm3.o = temp0_2
                
                if ((*(*arg1 + 0x898))(arg1, &arg3[0x10], &arg3[0x1c], zmm3).b != 0)
                    goto label_141ee7873
                
                result.b = 0
    else if (9.99999975e-05f f> *(arg3 + 0x30))
        result.b = 0
    else
    label_141ee7873:
        zmm0 = data_143264930
        int32_t var_a8 = var_a8 & 0xfffffff8
        int128_t var_38_1 = zmm0
        int64_t var_28_1 = 0
        int64_t var_20_1 = 0
        int64_t var_a4_1 = 0
        int32_t var_3c_1 = 0xffffffff
        void var_9c
        memset(&var_9c, 0, 0x88)
        int32_t var_94_1 = 0x3f800000
        (*(*arg1 + 0x8a0))(arg1, arg2, &var_a8, 0, arg3)
        
        if ((var_a8 & 3).b != 3)
            result.b = 0
        else
            result.b = 1

return result
