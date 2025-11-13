// 函数: sub_1423647f0
// 地址: 0x1423647f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = sx.q(arg1[1].d)
int32_t result = (r8_1 - 1).d

if (arg2 s< 0)
    result = 0
else if (arg2 s< result)
    result = arg2

if (result s< r8_1.d)
    int64_t result_1 = sx.q(result)
    int64_t* r8 = *arg1 + (result_1 << 3)
    
    while (*(*r8 + 0xec) == 0)
        result += 1
        result_1 += 1
        r8 = &r8[1]
        
        if (result_1 s>= r8_1)
            break

return result
