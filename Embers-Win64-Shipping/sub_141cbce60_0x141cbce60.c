// 函数: sub_141cbce60
// 地址: 0x141cbce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
int32_t rcx = 0x1234
int128_t zmm7
int128_t var_28 = zmm7
int32_t r8 = 0
float zmm8[0x4]
float var_38[0x4] = zmm8
int64_t r9 = 0x30d40
int128_t zmm9
int128_t var_48 = zmm9
float zmm11[0x4]
float var_68[0x4] = zmm11
float zmm13[0x4] = 0x40400000
int32_t rax_19
float result[0x4]

while (true)
    zmm11 = (rcx * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
    zmm11[0] = zmm11[0] - 1f
    zmm8 = ((rcx * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm8[0] = zmm8[0] - 1f
    rcx = ((rcx * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
    zmm11[0] = zmm11[0] - 1f
    zmm8[0] = zmm8[0] + zmm8[0]
    zmm9.d = (rcx u>> 9 | 0x3f800000).d f- 1f
    zmm8[0] = zmm8[0] - 1f
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm9.d = zmm9.d f+ zmm9.d
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm9.d = zmm9.d f- 1f
    zmm8[0] = zmm8[0] + zmm11[0]
    zmm8[0] = zmm8[0] + zmm9.d f* zmm9.d
    
    if (not(zmm8[0] > 1f) && not(zmm8[0] < 9.99999975e-05f))
        float zmm2[0x4] = 0x3f000000
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
        zmm8[0] = zmm8[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm2[0] = 0.5f - zmm8[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * zmm2[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        result = 0x3f000000
        zmm8[0] = zmm8[0] * temp0_1[0] * temp0_1[0]
        float zmm1 = temp0_1[0]
        result[0] = 0.5f - zmm8[0]
        temp0_1[0] = temp0_1[0] + zmm1 * result[0]
        zmm11[0] = zmm11[0] * temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
        zmm9.d = zmm9.d f* temp0_1[0]
        zmm11[0] = zmm11[0] * zmm13[0]
        zmm8[0] = zmm8[0] * zmm13[0]
        zmm9.d = zmm9.d f* zmm13[0]
        float arg_8 = temp0_1[0]
        float zmm5[0x4]
        
        while (true)
            zmm6 = (rcx * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
            zmm6[0] = zmm6[0] - 1f
            zmm5 = ((rcx * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
            zmm6[0] = zmm6[0] + zmm6[0]
            zmm5[0] = zmm5[0] - 1f
            rcx = ((rcx * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
            zmm6[0] = zmm6[0] - 1f
            zmm5[0] = zmm5[0] + zmm5[0]
            zmm7.d = (rcx u>> 9 | 0x3f800000).d f- 1f
            zmm5[0] = zmm5[0] - 1f
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm7.d = zmm7.d f+ zmm7.d
            zmm5[0] = zmm5[0] * zmm5[0]
            zmm7.d = zmm7.d f- 1f
            zmm5[0] = zmm5[0] + zmm6[0]
            zmm5[0] = zmm5[0] + zmm7.d f* zmm7.d
            
            if (not(zmm5[0] > 1f))
                if (not(zmm5[0] < 9.99999975e-05f))
                    break
        
        zmm2 = 0x3f000000
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm5[0], zmm5[0])
        zmm5[0] = zmm5[0] * 0.5f
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm2[0] = 0.5f - zmm5[0] * temp0_2[0]
        temp0_2[0] = temp0_2[0] * zmm2[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        result = 0x3f000000
        zmm5[0] = zmm5[0] * temp0_2[0] * temp0_2[0]
        zmm1 = temp0_2[0]
        result[0] = 0.5f - zmm5[0]
        temp0_2[0] = temp0_2[0] + zmm1 * result[0]
        zmm5[0] = zmm5[0] * temp0_2[0]
        zmm6[0] = zmm6[0] * temp0_2[0]
        zmm7.d = zmm7.d f* temp0_2[0]
        zmm6[0] = zmm6[0] * zmm13[0]
        zmm7.d = zmm7.d f* zmm13[0]
        zmm5[0] = zmm5[0] * zmm13[0]
        zmm6[0] = zmm6[0] - zmm11[0]
        arg_8 = temp0_2[0]
        zmm7.d = zmm7.d f- zmm9.d
        zmm5[0] = zmm5[0] - zmm8[0]
        zmm6[0] = zmm6[0] * -2f
        zmm5[0] = zmm5[0] * -2f
        zmm5[0] = zmm5[0] * -1.99999988f
        zmm1 = zmm7.d * 1.99999988f - zmm6[0]
        zmm5[0] = zmm5[0] * 2.19999981f
        zmm5[0] = zmm5[0] * -2f
        zmm5[0] = zmm5[0] - zmm5[0]
        int32_t rdx_4
        
        if (zmm5[0] < 9.99999975e-06f)
            rdx_4.b = 0
        else
            zmm11[0] = zmm11[0] - 0.100000001f
            zmm8[0] = zmm8[0] - 0.200000003f
            zmm9.d = zmm9.d f- 2.29999995f
            zmm11[0] = zmm11[0] * zmm5[0]
            zmm8[0] = zmm8[0] * zmm1
            zmm1 = zmm9.d * zmm5[0]
            zmm8[0] = zmm8[0] + zmm11[0]
            zmm8[0] = zmm8[0] + zmm1
            
            if (zmm8[0] < 0f || zmm8[0] > zmm5[0])
                rdx_4.b = 0
            else
                zmm9.d = zmm9.d f* 2.19999981f
                zmm11[0] = zmm11[0] * -2f
                zmm8[0] = zmm8[0] * 2.19999981f
                zmm9.d = zmm9.d f+ zmm11[0]
                zmm1 = zmm8[0] f* zmm7.d
                zmm9.d = zmm9.d f* zmm5[0]
                zmm8[0] = zmm8[0] * 2f
                zmm8[0] = zmm8[0] * zmm6[0]
                zmm9.d = zmm9.d f+ zmm8[0]
                zmm1 = zmm1 f- zmm9.d
                
                if (zmm1 < 0f || zmm1 + zmm8[0] > zmm5[0])
                    rdx_4.b = 0
                else
                    zmm8[0] = zmm8[0] * -3.99999976f
                    zmm8[0] = zmm8[0] * 2f
                    zmm8[0] = zmm8[0] - zmm8[0]
                    zmm8[0] = zmm8[0] / zmm5[0]
                    rdx_4.b = zmm8[0] >= 0f
        
        zmm13 = 0x40400000
        rax_19 = r8 + 1
        
        if (rdx_4.b == 0)
            rax_19 = r8
        
        r8 = rax_19
        int64_t temp0_3 = r9
        r9 -= 1
        
        if (temp0_3 == 1)
            break

result = zx.o(0)
result[0] = float.s(rax_19)
result[0] = result[0] * 4.99999987e-06f
return result
