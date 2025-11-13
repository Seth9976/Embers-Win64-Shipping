// 函数: sub_141e41ad0
// 地址: 0x141e41ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = arg2.d
uint128_t zmm4 = arg7
arg5[1] = (arg2 ^ data_142d3f780).d
*arg5 = 0xffffffff
uint128_t result
result.d = zmm4.d f- zmm3
*arg6 = 0xffffffff
int32_t i = (zx.d(arg3) ^ 1) - 1
arg6[1] = result.d

for (; i s< zx.d(arg3) + 1; i += 1)
    int32_t j = 0
    uint128_t zmm2
    zmm2.d = _mm_cvtepi32_ps(zx.o(i)).d f* zmm4.d
    
    if (arg1[1].d s> 0)
        int64_t* r9 = nullptr
        
        do
            int64_t* rcx = *arg4
            int64_t r10_1 = *arg1
            void* rdx_1 = &rcx[sx.q(arg4[1].d)]
            
            if (rcx != rdx_1)
                while (*rcx != *(r9 + r10_1))
                    rcx = &rcx[1]
                    
                    if (rcx == rdx_1)
                        goto label_141e41ba5
                
                result.d = zmm2.d f+ *(r9 + r10_1 + 8)
                arg2.d = result.d f- zmm3
                
                if (result.d f>= zmm3)
                    arg6[1] = arg2.d
                    *arg6 = j
                    break
                
                arg5[1] = arg2.d
                *arg5 = j
            
        label_141e41ba5:
            j += 1
            r9 += 0xc
        while (j s< arg1[1].d)
    
    if (*arg6 != 0xffffffff)
        break

return result
