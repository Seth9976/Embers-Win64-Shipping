// 函数: sub_1423c58b0
// 地址: 0x1423c58b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x2d8))(arg1, 0) == 0)
    uint8_t rax_1 = arg1[0xc].b
    
    if ((rax_1 & 0x10) == 0)
        int64_t* rcx = arg1[0xf]
        char rcx_1
        
        if (rcx != 0)
            int128_t entry_zmm2 = sub_141997f50(rcx)
            rcx_1 = arg1[0x14].b
        label_1423c58f4:
            
            if (rcx_1 != 0)
                entry_zmm2 = sub_141998070(&arg1[0x10])
            
            int128_t entry_zmm3
            sub_141997ac0(&arg1[0x15], 0, entry_zmm2, entry_zmm3)
            arg1[0xc].b |= 0x10
            rax_1 = arg1[0xc].b
        else
            rcx_1 = arg1[0x14].b
            
            if (rcx_1 != 0)
                goto label_1423c58f4
        
        if ((rax_1 & 0x10) == 0)
            return 1
    
    if (sub_1419a45a0(&arg1[0x15]) != 0)
        return 1

return 0
