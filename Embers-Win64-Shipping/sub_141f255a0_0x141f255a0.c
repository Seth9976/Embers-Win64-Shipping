// 函数: sub_141f255a0
// 地址: 0x141f255a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141ee76e0(arg1)

if (result.b != 0 || (arg1[0x11].b & 1) == 0 || *(arg1 + 0x14f) != result.b)
    int32_t rdx = *(arg1 + 0x254)
    result = rdx u>> 5 & 1
    uint32_t rcx = zx.d(arg2)
    
    if (result != rcx)
        *(arg1 + 0x254) = rcx << 5 | (rdx & 0xffffffdf)
        return sub_141ee8490(arg1)

return result
