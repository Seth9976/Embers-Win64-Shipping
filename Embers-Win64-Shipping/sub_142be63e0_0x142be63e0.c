// 函数: sub_142be63e0
// 地址: 0x142be63e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0xffffffff
*arg4 = 0xffffffff
int32_t i = 0
int64_t result

if (0 u< *(arg1 + 0x1d0))
    int16_t* r8 = nullptr
    
    do
        result = *(arg1 + 0x1e8)
        
        if (*(r8 + result + 6) == arg2 && *(r8 + result + 8) u> 0)
            if (*(r8 + result) == 3 && *(r8 + result + 2) u<= 1
                    && (*(r8 + result + 4) == 0x409 || *arg3 == 0xffffffff))
                *arg3 = i
            
            if (*(r8 + result) == 1 && *(r8 + result + 2) == 0
                    && (*(r8 + result + 4) == 0 || *arg4 == 0xffffffff))
                *arg4 = i
        
        i += 1
        r8 = &r8[0xc]
    while (i s< zx.d(*(arg1 + 0x1d0)))

if (*arg3 s< 0)
    result = 0

if (*arg3 s>= 0 || *arg4 s>= 0)
    result.b = 1

return result
