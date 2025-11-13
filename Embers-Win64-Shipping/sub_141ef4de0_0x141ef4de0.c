// 函数: sub_141ef4de0
// 地址: 0x141ef4de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if ((*(arg1 + 0x388) & 2) == 0)
    int64_t* rax = sub_1424b0d70()
    result = rax[0x23]
    
    if (result == 0)
        int64_t rdx_1 = *rax
        (*(rdx_1 + 0x390))(rax, rdx_1)
        result = rax[0x23]
    
    if (*(result + 0x29c) == 0)
        result.b = 0
        return result

result.b = 1
return result
