// 函数: sub_141b34f80
// 地址: 0x141b34f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) |= 8
int128_t* rsi = arg2
arg2.b = 1
uint8_t result = sub_141a6b7c0(arg1)

if (result == 0)
    return result

int128_t var_18

if (arg3 != 0)
    int64_t rax = *(arg1 + 0x90)
    int32_t rcx_2
    
    if (rax.b == 2)
        rcx_2 = 0
    else
        var_18 = *rsi
        
        if (rax.b != 1)
            rcx_2 = *(arg1 + 0xe8) - ((rax u>> 0x20).d + 1) + var_18.d
        else
            rcx_2 = *(arg1 + 0xe8) - (rax u>> 0x20).d + var_18.d
    
    *(arg1 + 0xe8) = rcx_2

var_18 = *rsi
return sub_141a6b440(arg1, &var_18, arg3, arg4)
