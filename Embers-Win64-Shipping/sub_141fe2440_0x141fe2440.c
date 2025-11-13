// 函数: sub_141fe2440
// 地址: 0x141fe2440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (arg2 != 0)
    char r9_1 = *(arg1 + 0x2c)
    
    if (arg2 != 1)
        if (((r9_1 - 2) & 0xfd) != 0)
            int64_t rcx = sx.q(arg3) * 0x2c
            int64_t rax_2 = *(arg1 + 0x10)
            
            if (r9_1 != 3)
                result.o = *(rcx + rax_2 + 0xc)
                return result
            
            result.o = *(rcx + rax_2 + 8)
            return result
    else if (r9_1 != arg2.b && r9_1 != 4)
        result.o = *(sx.q(arg3) * 0x2c + *(arg1 + 0x10) + 8)
        return result

result.o = *(sx.q(arg3) * 0x2c + *(arg1 + 0x10) + 4)
return result
