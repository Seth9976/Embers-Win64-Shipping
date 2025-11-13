// 函数: sub_142868dc0
// 地址: 0x142868dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rcx = *(arg1 + 8)
int32_t r8_1 = *(*(rcx + 0xc0) + 0x60) & 8

if (r8_1 == 0)
    int32_t rax_1 = *rcx
    
    if (rax_1 s>= 0x304 && rax_1 != 0x10000)
        switch (arg1[0x17] - 1)
            case 0
                if (arg1[0x1d5] != 0xffffffff)
                    arg1[0x17] = 0x2a
                    return 1
                
                if (arg1[0x1d6] != 3)
                    return 2
                
                arg1[0x17] = 0x19
                return 1
            case 0x13
                arg1[0x17] = 0x16
                return 1
            case 0x15
                if ((arg1[0x171] & 0x100000) != 0 && arg1[0x136] != 2)
                    arg1[0x17] = 0x23
                    return 1
                
                int32_t rcx_3 = 0x25
                
                if (arg1[0x136] == 1)
                    rcx_3 = 0x2e
                
                arg1[0x17] = rcx_3
                return 1
            case 0x16
                arg1[0x17] = 0x28
                return 1
            case 0x18
                if (arg1[0x1d6] != 3)
                    arg1[0x17] = 0x17
                    return 1
                
                arg1[0x1d6] = 4
                arg1[0x17] = 1
                return 1
            case 0x1f
                if (arg1[0x1d6] != 4)
                    if (arg1[0x19c] != 0)
                        goto label_142868fda
                    
                    arg1[0x17] = 1
                    return 1
                
                arg1[0x1d6] = 2
            label_142868fda:
                int32_t rdx_2 = 0x21
                
                if (*(arg1 + 0x1718) u<= *(arg1 + 0x1720))
                    rdx_2 = 1
                
                arg1[0x17] = rdx_2
                return 1
            case 0x20
                if (arg1[0x32] == 0 && *(arg1 + 0x1718) u> *(arg1 + 0x1720))
                    return 1
                
                arg1[0x17] = 1
                return 1
            case 0x22
                int32_t rax_12 = 0x2e
                
                if (arg1[0x136] != 1)
                    rax_12 = 0x25
                
                arg1[0x17] = rax_12
                return 1
            case 0x23
                arg1[0x17] = 0x2e
                return 1
            case 0x24
                if (arg1[0x32] != 0)
                    arg1[0x17] = 0x24
                    return 1
                
                int32_t rdx = 0x17
                
                if (sub_1428693a0(arg1) != 0)
                    rdx = 0x19
                
                arg1[0x17] = rdx
                return 1
            case 0x27
                arg1[0x17] = 0x24
                return 1
            case 0x29
                arg1[0x17] = 1
                return 1
            case 0x2b
                if (arg1[0x1d5] == 0xffffffff)
                    arg1[0x17] = 1
                    return 1
                
                arg1[0x17] = 0x2a
                return 1
            case 0x2d
                return 2
            default
                sub_142856580(arg1, 0x50, 0x258, 0x44, "ssl\statem\statem_srvr.c", 0x19c)
                return 0

int64_t rax_28 = sx.q(arg1[0x17])

if (rax_28.d u<= 0x24)
    switch (rax_28)
        case 0, 0x15, 0x1a
            return 2
        case 1
            if (arg1[0x18] == 0x13)
                *(arg1 + 0x5c) = 0x13
                return 1
            
            int32_t result = sub_142861320(arg1)
            
            if (result == 0)
                return result
            
            return 2
        case 0x13
            arg1[0x17] = 1
            return 1
        case 0x14
            if (r8_1 != 0 && *(*(arg1 + 0xb0) + 0x108) == 0 && test_bit(sub_14284fc20(arg1), 0xd))
                arg1[0x17] = 0x15
                return 1
            
            void* rax_34
            
            if (arg1[0x1d4] == 0)
                rax_34 = *(arg1 + 0xa8)
            
            if (arg1[0x1d4] != 0 || *(rax_34 + 0x198) == 0 || *(rax_34 + 0x220) == 0)
                arg1[0x17] = 0x16
                return 1
            
            arg1[0x17] = 1
            return 1
        case 0x16
            if (arg1[0x32] != 0)
                int32_t rdx_3 = 0x21
                
                if (arg1[0x19c] == 0)
                    rdx_3 = 0x23
                
                arg1[0x17] = rdx_3
                return 1
            
            if ((*(*(*(arg1 + 0xa8) + 0x238) + 0x20) & 0x54) == 0)
                arg1[0x17] = 0x17
                return 1
            
            if (sub_142869410(arg1) != 0)
                arg1[0x17] = 0x18
                return 1
            
            int32_t rax_41
            int32_t rdx_4
            rax_41, rdx_4 = sub_1428693a0(arg1)
            arg1[0x17] = sbb.d(rdx_4, rdx_4, rax_41 != 0) + 0x1a
            return 1
        case 0x17
            if (arg1[0x193] == 0)
                goto label_1428691df
            
            arg1[0x17] = 0x22
            return 1
        case 0x18
        label_1428691fc:
            
            if (sub_1428693a0(arg1) != 0)
                arg1[0x17] = 0x19
                return 1
            
            arg1[0x17] = 0x1a
            return 1
        case 0x19
            arg1[0x17] = 0x1a
            return 1
        case 0x20
            if (arg1[0x32] != 0)
                arg1[0x17] = 1
                return 1
            
            int32_t rdx_7 = 0x21
            
            if (arg1[0x19c] == 0)
                rdx_7 = 0x23
            
            arg1[0x17] = rdx_7
            return 1
        case 0x21
            arg1[0x17] = 0x23
            return 1
        case 0x22
        label_1428691df:
            
            if (sub_142869410(arg1) == 0)
                goto label_1428691fc
            
            arg1[0x17] = 0x18
            return 1
        case 0x23
            arg1[0x17] = 0x24
            return 1
        case 0x24
            if (arg1[0x32] != 0)
                return 2
            
            arg1[0x17] = 1
            return 1

sub_142856580(arg1, 0x50, 0x25c, 0x44, "ssl\statem\statem_srvr.c", 0x225)
return 0
