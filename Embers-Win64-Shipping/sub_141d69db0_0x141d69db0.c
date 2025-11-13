// 函数: sub_141d69db0
// 地址: 0x141d69db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d681c0(arg1, 0)
uint64_t result = j_sub_140d3e110(arg1 + 0x898)

if (result.b != 0)
    result = sub_140d3c6e0(arg1 + 0x898)
    
    if (*(result + 0x188) != 0)
        result = sub_142029890(*(sub_140d3c6e0(arg1 + 0x898) + 0x188), 0)
        
        if (result != 0)
            result = *(result + 0x2b8)
            
            if (result != 0)
                *(result + 0x2710) &= 0xffffffbf

*(arg1 + 0x8b4) = 0xffffffff
*(arg1 + 0x8b8) = 0
return result
