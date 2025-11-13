// 函数: sub_142879010
// 地址: 0x142879010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rcx = *(arg1 + 8)
int32_t r8_1 = *(*(rcx + 0xc0) + 0x60) & 8
int32_t rax_1

if (r8_1 == 0)
    rax_1 = *rcx

if (r8_1 != 0 || rax_1 s< 0x304 || rax_1 == 0x10000)
    switch (arg1[0x17] - 1)
        case 0
            if (arg2 == 0)
                arg1[0x17] = 0x29
                return zx.q(arg2 + 1)
        case 2
            if (arg1[0x32] != 0)
                if (arg1[0x19c] != 0)
                    goto label_14287940f
                
                goto label_14287926c
            
            if (r8_1 != 0 && arg2 == 3)
                arg1[0x17] = 2
                return 1
            
            if (*arg1 s>= 0x301 && *(arg1 + 0x6b0) != 0 && *(*(arg1 + 0x508) + 0x180) != 0
                    && arg2 == 0x101)
                arg1[0x32] = 1
                arg1[0x17] = 0xa
                return 1
            
            void* rcx_10 = *(*(arg1 + 0xa8) + 0x238)
            
            if ((*(rcx_10 + 0x20) & 0x54) != 0)
                int32_t rax_29 = *(rcx_10 + 0x1c)
                
                if ((rax_29 & 0x1a6) != 0)
                    goto label_1428793e2
                
                if ((rax_29 & 0x1c8) != 0 && arg2 == 0xc)
                    arg1[0x17] = 6
                    return 1
                
                if (arg2 == 0xd)
                    goto label_1428793be
                
                goto label_142879351
            
            if (arg2 == 0xb)
                arg1[0x17] = 4
                return zx.q(arg2 - 0xa)
        case 3
            if (arg1[0x193] == 0 || arg2 != 0x16)
                goto label_1428793a0
            
            arg1[0x17] = 5
            return zx.q(arg2 - 0x15)
        case 4
        label_1428793a0:
            int32_t rax_33 = *(*(*(arg1 + 0xa8) + 0x238) + 0x1c)
            
            if ((rax_33 & 0x1a6) == 0)
                if ((rax_33 & 0x1c8) == 0 || arg2 != 0xc)
                    goto label_1428793b6
                
                arg1[0x17] = 6
                return 1
            
        label_1428793e2:
            
            if (arg2 == 0xc)
                arg1[0x17] = 6
                return 1
        case 5
        label_1428793b6:
            
            if (arg2 != 0xd)
                goto label_142879351
            
        label_1428793be:
            
            if (sub_142878200(arg1) != 0)
                arg1[0x17] = 7
                return 1
        case 6
        label_142879351:
            
            if (arg2 == 0xe)
                arg1[0x17] = 8
                return zx.q(arg2 - 0xd)
        case 8
        label_14287926c:
            
            if (arg2 == 0x101)
                arg1[0x17] = 0xa
                return 1
        case 9
            if (arg2 == 0x14)
                arg1[0x17] = 0xb
                return zx.q(arg2 - 0x13)
        case 0xb
            if (arg2 == 2)
                arg1[0x17] = 3
                return 1
            
            if (r8_1 != 0 && arg2 == 3)
                arg1[0x17] = 2
                return 1
        case 0x11
            if (arg1[0x19c] == 0)
                goto label_14287926c
            
        label_14287940f:
            
            if (arg2 == 4)
                arg1[0x17] = 9
                return zx.q(arg2 - 3)
        case 0x2d
            if (arg2 == 2)
                arg1[0x17] = 3
                return 1
else
    switch (arg1[0x17] - 1)
        case 0
            if (arg2 == 4)
                arg1[0x17] = 9
                return zx.q(arg2 - 3)
            
            if (arg2 == 0x18)
                arg1[0x17] = 0x2d
                return zx.q(arg2 - 0x17)
            
            if (arg2 == 0xd && arg1[0x1d6] == 1)
                arg1[0x1d6] = 4
                
                if (sub_14285f860(arg1) != 0)
                    arg1[0x17] = 7
                    return 1
        case 2
            if (arg2 == 8)
                arg1[0x17] = 0x26
                return zx.q(arg2 - 7)
        case 3
            if (arg2 == 0xf)
                arg1[0x17] = 0x27
                return zx.q(arg2 - 0xe)
        case 6
        label_1428790d2:
            
            if (arg2 == 0xb)
                arg1[0x17] = 4
                return zx.q(arg2 - 0xa)
        case 0xb
            if (arg2 == 2)
                arg1[0x17] = 3
                return zx.q(arg2 - 1)
        case 0x25
            if (arg1[0x32] != 0)
                goto label_14287910e
            
            if (arg2 != 0xd)
                goto label_1428790d2
            
            arg1[0x17] = 7
            return 1
        case 0x26
        label_14287910e:
            
            if (arg2 == 0x14)
                arg1[0x17] = 0xb
                return zx.q(arg2 - 0x13)

if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0 || arg2 != 0x101)
    sub_142856580(arg1, 0xa, 0x1a1, 0xf4, "ssl\statem\statem_clnt.c", 0x18b)
    return 0

*(arg1 + 0x98) = 0
arg1[0xa] = 3
void* rax_20 = sub_14060aa60(arg1)
sub_142899cc0(rax_20, 0xf)
sub_14289a9a0(rax_20, 9)
return 0
