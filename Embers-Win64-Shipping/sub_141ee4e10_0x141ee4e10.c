// 函数: sub_141ee4e10
// 地址: 0x141ee4e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* result = arg2
void* rsi = *(arg1 + 0x148)
int32_t rax = data_143dbb200
*arg2 = data_143dbb1f8.q
arg2[1].d = rax

if (rsi != 0)
    int64_t* rsi_1 = *(rsi + 0x298)
    
    if (sub_141ea5e60(rsi_1) != 0)
        float var_38
        sub_141ea3d30(&var_38, rsi_1, *(*(arg1 + 0x148) + 0x2a0))
        char rax_2 = *(arg1 + 0x387)
        float zmm0_1[0x4]
        float zmm1
        float zmm2[0x4]
        int32_t var_34
        int32_t var_30
        
        if ((rax_2 & 0x10) == 0)
            zmm0_1 = var_30
            zmm2 = var_34
            zmm1 = var_38
        else
            void* r8_3 = *(arg1 + 0x148)
            void* rax_3 = *(r8_3 + 0x290)
            float zmm3[0x4] = *(rax_3 + 0x1e0)
            zmm1 = *(rax_3 + 0x420)
            void* rax_4 = *(arg1 + 0xb0)
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            temp0_1[0] = temp0_1[0] * zmm1
            zmm2 = *(rax_4 + 0x1d0)
            float var_28 = zmm2[0]
            float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            temp0_3[0] = temp0_3[0] - temp0_1[0]
            float var_24_1 = temp0_2[0]
            float var_20_1 = temp0_3[0]
            float var_18
            sub_141ea3a60(&var_18, rsi_1, *(r8_3 + 0x2a0), &var_28)
            zmm2 = var_34
            zmm0_1 = var_30
            zmm1 = var_38 + var_18
            int32_t var_14
            zmm2[0] = zmm2[0] f+ var_14
            int32_t var_10
            zmm0_1[0] = zmm0_1[0] f+ var_10
            rax_2 = *(arg1 + 0x387)
        
        if ((rax_2 & 2) != 0)
            *result = zmm1
        
        if ((rax_2 & 4) != 0)
            result[1] = zmm2[0]
        
        if ((rax_2 & 8) == 0)
            return result
        
        result[2] = zmm0_1[0]

return result
