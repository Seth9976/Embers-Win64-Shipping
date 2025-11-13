// 函数: sub_141a7fc30
// 地址: 0x141a7fc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
uint32_t zmm3[0x4] = arg3
float (* rbx)[0x4] = arg2
int32_t rbp = (r8 - 1).d

if (r8.d == 0)
    *arg2 = *arg4
    return arg2

int32_t* r10 = *arg1
int32_t r9 = (r8 - 1).d

if (zmm3[0] f< *r10)
    *rbx = *(r10 + 0x10)
else
    int64_t rdi_1 = r8 - 1
    int32_t rsi_1 = 0
    
    if (not(zmm3[0] f>= r10[rdi_1 * 0x14]))
        r9 = 0
        
        if (r8.d s> 1)
            do
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r8.d + r9)
                int32_t rax_7 = (temp1_1 - temp0_1) s>> 1
                float temp2_1 = r10[sx.q(rax_7) * 0x14]
                zmm3[0] f- temp2_1
                
                if (zmm3[0] f< temp2_1)
                    r8 = zx.q(rax_7)
                
                if (zmm3[0] f< temp2_1)
                    rax_7 = r9
                
                r9 = rax_7
            while (r8.d - r9 s> 1)
    
    if (r9 == 0xffffffff)
        *rbx = *(r10 + 0x10)
    else if (r9 != rbp)
    label_141a7fd17:
        
        if (arg1[2].b == 0 || r9 != rbp)
            r8.b = 0
        else
            r8.b = 1
        
        int64_t rcx_2 = sx.q(r9) * 0xa
        
        if (r8.b == 0)
            rsi_1 = r9 + 1
        
        int64_t rdx_4 = sx.q(rsi_1) * 0xa
        
        if (r8.b == 0)
            arg3 = r10[rdx_4 * 2]
            arg3[0] = arg3[0] f- r10[rcx_2 * 2]
        else
            arg3 = *(arg1 + 0x14)
        
        arg3 = _mm_shuffle_ps(arg3, arg3, 0)
        char rax_15
        
        if (not(arg3[0] <= 0f))
            rax_15 = r10[rcx_2 * 2 + 0x10].b
        
        if (arg3[0] <= 0f || rax_15 == 2)
            *rbx = *(r10 + (rcx_2 << 3) + 0x10)
        else
            int32_t* r9_2 = &r10[4 + rdx_4 * 2]
            void* r11_1 = &r10[rcx_2 * 2]
            zmm3[0] = zmm3[0] f- r10[rcx_2 * 2]
            zmm3[0] = zmm3[0] f/ arg3[0]
            float var_28
            
            if (rax_15 != 0)
                uint32_t var_40_1 = zmm3[0]
                float var_24_1 = arg3[0] f* r10[rcx_2 * 2 + 0xd]
                float var_38[0x4] = _mm_mul_ps(*(r10 + (rdx_4 << 3) + 0x20), arg3)
                arg3[0] = arg3[0] f* r10[rcx_2 * 2 + 0xc]
                var_28 = arg3[0]
                arg3[0] = arg3[0] f* r10[rcx_2 * 2 + 0xe]
                arg3[0] = arg3[0] f* r10[rcx_2 * 2 + 0xf]
                float var_20_1 = arg3[0]
                float var_1c_1 = arg3[0]
                sub_140ae1530(rbx, r11_1 + 0x10, &var_28, r9_2, &var_38, var_40_1)
            else
                float zmm6_1[0x4] = *sub_140ae0e60(&var_28, r11_1 + 0x10, r9_2, zmm3)
                *rbx = zmm6_1
                float zmm5_1[0x4] = data_143f2b570
                float zmm1_1[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                float zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                zmm3 = _mm_mul_ps(zmm4_1, zmm5_1)
                float zmm2[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3)), 
                        zmm1_1), 
                    zmm1_1)
                zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
                float zmm0_1[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
                *rbx = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, zmm2), zmm2), zmm6_1)
                        ^ data_143f2b560, 
                    zmm0_1) ^ data_143f2b560
    else
        int64_t rax_11 = rdi_1 * 0xa
        
        if (arg1[2].b != 0)
            float zmm0[0x4] = *(arg1 + 0x14)
            zmm0[0] = zmm0[0] f+ r10[rax_11 * 2]
            
            if (not(zmm3[0] f>= zmm0[0]))
                goto label_141a7fd17
            
            *rbx = *(r10 + 0x10)
        else
            *rbx = *(r10 + (rax_11 << 3) + 0x10)

return rbx
