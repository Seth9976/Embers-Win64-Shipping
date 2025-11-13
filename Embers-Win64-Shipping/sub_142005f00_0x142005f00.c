// 函数: sub_142005f00
// 地址: 0x142005f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[0x188].d)
int32_t r10 = 0

if (rax.d s> 0)
    int64_t* rcx = arg1[0x187]
    int64_t* rdx_1 = rcx
    int64_t r9_1 = 0
    
    do
        if (**rdx_1 == 1)
            void* rbx_1 = *(rcx[sx.q(r10)] + 0x278)
            
            if (rbx_1 != 0)
                int64_t* rbx_2 = *(rbx_1 + 0x38)
                
                if (rbx_2 != 0)
                    if (sub_142168a40(rbx_2) == 1)
                    label_142005fab:
                        int32_t rcx_4 = rbx_2[0xb].d
                        int32_t rax_5
                        
                        if (rcx_4 s>= 1)
                            rax_5 = 0x3e8
                            
                            if (rcx_4 s< 0x3e8)
                                rax_5 = rcx_4
                        else
                            rax_5 = 1
                        
                        _mm_cvtepi32_ps(zx.o(rax_5))
                    else if (sub_142168a40(rbx_2) == 2 && (*(rbx_2 + 0x54) & 1) != 0)
                        goto label_142005fab
            
            break
        
        r10 += 1
        r9_1 += 1
        rdx_1 = &rdx_1[1]
    while (r9_1 s< rax)

int64_t result
float zmm0
float zmm6_1
zmm0, result, zmm6_1 = sub_1423ddbf0(arg1, arg2, arg3)
return result
