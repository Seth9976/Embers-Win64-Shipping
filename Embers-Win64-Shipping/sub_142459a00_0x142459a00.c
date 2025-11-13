// 函数: sub_142459a00
// 地址: 0x142459a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x30
    int128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 0x30) = *(r8 + rcx - 0x30)
        *(rcx - 0x2c) = *(r8 + rcx - 0x2c)
        *(rcx - 0x20) = *(r8 + rcx - 0x20)
        *(rcx - 0x10) = *(r8 + rcx - 0x10)
        *rcx = *(r8 + rcx)
        rcx += 0x40
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
