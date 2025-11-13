// 函数: sub_14208c3e0
// 地址: 0x14208c3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0xa0))
float zmm5 = arg2[0]

if (result.d == 0)
    return result

float zmm3 = 3.39999995e+38f
int32_t j = 0
int32_t zmm4 = (zx.o(0)).d
int64_t rbx = result
int64_t rdi
rdi.b = 0

if (result.d s> 0)
    int32_t* r11_1 = *arg3
    int128_t* r10_1 = nullptr
    void* r8 = &r11_1[sx.q(arg3[1].d)]
    int64_t i
    
    do
        int32_t* rax_1 = r11_1
        
        if (r11_1 == r8)
        label_14208c471:
            int64_t r9 = *(arg1 + 0x98)
            void* rax_2 = *(r10_1 + r9 + 8)
            float zmm2[0x4] = *(r10_1 + r9)
            arg2 = zmm2
            float zmm0[0x4]
            
            if (rax_2 != 0)
                zmm0 = *(r10_1 + r9 + 0x14)
                zmm0[0] = zmm0[0] f+ *(r10_1 + r9 + 0x10)
                arg2 = *(rax_2 + 0x90)
                arg2[0] = arg2[0] - zmm0[0]
                arg2[0] = arg2[0] f/ *(r10_1 + r9 + 0x18)
                arg2 = _mm_max_ss(arg2[0], 0x3c23d70a)
                arg2[0] = arg2[0] + zmm2[0]
            
            if (j s< *(arg1 + 0xa0) - 1)
                int32_t* rcx = r11_1
                
                if (r11_1 != r8)
                    do
                        if (*rcx == j + 1)
                            goto label_14208c4e9
                        
                        rcx = &rcx[1]
                    while (rcx != r8)
                
                arg2 = _mm_min_ss((*(r10_1 + r9 + 0x20))[0], arg2[0])
            
        label_14208c4e9:
            zmm2[0] = zmm2[0] - zmm5
            zmm0 = _mm_and_ps(zmm2, 0x7fffffff)
            
            if (not(zmm0[0] >= zmm3))
                zmm4 = zmm2[0]
                rdi.b = 1
            
            float temp0_4[0x4] = _mm_min_ss(zmm0[0], zmm3)
            arg2[0] = arg2[0] - zmm5
            zmm3 = temp0_4[0]
            zmm2 = _mm_and_ps(arg2, 0x7fffffff)
            
            if (not(zmm2[0] >= temp0_4[0]))
                zmm4 = arg2[0]
                zmm3 = zmm2[0]
                rdi.b = 1
        else
            while (*rax_1 != j)
                rax_1 = &rax_1[1]
                
                if (rax_1 == r8)
                    goto label_14208c471
        
        j += 1
        r10_1 = &r10_1[2]
        i = rbx
        rbx -= 1
    while (i != 1)

*arg4 = zmm4
return zx.q(rdi.b)
