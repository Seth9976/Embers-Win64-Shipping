// 函数: sub_1425837f0
// 地址: 0x1425837f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    uint128_t* rcx = arg2 + 0x70
    uint128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        rcx[-6].w = *(r8 + rcx - 0x60)
        *(rcx - 0x5e) = *(r8 + rcx - 0x5e)
        *(rcx - 0x5c) = *(r8 + rcx - 0x5c)
        *(rcx - 0x58) = *(r8 + rcx - 0x58)
        rcx[-5].d = *(r8 + rcx - 0x50)
        *(rcx - 0x4c) = *(r8 + rcx - 0x4c)
        *(rcx - 0x48) = *(r8 + rcx - 0x48)
        *(rcx - 0x44) = *(r8 + rcx - 0x44)
        rcx[-4].b = *(r8 + rcx - 0x40)
        *(rcx - 0x3f) = *(r8 + rcx - 0x3f)
        *(rcx - 0x3e) = *(r8 + rcx - 0x3e)
        *(rcx - 0x3d) = *(r8 + rcx - 0x3d)
        rcx[-3].b = *(r8 + rcx - 0x30)
        *(rcx - 0x2c) = *(r8 + rcx - 0x2c)
        rcx[-2] = *(r8 + rcx - 0x20)
        rcx[-1] = *(r8 + rcx - 0x10)
        *rcx = *(r8 + rcx)
        uint128_t zmm0 = *(r8 + rcx + 0x10)
        rcx = &rcx[0xe]
        rcx[-0xd] = zmm0
        rcx[-0xc].d = *(r8 + rcx - 0xc0)
        *(rcx - 0xb8) = *(r8 + rcx - 0xb8)
        rcx[-0xb].d = *(r8 + rcx - 0xb0)
        *(rcx - 0xa8) = *(r8 + rcx - 0xa8)
        rcx[-0xa].d = *(r8 + rcx - 0xa0)
        *(rcx - 0x9c) = *(r8 + rcx - 0x9c)
        *(rcx - 0x98) = *(r8 + rcx - 0x98)
        *(rcx - 0x97) = *(r8 + rcx - 0x97)
        rcx[-9].q = *(r8 + rcx - 0x90)
        *(rcx - 0x88) = *(r8 + rcx - 0x88)
        rcx[-8].b = *(r8 + rcx - 0x80)
        *(rcx - 0x7c) = *(r8 + rcx - 0x7c)
        *(rcx - 0x74) = *(r8 + rcx - 0x74)
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
