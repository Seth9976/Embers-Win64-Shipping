// 函数: sub_142c91440
// 地址: 0x142c91440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rbx = *(arg1 + 0x38)
int32_t rsi = 1

if (arg2 - 1 u> 0x9a)
    rsi = 0
else
    switch (arg2)
        case 1
            *rbx = 1
            rsi = 0
            sub_142c919a0(arg1)
            sub_1428c2230(*(rbx + 0x20))
            *(rbx + 0x20) = 0
            *(arg1 + 0x28) = 0
        case 2, 3, 4, 5, 6, 7, 0xa, 0xd, 0xe, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
                0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 
                0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 
                0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 
                0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 
                0x5f, 0x60, 0x61, 0x62, 0x63, 0x67, 0x68, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 
                0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7c, 0x7d, 0x7e, 0x7f, 
                0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 
                0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a
            rsi = 0
        case 8
            rsi = *(arg1 + 0x24)
        case 9
            *(arg1 + 0x24) = arg3
        case 0xc
            int64_t r9 = *(rbx + 8)
            
            if (r9 != 0)
                sub_142899cf0(arg4, 0x64, 0, r9)
            
            int64_t r9_1 = *(rbx + 0x10)
            
            if (r9_1 != 0)
                sub_142899cf0(arg4, 0x64, 1, r9_1)
            
            sub_14289a4d0(arg4, 0x64, 3, rbx[1])
            sub_142899cf0(arg4, 0x9b, rbx[6], 0)
            sub_142899b60(arg4, 0xe, *(rbx + 0x30))
        case 0xf
            *arg4 = *(rbx + 0x30)
        case 0x64
            if (arg4 != 0)
                *(arg1 + 0x20) = 1
                
                if (arg3 == 0)
                    int64_t rbp_1 = *(rbx + 0x10)
                    sub_1428a6780(*(rbx + 8))
                    *(rbx + 8) = 0
                    rsi = sub_1428c2470(arg4, &rbx[2], &rbx[4], 0)
                    
                    if (rbp_1 != *(rbx + 0x10))
                        sub_1428a6780(rbp_1)
                else if (arg3 == 1)
                    sub_1428a6780(*(rbx + 0x10))
                    *(rbx + 0x10) = sub_1428a6ba0(arg4)
                else if (arg3 == 2)
                    *(rbx + 8) = sub_1428c22a0(arg4, 1)
                    int64_t rax_11 = sub_1428c22e0(arg4, 1)
                    struct ADDRINFOA* rcx_12 = *(rbx + 0x20)
                    *(rbx + 0x10) = rax_11
                    sub_1428c2230(rcx_12)
                    *(rbx + 0x20) = 0
                    *(rbx + 0x28) = 0
                else if (arg3 != 3)
                    rsi = 0
                else
                    rbx[1] = *arg4
        case 0x65
            if (*rbx != 5)
                rsi = sub_142c919f0(arg1, rbx)
        case 0x66
            int32_t rcx_13 = rbx[6]
            int32_t rcx_14 = rcx_13 | 8
            
            if (arg3 == 0)
                rcx_14 = rcx_13 & 0xfffffff7
            
            rbx[6] = rcx_14
        case 0x69
            if (*(arg1 + 0x20) == 0)
                rsi = -1
            else
                if (arg4 != 0)
                    *arg4 = *(arg1 + 0x30)
                
                rsi = *(arg1 + 0x30)
        case 0x7b
            if (arg4 == 0)
                rsi = 0
            else if (arg3 == 0)
                *arg4 = *(rbx + 8)
            else if (arg3 == 1)
                *arg4 = *(rbx + 0x10)
            else if (arg3 == 2)
                *arg4 = sub_1428c2210(*(rbx + 0x28))
            else if (arg3 != 3)
                rsi = 0
            else
                int32_t rax_7 = sub_1428c2220(*(rbx + 0x28))
                
                if (rax_7 == 0)
                    rsi = rbx[1]
                else if (rax_7 == 2)
                    rsi = 4
                else
                    rsi = 6
                    
                    if (rax_7 != 0x17)
                        rsi = -1
        case 0x9b
            rbx[6] = arg3

return zx.q(rsi)
