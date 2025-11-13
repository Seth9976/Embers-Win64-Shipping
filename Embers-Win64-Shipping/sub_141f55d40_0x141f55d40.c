// 函数: sub_141f55d40
// 地址: 0x141f55d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
int64_t result_1 = result
int32_t r15 = (result - 1).d

if (result.d s> 0)
    int64_t rdi_1 = 0
    int32_t rbp_1 = 1
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int64_t r14_1 = sx.q(r15)
    
    do
        int32_t rax
        
        if (rdi_1 != 0)
            rax = rbp_1 - 2
        else
            rax = 0
            
            if (arg1[2].b != rdi_1.b)
                rax = r15
        
        int32_t rdx
        
        if (rdi_1 != r14_1)
            rdx = rbp_1
        else
            rdx = r15
            
            if (arg1[2].b != 0)
                rdx = 0
        
        int64_t rcx = *arg1
        int32_t* rbx_3 = rdi_1 * 0x50 + rcx
        float (* r9_3)[0x4] = sx.q(rax) * 0x50 + rcx
        int128_t* r8_2 = sx.q(rdx) * 0x50 + rcx
        uint32_t rcx_1 = zx.d(rbx_3[0x10].b)
        result = zx.q(rcx_1 - 1)
        float zmm1[0x4]
        float zmm2
        float zmm3[0x4]
        
        if ((result.b & 0xfb) == 0)
            if (arg3 == 0 || (rdi_1 != 0 && (rdi_1 != r14_1 || arg1[2].b != 0)))
                result = zx.q(r9_3[4][0].b)
                
                if (result.b == 1)
                label_141f55ec5:
                    char rax_3 = arg1[2].b
                    
                    if (rax_3 == 0 || rdi_1 != 0)
                        *r9_3
                    else
                        zmm7.d = (*rbx_3).d f- *(arg1 + 0x14)
                    
                    if (rax_3 == 0 || rdi_1 != r14_1)
                        *r8_2
                    else
                        zmm6 = *(arg1 + 0x14)
                        zmm6[0] = zmm6[0] f+ *rbx_3
                    
                    int32_t var_98
                    int32_t* var_a8_1 = &var_98
                    float zmm8[0x4]
                    int32_t zmm9_1
                    float zmm10_1[0x4]
                    result, zmm6, zmm7, zmm8, zmm9_1, zmm10_1 =
                        sub_140acef50(&r9_3[1], &rbx_3[4], &r8_2[1], r9_3)
                    float zmm4_1[0x4] = var_98
                    zmm6[0] = zmm6[0] f- zmm7.d
                    int32_t var_94
                    zmm1 = var_94
                    int32_t var_8c
                    zmm3 = var_8c
                    float temp0_5[0x4] = _mm_max_ss(zmm6[0], zmm9_1)
                    zmm10_1[0] = zmm10_1[0] / temp0_5[0]
                    zmm4_1[0] = zmm4_1[0] * zmm10_1[0]
                    zmm1[0] = zmm1[0] * zmm10_1[0]
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                    float var_90
                    zmm2 = var_90 * zmm10_1[0]
                    temp0_6[0] = zmm1[0]
                    zmm3[0] = zmm3[0] * zmm10_1[0]
                    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
                    temp0_7[0] = zmm2
                    float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
                    temp0_8[0] = zmm3[0]
                    float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
                    var_98.o = temp0_9
                    *(rbx_3 + 0x20) = temp0_9
                    *(rbx_3 + 0x30) = temp0_9
                else
                    result.b -= 3
                    
                    if (result.b u<= 2)
                        goto label_141f55ec5
                    
                    *(rbx_3 + 0x20) = r9_3[2]
                    *(rbx_3 + 0x30) = r9_3[3]
            else
                data_142d3f660
                __builtin_memcpy(&rbx_3[8], 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x"
                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                    0x20)
        else if (rcx_1.b == 0)
            zmm3 = r8_2[1].d
            zmm3[0] = zmm3[0] f- rbx_3[4]
            float zmm0[0x4] = *(r8_2 + 0x14)
            zmm0[0] = zmm0[0] f- rbx_3[5]
            zmm1 = *(r8_2 + 0x18)
            zmm1[0] = zmm1[0] f- rbx_3[6]
            zmm2 = *(r8_2 + 0x1c) f- rbx_3[7]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_1[0] = zmm0[0]
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = zmm1[0]
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
            temp0_3[0] = zmm2
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
            *(rbx_3 + 0x20) = temp0_4
            *(rbx_3 + 0x30) = temp0_4
        else if (rcx_1.b == 2)
            data_142d3f660
            __builtin_memcpy(&rbx_3[8], 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
        rbp_1 += 1
        rdi_1 += 1
    while (rdi_1 s< result_1)

return result
