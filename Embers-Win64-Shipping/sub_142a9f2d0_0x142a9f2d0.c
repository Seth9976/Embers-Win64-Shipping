// 函数: sub_142a9f2d0
// 地址: 0x142a9f2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(arg1 + 0x10)
uint64_t result
int32_t rdx

if (arg2 s>= *r9)
    int32_t i = 0
    rdx = *(arg1 + 0x1c) - 1
    
    if (rdx s> 0 && arg2 s< r9[sx.q(rdx - 1)])
        result = zx.q(rdx s>> 1)
        
        if (result.d != 0)
            do
                if (arg2 s>= r9[sx.q(result.d)])
                    i = result.d
                else
                    rdx = result.d
                
                result = zx.q((rdx + i) s>> 1)
            while (result.d != i)
else
    rdx = 0

if ((rdx.b & 1) != 0 && arg3 s< r9[sx.q(rdx)])
    result.b = 1
    return result

result.b = 0
return result
