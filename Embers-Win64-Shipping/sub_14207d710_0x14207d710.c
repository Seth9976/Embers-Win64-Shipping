// 函数: sub_14207d710
// 地址: 0x14207d710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
int128_t zmm10 = arg2
int64_t result_1 = result
int32_t rsi = (result - 1).d

if (result.d s> 0)
    int64_t r9_1 = 0
    int32_t rbx_1 = 1
    int128_t zmm6
    int128_t var_28_1 = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    int64_t rdi_1 = sx.q(rsi)
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    
    do
        int32_t rax
        
        if (r9_1 != 0)
            rax = rbx_1 - 2
        else
            rax = 0
            
            if (arg1[2].b != 0)
                rax = rsi
        
        int32_t r11_1
        
        if (r9_1 != rdi_1)
            r11_1 = rbx_1
        else
            r11_1 = rsi
            
            if (arg1[2].b != 0)
                r11_1 = 0
        
        int64_t rcx = *arg1
        float* r8_1 = sx.q(rax) * 0x38 + rcx
        float* rdx_2 = r9_1 * 0x38 + rcx
        float* r11_3 = sx.q(r11_1) * 0x38 + rcx
        uint32_t rcx_1 = zx.d(rdx_2[0xd].b)
        result = zx.q(rcx_1 - 1)
        int128_t zmm0
        float zmm2
        float zmm3[0x4]
        
        if ((result.b & 0xfb) == 0)
            if (arg3 == 0 || (r9_1 != 0 && (r9_1 != rdi_1 || arg1[2].b != 0)))
                result = zx.q(r8_1[0xd].b)
                
                if (result.b == 1)
                label_14207d895:
                    result = zx.q(arg1[2].b)
                    float zmm4
                    
                    if (result.b == 0 || r9_1 != 0)
                        zmm4 = *r8_1
                    else
                        zmm4 = *rdx_2 f- *(arg1 + 0x14)
                    
                    if (result.b == 0 || r9_1 != rdi_1)
                        zmm2 = *r11_3
                    else
                        zmm2 = *(arg1 + 0x14) + *rdx_2
                    
                    zmm0 = rdx_2[1]
                    zmm2 = zmm2 - zmm4
                    arg2 = rdx_2[2]
                    zmm8 = r11_3[1]
                    zmm4 = arg2.d - r8_1[2]
                    zmm3 = rdx_2[3]
                    zmm8[0] = zmm8[0] f- zmm0.d
                    zmm0.d = zmm0.d f- r8_1[1]
                    zmm6 = rdx_2[4]
                    float temp0_5 = _mm_max_ss(zmm2, 0x38d1b717)
                    zmm7.d = 1f f- zmm10.d
                    zmm8[0] = zmm8[0] f+ zmm0.d
                    zmm0.d = r11_3[2].d f- arg2.d
                    arg2.d = zmm6.d f- r8_1[4]
                    float zmm5 = 1f / temp0_5
                    zmm8[0] = zmm8[0] f* zmm7.d
                    zmm4 = zmm4 f+ zmm0.d
                    zmm0 = r11_3[3]
                    zmm2 = zmm3[0] - r8_1[3]
                    zmm8[0] = zmm8[0] * zmm5
                    zmm0.d = zmm0.d f- zmm3[0]
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
                    zmm2 = zmm2 f+ zmm0.d
                    zmm0.d = r11_3[4].d f- zmm6.d
                    temp0_6[0] = zmm4 f* zmm7.d * zmm5
                    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
                    arg2.d = arg2.d f+ zmm0.d
                    arg2.d = arg2.d f* zmm7.d
                    temp0_7[0] = zmm2 f* zmm7.d * zmm5
                    float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
                    arg2.d = arg2.d f* zmm5
                    temp0_8[0] = arg2.d
                    float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
                    *(rdx_2 + 0x14) = temp0_9
                    *(rdx_2 + 0x24) = temp0_9
                else
                    result.b -= 3
                    
                    if (result.b u<= 2)
                        goto label_14207d895
                    
                    *(rdx_2 + 0x14) = *(r8_1 + 0x14)
                    *(rdx_2 + 0x24) = *(r8_1 + 0x24)
            else
                __builtin_memset(&rdx_2[5], 0, 0x20)
        else if (rcx_1.b == 0)
            zmm3 = r11_3[1]
            zmm3[0] = zmm3[0] - rdx_2[1]
            zmm0.d = r11_3[2].d f- rdx_2[2]
            arg2.d = r11_3[3].d f- rdx_2[3]
            zmm2 = r11_3[4] - rdx_2[4]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_1[0] = zmm0.d
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = arg2.d
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
            temp0_3[0] = zmm2
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
            *(rdx_2 + 0x14) = temp0_4
            *(rdx_2 + 0x24) = temp0_4
        else if (rcx_1.b == 2)
            __builtin_memset(&rdx_2[5], 0, 0x20)
        rbx_1 += 1
        r9_1 += 1
    while (r9_1 s< result_1)

return result
