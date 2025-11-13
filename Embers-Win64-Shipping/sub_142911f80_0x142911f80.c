// 函数: sub_142911f80
// 地址: 0x142911f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rdi = *(arg1 + 0x28)

if (arg2 s> 0x1001)
    if (arg2 == 0x1002)
        if (arg3 != 0xa0 && arg3 != 0xe0 && arg3 != 0 && arg3 != 0x100)
            return 0xfffffffe
        
        rdi[1] = arg3
        return 1
    
    if (arg2 != 0x1003)
        return 0xfffffffe
    
    if (sub_1406938b0(arg4) == 0x40)
        *(rdi + 8) = arg4
        return 1
    
    if (sub_1406938b0(arg4) == 0x2a3)
        *(rdi + 8) = arg4
        return 1
    
    if (sub_1406938b0(arg4) == 0x2a0)
        *(rdi + 8) = arg4
        return 1
    
    sub_1428a5670(0xa, 0x78, 0x6a, "crypto\dsa\dsa_pmeth.c", 0x80)
    return 0

if (arg2 == 0x1001)
    if (arg3 s< 0x100)
        return 0xfffffffe
    
    *rdi = arg3
    return 1

if (arg2 - 1 u> 0xc)
    return 0xfffffffe

switch (arg2)
    case 1
        if (sub_1406938b0(arg4) == 0x40)
            *(rdi + 0x18) = arg4
            return 1
        
        if (sub_1406938b0(arg4) == 0x74)
            *(rdi + 0x18) = arg4
            return 1
        
        if (sub_1406938b0(arg4) == 0x42)
            *(rdi + 0x18) = arg4
            return 1
        
        if (sub_1406938b0(arg4) == 0x2a3)
            *(rdi + 0x18) = arg4
            return 1
        
        if (sub_1406938b0(arg4) == 0x2a0)
            *(rdi + 0x18) = arg4
            return 1
        
        if (sub_1406938b0(arg4) == 0x2a1)
            *(rdi + 0x18) = arg4
            return 1
        
        if (sub_1406938b0(arg4) == 0x2a2)
            *(rdi + 0x18) = arg4
            return 1
        
        sub_1428a5670(0xa, 0x78, 0x6a, "crypto\dsa\dsa_pmeth.c", 0x8e)
        return 0
    case 2
        sub_1428a5670(0xa, 0x78, 0x96, "crypto\dsa\dsa_pmeth.c", 0x9f)
        return 0xfffffffe
    case 3, 4, 6, 8, 9, 0xa, 0xc
        return 0xfffffffe
    case 5, 7, 0xb
        return 1
    case 0xd
        *arg4 = *(rdi + 0x18)
        return 1
