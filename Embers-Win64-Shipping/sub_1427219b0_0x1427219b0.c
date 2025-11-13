// 函数: sub_1427219b0
// 地址: 0x1427219b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg5 = 0x3f800000
int32_t zmm4 = *(arg2 + 8)

if (not(zmm4 f== -1f))
    float zmm3 = *(arg3 + 0x10)
    
    if (zmm3 f!= data_143b58120 || data_143b58124[0] f!= *(arg3 + 0x14)
            || not(data_143b58128[0] f== *(arg3 + 0x18)))
        void* rcx = *(arg4 + 0x130)
        int64_t var_18
        float var_10
        float zmm1[0x4]
        
        if (rcx == 0)
            var_18 = data_143dbb1f8.q
            var_10 = data_143dbb200
        else
            zmm1 = *(rcx + 0x1d0)
            var_18.d = zmm1[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_10 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_18:4.d = temp0_1[0]
        
        float zmm2 = *(arg3 + 0x14)
        zmm1 = zx.o(var_18)
        zmm3 = zmm3 - zmm1[0]
        float zmm0[0x4] = zmm1
        zmm1 = *(arg3 + 0x18)
        zmm1[0] = zmm1[0] - var_10
        zmm2 = zmm2 - _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
        zmm1[0] = zmm1[0] * zmm1[0]
        float rax_3
        rax_3.b = zmm4 f>= zmm2 * zmm2 + zmm3 * zmm3 + zmm1[0]
        return rax_3

int32_t* rax
rax.b = 0
return rax
