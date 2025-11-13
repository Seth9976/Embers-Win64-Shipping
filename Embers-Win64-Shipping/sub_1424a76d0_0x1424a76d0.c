// 函数: sub_1424a76d0
// 地址: 0x1424a76d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    int32_t* rcx = arg2 + 0x10
    int32_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 8) = *(r8 + rcx - 8)
        *rcx = *(r8 + rcx)
        *(rcx + 4) = *(r8 + rcx + 4)
        rcx[3] = *(r8 + rcx + 0xc)
        uint128_t zmm0 = *(r8 + rcx + 0x10)
        rcx = &rcx[0x2a]
        *(rcx - 0x98) = zmm0
        *(rcx - 0x88) = *(r8 + rcx - 0x88)
        *(rcx - 0x78) = *(r8 + rcx - 0x78)
        *(rcx - 0x68) = *(r8 + rcx - 0x68)
        *(rcx - 0x58) = *(r8 + rcx - 0x58)
        *(rcx - 0x48) = *(r8 + rcx - 0x48)
        *(rcx - 0x38) = *(r8 + rcx - 0x38)
        *(rcx - 0x28) = *(r8 + rcx - 0x28)
        *(rcx - 0x18) = *(r8 + rcx - 0x18)
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
