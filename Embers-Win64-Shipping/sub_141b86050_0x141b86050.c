// 函数: sub_141b86050
// 地址: 0x141b86050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (not(*(arg2 + 8) f!= *(arg1 + 8)) && not(*(arg2 + 0xc) f!= *(arg1 + 0xc))
        && *(arg1 + 0x6c) == *(arg2 + 0x6c) && not(*(arg2 + 0x10) f!= *(arg1 + 0x10))
        && not(*(arg2 + 0x18) f!= *(arg1 + 0x18)) && not(*(arg2 + 0x14) f!= *(arg1 + 0x14))
        && not(*(arg2 + 0x1c) f!= *(arg1 + 0x1c)) && sub_140de1a50(arg1 + 0x20, arg2 + 0x20).b != 0
        && *(arg1 + 0x6d) == *(arg2 + 0x6d) && *(arg1 + 0x6e) == *(arg2 + 0x6e)
        && *(arg1 + 0x48) == *(arg2 + 0x48) && *(arg1 + 0x50) == *(arg2 + 0x50))
    result.b = *(arg2 + 0x80) ^ *(arg1 + 0x80)
    
    if ((result.b & 1) == 0 && not(*(arg2 + 0x58) f!= *(arg1 + 0x58))
            && not(*(arg2 + 0x5c) f!= *(arg1 + 0x5c)) && not(*(arg2 + 0x60) f!= *(arg1 + 0x60))
            && not(*(arg2 + 0x64) f!= *(arg1 + 0x64)))
        result.b = 1
        return result

result.b = 0
return result
