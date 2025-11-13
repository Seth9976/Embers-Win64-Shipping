// 函数: sub_1425831e0
// 地址: 0x1425831e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x70
    int128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 0x60) = *(rcx + r8 - 0x60)
        *(rcx - 0x5e) = *(rcx + r8 - 0x5e)
        *(rcx - 0x5c) = *(rcx + r8 - 0x5c)
        *(rcx - 0x58) = *(rcx + r8 - 0x58)
        *(rcx - 0x50) = *(rcx + r8 - 0x50)
        *(rcx - 0x4c) = *(rcx + r8 - 0x4c)
        *(rcx - 0x48) = *(rcx + r8 - 0x48)
        *(rcx - 0x44) = *(rcx + r8 - 0x44)
        *(rcx - 0x40) = *(rcx + r8 - 0x40)
        *(rcx - 0x3f) = *(rcx + r8 - 0x3f)
        *(rcx - 0x3e) = *(rcx + r8 - 0x3e)
        *(rcx - 0x3d) = *(rcx + r8 - 0x3d)
        *(rcx - 0x30) = *(rcx + r8 - 0x30)
        *(rcx - 0x2c) = *(r8 + rcx - 0x2c)
        *(rcx - 0x20) = *(rcx + r8 - 0x20)
        *(rcx - 0x10) = *(r8 + rcx - 0x10)
        *rcx = *(r8 + rcx)
        int128_t zmm0 = *(rcx + r8 + 0x10)
        rcx += 0xa0
        *(rcx - 0x90) = zmm0
        *(rcx - 0x80) = *(rcx + r8 - 0x80)
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
