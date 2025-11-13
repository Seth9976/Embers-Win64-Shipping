// 函数: sub_141c5d150
// 地址: 0x141c5d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7
void* result

if ((*(arg3 + 0x100) & 0x800) == 0)
    int64_t r8 = sx.q(*(arg1 + 0x8b0))
    int64_t rdi_3 = 0
    int32_t rdx_3 = 0
    int64_t rbp_3
    void* rbp_4
    void* r11_1
    int32_t* r15_3
    
    if (r8.d s> 0)
        r11_1 = *(arg1 + 0x8a8)
        int64_t rcx_3 = 0
        int32_t* rax_6 = r11_1 + 4
        
        while (not(arg4.d f<= *rax_6))
            rdx_3 += 1
            rcx_3 += 1
            rax_6 = &rax_6[4]
            
            if (rcx_3 s>= r8)
                goto label_141c5d2e8
        
        int32_t rcx_4 = r8.d
        r15_3 = (sx.q(rdx_3) << 4) + r11_1
        
        if (rdx_3 - 1 s>= 0)
            rcx_4 = rdx_3
        
        rbp_3 = sx.q(rcx_4 - 1) << 4
        rbp_4 = rbp_3 + r11_1
    
    if (r8.d s<= 0 || rbp_3 == neg.q(r11_1))
    label_141c5d2e8:
        r15_3 = *(arg1 + 0x8a8)
        rbp_4 = &r15_3[sx.q((r8 - 1).d) * 4]
    
    uint128_t zmm0 = r15_3[1]
    uint128_t zmm1 = *(rbp_4 + 4)
    
    if (not(zmm0.d f>= zmm1.d))
        zmm0.d = zmm0.d f+ 360f
    
    if (not(arg4.d f>= zmm1.d))
        arg4.d = arg4.d f+ 360f
    
    arg4.d = arg4.d f- zmm1.d
    zmm0.d = zmm0.d f- zmm1.d
    arg4.d = arg4.d f/ zmm0.d
    uint128_t zmm9
    uint128_t zmm10
    
    if (*(arg1 + 0x8d1) != 1)
        zmm9 = 0x3f800000
        zmm10 = arg4
        zmm7.d = 1f f- arg4.d
    else
        arg4.d = arg4.d f* 1.57079637f
        zmm0.d = arg4.d f* 0.159154937f
        
        if (arg4.d f< 0f)
            zmm0.d = zmm0.d f- 0.5f
        else
            zmm0.d = zmm0.d f+ 0.5f
        
        zmm9 = 0x3f800000
        zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
        arg4.d = arg4.d f- zmm0.d
        int32_t zmm4
        
        if (not(arg4.d f<= 1.57079637f))
            zmm4 = 0xbf800000
            zmm0.d = 3.14159274f f- arg4.d
            arg4 = zmm0
        else if (arg4.d f>= -1.57079637f)
            zmm4 = 0x3f800000
        else
            zmm4 = 0xbf800000
            zmm0.d = -3.14159274f f- arg4.d
            arg4 = zmm0
        
        zmm1.d = arg4.d f* arg4.d
        zmm0.d = zmm1.d f* 2.3889859e-08f
        zmm10.d = 2.75255616e-06f f- zmm0.d
        zmm0.d = zmm1.d f* 2.60516146e-07f
        zmm7.d = 2.47604949e-05f f- zmm0.d
        zmm10.d = zmm10.d f* zmm1.d
        zmm10.d = zmm10.d f- 0.000198408743f
        zmm7.d = zmm7.d f* zmm1.d
        zmm7.d = zmm7.d f- 0.00138883782f
        zmm10.d = zmm10.d f* zmm1.d
        zmm10.d = zmm10.d f+ 0.00833333097f
        zmm7.d = zmm7.d f* zmm1.d
        zmm7.d = zmm7.d f+ 0.0416666381f
        zmm10.d = zmm10.d f* zmm1.d
        zmm10.d = zmm10.d f- 0.166666672f
        zmm7.d = zmm7.d f* zmm1.d
        zmm7.d = zmm7.d f- 0.5f
        zmm10.d = zmm10.d f* zmm1.d
        zmm10.d = zmm10.d f+ 1f
        zmm7.d = zmm7.d f* zmm1.d
        zmm7.d = zmm7.d f+ 1f
        zmm10.d = zmm10.d f* arg4.d
        zmm7.d = zmm7.d f* zmm4
        
        if (zmm10.d f>= 0f)
            zmm10 = _mm_min_ss(zmm10.d, 0x3f800000)
        else
            zmm10 = zx.o(0)
        
        if (zmm7.d f>= 0f)
            zmm7 = _mm_min_ss(zmm7.d, 0x3f800000)
        else
            zmm7 = zx.o(0)
    
    zmm1 = arg5
    uint128_t zmm8 = zx.o(0)
    zmm1.d = zmm1.d f* zmm1.d
    
    if (not(zmm1.d f<= zmm9.d))
        zmm0.d = zmm9.d f/ zmm1.d
        zmm8.d = zmm9.d f- zmm0.d
    
    int32_t rax_10 = (r8 - 1).d
    
    if (r8.d s<= 4)
        rax_10 = r8.d
    
    zmm9.d = zmm9.d f/ _mm_cvtepi32_ps(zx.o(rax_10)).d
    uint128_t zmm12
    
    if (zmm8.d f!= 0f)
        zmm12.d = zmm9.d f* zmm8.d
    else
        zmm12 = zx.o(0)
    
    int32_t* r14_3 = *(arg1 + 0x968)
    result = &r14_3[sx.q(*(arg1 + 0x970))]
    uint64_t r12_2 = sx.q(*(arg1 + 0x970)) << 2 u>> 2
    
    if (r14_3 u> result)
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            int32_t rax_12 = *r14_3
            zmm6 = zmm12
            
            if (rax_12 != 3)
                if (rax_12 != *rbp_4)
                    if (rax_12 == *r15_3)
                        if (zmm8.d f!= 0f)
                            zmm6.d = zmm9.d f- zmm10.d
                            zmm6.d = zmm6.d f* zmm8.d
                            zmm6.d = zmm6.d f+ zmm10.d
                        else
                            zmm6 = zmm10
                else if (zmm8.d f!= 0f)
                    zmm6.d = zmm9.d f- zmm7.d
                    zmm6.d = zmm6.d f* zmm8.d
                    zmm6.d = zmm6.d f+ zmm7.d
                else
                    zmm6 = zmm7
                
                if (rax_12 == 2)
                    zmm6 = _mm_max_ss((*(arg3 + 0xe4)).d, zmm6.d)
            else
                zmm6 = *(arg3 + 0xf4)
            
            int64_t rsi_2 = sx.q(arg6[1].d)
            int32_t rax_13 = (rsi_2 + 1).d
            arg6[1].d = rax_13
            
            if (rax_13 s> *(arg6 + 0xc))
                sub_140775270(arg6)
            
            result = *arg6
            r14_3 = &r14_3[1]
            rdi_3 += 1
            *(result + (rsi_2 << 2)) = zmm6.d
        while (rdi_3 != r12_2)
else if (arg2 != 2)
    int64_t rdi_2 = 0
    int32_t* rbp_1 = *(arg1 + 0x968)
    result = &rbp_1[sx.q(*(arg1 + 0x970))]
    uint64_t r14_2 = sx.q(*(arg1 + 0x970)) << 2 u>> 2
    
    if (rbp_1 u> result)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            if (*rbp_1 != 2)
                zmm6 = zx.o(0)
            else
                zmm6 = 0x3f800000
            
            int64_t rsi_1 = sx.q(arg6[1].d)
            int32_t rax_5 = (rsi_1 + 1).d
            arg6[1].d = rax_5
            
            if (rax_5 s> *(arg6 + 0xc))
                sub_140775270(arg6)
            
            result = *arg6
            rbp_1 = &rbp_1[1]
            rdi_2 += 1
            *(result + (rsi_1 << 2)) = zmm6.d
        while (rdi_2 != r14_2)
else
    int64_t rdi = sx.q(arg6[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg6[1].d = rax_1
    
    if (rax_1 s> *(arg6 + 0xc))
        sub_140775270(arg6)
    
    *(*arg6 + (rdi << 2)) = data_143a13cb0.d
    int64_t rdi_1 = sx.q(arg6[1].d)
    int32_t rax_3 = (rdi_1 + 1).d
    arg6[1].d = rax_3
    
    if (rax_3 s> *(arg6 + 0xc))
        sub_140775270(arg6)
    
    result = *arg6
    *(result + (rdi_1 << 2)) = data_143a13cb0.d

return result
