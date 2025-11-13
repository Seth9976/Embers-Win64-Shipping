// 函数: sub_141fdbdd0
// 地址: 0x141fdbdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
char rdi = arg3
uint128_t zmm11 = arg2
int64_t result_1 = result
int64_t result_2 = result
int32_t rdx = (result - 1).d
int32_t arg_20 = rdx

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
    int64_t r10_1 = sx.q(rdx)
    int64_t var_c0_1 = r10_1
    int32_t arg_8 = 1
    
    do
        int32_t rcx
        
        if (rsi_1 != 0)
            rcx = r9_1 - 2
        else
            rcx = 0
            
            if (arg1[2].b != rsi_1.b)
                rcx = rdx
        
        if (rsi_1 != r10_1)
            rdx = r9_1
        else if (arg1[2].b != 0)
            rdx = 0
        
        int64_t rax = *arg1
        float (* rbx_3)[0x4] = (rsi_1 << 5) + rax
        float (* rcx_3)[0x4] = (sx.q(rcx) << 5) + rax
        uint32_t r8 = zx.d((*rbx_3)[7].b)
        float (* rdx_3)[0x4] = (sx.q(rdx) << 5) + rax
        result = zx.q(r8 - 1)
        uint128_t zmm0
        
        if ((result.b & 0xfb) == 0)
            if (rdi == 0 || (rsi_1 != 0 && (rsi_1 != r10_1 || arg1[2].b != 0)))
                result = zx.q((*rcx_3)[7].b)
                
                if (result.b == 1)
                label_141fdbf7c:
                    result = zx.q(arg1[2].b)
                    
                    if (result.b == 0 || rsi_1 != 0)
                        zmm7 = *rcx_3
                        zmm8 = *rbx_3
                    else
                        zmm8 = *rbx_3
                        zmm7 = zmm8
                        zmm7[0] = zmm7[0] f- *(arg1 + 0x14)
                    
                    if (result.b == 0 || rsi_1 != r10_1)
                        zmm6 = *rdx_3
                    else
                        zmm6 = zmm8
                        zmm6[0] = zmm6[0] f+ *(arg1 + 0x14)
                    
                    zmm9.d = 1f f- zmm11.d
                    int128_t* rdi_1 = &(*rcx_3)[1]
                    int32_t var_c8
                    
                    if (r8.b != 5)
                        arg2 = (*rbx_3)[1]
                        zmm6[0] = zmm6[0] - zmm7[0]
                        float zmm3[0x4] = 0x3f800000
                        float zmm2[0x4] = (*rbx_3)[2]
                        zmm0.d = (*rdx_3)[1].d f- arg2.d
                        arg2.d = arg2.d f- *rdi_1
                        float temp0_1[0x4] = _mm_max_ss(zmm6[0], 0x38d1b717)
                        zmm0.d = zmm0.d f+ arg2.d
                        arg2.d = zmm2.d f- (*rcx_3)[2]
                        zmm3[0] = 1f / temp0_1[0]
                        zmm0.d = zmm0.d f* zmm9.d
                        zmm0.d = zmm0.d f* zmm3[0]
                        var_c8 = zmm0.d
                        zmm0.d = (*rdx_3)[2].d f- zmm2[0]
                        arg2.d = arg2.d f+ zmm0.d
                        arg2.d = arg2.d f* zmm9.d
                        arg2.d = arg2.d f* zmm3[0]
                        int32_t var_c4_1 = arg2.d
                    else
                        void* r12_2 = &(*rbx_3)[1] - rdi_1
                        int64_t r13_1 = &var_c8 - rdi_1
                        void* r15_2 = &(*rdx_3)[1] - rdi_1
                        
                        do
                            zmm0, zmm6, zmm7, zmm8 = sub_140acf6c0((*rdi_1).d, zmm7, 
                                *(rdi_1 + r12_2), zmm8, (*(rdi_1 + r15_2)).d, zmm6[0])
                            zmm0.d = zmm0.d f* zmm9.d
                            i += 4
                            *(rdi_1 + r13_1) = zmm0.d
                            rdi_1 += 4
                        while (i u< 8)
                        
                        r9_1 = arg_8
                        i = 0
                        r10_1 = var_c0_1
                        result_2 = result_1
                    
                    zmm0 = zx.o(var_c8.q)
                    rdi = arg3
                    *(rbx_3 + 0xc) = _mm_unpacklo_pd(zmm0, zmm0.q)
                else
                    result.b -= 3
                    
                    if (result.b u<= 2)
                        goto label_141fdbf7c
                    
                    *(rbx_3 + 0xc) = *(rcx_3 + 0xc)
                    *(rbx_3 + 0x14) = *(rcx_3 + 0x14)
            else
                *(rbx_3 + 0xc) = 0.0
                *(rbx_3 + 0x14) = 0.0
        else if (r8.b == 0)
            arg2.d = (*rdx_3)[1].d f- (*rbx_3)[1]
            zmm0.d = (*rdx_3)[2].d f- (*rbx_3)[2]
            (*rbx_3)[3] = arg2.d
            rbx_3[1][0] = zmm0.d
            (*rbx_3)[5] = arg2.d
            (*rbx_3)[6] = zmm0.d
        else if (r8.b == 2)
            *(rbx_3 + 0xc) = 0.0
            *(rbx_3 + 0x14) = 0.0
        rdx = arg_20
        r9_1 += 1
        rsi_1 += 1
        arg_8 = r9_1
    while (rsi_1 s< result_2)

return result
