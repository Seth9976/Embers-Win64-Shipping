// 函数: sub_140e41de0
// 地址: 0x140e41de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int32_t rax_1 = *(arg1 + 0x24f8)
    uint32_t i
    
    while (true)
        int32_t rcx = *(arg1 + 0x24f4)
        uint32_t rsi_2 = rax_1 u>> 0x18
        *(arg1 + 0x24f4) = rcx - 8
        
        if (rcx - 8 s> 0)
            rax_1 <<= 8
        else
            *(arg1 + 0x24f8) = rax_1 << rcx.b
            int32_t rax_3 = sub_140e3cd90(arg1, arg2)
            int32_t rax_4 = sub_140e3cd90(arg1, arg2)
            int32_t rcx_3 = *(arg1 + 0x24f4)
            int32_t rax_8 = (*(arg1 + 0x24f8) & 0xffff0000) | rax_3 << 8 | rax_4
            *(arg1 + 0x24f4) = rcx_3 + 0x10
            rax_1 = rax_8 << (neg.d(rcx_3)).b
        
        *(arg1 + 0x24f8) = rax_1
        
        if (rsi_2 == 0xff)
            do
                int32_t rcx_5 = *(arg1 + 0x24f4)
                i = rax_1 u>> 0x18
                *(arg1 + 0x24f4) = rcx_5 - 8
                
                if (rcx_5 - 8 s> 0)
                    rax_1 <<= 8
                else
                    *(arg1 + 0x24f8) = rax_1 << rcx_5.b
                    int32_t rax_10 = sub_140e3cd90(arg1, arg2)
                    int32_t rax_11 = sub_140e3cd90(arg1, arg2)
                    int32_t rcx_8 = *(arg1 + 0x24f4)
                    int32_t rax_15 = (*(arg1 + 0x24f8) & 0xffff0000) | rax_10 << 8 | rax_11
                    *(arg1 + 0x24f4) = rcx_8 + 0x10
                    rax_1 = rax_15 << (neg.d(rcx_8)).b
                
                *(arg1 + 0x24f8) = rax_1
            while (i == 0xff)
            
            if (i != 0)
                break
    
    if (i - 1 u<= 0xdc)
        switch (i)
            case 1, 0xc8, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7
                sub_140e43530(arg1, 0xffffff10)
                noreturn
            case 0xc0, 0xc1, 0xc2, 0xc3, 0xc5, 0xc6, 0xc7, 0xc9, 0xca, 0xcb, 0xcd, 0xce, 0xcf, 
                    0xd8, 0xd9, 0xda
                return zx.q(i)
            case 0xc4
                arg2 = sub_140e42b80(arg1, arg2)
                continue
            case 0xcc
                sub_140e43530(arg1, 0xffffff0f)
                noreturn
            case 0xdb
                sub_140e42ee0(arg1, arg2)
                continue
            case 0xdd
                int32_t rax_19 = sub_140e3cbd0(arg1, 0x10, arg2)
                
                if (rax_19 != 4)
                    break
                
                *(arg1 + 0x24fc) = sub_140e3cbd0(arg1, rax_19 + 0xc, arg2)
                continue
    
    int32_t rax_21 = sub_140e3cbd0(arg1, 0x10, arg2)
    
    if (rax_21 u< 2)
        sub_140e43530(arg1, 0xffffff0a)
        noreturn
    
    int32_t i_2 = rax_21 - 2
    
    if (rax_21 != 2)
        int32_t i_1
        
        do
            int32_t rcx_17 = *(arg1 + 0x24f4)
            int32_t r8_3 = *(arg1 + 0x24f8)
            *(arg1 + 0x24f4) = rcx_17 - 8
            int32_t r8_9
            
            if (rcx_17 - 8 s> 0)
                r8_9 = r8_3 << 8
            else
                *(arg1 + 0x24f8) = r8_3 << rcx_17.b
                int32_t rax_22 = sub_140e3cd90(arg1, arg2)
                int32_t rax_23 = sub_140e3cd90(arg1, arg2)
                int32_t rcx_20 = *(arg1 + 0x24f4)
                int32_t r8_8 = (*(arg1 + 0x24f8) & 0xffff0000) | rax_22 << 8 | rax_23
                *(arg1 + 0x24f4) = rcx_20 + 0x10
                r8_9 = r8_8 << (neg.d(rcx_20)).b
            
            *(arg1 + 0x24f8) = r8_9
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

sub_140e43530(arg1, 0xffffff0b)
noreturn
