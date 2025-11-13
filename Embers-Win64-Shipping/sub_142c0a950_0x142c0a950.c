// 函数: sub_142c0a950
// 地址: 0x142c0a950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0xc0) != 0)
    return 

uint64_t rax = zx.q(arg1 - 1)

if (rax.d u> 0x16)
    return 

bool cond:0_1

switch (&__dos_header.e_magic[zx.q(jump_table_142c0a9f8[zx.q(lookup_table_142c0aa08[rax])])])
    case 0x142c0a986
        rax.b = *(arg2 + 0x24) & 1
    label_142c0a9a3:
        
        if (*(arg2 + 0x24) u> 0 && rax.b != 0)
            if (*(arg2 + 0x24) u<= 0)
                *(arg2 + 0x20) = 1
            
            if (*(arg2 + 0x28) u> 0)
                rax = *(arg2 + 0x30)
            else
                data_144017550.q = 0
                rax = &data_144017550
            
            *(arg2 + 0xc8) = *rax
            *(arg2 + 0xc1) = 1
            *(arg2 + 0xc4) = 1
        
        *(arg2 + 0xc0) = 1
    case 0x142c0a98e
        cond:0_1 = *(arg2 + 0x24) u> 1
    label_142c0a998:
        rax.b = cond:0_1
        goto label_142c0a9a3
    case 0x142c0a994
        cond:0_1 = *(arg2 + 0x24) u> 2
        goto label_142c0a998
