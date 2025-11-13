// 函数: sub_14208c8d0
// 地址: 0x14208c8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x98)
float zmm9[0x4] = arg2

if (r10 == 0)
    int64_t result
    result.b = 0
    return result

int32_t i_1 = 0
int64_t r14
r14.b = 0
float zmm7[0x4] = 0x7f7fc99e
float zmm8[0x4] = zx.o(0)

if (r10 s> 0)
    int128_t* rdi_1 = nullptr
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    
    do
        int32_t* rcx = *arg3
        void* rdx_1 = &rcx[sx.q(arg3[1].d)]
        
        if (rcx == rdx_1)
        label_14208c981:
            int64_t rax_1 = *(arg1 + 0x90)
            int64_t* rcx_1 = *(rdi_1 + rax_1 + 0x10)
            zmm6 = *(rdi_1 + rax_1)
            float zmm2[0x4] = zmm6
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x288))(rcx_1, rdx_1, zmm2)
                zmm2 = arg5
                zmm2[0] = zmm2[0] + zmm6[0]
            
            r10 = *(arg1 + 0x98)
            
            if (i_1 s< r10 - 1)
                for (int32_t* i = *arg3; i != &i[sx.q(arg3[1].d)]; i = &i[1])
                    if (*i == i_1 + 1)
                        goto label_14208c9f7
                
                zmm2 = _mm_min_ss((*(rdi_1 + *(arg1 + 0x90) + 0x18))[0], zmm2[0])
            
        label_14208c9f7:
            zmm6[0] = zmm6[0] - zmm9[0]
            arg5 = _mm_and_ps(zmm6, 0x7fffffff)
            
            if (not(arg5[0] >= zmm7[0]))
                zmm8 = zmm6
                r14.b = 1
            
            arg5 = _mm_min_ss(arg5[0], zmm7[0])
            zmm2[0] = zmm2[0] - zmm9[0]
            zmm7 = arg5
            arg2 = _mm_and_ps(zmm2, 0x7fffffff)
            
            if (not(arg2[0] >= arg5[0]))
                zmm8 = zmm2
                zmm7 = arg2
                r14.b = 1
        else
            while (*rcx != i_1)
                rcx = &rcx[1]
                
                if (rcx == rdx_1)
                    goto label_14208c981
        
        i_1 += 1
        rdi_1 += 0x18
    while (i_1 s< r10)

*arg4 = zmm8[0]
return zx.q(r14.b)
