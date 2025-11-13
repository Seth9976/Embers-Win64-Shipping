// 函数: sub_1422aa6f0
// 地址: 0x1422aa6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg3
int32_t r8 = *(arg1 + 0x18)

if (r8 u< arg2)
    if ((result.b & 1) == 0 && arg2 s> *(arg1 + 0x1c))
        sub_141238e00(arg1 + 0x10, arg2)
        r8 = *(arg1 + 0x18)
    
    int32_t rdx = *(arg1 + 0x18)
    result = rdx - r8
    int32_t r8_1 = result + arg2
    *(arg1 + 0x18) = r8_1
    
    if (r8_1 s> *(arg1 + 0x1c))
        return sub_1412388c0(arg1 + 0x10, rdx) __tailcall
else if (r8 u> arg2)
    return sub_1422a9d30(arg1 + 0x10, arg2, r8 - arg2, not.b((result u>> 1).b) & 1)

return result
