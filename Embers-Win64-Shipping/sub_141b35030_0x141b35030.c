// 函数: sub_141b35030
// 地址: 0x141b35030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) |= 8
int128_t* rsi = arg2
arg2.b = 1
uint8_t result = sub_141a6b7c0(arg1)

if (result == 0)
    return result

int128_t var_18

if (arg3 != 0)
    int64_t rcx_1 = *(sub_140d226f0(arg1, sub_141a6e000()) + 0x108)
    int64_t rax_2 = *(arg1 + 0x90)
    int32_t rcx_3
    
    if (rax_2.b == 2)
        rcx_3 = 0
    else
        var_18 = *rsi
        uint32_t rax_3
        
        if (rax_2.b != 1)
            rax_3 = (rax_2 u>> 0x20).d + 1
        else
            rax_3 = (rax_2 u>> 0x20).d
        
        void arg_8
        rcx_3 = *sub_141b22370(&arg_8, &var_18, arg1 + 0xe0, rax_3, rcx_1)
    
    *(arg1 + 0xe8) = rcx_3

var_18 = *rsi
return sub_141a6b440(arg1, &var_18, arg3, arg4)
