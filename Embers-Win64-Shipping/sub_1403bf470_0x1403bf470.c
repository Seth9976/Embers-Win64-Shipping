// 函数: sub_1403bf470
// 地址: 0x1403bf470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg3
int64_t i

for (i = *arg4; i u< arg2; i += 1)
    int32_t rsi_1 = sx.d(*(arg1 + i))
    int32_t rbx_1 = 8
    
    if (rsi_1.b - 0x30 u>= 0xa)
        uint64_t rbp_2 = zx.q(rsi_1 - 0x2b)
        
        if (rbp_2.d u> 0x1a)
            if (rsi_1 != 0x65)
                break
            
            rbx_1 = 0xc
        else
            rbx_1 = 0
            
            switch (rbp_2)
                case 1, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16, 0x17, 0x18, 0x19
                    break
                case 3
                    rbx_1 = 4
                case 0x1a
                    rbx_1 = 0xc
    
    uint64_t rsi_6 = (zx.q(rax) & 3) | zx.q(rbx_1)
    
    if (rsi_6.d u> 0xd)
        break
    
    switch (rsi_6)
        case 0, 2
            if ((rax.b & 0x3c) != 0)
                break
            
            rax |= 4
        case 1, 3, 5, 6, 7, 0xb
            break
        case 4
            if ((rax.b & 0x10) != 0)
                break
            
            if ((rax.b & 8) != 0)
                rax |= 0x10
            else
                rax = (rax & 0x40) | 0x11
        case 8
            int32_t rsi_10 = rax | 0x48
            
            if ((rax.b & 0x10) != 0)
                rsi_10 = 0x59
            
            rax = rsi_10
        case 9, 0xa
            rax |= 0x48
        case 0xc, 0xd
            if ((rax.b & 8) == 0)
                break
            
            rax = (rax & 0x40) | 2

*arg3 = rax
*arg4 = i
return zx.q(rax u>> 3) & 1
