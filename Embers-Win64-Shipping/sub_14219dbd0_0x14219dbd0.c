// 函数: sub_14219dbd0
// 地址: 0x14219dbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
uint64_t result = __security_cookie ^ &var_58
uint64_t result_1 = result
int32_t i = 0
void* rcx = arg1[0xca]

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    result = rax_1 u>> 0x1a
    
    if ((result.b & 1) == 0)
        float zmm0_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_1 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        result = sub_14218e220(arg1, zmm0_1)

if (arg1[0xc1].d s> 0)
    int64_t r14_1 = 0
    
    do
        result = arg1[0xc0]
        int64_t* rcx_4 = *(r14_1 + result)
        
        if (rcx_4 != 0)
            result = rcx_4[2]
            
            if (result != 0 && *(result + 0x28) == arg2)
                result = (*(*rcx_4 + 0x100))(rcx_4, arg3 ^ 1)
        
        i += 1
        r14_1 += 8
    while (i s< arg1[0xc1].d)

__security_check_cookie(result_1 ^ &var_58)
return result
