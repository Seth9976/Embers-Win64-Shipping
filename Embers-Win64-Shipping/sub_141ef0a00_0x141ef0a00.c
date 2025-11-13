// 函数: sub_141ef0a00
// 地址: 0x141ef0a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = zx.o(0)
float zmm8[0x4] = arg2
int64_t rbp

if (0f f== *(arg3 + 0x74))
    rbp.b = 0
else
    rbp.b = 1

uint64_t result = sub_1424b0d70()
uint64_t result_1 = result
void* rdi = *(result + 0x118)

if (rdi != 0)
label_141ef0a71:
    
    if (*(rdi + 0x2ac) != 0 && rbp.b != 0)
        void* rax = sub_1405be820(arg1)
        float zmm5_1 = *(arg3 + 0x88)
        zmm8[0] = zmm8[0] f- *(arg3 + 0x60)
        int128_t zmm7 = *(rax + 0x520)
        float zmm2 = (zmm7.d f- *(arg3 + 8)) f* *(arg1[0x29] + 0x98)
        zmm8[0] = zmm8[0] - zmm2
        float zmm3 = zmm5_1 + zmm8[0]
        zmm8[0] = zmm8[0] f+ *(arg3 + 0x84)
        float zmm0_1 = zmm3
        *(arg3 + 0x84) = zmm8[0]
        arg2 = *(rdi + 0x2bc)
        
        if (not(arg2[0] <= 0f))
            arg2[0] = arg2[0] * zmm2
            
            if (zmm0_1 <= 0f)
                arg2[0] = arg2[0] + zmm0_1
                zmm0_1 = _mm_min_ss(arg2[0], 0)
            else
                zmm0_1 = _mm_max_ss(zmm0_1 - arg2[0], 0)
        
        float temp0_3[0x4] = _mm_max_ss((*(rdi + 0x2b4))[0], zmm0_1)
        zmm0_1 = zmm8[0]
        
        if (not(zmm3 == 0f))
            zmm0_1 = temp0_3[0] / zmm3 * zmm8[0]
        
        if (*(arg3 + 0x8c) == 0 || zmm5_1 <= 0f)
            result.b = 0
        else
            result.b = 1
        
        *(arg3 + 0x8c) = result.b
        
        if (result.b == 0)
            if (temp0_3[0] f<= *(rdi + 0x2b0))
                *(arg3 + 0x88) = temp0_3[0]
            else
                if (*(rdi + 0x2ad) == result.b)
                    zmm2 = (zx.o(0)).d
                else
                    zmm2 = temp0_3[0]
                    *(arg3 + 0x8c) = 1
                    zmm2 = zmm2 - zmm0_1
                
                *(arg3 + 0x88) = zmm2
                float var_58_1 = zmm8[0]
                (*(*arg1 + 0x9e0))(arg1)
                result = zx.q(*(arg3 + 0x8c))
        
        if (result.b != 0)
            if (*(rdi + 0x2c0) != 0)
                *(arg3 + 0x80) |= 1
            
            zmm7.d = zmm7.d f- *(arg3 + 8)
            int64_t* rcx_3 = arg1[0x29]
            zmm7.d = zmm7.d f* rcx_3[0x13].d
            result_1.b = zmm7.d f> 0f
            float zmm0_2[0x4]
            zmm0_2, result = sub_141dc5480(rcx_3, zmm0_1)
            zmm0_2[0] = zmm0_2[0] f* *(arg3 + 0x7c)
            arg2 = *(arg3 + 0x94)
            zmm8[0] = zmm8[0] f- *(arg3 + 0x60)
            float temp0_4[0x4] = _mm_min_ss(zmm0_2[0], zmm8[0])
            
            if (result_1.b == 0)
                arg2[0] = arg2[0] + temp0_4[0]
                *(arg3 + 0x94) = arg2[0]
            
            arg2[0] = arg2[0] + temp0_4[0]
            arg2 = _mm_min_ss(arg2[0], zmm7.d)
            
            if (not(arg2[0] >= 0f))
                arg2 = zx.o(0)
            
            if (result_1.b != 0)
                *(arg3 + 0x94) = 0
            
            zmm0_2 = *(rdi + 0x2b8)
            
            if (not(zmm0_2[0] < 0f))
                zmm6 = __minss_xmmss_memss(zmm0_2[0], 0x3f800000)
            
            zmm2 = *(arg3 + 0x88)
            zmm0_2 = arg2
            zmm6[0] = zmm6[0] * arg2[0]
            float temp0_7[0x4] = _mm_min_ss(zmm6[0], zmm2)
            zmm0_2[0] = zmm0_2[0] - temp0_7[0]
            
            if (not(zmm0_2[0] >= 9.99999997e-07f))
                zmm0_2 = 0x358637bd
            
            arg2[0] = arg2[0] - zmm0_2[0]
            *(arg3 + 0x90) = zmm0_2[0]
            *(arg3 + 0x88) = zmm2 - arg2[0]
else
    int64_t rdx_1 = *result
    result = (*(rdx_1 + 0x390))(result, rdx_1)
    rdi = *(result_1 + 0x118)
    
    if (rdi != 0)
        goto label_141ef0a71

return result
