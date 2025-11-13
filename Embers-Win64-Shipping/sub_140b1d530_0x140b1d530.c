// 函数: sub_140b1d530
// 地址: 0x140b1d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)
int32_t rdx = (result - 1).d

if (result.d == 0)
    rdx = 0

if (rdx != 0)
    result = *arg1
    wint_t _C = *result
    
    if (_C == 0x2f)
        result.b = 0
        return result
    
    if (rdx u>= 2)
        if (_C == 0x5c && *(result + 2) == _C)
            result.b = 0
            return result
        
        if (*(result + 2) == 0x3a && iswalpha(_C).d != 0)
            result.b = 0
            return result

result.b = 1
return result
