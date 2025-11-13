// 函数: sub_142195ad0
// 地址: 0x142195ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f20150(arg1)
int32_t rcx = *(arg1 + 0x438)
uint64_t result = zx.q(rcx) & 0x3fffffff

if (result.d != 0x3fffffff && rcx s>= 0)
    result = sub_142193f60(arg1)
    
    if (result != 0)
        sub_142202b80(result, arg1)
        return sub_1421f8e50(result, arg1)

return result
