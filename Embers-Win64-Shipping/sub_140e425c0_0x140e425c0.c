// 函数: sub_140e425c0
// 地址: 0x140e425c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x34b4) - 1 u<= 1)
    if (*(arg1 + 0x34b5) == 0)
        return zx.q(*(arg1 + 0x34b5))
    
    if (arg2 != 0)
        sub_140e40810(arg1, arg2)
        return zx.q(*(arg1 + 0x34b5))
    
    char rax_1 = arg1[0x19].b
    
    if (rax_1 != 0)
        if (rax_1 u< 0x10)
            uint64_t rdi_1 = zx.q(rax_1)
            
            if (rdi_1.d s< *(arg1 + 0x44))
                void* rsi_2 = &arg1[9 + rdi_1]
                
                do
                    memcpy(*rsi_2, arg1[zx.q(arg1[0x19].b) + 8], arg1[7].d)
                    rdi_1 = zx.q(rdi_1.d + 1)
                    rsi_2 += 8
                while (rdi_1.d s< *(arg1 + 0x44))
        
        sub_140e42140(arg1)
    
    if (*(arg1 + 0x34b4) != 1)
        sub_140e42710(arg1, 0x7f, 7)
        sub_140e3cb10(arg1)
        sub_140e3c210(arg1, 0xd9)
        *(arg1 + 0x34b4) += 1
        return zx.q(*(arg1 + 0x34b5))
    
    sub_140e41780(arg1, 0, 0xc)
    sub_140e41780(arg1, 2, 0x100)
    
    if (*(arg1 + 0x14) u> 1)
        sub_140e41780(arg1, 1, 0xc)
        sub_140e41780(arg1, 3, 0x100)
    
    if (sub_140e43360(arg1) != 0)
        return zx.q(*(arg1 + 0x34b5))

return 0
