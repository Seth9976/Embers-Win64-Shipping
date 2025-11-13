// 函数: sub_142879550
// 地址: 0x142879550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rcx = *(arg1 + 8)
int32_t r8_1 = *(*(rcx + 0xc0) + 0x60) & 8

if (r8_1 == 0)
    int32_t rax_1 = *rcx
    
    if (rax_1 s>= 0x304 && rax_1 != 0x10000)
        switch (arg1[0x17] - 1)
            case 0
                if (arg1[0x1d5] == 0xffffffff)
                    return 2
                
                arg1[0x17] = 0x2b
                return 1
            case 6
                if (arg1[0x1d6] == 4)
                    arg1[0x17] = 0xd
                    return 1
                
                if ((arg1[0x11].b & 1) != 0)
                    arg1[0x17] = 1
                    return 1
                
                sub_142856580(arg1, 0x50, 0x256, 0x44, "ssl\statem\statem_clnt.c", 0x1b2)
                return 0
            case 8, 0x11, 0x2a
                arg1[0x17] = 1
                return 1
            case 0xa
                if (((arg1[0x21] - 3) & 0xfffffffb) == 0)
                    arg1[0x17] = 0x2f
                    return 1
                
                if ((arg1[0x171] & 0x100000) != 0 && arg1[0x136] == 0)
                    arg1[0x17] = 0x10
                    return 1
                
                int32_t rcx_3 = 0x12
                
                if (*(*(arg1 + 0xa8) + 0x248) != 0)
                    rcx_3 = 0xd
                
                arg1[0x17] = rcx_3
                return 1
            case 0xc
                int32_t rcx_5 = 0x12
                
                if (*(*(arg1 + 0xa8) + 0x248) == 1)
                    rcx_5 = 0xf
                
                arg1[0x17] = rcx_5
                return 1
            case 0xe
                arg1[0x17] = 0x12
                return 1
            case 0xf, 0x2f
            label_1428796bf:
                int32_t rcx_4 = 0x12
                
                if (*(*(arg1 + 0xa8) + 0x248) != 0)
                    rcx_4 = 0xd
                
                arg1[0x17] = rcx_4
                return 1
            case 0x2c
                if (arg1[0x1d5] == 0xffffffff)
                    arg1[0x17] = 1
                    return 1
                
                arg1[0x17] = 0x2b
                return 1
            case 0x2e
                if (arg1[0x1ba] != 2)
                    goto label_1428796bf
                
                arg1[0x17] = 0x30
                return 1
            default
                sub_142856580(arg1, 0x50, 0x256, 0x44, "ssl\statem\statem_clnt.c", 0x1a2)
                return 0

int64_t rax_23 = sx.q(arg1[0x17])

if (rax_23.d u<= 0x2e)
    switch (rax_23)
        case 0, 2
        label_142879842:
            arg1[0x17] = 0xc
            return 1
        case 1
            if (arg1[0x1d4] == 0)
                return 2
            
            goto label_142879842
        case 3
            if ((arg1[0x171] & 0x100000) == 0)
                goto label_142879842
            
            if (arg1[0x21] == 7)
                goto label_142879842
            
            arg1[0x17] = 0x10
            return 1
        case 8
            void* rax_28 = *(arg1 + 0xa8)
            arg1[0x17] = sbb.d(rax_28.d, rax_28.d, *(rax_28 + 0x248) != 0) + 0xe
            return 1
        case 0xb
            if (arg1[0x32] != 0)
                arg1[0x17] = 0x10
                return 1
            
            arg1[0x17] = 1
            return 1
        case 0xc
            if (arg1[0x21] != 2)
                return 2
            
            int32_t rcx_9 = 0x10
            
            if ((arg1[0x171] & 0x100000) == 0)
                rcx_9 = 0x2e
            
            arg1[0x17] = rcx_9
            return 1
        case 0xd
            arg1[0x17] = 0xe
            return 1
        case 0xe
            int32_t rbx_1
            rbx_1.b = *(*(arg1 + 0xa8) + 0x248) != 1
            arg1[0x17] = rbx_1 + 0xf
            
            if ((**(arg1 + 0xa8) & 0x10) == 0)
                return 1
            
            arg1[0x17] = 0x10
            return 1
        case 0xf
            arg1[0x17] = 0x10
            return 1
        case 0x10
            if (arg1[0x136] == 1)
                arg1[0x17] = 0xc
                return 1
            
            if (arg1[0x21] == 2)
                arg1[0x17] = 0x2e
                return 1
            
            if (r8_1 == 0 && *(*(arg1 + 0xa8) + 0x3dc) != r8_1)
                arg1[0x17] = 0x11
                return zx.q(r8_1 + 1)
            
            arg1[0x17] = 0x12
            return 1
        case 0x11
            arg1[0x17] = 0x12
            return 1
        case 0x12
            if (arg1[0x32] == 0)
                return 2
            
            arg1[0x17] = 1
            return 1
        case 0x29
            if (sub_142872450(arg1, 1) == 0)
                arg1[0x17] = 1
                return 1
            
            int32_t result = sub_142861320(arg1)
            
            if (result == 0)
                return result
            
            goto label_142879842
        case 0x2e
            return 2

sub_142856580(arg1, 0x50, 0x257, 0x44, "ssl\statem\statem_clnt.c", 0x208)
return 0
