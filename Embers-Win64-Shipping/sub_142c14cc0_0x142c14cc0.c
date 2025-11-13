// 函数: sub_142c14cc0
// 地址: 0x142c14cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(arg3 - 1)

if (r8.d u> 8)
    return &data_14369a5d0

uint16_t rdx_1
uint64_t r8_4

switch (r8)
    case 0
        return sub_142c14e30(arg1) __tailcall
    case 1
        uint32_t rcx_4 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
        
        if (rcx_4 != 1 && rcx_4 != 2)
            return &data_14369a5d0
        
        rdx_1 = zx.w(arg1[2])
        r8_4 = zx.q(arg1[3])
        
        if (0 == rdx_1 * 0x100 + r8_4.w)
            return &data_14369a5d0
        
        return &arg1[(zx.q(rdx_1.b) << 8) + r8_4]
    case 2, 3, 4, 5
        if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) != 1)
            return &data_14369a5d0
        
    label_142c14d63:
        rdx_1 = zx.w(arg1[2])
        r8_4 = zx.q(arg1[3])
        
        if (0 == rdx_1 * 0x100 + r8_4.w)
            return &data_14369a5d0
        
        return &arg1[(zx.q(rdx_1.b) << 8) + r8_4]
    case 6
        return sub_142c14c30(arg1) __tailcall
    case 7
        uint32_t rcx_21 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
        
        if (rcx_21 == 1 || rcx_21 == 2)
            goto label_142c14d63
        
        if (rcx_21 == 3)
            return sub_142c1e890(arg1)
        
        return &data_14369a5d0
    case 8
        if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) == 1)
            return sub_142c14b70(arg1, arg2)
        
        return &data_14369a5d0
