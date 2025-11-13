// 函数: sub_142a6a250
// 地址: 0x142a6a250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)

if (arg2 - 4 u<= 0x12)
    switch (arg2)
        case 4
            if (rbx.d == 0)
                int32_t rdx_1
                rdx_1.b = *(arg1 + 0x104) == 1
                return zx.q(rdx_1)
            
            if (rbx.d == 1)
                return zx.q(rbx.d)
            
            int32_t rcx_2 = (*(*arg1 + 0xf0))(arg1, 5, zx.q(rbx.d)) - zx.d(*(arg1 + 0x104))
            
            if (rbx.d != 2)
                return zx.q((rcx_2 + 0xd) s/ 7)
            
            return zx.q((rcx_2 + 7) s/ 7)
        case 7, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x12, 0x14, 0x15, 0x16
            return zx.q(*(((rbx + (sx.q(arg2) << 2)) << 2) + 0x14363ef10))

jump(*(*arg1 + 0xf0))
