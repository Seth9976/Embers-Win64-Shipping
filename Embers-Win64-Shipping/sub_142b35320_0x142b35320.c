// 函数: sub_142b35320
// 地址: 0x142b35320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1].d = 0xa
int16_t result

if (arg2 s< 1)
    result = 0
    *(arg1 + 0xc) = 0
else
    result = sub_142b33820(arg1)
    int64_t* rcx = arg1[0xa]
    *(arg1 + 0xc) = result
    
    if (rcx != 0)
        result = (*(*rcx + 0x18))(rcx, zx.q(arg1[1].d), zx.q(result), arg3)
    
    int64_t* rcx_1 = arg1[0xb]
    
    if (rcx_1 != 0)
        *(arg1 + 0xc)
        arg1[1].d
        jump(*(*rcx_1 + 0x18))

return result
