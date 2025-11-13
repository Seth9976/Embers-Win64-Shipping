// 函数: sub_1428689f0
// 地址: 0x1428689f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t* rcx = *(arg1 + 8)
int32_t r9_1 = *(*(rcx + 0xc0) + 0x60) & 8
int32_t rax_1

if (r9_1 == 0)
    rax_1 = *rcx

if (r9_1 == 0 && rax_1 s>= 0x304 && rax_1 != 0x10000)
    bool cond:0_1
    
    switch (arg1[0x17] - 1)
        case 0
            if (arg1[0x21] != 0xb)
                if (arg2 == 0xb)
                    cond:0_1 = arg1[0x1d6] != 4
                    goto label_142868b19
                
                if (arg2 == 0x18)
                    arg1[0x17] = 0x2c
                    return 1
        case 0x1a
            if (*(*(arg1 + 0x508) + 0xf8) == 0)
                goto label_142868ae5
            
            if (arg2 == 0xf)
                arg1[0x17] = 0x1d
                return zx.q(arg2 - 0xe)
        case 0x1c
        label_142868ae5:
            
            if (arg2 == 0x14)
                arg1[0x17] = 0x20
                return zx.q(arg2 - 0x13)
        case 0x23, 0x30
        label_142868aad:
            
            if (*(*(arg1 + 0xa8) + 0x2a0) == 0)
                goto label_142868ae5
            
            cond:0_1 = arg2 != 0xb
        label_142868b19:
            
            if (not(cond:0_1))
                arg1[0x17] = 0x1b
                return 1
        case 0x2d
            if (arg1[0x136] != 1)
                if (arg1[0x1ba] != 2)
                    goto label_142868aad
                
                if (arg2 == 5)
                    arg1[0x17] = 0x31
                    return 1
            else if (arg2 == 1)
                arg1[0x17] = 0x14
                return zx.q(arg2)
    
    goto label_142868ca1

int64_t rax_14 = sx.q(arg1[0x17])

if (rax_14.d u<= 0x24)
    switch (rax_14)
        case 0, 1, 0x15
            if (arg2 != 1)
                goto label_142868ca1
            
            arg1[0x17] = 0x14
            return zx.q(arg2)
        case 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                0x16, 0x17, 0x18, 0x19, 0x20, 0x21, 0x22, 0x23
            goto label_142868ca1
        case 0x1a
            int32_t rcx_5 = *(*(arg1 + 0xa8) + 0x2a0)
            
            if (arg2 != 0x10)
                if (rcx_5 == 0 || arg2 != 0xb)
                    goto label_142868ca1
                
                arg1[0x17] = 0x1b
                return zx.q(arg2 - 0xa)
            
            if (rcx_5 != 0)
                if (*arg1 != 0x300)
                    goto label_142868ca1
                
                if (((arg1[0x156]).b & 3) == 3)
                    sub_142856580(arg1, 0x28, 0x1a2, 0xc7, "ssl\statem\statem_srvr.c", 0xb9)
                    return 0
        case 0x1b
            if (arg2 != 0x10)
                goto label_142868ca1
        case 0x1c
            if (*(*(arg1 + 0x508) + 0xf8) == 0 || arg1[0x1d] != 0)
                goto label_142868c7c
            
            if (arg2 != 0xf)
                goto label_142868ca1
            
            arg1[0x17] = 0x1d
            return 1
        case 0x1d, 0x24
        label_142868c7c:
            
            if (arg2 != 0x101)
                goto label_142868ca1
            
            arg1[0x17] = 0x1f
            return 1
        case 0x1e
        label_142868c67:
            
            if (arg2 != 0x14)
                goto label_142868ca1
            
            arg1[0x17] = 0x20
            return zx.q(arg2 - 0x13)
        case 0x1f
            if (*(*(arg1 + 0xa8) + 0x3dc) == 0)
                goto label_142868c67
            
            if (arg2 != 0x43)
                goto label_142868ca1
            
            arg1[0x17] = 0x1e
            return zx.q(arg2 - 0x42)
    
    arg1[0x17] = 0x1c
    return 1

label_142868ca1:

if (r9_1 == 0 || arg2 != 0x101)
    sub_142856580(arg1, 0xa, 0x1a2, 0xf4, "ssl\statem\statem_srvr.c", 0x12a)
    return 0

*(arg1 + 0x98) = 0
arg1[0xa] = 3
void* rax_28 = sub_14060aa60(arg1)
sub_142899cc0(rax_28, 0xf)
sub_14289a9a0(rax_28, 9)
return 0
