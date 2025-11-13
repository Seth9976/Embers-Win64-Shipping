// 函数: sub_142466810
// 地址: 0x142466810
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
        rcx = &rcx[0x1e]
        *(rcx - 0x68) = zmm0
        *(rcx - 0x58) = *(r8 + rcx - 0x58)
        rcx[-0x14] = *(r8 + rcx - 0x50)
        rcx[-0x13] = *(r8 + rcx - 0x4c)
        *(rcx - 0x48) = *(r8 + rcx - 0x48)
        *(rcx - 0x38) = *(r8 + rcx - 0x38)
        *(rcx - 0x28) = *(r8 + rcx - 0x28)
        rcx[-6] = *(rcx + r8 - 0x18)
        rcx[-5].b = *(rcx + r8 - 0x14)
        i = arg4
        arg4 -= 1
    while (i != 1)

return 1
