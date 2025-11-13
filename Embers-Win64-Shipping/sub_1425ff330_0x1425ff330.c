// 函数: sub_1425ff330
// 地址: 0x1425ff330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0

switch (*(arg1 + 0x30) - 1)
    case 0, 1
        return zx.q(*(arg1 + 0x58))
    case 2
        int64_t* rcx = *(arg1 + 0x90)
        
        if (rcx == 0)
            return zx.q(*(arg1 + 0xc) << 0xf)
        
        int32_t rax_5 = (*(*rcx + 0x30))(rcx)
        return zx.q((*(arg1 + 0xc) << 0xf) + rax_5)
    case 4
        return zx.q(*(arg1 + 0x88) + *(arg1 + 0x78))
    case 5
        r8 = *(arg1 + 0xc) << 0xf

return zx.q(r8)
