// 函数: sub_14259f9a0
// 地址: 0x14259f9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x10
    int32_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 8) = *(r8 + rcx - 8)
        *rcx = *(r8 + rcx)
        *(rcx + 4) = *(r8 + rcx + 4)
        *(rcx + 8) = *(r8 + rcx + 8)
        *(rcx + 0xc) = *(r8 + rcx + 0xc)
        *(rcx + 0x10) = *(r8 + rcx + 0x10)
        *(rcx + 0x14) = *(r8 + rcx + 0x14)
        *(rcx + 0x18) = *(r8 + rcx + 0x18)
        *(rcx + 0x1c) = *(r8 + rcx + 0x1c)
        *(rcx + 0x20) = *(r8 + rcx + 0x20)
        *(rcx + 0x24) = *(r8 + rcx + 0x24)
        *(rcx + 0x28) = *(rcx + r8 + 0x28)
        *(rcx + 0x2c) = *(rcx + r8 + 0x2c)
        rcx += 0x40
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
