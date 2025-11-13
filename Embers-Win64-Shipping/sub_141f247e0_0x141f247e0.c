// 函数: sub_141f247e0
// 地址: 0x141f247e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141ee76e0(arg1)

if (result.b != 0 || (arg1[0x11].b & 1) == 0 || *(arg1 + 0x14f) != result.b)
    int32_t rcx = *(arg1 + 0x20c)
    result = rcx u>> 1 & 1
    uint32_t rdx = zx.d(arg2)
    
    if (result != rdx)
        *(arg1 + 0x20c) = (rdx * 2) | (rcx & 0xfffffffd)
        return sub_141ee8490(arg1)

return result
