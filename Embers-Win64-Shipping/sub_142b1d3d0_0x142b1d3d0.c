// 函数: sub_142b1d3d0
// 地址: 0x142b1d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*arg2 s<= 0)
    char rax_1
    
    if (*(arg1 + 0x40) != 2)
        rax_1 = sub_142a85f00(arg1 + 0x40)
    
    if (*(arg1 + 0x40) == 2 || rax_1 == 0)
        result = *(arg1 + 0x44)
        
        if (result s> 0)
            *arg2 = result
    else
        sub_142b1d230(arg1, arg2)
        *(arg1 + 0x44) = *arg2
        sub_142a85e80(arg1 + 0x40)

result.b = *arg2 s<= 0
return result
