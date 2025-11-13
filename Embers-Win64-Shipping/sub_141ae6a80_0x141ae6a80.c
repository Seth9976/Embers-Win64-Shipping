// 函数: sub_141ae6a80
// 地址: 0x141ae6a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x10
    int128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 8) = *(r8 + rcx - 8)
        uint128_t zmm0 = *(r8 + rcx)
        rcx += 0xa0
        *(rcx - 0xa0) = zmm0
        *(rcx - 0x90) = *(r8 + rcx - 0x90)
        *(rcx - 0x8c) = *(r8 + rcx - 0x8c)
        *(rcx - 0x88) = *(r8 + rcx - 0x88)
        *(rcx - 0x78) = *(r8 + rcx - 0x78)
        *(rcx - 0x68) = *(r8 + rcx - 0x68)
        *(rcx - 0x58) = *(r8 + rcx - 0x58)
        *(rcx - 0x48) = *(r8 + rcx - 0x48)
        *(rcx - 0x38) = *(r8 + rcx - 0x38)
        *(rcx - 0x28) = *(r8 + rcx - 0x28)
        *(rcx - 0x20) = *(r8 + rcx - 0x20)
        *(rcx - 0x1c) = *(r8 + rcx - 0x1c)
        *(rcx - 0x18) = *(r8 + rcx - 0x18)
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
