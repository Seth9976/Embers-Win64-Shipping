// 函数: sub_141ecbea0
// 地址: 0x141ecbea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = sub_140cc16a0(arg2 + 0x10, sub_140bdfe30())
int32_t* result

if (rax_1 != 0)
    result = *(arg2 + 0x10)

if (rax_1 == 0 || result == 0 || (result[0x2c].b & 0x20) == 0)
    result = *(arg2 + 0x40)
    
    if (test_bit(result, 0xd) || (0x200000001 & result) == 0
            || ((zx.q((*(arg2 + 8))[4]) u>> 0x19).b & 1) != 0)
        result.b = 1
        return result
    
    void arg_10
    
    if (*sub_1408296b0(arg1 + 0xb8, &arg_10, arg2) != 0xffffffff)
        result.b = 1
        return result

result.b = 0
return result
