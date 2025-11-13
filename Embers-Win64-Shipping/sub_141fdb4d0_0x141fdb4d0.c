// 函数: sub_141fdb4d0
// 地址: 0x141fdb4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
char rbp = arg3
int64_t result_1 = result
float zmm11[0x4] = arg2
int64_t result_2 = result
int32_t rcx = (result - 1).d
int32_t var_c8 = rcx

if (result.d s> 0)
    int32_t r9_1 = 1
    int32_t i = 0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int64_t rsi_1 = 0
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int64_t r10_1 = sx.q(rcx)
    int64_t var_b8_1 = r10_1
    int32_t arg_20 = 1
    
    do
        int32_t rax
        
        if (rsi_1 != 0)
            rax = r9_1 - 2
        else
            rax = 0
            
            if (arg1[2].b != rsi_1.b)
                rax = rcx
        
        if (rsi_1 != r10_1)
            rcx = r9_1
        else if (arg1[2].b != 0)
            rcx = 0
        
        int64_t rbx_1 = *arg1
        int64_t rdi_1 = rsi_1 * 5
        int64_t rdx_1 = sx.q(rax) * 5
        uint32_t rcx_1 = zx.d(*(rbx_1 + (rdi_1 << 2) + 0x10))
        int64_t r8 = sx.q(rcx) * 5
        result = zx.q(rcx_1 - 1)
        float zmm0
        
        if ((result.b & 0xfb) == 0)
            if (rbp == 0 || (rsi_1 != 0 && (rsi_1 != r10_1 || arg1[2].b != 0)))
                char rax_3 = *(rbx_1 + (rdx_1 << 2) + 0x10)
                
                if (rax_3 == 1 || rax_3 - 3 u<= 2)
                    result = zx.q(arg1[2].b)
                    
                    if (result.b == 0 || rsi_1 != 0)
                        zmm7 = *(rbx_1 + (rdx_1 << 2))
                        zmm8 = *(rbx_1 + (rdi_1 << 2))
                    else
                        zmm8 = *(rbx_1 + (rdi_1 << 2))
                        zmm7 = zmm8
                        zmm7[0] = zmm7[0] f- *(arg1 + 0x14)
                    
                    if (result.b == 0 || rsi_1 != r10_1)
                        zmm6 = *(rbx_1 + (r8 << 2))
                    else
                        zmm6 = zmm8
                        zmm6[0] = zmm6[0] f+ *(arg1 + 0x14)
                    
                    float (* r12_2)[0x4] = rbx_1 + 4 + (r8 << 2)
                    float* r13_2 = rbx_1 + 4 + (rdi_1 << 2)
                    float (* rbp_2)[0x4] = rbx_1 + 4 + (rdx_1 << 2)
                    zmm9.d = 1f - zmm11[0]
                    float arg_8
                    
                    if (rcx_1.b != 5)
                        zmm0 = *r13_2
                        zmm6[0] = zmm6[0] - zmm7[0]
                        arg2 = *r12_2
                        arg2[0] = arg2[0] - zmm0
                        zmm0 = zmm0 - *rbp_2
                        float temp0_1[0x4] = _mm_max_ss(zmm6[0], 0x38d1b717)
                        arg2[0] = arg2[0] + zmm0
                        arg2[0] = arg2[0] f* zmm9.d
                        arg2[0] = arg2[0] / temp0_1[0]
                        arg_8 = arg2[0]
                    else
                        void* r13_3 = r13_2 - rbp_2
                        result = &arg_8 - rbp_2
                        float* r12_3 = r12_2 - rbp_2
                        
                        do
                            zmm0, zmm6, zmm7, zmm8 = sub_140acf6c0(*rbp_2, zmm7, *(rbp_2 + r13_3), 
                                zmm8, *(r12_3 + rbp_2), zmm6[0])
                            i += 4
                            *(result + rbp_2) = zmm0 f* zmm9.d
                            rbp_2 = &(*rbp_2)[1]
                        while (i u< 4)
                        
                        arg2 = arg_8
                        rdi_1 = rsi_1 * 5
                        r9_1 = arg_20
                        i = 0
                        r10_1 = var_b8_1
                        result_2 = result_1
                    rbp = arg3
                    *(rbx_1 + (rdi_1 << 2) + 8) = arg2[0]
                    *(rbx_1 + (rdi_1 << 2) + 0xc) = arg2[0]
                else
                    *(rbx_1 + (rdi_1 << 2) + 8) = *(rbx_1 + (rdx_1 << 2) + 8)
                    result = zx.q(*(rbx_1 + (rdx_1 << 2) + 0xc))
                    *(rbx_1 + (rdi_1 << 2) + 0xc) = result.d
            else
                *(rbx_1 + (rdi_1 << 2) + 8) = 0
        else if (rcx_1.b == 0)
            zmm0 = *(rbx_1 + (r8 << 2) + 4) f- *(rbx_1 + (rdi_1 << 2) + 4)
            *(rbx_1 + (rdi_1 << 2) + 8) = zmm0
            *(rbx_1 + (rdi_1 << 2) + 0xc) = zmm0
        else if (rcx_1.b == 2)
            *(rbx_1 + (rdi_1 << 2) + 8) = 0
        rcx = var_c8
        r9_1 += 1
        rsi_1 += 1
        arg_20 = r9_1
    while (rsi_1 s< result_2)

return result
