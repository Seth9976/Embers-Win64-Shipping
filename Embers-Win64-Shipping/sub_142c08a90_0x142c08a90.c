// 函数: sub_142c08a90
// 地址: 0x142c08a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = arg1 u>> 0x10

if (rax != 0)
    if (rax == 1)
        int32_t rdx_7
        rdx_7.b = arg1 - 0x1d173 u<= 7
        return zx.q(rdx_7)
    
    if (rax == 0xe)
        int32_t rdx_6
        rdx_6.b = arg1 - 0xe0000 u<= 0xfff
        return zx.q(rdx_6)
else
    switch (arg1 u>> 8)
        case 0
            int32_t rdx_3
            rdx_3.b = arg1 == 0xad
            return zx.q(rdx_3)
        case 3
            int32_t rdx_2
            rdx_2.b = arg1 == 0x34f
            return zx.q(rdx_2)
        case 6
            int32_t rdx_1
            rdx_1.b = arg1 == 0x61c
            return zx.q(rdx_1)
        case 0x17
            int32_t rdx
            rdx.b = arg1 - 0x17b4 u<= 1
            return zx.q(rdx)
        case 0x18
            int32_t rdx_4
            rdx_4.b = arg1 - 0x180b u<= 3
            return zx.q(rdx_4)
        case 0x20
            if (arg1 - 0x200b u> 4 && arg1 - 0x202a u> 4 && arg1 - 0x2060 u> 0xf)
                return 0
            
            return 1
        case 0xfe
            if (arg1 - 0xfe00 u> 0xf && arg1 != 0xfeff)
                return 0
            
            return 1
        case 0xff
            int32_t rdx_5
            rdx_5.b = arg1 - 0xfff0 u<= 8
            return zx.q(rdx_5)

return 0
