// 函数: sub_141eda7f0
// 地址: 0x141eda7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg2)

if ((result.b & 1) != 0 && (result.b & 2) == 0 && (*(*arg1 + 0x5c0))().b != 0 && arg1[0x2d].b != 3)
    result = sub_140d3c6e0(&arg2[0x70])
    
    if (result == 0)
        result.b = 1
        return result
    
    int64_t r8_1 = *result
    
    if ((*(r8_1 + 0x850))(result, arg1[0x29], r8_1).b != 0)
        result = sub_140d3c6e0(&arg2[0x68])
        
        if (result == 0)
            result.b = 1
            return result
        
        int64_t r8_2 = *result
        
        if ((*(r8_2 + 0x580))(result, arg1[0x29], r8_2).b != 0)
            result.b = 1
            return result

result.b = 0
return result
