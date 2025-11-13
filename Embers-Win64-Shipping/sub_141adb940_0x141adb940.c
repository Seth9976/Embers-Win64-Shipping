// 函数: sub_141adb940
// 地址: 0x141adb940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x10
    int128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 8) = *(r8 + rcx - 8)
        uint128_t zmm0 = *(r8 + rcx)
        rcx += 0xc8
        *(rcx - 0xc8) = zmm0
        *(rcx - 0xb8) = *(r8 + rcx - 0xb8)
        *(rcx - 0xa8) = *(r8 + rcx - 0xa8)
        *(rcx - 0xa4) = *(r8 + rcx - 0xa4)
        *(rcx - 0x9c) = *(r8 + rcx - 0x9c)
        *(rcx - 0x98) = *(r8 + rcx - 0x98)
        *(rcx - 0x88) = *(r8 + rcx - 0x88)
        *(rcx - 0x78) = *(r8 + rcx - 0x78)
        *(rcx - 0x68) = *(r8 + rcx - 0x68)
        *(rcx - 0x58) = *(r8 + rcx - 0x58)
        *(rcx - 0x50) = *(r8 + rcx - 0x50)
        *(rcx - 0x48) = *(r8 + rcx - 0x48)
        *(rcx - 0x38) = *(r8 + rcx - 0x38)
        *(rcx - 0x28) = *(r8 + rcx - 0x28)
        *(rcx - 0x18) = *(r8 + rcx - 0x18)
        *(rcx - 0x14) = *(r8 + rcx - 0x14)
        *(rcx - 0x13) = *(r8 + rcx - 0x13)
        i = arg4
        arg4 -= 1
    while (i != 1)

return 1
