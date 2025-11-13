// 函数: sub_141f55fe0
// 地址: 0x141f55fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
char rdi = arg3
int64_t result_1 = result
float zmm12[0x4] = arg2
int64_t result_3 = result
int32_t rcx = (result - 1).d
int32_t arg_20 = rcx

if (result.d s> 0)
    int32_t r9_1 = 1
    int32_t i = 0
    int64_t rsi_1 = 0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int64_t r10_1 = sx.q(rcx)
    int64_t var_118_1 = r10_1
    int32_t arg_8 = 1
    
    do
        int32_t rax
        
        if (rsi_1 != 0)
            rax = r9_1 - 2
        else
            rax = 0
            
            if (arg1[2].b != rsi_1.b)
                rax = rcx
        
        int32_t r8
        
        if (rsi_1 != r10_1)
            r8 = r9_1
        else
            r8 = rcx
            
            if (arg1[2].b != 0)
                r8 = 0
        
        int64_t rcx_1 = *arg1
        float (* rdx_2)[0x4] = sx.q(rax) * 0x2c + rcx_1
        float (* rbx_2)[0x4] = rsi_1 * 0x2c + rcx_1
        float (* r8_2)[0x4] = sx.q(r8) * 0x2c + rcx_1
        uint32_t rcx_2 = zx.d((*rbx_2)[0xa].b)
        result = zx.q(rcx_2 - 1)
        uint128_t zmm0
        float zmm2[0x4]
        
        if ((result.b & 0xfb) == 0)
            if (rdi == 0 || (rsi_1 != 0 && (rsi_1 != r10_1 || arg1[2].b != 0)))
                char rax_3 = (*rdx_2)[0xa].b
                
                if (rax_3 == 1 || rax_3 - 3 u<= 2)
                    char rax_5 = arg1[2].b
                    
                    if (rax_5 == 0 || rsi_1 != 0)
                        zmm7 = *rdx_2
                        zmm8 = *rbx_2
                    else
                        zmm8 = *rbx_2
                        zmm7 = zmm8
                        zmm7[0] = zmm7[0] f- *(arg1 + 0x14)
                    
                    if (rax_5 == 0 || rsi_1 != r10_1)
                        zmm6 = *r8_2
                    else
                        zmm6 = zmm8
                        zmm6[0] = zmm6[0] f+ *(arg1 + 0x14)
                    
                    zmm9.d = 1f - zmm12[0]
                    float* rdi_1 = &(*rdx_2)[1]
                    int32_t var_108
                    float result_2
                    
                    if (rcx_2.b != 5)
                        arg2 = (*rbx_2)[1]
                        zmm6[0] = zmm6[0] - zmm7[0]
                        zmm2 = (*rbx_2)[2]
                        float zmm3[0x4] = (*rbx_2)[3]
                        zmm0.d = (*r8_2)[1].d f- arg2[0]
                        arg2[0] = arg2[0] - *rdi_1
                        float temp0_6[0x4] = _mm_max_ss(zmm6[0], 0x38d1b717)
                        zmm0.d = zmm0.d f+ arg2[0]
                        zmm2[0] = zmm2[0] - (*rdx_2)[2]
                        float zmm4 = 1f / temp0_6[0]
                        zmm0.d = zmm0.d f* zmm9.d
                        zmm0.d = zmm0.d f* zmm4
                        var_108 = zmm0.d
                        zmm0.d = (*r8_2)[2].d f- zmm2[0]
                        zmm3[0] = zmm3[0] - (*rdx_2)[3]
                        zmm2[0] = zmm2[0] f+ zmm0.d
                        zmm0.d = (*r8_2)[3].d f- zmm3[0]
                        zmm2[0] = zmm2[0] f* zmm9.d
                        zmm3[0] = zmm3[0] f+ zmm0.d
                        zmm2[0] = zmm2[0] * zmm4
                        zmm3[0] = zmm3[0] f* zmm9.d
                        float var_104_1 = zmm2[0]
                        zmm3[0] = zmm3[0] * zmm4
                        result_2 = zmm3[0]
                    else
                        float (* r12_2)[0x4] = &(*rbx_2)[1] - rdi_1
                        int64_t r13_1 = &var_108 - rdi_1
                        void* r15_2 = &(*r8_2)[1] - rdi_1
                        
                        do
                            zmm0, zmm6, zmm7, zmm8 = sub_140acf6c0((*rdi_1).d, zmm7, 
                                *(r12_2 + rdi_1), zmm8, (*(r15_2 + rdi_1)).d, zmm6[0])
                            zmm0.d = zmm0.d f* zmm9.d
                            i += 4
                            *(rdi_1 + r13_1) = zmm0.d
                            rdi_1 = &rdi_1[1]
                        while (i u< 0xc)
                        
                        r9_1 = arg_8
                        i = 0
                        r10_1 = var_118_1
                        result_3 = result_1
                    
                    arg2 = zx.o(var_108.q)
                    result = zx.q(result_2)
                    rdi = arg3
                    goto label_141f56385
                
                rbx_2[1][0].q = rdx_2[1][0].q
                (*rbx_2)[6] = (*rdx_2)[6]
                *(rbx_2 + 0x1c) = *(rdx_2 + 0x1c)
                result = zx.q((*rdx_2)[9])
                (*rbx_2)[9] = result.d
            else
                int32_t var_c8_1 = 0
                rbx_2[1][0].q = (_mm_unpacklo_ps(zx.o(0), 0)).q
                zmm0 = _mm_unpacklo_ps(zx.o(0), 0)
                (*rbx_2)[6] = 0f
                int32_t var_bc_1 = 0
                result = 0
                *(rbx_2 + 0x1c) = zmm0.q
                (*rbx_2)[9] = result.d
        else if (rcx_2.b == 0)
            arg2 = (*r8_2)[1]
            zmm2 = (*r8_2)[2]
            zmm0.d = (*r8_2)[3].d f- (*rbx_2)[3]
            arg2[0] = arg2[0] - (*rbx_2)[1]
            zmm2[0] = zmm2[0] - (*rbx_2)[2]
            result = zx.q(zmm0.d)
            arg2 = _mm_unpacklo_ps(arg2, zmm2[0].q)
        label_141f56385:
            rbx_2[1][0].q = arg2.q
            (*rbx_2)[6] = result.d
            *(rbx_2 + 0x1c) = arg2.q
            (*rbx_2)[9] = result.d
        else if (rcx_2.b == 2)
            int32_t var_e0_1 = 0
            rbx_2[1][0].q = (_mm_unpacklo_ps(zx.o(0), 0)).q
            zmm0 = _mm_unpacklo_ps(zx.o(0), 0)
            (*rbx_2)[6] = 0f
            int32_t var_d4_1 = 0
            result = 0
            *(rbx_2 + 0x1c) = zmm0.q
            (*rbx_2)[9] = result.d
        rcx = arg_20
        r9_1 += 1
        rsi_1 += 1
        arg_8 = r9_1
    while (rsi_1 s< result_3)

return result
