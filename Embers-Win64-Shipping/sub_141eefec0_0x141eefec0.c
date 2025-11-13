// 函数: sub_141eefec0
// 地址: 0x141eefec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f219e0(arg1)
uint64_t result = sub_140cdd6a0(arg1)

if (result.d s< 0x145)
    result = arg1[0x82]
    
    if (result != 0)
        *(result + 0x89) &= 0xbf

return result
