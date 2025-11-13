// 函数: sub_141f25310
// 地址: 0x141f25310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141ee76e0(arg1)

if (result.b != 0 || (arg1[0x11].b & 1) == 0 || *(arg1 + 0x14f) != result.b)
    int32_t rcx = arg1[0x52].d
    result = rcx & 1
    uint32_t rdx = zx.d(arg2)
    
    if (result != rdx)
        arg1[0x52].d = (rcx & 0xfffffffe) | rdx
        return sub_141ee8490(arg1)

return result
