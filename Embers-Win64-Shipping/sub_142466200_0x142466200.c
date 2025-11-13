// 函数: sub_142466200
// 地址: 0x142466200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x10
    int128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 8) = *(r8 + rcx - 8)
        uint128_t zmm0 = *(r8 + rcx)
        rcx += 0xd0
        *(rcx - 0xd0) = zmm0
        *(rcx - 0xc0) = *(r8 + rcx - 0xc0)
        *(rcx - 0xb0) = *(r8 + rcx - 0xb0)
        *(rcx - 0xac) = *(r8 + rcx - 0xac)
        *(rcx - 0xa8) ^= (*(r8 + rcx - 0xa8) ^ *(rcx - 0xa8)) & 1
        *(rcx - 0xa0) = *(r8 + rcx - 0xa0)
        *(rcx - 0x90) = *(r8 + rcx - 0x90)
        *(rcx - 0x80) = *(r8 + rcx - 0x80)
        *(rcx - 0x70) = *(r8 + rcx - 0x70)
        *(rcx - 0x60) = *(r8 + rcx - 0x60)
        *(rcx - 0x58) = *(r8 + rcx - 0x58)
        *(rcx - 0x50) = *(r8 + rcx - 0x50)
        *(rcx - 0x48) = *(r8 + rcx - 0x48)
        *(rcx - 0x38) = *(r8 + rcx - 0x38)
        *(rcx - 0x28) = *(r8 + rcx - 0x28)
        *(rcx - 0x18) = *(r8 + rcx - 0x18)
        *(rcx - 0x14) = *(r8 + rcx - 0x14)
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
