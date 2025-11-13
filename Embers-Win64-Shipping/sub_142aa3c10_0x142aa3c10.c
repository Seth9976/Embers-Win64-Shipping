// 函数: sub_142aa3c10
// 地址: 0x142aa3c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    int32_t rax_12
    
    if (arg2 u> 7)
        *arg3 = 1
    else
        switch (arg2)
            case 0
                rax_12.b = (*(*(arg1 + 0x10) + 0x18) & 0x800) != 0
                return zx.q(rax_12 + 0x10)
            case 1
                void* rax_1 = *(arg1 + 0x10)
                return zx.q(sbb.d(rax_1.d, rax_1.d, ((*(rax_1 + 0x18)).b & 0xc) != 0) + 0x15)
            case 2
                int32_t rcx_5 = *(*(arg1 + 0x10) + 0x18) & 0x300
                
                if (rcx_5 == 0)
                    return 0x10
                
                int32_t rax_5
                rax_5.b = rcx_5 != 0x200
                return zx.q(rax_5 + 0x18)
            case 3
                rax_12.b = (*(*(arg1 + 0x10) + 0x18) & 0x400) != 0
                return zx.q(rax_12 + 0x10)
            case 4
                rax_12.b = (*(*(arg1 + 0x10) + 0x18) & 1) != 0
                return zx.q(rax_12 + 0x10)
            case 5
                return zx.q(*(*(arg1 + 0x10) + 0x18) s>> 0xc)
            case 6
                return 0x10
            case 7
                rax_12.b = (*(*(arg1 + 0x10) + 0x18) & 2) != 0
                return zx.q(rax_12 + 0x10)

return 0xffffffff
