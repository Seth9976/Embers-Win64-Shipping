// 函数: sub_1423df280
// 地址: 0x1423df280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
uint64_t result = QueryPerformanceCounter(&performanceCount)
int64_t zmm1 = float.d(performanceCount)
float zmm0[0x2] = _mm_cvtps_pd(arg1[0x185].d)

if (not(zmm1 f* data_143d796f8 f+ 16777216.0 f- data_143f5b800 f<= zmm0))
    result = QueryPerformanceCounter(&performanceCount)
    data_143f5b800 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (arg3 != 0)
    int64_t rbx_1 = arg3[0x32]
    uint32_t rsi_2 = (rbx_1 u>> 0x20).d
    char rax = sub_140b5b8a0(rbx_1.d, 0x11a)
    int32_t rcx_2
    rcx_2.b = rsi_2 == 0
    int32_t rcx_3
    
    if ((rcx_2.b & rax) == 0)
        result = sub_140b5b8a0(rbx_1.d, 0x11b)
        rcx_3.b = rsi_2 == 0
    
    if ((rcx_2.b & rax) != 0 || (rcx_3.b & result.b) != 0)
        if (arg2 == 0)
        label_1423df3de:
            (*(*arg1 + 0x4e0))(arg1, arg2, arg3, zx.q(arg4))
            result = sub_142168a40(arg3)
            
            if (arg4 == 3 || arg4 == 4 || arg4 - 9 u<= 1)
                result.b = result.d == 3
            
            if ((arg4 != 3 && arg4 != 4 && arg4 - 9 u> 1) || result.b != 0)
                return sub_1423d3e40(arg2, arg3)
        else
            int64_t* rax_1 = arg1[0x187]
            void* rcx_5 = &rax_1[sx.q(arg1[0x188].d)]
            char* rdx
            
            if (rax_1 == rcx_5)
            label_1423df394:
                rdx = sub_1423d6f90(data_143f5b298, 0)
            else
                while (true)
                    rdx = *rax_1
                    
                    if (*(rdx + 0x278) == arg2)
                        break
                    
                    rax_1 = &rax_1[1]
                    
                    if (rax_1 == rcx_5)
                        goto label_1423df394
            
            result = sx.q(*(rdx + 0x228))
            
            if (result.d s> 0)
                uint64_t result_1 = result
                int64_t rcx_7 = 0
                result = *(rdx + 0x220)
                
                while (true)
                    void* rdx_1 = *result
                    
                    if (rdx_1 != 0 && *(rdx_1 + 0x190) == rbx_1)
                        break
                    
                    rcx_7 += 1
                    result += 0x10
                    
                    if (rcx_7 s>= result_1)
                        return result
                
                goto label_1423df3de

return result
