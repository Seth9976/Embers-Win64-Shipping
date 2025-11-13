// 函数: sub_142ac3690
// 地址: 0x142ac3690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(arg2) & 0xfffffff
uint64_t rdx = zx.q(arg2 u>> 0x1c)

if (rdx.d u<= 0xe)
    switch (rdx)
        case 0, 1, 3, 6, 7, 0xe
            return 1
        case 2
            if (r8.d != 0)
                return zx.q(*(*(arg1 + 8) + (r8 << 2)))
        case 4, 8
            if (r8.d != 0)
                return zx.q(*(*(arg1 + 8) + (r8 << 2)))
        case 5, 9
            return zx.q(*(*(arg1 + 0x10) + (r8 << 1)))

return 0
