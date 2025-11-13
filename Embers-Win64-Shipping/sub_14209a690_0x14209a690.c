// 函数: sub_14209a690
// 地址: 0x14209a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result
result.b = arg1[0x45].b & 1

if (result.b != arg2)
    result = sub_141dcdc50(arg1)
    
    if (result != 3)
        arg1[0x45].b &= 0xfe
        int64_t* rcx = arg1[0x44]
        arg1[0x45].b |= arg2
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        return (*(*rcx + 0xa68))(rcx, zx.q(arg2), &var_18)

return result
