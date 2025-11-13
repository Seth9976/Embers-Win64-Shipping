// 函数: sub_141eddc60
// 地址: 0x141eddc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm5 = arg2[0]

if (not(arg4[0] <= 0f))
    float zmm0 = *(arg3 + 0x18)
    zmm6 = *(arg3 + 0x24)
    void* rdx_1 = *(arg1[0x29] + 0x290)
    int64_t rax_2 = *arg1
    float zmm4[0x4] = *(rdx_1 + 0x1e0)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
    temp0_1[0] = temp0_1[0] f* *(rdx_1 + 0x420)
    float temp0_3[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm4, zmm4, 0x55)[0], zmm4[0])
    zmm0 = zmm0 - temp0_1[0]
    temp0_3[0] = temp0_3[0] f* *(rdx_1 + 0x424)
    zmm6[0] = zmm6[0] - zmm0
    float temp0_4 = _mm_max_ss(arg4[0], 0)
    float temp0_5[0x4] = _mm_max_ss(zmm6[0], 0)
    temp0_3[0] = temp0_3[0] + temp0_4
    arg4[0] = arg4[0] - temp0_5[0]
    (*(rax_2 + 0x8b0))(arg1, arg3 + 0x10, _mm_max_ss(arg4[0], 0), temp0_3, arg5, zmm5, 0)
    int32_t rcx = *arg5
    
    if ((rcx.b & 3) == 3)
        temp0_5[0] = temp0_5[0] f+ arg5[1]
        
        if (temp0_5[0] <= arg4[0])
            return 1
        
        *arg5 = rcx & 0xfffffffd

return 0
