// 函数: sub_141f26d70
// 地址: 0x141f26d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141ee76e0(arg1)

if (result.b != 0 || (arg1[0x11].b & 1) == 0 || *(arg1 + 0x14f) != result.b)
    int32_t rdx = *(arg1 + 0x20c)
    result = rdx u>> 5 & 1
    uint32_t rcx = zx.d(arg2)
    
    if (result != rcx)
        *(arg1 + 0x20c) = rcx << 5 | (rdx & 0xffffffdf)
        return sub_141ee8490(arg1)

return result
