// 函数: sub_1425836c0
// 地址: 0x1425836c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    uint128_t* rcx = arg2 + 0x70
    uint128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        rcx[-6].w = *(rcx + r8 - 0x60)
        *(rcx - 0x5e) = *(rcx + r8 - 0x5e)
        *(rcx - 0x5c) = *(rcx + r8 - 0x5c)
        *(rcx - 0x58) = *(rcx + r8 - 0x58)
        rcx[-5].d = *(rcx + r8 - 0x50)
        *(rcx - 0x4c) = *(rcx + r8 - 0x4c)
        *(rcx - 0x48) = *(rcx + r8 - 0x48)
        *(rcx - 0x44) = *(rcx + r8 - 0x44)
        rcx[-4].b = *(rcx + r8 - 0x40)
        *(rcx - 0x3f) = *(rcx + r8 - 0x3f)
        *(rcx - 0x3e) = *(rcx + r8 - 0x3e)
        *(rcx - 0x3d) = *(rcx + r8 - 0x3d)
        rcx[-3].b = *(rcx + r8 - 0x30)
        *(rcx - 0x2c) = *(rcx + r8 - 0x2c)
        rcx[-2] = *(rcx + r8 - 0x20)
        rcx[-1] = *(r8 + rcx - 0x10)
        *rcx = *(r8 + rcx)
        uint128_t zmm0 = *(rcx + r8 + 0x10)
        rcx = &rcx[0xc]
        rcx[-0xb] = zmm0
        rcx[-0xa].d = *(rcx + r8 - 0xa0)
        *(rcx - 0x98) = *(rcx + r8 - 0x98)
        rcx[-9].d = *(rcx + r8 - 0x90)
        *(rcx - 0x8c) = *(rcx + r8 - 0x8c)
        *(rcx - 0x84) = *(rcx + r8 - 0x84)
        rcx[-8].b = *(rcx + r8 - 0x80)
        *(rcx - 0x78) = *(rcx + r8 - 0x78)
        i = arg4
        arg4 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
