// 函数: sub_14283e3a0
// 地址: 0x14283e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x12)
int64_t rax = *arg1

if (rax u<= 0xffff && arg1[1] u<= 0xffff)
    *(arg2 + 0xc) = rax.w
    *(arg2 + 0xe) = arg1[1].w
    
    switch (arg1[2].d - 0x1c)
        case 0, 1
            *(arg2 + 2) = 2
            *(arg2 + 0x10) = 0x2820
            *arg3 |= 0x10000
            return 0
        case 0x21, 0x25
            *(arg2 + 2) = 3
            *(arg2 + 0x10) = 0x2008
            return 0
        case 0x3a
            *(arg2 + 0x10) = 0x2110
            *(arg2 + 2) = 2
            return 0
        case 0x3b, 0x3f
            *(arg2 + 0x10) = 0x2820
            *(arg2 + 2) = 2
            return 0
        case 0x3c, 0x41
            *(arg2 + 2) = 2
            *(arg2 + 0x10) = 0x2018
            *arg3 |= 0x20000
            return 0

return 0x80070032
