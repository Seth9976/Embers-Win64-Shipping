// 函数: sub_1421a4700
// 地址: 0x1421a4700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xca]
int32_t rdi = 0
int128_t zmm6 = zx.o(0)

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        float zmm0
        float zmm6_1
        zmm0, zmm6_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0 = sub_140b732d0(zmm6_1)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        zmm6 = sub_14218e220(arg1, zmm0)

void* rax_5 = arg1[0x15]

if (rax_5 == 0)
    rax_5 = sub_141ee69e0(arg1)

uint64_t result = sub_14243ade0(rax_5)

if (result.b != 0)
    void* rcx_6 = arg1[0x7d]
    
    if (rcx_6 != 0 && arg1[0xc1].d s> 0)
        if ((*(arg1 + 0x432) & 4) == 0)
            result = arg1[0x81]
            
            if (result != 0)
                result = zx.q(*(result + 0xb3))
                goto label_1421a47dc
        else
            result = zx.q(*(arg1 + 0x43d))
        label_1421a47dc:
            
            if (result.b == 0)
                int32_t i = *(rcx_6 + 0x33c)
                
                if (not(i f<= zmm6.d))
                    void* rcx_7 = arg1[0x81]
                    result = 1
                    int32_t rdx_1 = *(rcx_7 + 0x70)
                    
                    if (rdx_1 s> 1)
                        int32_t* rcx_9 = *(rcx_7 + 0x68) + 4
                        
                        while (not(i f< *rcx_9))
                            rdi = result.d
                            rcx_9 = &rcx_9[1]
                            result = zx.q(result.d + 1)
                            
                            if (result.d s>= rdx_1)
                                break
                    
                    if (rdi != *(arg1 + 0x4b4))
                        return (*(*arg1 + 0x9b0))(arg1, zx.q(rdi))

return result
