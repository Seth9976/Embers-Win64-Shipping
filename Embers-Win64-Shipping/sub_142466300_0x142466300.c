// 函数: sub_142466300
// 地址: 0x142466300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    int32_t* rcx = arg2 + 0x10
    int32_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 8) = *(r8 + rcx - 8)
        *rcx = *(r8 + rcx)
        rcx[1].b = *(r8 + rcx + 4)
        *(rcx + 5) = *(r8 + rcx + 5)
        *(rcx + 6) = *(r8 + rcx + 6)
        rcx[2] = *(r8 + rcx + 8)
        rcx[3] = *(r8 + rcx + 0xc)
        int128_t zmm0 = *(r8 + rcx + 0x10)
        rcx = &rcx[0xc]
        *(rcx - 0x20) = zmm0
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
