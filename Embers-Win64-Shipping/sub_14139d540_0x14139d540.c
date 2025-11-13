// 函数: sub_14139d540
// 地址: 0x14139d540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x3d4)

if (rax == 0)
    return 0x10 + arg1

if (rax != 1)
    return 0x28 + arg1

if (*(arg1 + 0x3d8) == 0 && sub_14139d5b0(arg1, *(arg1 + 0x3d0)) != 0xa)
    return 0x18 + arg1

return 0x20 + arg1
