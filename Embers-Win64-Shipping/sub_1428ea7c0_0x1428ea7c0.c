// 函数: sub_1428ea7c0
// 地址: 0x1428ea7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char rax = *arg1
char* result = arg1

if (rax != 0)
    while (sub_1428e4710(sx.d(rax), 8) != 0)
        rax = result[1]
        result = &result[1]
        
        if (rax == 0)
            return 0

if (*result != 0)
    char* result_1 = result
    int32_t i = 0
    
    while (i u< 0x80000000)
        result_1 = &result_1[1]
        i += 1
        
        if (*result_1 == 0)
            break
    
    for (void* i_1 = &result[-1] + (zx.q(i) & 0x7fffffff); i_1 != result; i_1 -= 1)
        if (sub_1428e4710(sx.d(*i_1), 8) == 0)
            if (result != i_1)
                *(i_1 + 1) = 0
            
            break
    
    if (*result != 0)
        return result

return 0
