// 函数: sub_142c471c0
// 地址: 0x142c471c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x18) & 0x10) != 0)
    return 

int64_t rsi
int64_t arg_10 = rsi
sub_142bf4e80(arg2)
int32_t rax = *(arg2 + 0x3c)
int32_t rdi_1 = *(arg2 + 0x60)

if (rax u<= 0x4d6f6469)
    switch (rax)
        case 0x42656e67
            *(arg2 + 0x5c) = 0
            
            if (rdi_1 u> 1)
                while (*(arg2 + 0x58) != 0)
                    uint64_t r9_3 = zx.q(*(arg2 + 0x5c))
                    rsi.b = 0
                    int64_t r8_3 = *(arg2 + 0x70)
                    int32_t rdx_8 = *(r8_3 + r9_3 * 0x14)
                    
                    if (rdx_8 == 0x985)
                        rsi.b = *(r8_3 + zx.q((r9_3 + 1).d) * 0x14) == 0x9be
                    else if (rdx_8 == 0x98b)
                        rsi.b = *(r8_3 + zx.q((r9_3 + 1).d) * 0x14) == 0x9c3
                    else if (rdx_8 == 0x98c)
                        rsi.b = *(r8_3 + zx.q((r9_3 + 1).d) * 0x14) == 0x9e2
                    
                    sub_142c08c10(arg2)
                    
                    if (rsi.b != 0)
                        sub_142c47d30(arg2)
                    
                    if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                        break
            
            goto label_142c47c60
        case 0x42726168
            *(arg2 + 0x5c) = 0
            
            if (rdi_1 u> 1)
                while (*(arg2 + 0x58) != 0)
                    uint64_t r9_2 = zx.q(*(arg2 + 0x5c))
                    rsi.b = 0
                    int64_t r8_2 = *(arg2 + 0x70)
                    int32_t rdx_5 = *(r8_2 + r9_2 * 0x14)
                    
                    if (rdx_5 == 0x11005)
                        rsi.b = *(r8_2 + zx.q((r9_2 + 1).d) * 0x14) == 0x11038
                    else if (rdx_5 == 0x1100b)
                        rsi.b = *(r8_2 + zx.q((r9_2 + 1).d) * 0x14) == 0x1103e
                    else if (rdx_5 == 0x1100f)
                        rsi.b = *(r8_2 + zx.q((r9_2 + 1).d) * 0x14) == 0x11042
                    
                    sub_142c08c10(arg2)
                    
                    if (rsi.b != 0)
                        sub_142c47d30(arg2)
                    
                    if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                        break
            
            goto label_142c47c60
        case 0x44657661
            *(arg2 + 0x5c) = 0
            
            if (rdi_1 u> 1)
                while (*(arg2 + 0x58) != 0)
                    uint64_t r8_1 = zx.q(*(arg2 + 0x5c))
                    rsi.b = 0
                    int64_t r9_1 = *(arg2 + 0x70)
                    int32_t rdx = *(r9_1 + r8_1 * 0x14)
                    
                    if (rdx == 0x905)
                        uint64_t rcx_11 = zx.q(*(r9_1 + zx.q((r8_1 + 1).d) * 0x14) - 0x93a)
                        
                        if (rcx_11.d u<= 0x1d)
                            switch (rcx_11)
                                case 0, 1, 4, 0xb, 0xc, 0xf, 0x10, 0x11, 0x12, 0x15, 0x1c, 0x1d
                                    rsi.b = 1
                    else if (rdx == 0x906)
                        int32_t rax_13 = *(r9_1 + zx.q((r8_1 + 1).d) * 0x14)
                        
                        if (rax_13 == 0x93a || rax_13 - 0x945 u<= 3)
                            rsi.b = 1
                    else if (rdx == 0x909)
                        rsi.b = *(r9_1 + zx.q((r8_1 + 1).d) * 0x14) == 0x941
                    else if (rdx == 0x90f)
                        if (*(r9_1 + zx.q((r8_1 + 1).d) * 0x14) - 0x945 u<= 2)
                            rsi.b = 1
                    else if (rdx == 0x930 && *(r9_1 + zx.q((r8_1 + 1).d) * 0x14) == 0x94d)
                        uint64_t rax_3 = zx.q((r8_1 + 2).d)
                        
                        if (rax_3.d u< rdi_1 && *(r9_1 + rax_3 * 0x14) == 0x907)
                            sub_142c08c10(arg2)
                            sub_142c08c10(arg2)
                            void* rax_4 = sub_142c22760(arg2, 0x25cc)
                            *(rax_4 + 0x10) &= 0xff7f
                    
                    sub_142c08c10(arg2)
                    
                    if (rsi.b != 0)
                        sub_142c47d30(arg2)
                    
                    if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                        break
            
            goto label_142c47c60
        case 0x47756a72
            *(arg2 + 0x5c) = 0
            
            if (rdi_1 u> 1)
                while (*(arg2 + 0x58) != 0)
                    uint64_t r9_4 = zx.q(*(arg2 + 0x5c))
                    rsi.b = 0
                    int64_t r8_4 = *(arg2 + 0x70)
                    int32_t rdx_11 = *(r8_4 + r9_4 * 0x14)
                    
                    if (rdx_11 == 0xa85)
                        uint64_t rcx_22 = zx.q(*(r8_4 + zx.q((r9_4 + 1).d) * 0x14) - 0xabe)
                        
                        if (rcx_22.d u<= 0xe)
                            switch (rcx_22)
                                case 0, 7, 9, 0xa, 0xb, 0xd, 0xe
                                    rsi.b = 1
                    else if (rdx_11 == 0xac5)
                        rsi.b = *(r8_4 + zx.q((r9_4 + 1).d) * 0x14) == 0xabe
                    
                    sub_142c08c10(arg2)
                    
                    if (rsi.b != 0)
                        sub_142c47d30(arg2)
                    
                    if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                        break
            
            goto label_142c47c60
        case 0x47757275
            *(arg2 + 0x5c) = 0
            
            if (rdi_1 u> 1)
                while (*(arg2 + 0x58) != 0)
                    uint64_t r9_7 = zx.q(*(arg2 + 0x5c))
                    rsi.b = 0
                    int64_t r8_7 = *(arg2 + 0x70)
                    int32_t rdx_21 = *(r8_7 + r9_7 * 0x14)
                    bool cond:8_1
                    
                    if (rdx_21 == 0xa05)
                        int32_t rcx_38 = *(r8_7 + zx.q((r9_7 + 1).d) * 0x14)
                        
                        if (rcx_38 == 0xa3e || rcx_38 == 0xa48)
                            rsi.b = 1
                        else
                            cond:8_1 = rcx_38 != 0xa4c
                        label_142c4776c:
                            
                            if (not(cond:8_1))
                                rsi.b = 1
                    else if (rdx_21 == 0xa72)
                        int32_t rcx_37 = *(r8_7 + zx.q((r9_7 + 1).d) * 0x14)
                        
                        if (((rcx_37 - 0xa3f) & 0xfffffff6) == 0 && rcx_37 != 0xa48)
                            rsi.b = 1
                    else if (rdx_21 == 0xa73)
                        int32_t rcx_36 = *(r8_7 + zx.q((r9_7 + 1).d) * 0x14)
                        
                        if (rcx_36 - 0xa41 u> rdx_21 - 0xa72)
                            cond:8_1 = rcx_36 != 0xa4b
                            goto label_142c4776c
                        
                        rsi.b = 1
                    sub_142c08c10(arg2)
                    
                    if (rsi.b != 0)
                        sub_142c47d30(arg2)
                    
                    if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                        break
            
            goto label_142c47c60
        case 0x4b6e6461
            *(arg2 + 0x5c) = 0
            
            if (rdi_1 u> 1)
                while (*(arg2 + 0x58) != 0)
                    uint64_t r9_6 = zx.q(*(arg2 + 0x5c))
                    rsi.b = 0
                    int64_t r8_6 = *(arg2 + 0x70)
                    int32_t rdx_18 = *(r8_6 + r9_6 * 0x14)
                    
                    if (rdx_18 == 0xc89 || rdx_18 == 0xc8b)
                        rsi.b = *(r8_6 + zx.q((r9_6 + 1).d) * 0x14) == 0xcbe
                    else if (rdx_18 == 0xc92)
                        rsi.b = *(r8_6 + zx.q((r9_6 + 1).d) * 0x14) == 0xccc
                    
                    sub_142c08c10(arg2)
                    
                    if (rsi.b != 0)
                        sub_142c47d30(arg2)
                    
                    if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                        break
            
            goto label_142c47c60
        case 0x4d6c796d
            *(arg2 + 0x5c) = 0
            
            if (rdi_1 u> 1)
                while (*(arg2 + 0x58) != 0)
                    uint64_t r9_5 = zx.q(*(arg2 + 0x5c))
                    rsi.b = 0
                    int64_t r8_5 = *(arg2 + 0x70)
                    int32_t rdx_13 = *(r8_5 + r9_5 * 0x14)
                    
                    if (rdx_13 == 0xd07 || rdx_13 == 0xd09)
                        rsi.b = *(r8_5 + zx.q((r9_5 + 1).d) * 0x14) == 0xd57
                    else if (rdx_13 == 0xd0e)
                        rsi.b = *(r8_5 + zx.q((r9_5 + 1).d) * 0x14) == 0xd46
                    else if (rdx_13 == 0xd12)
                        int32_t rcx_28 = *(r8_5 + zx.q((r9_5 + 1).d) * 0x14)
                        
                        if (rcx_28 == 0xd3e || rcx_28 == 0xd57)
                            rsi.b = 1
                    
                    sub_142c08c10(arg2)
                    
                    if (rsi.b != 0)
                        sub_142c47d30(arg2)
                    
                    if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                        break
            
            goto label_142c47c60
        case 0x4d6f6469
            *(arg2 + 0x5c) = 0
            
            if (rdi_1 u> 1)
                while (*(arg2 + 0x58) != 0)
                    uint64_t rdx_25 = zx.q(*(arg2 + 0x5c))
                    rsi.b = 0
                    int64_t r8_8 = *(arg2 + 0x70)
                    
                    if (*(r8_8 + rdx_25 * 0x14) - 0x11600 u<= 1)
                        rsi = 0
                        
                        if (*(r8_8 + zx.q((rdx_25 + 1).d) * 0x14) - 0x11639 u<= 1)
                            rsi = 1
                    
                    sub_142c08c10(arg2)
                    
                    if (rsi.b != 0)
                        void* rax_65 = sub_142c22760(arg2, 0x25cc)
                        *(rax_65 + 0x10) &= 0xff7f
                        sub_142c08c10(arg2)
                    
                    if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                        break
            
            goto label_142c47c60
else if (rax u<= 0x54616b72)
    if (rax == 0x54616b72)
        *(arg2 + 0x5c) = 0
        
        if (rdi_1 u> 1)
            while (*(arg2 + 0x58) != 0)
                uint64_t r9_9 = zx.q(*(arg2 + 0x5c))
                rsi.b = 0
                int64_t r8_11 = *(arg2 + 0x70)
                int32_t rdx_31 = *(r8_11 + r9_9 * 0x14)
                
                if (rdx_31 == 0x11680)
                    int32_t rax_99 = *(r8_11 + zx.q((r9_9 + 1).d) * 0x14)
                    
                    if (rax_99 == 0x116ad || rax_99 - 0x116b4 u<= 1)
                        rsi.b = 1
                else if (rdx_31 == 0x11686)
                    rsi.b = *(r8_11 + zx.q((r9_9 + 1).d) * 0x14) == 0x116b2
                
                sub_142c08c10(arg2)
                
                if (rsi.b != 0)
                    void* rax_101 = sub_142c22760(arg2, 0x25cc)
                    *(rax_101 + 0x10) &= 0xff7f
                    sub_142c08c10(arg2)
                
                if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                    break
        
        goto label_142c47c60
    
    int32_t rax_68 = rax - 0x4f727961
    
    if (rax == 0x4f727961)
        *(arg2 + 0x5c) = 0
        
        if (rdi_1 u> 1)
            while (*(arg2 + 0x58) != 0)
                uint64_t r9_8 = zx.q(*(arg2 + 0x5c))
                rsi.b = 0
                int64_t r8_10 = *(arg2 + 0x70)
                int32_t rdx_28 = *(r8_10 + r9_8 * 0x14)
                
                if (rdx_28 == 0xb05)
                    rsi.b = *(r8_10 + zx.q((r9_8 + 1).d) * 0x14) == 0xb3e
                else if (rdx_28 == 0xb0f || rdx_28 == 0xb13)
                    rsi.b = *(r8_10 + zx.q((r9_8 + 1).d) * 0x14) == 0xb57
                
                sub_142c08c10(arg2)
                
                if (rsi.b != 0)
                    sub_142c47d30(arg2)
                
                if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                    break
        
        goto label_142c47c60
    
    if (rax_68 == 0x3f6f503)
        *(arg2 + 0x5c) = 0
        
        if (rdi_1 u> 1)
            while (*(arg2 + 0x58) != 0)
                uint64_t rcx_58 = zx.q(*(arg2 + 0x5c))
                rsi.b = 0
                int64_t rdx_27 = *(arg2 + 0x70)
                
                if (*(rdx_27 + rcx_58 * 0x14) == 0x112b0)
                    int32_t rax_85 = *(rdx_27 + zx.q((rcx_58 + 1).d) * 0x14)
                    
                    if (rax_85 == 0x112e0 || rax_85 - 0x112e5 u<= 3)
                        rsi.b = 1
                
                sub_142c08c10(arg2)
                
                if (rsi.b != 0)
                    sub_142c47d30(arg2)
                
                if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                    break
        
        goto label_142c47c60
    
    if (rax_68 == 0x3f6f507)
        *(arg2 + 0x5c) = 0
        
        if (rdi_1 u> 1)
            while (*(arg2 + 0x58) != 0)
                uint64_t rdx_26 = zx.q(*(arg2 + 0x5c))
                rsi.b = 0
                int64_t r8_9 = *(arg2 + 0x70)
                uint64_t rcx_51 = zx.q(*(r8_9 + rdx_26 * 0x14) - 0xd85)
                bool cond:7_1
                
                if (rcx_51.d u<= 0xf)
                    switch (rcx_51)
                        case 0
                            cond:7_1 = *(r8_9 + zx.q((rdx_26 + 1).d) * 0x14) - 0xdcf u> 2
                        label_142c4790b:
                            
                            if (not(cond:7_1))
                                rsi.b = 1
                        case 6, 0xa, 0xf
                            rsi.b = *(r8_9 + zx.q((rdx_26 + 1).d) * 0x14) == 0xddf
                        case 8
                            rsi.b = *(r8_9 + zx.q((rdx_26 + 1).d) * 0x14) == 0xdd8
                        case 0xc
                            int32_t rax_78 = *(r8_9 + zx.q((rdx_26 + 1).d) * 0x14)
                            
                            if (rax_78 == 0xdca)
                                rsi.b = 1
                            else if (rax_78 u> 0xdd8)
                                if (rax_78 u> 0xdda)
                                    cond:7_1 = rax_78 - 0xddc u> 1
                                    goto label_142c4790b
                                
                                rsi.b = 1
                sub_142c08c10(arg2)
                
                if (rsi.b != 0)
                    sub_142c47d30(arg2)
                
                if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                    break
        
        goto label_142c47c60
else if (rax == 0x54656c75)
    *(arg2 + 0x5c) = 0
    
    if (rdi_1 u> 1)
        while (*(arg2 + 0x58) != 0)
            uint64_t r9_11 = zx.q(*(arg2 + 0x5c))
            rsi.b = 0
            int64_t r8_13 = *(arg2 + 0x70)
            int32_t rdx_37 = *(r8_13 + r9_11 * 0x14)
            
            if (rdx_37 == 0xc12)
                int32_t rcx_74 = *(r8_13 + zx.q((r9_11 + 1).d) * 0x14)
                
                if (rcx_74 == 0xc4c || rcx_74 == 0xc55)
                    rsi.b = 1
            else if (rdx_37 == 0xc3f || rdx_37 == 0xc46 || rdx_37 == 0xc4a)
                rsi.b = *(r8_13 + zx.q((r9_11 + 1).d) * 0x14) == 0xc55
            
            sub_142c08c10(arg2)
            
            if (rsi.b != 0)
                void* rax_115 = sub_142c22760(arg2, 0x25cc)
                *(rax_115 + 0x10) &= 0xff7f
                sub_142c08c10(arg2)
            
            if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                break
    
label_142c47c60:
    
    if (*(arg2 + 0x5c) u< rdi_1)
        sub_142c08c10(arg2)
    
    sub_142bf5b20(arg2)
else if (rax == 0x54697268)
    *(arg2 + 0x5c) = 0
    
    if (rdi_1 u> 1)
        while (*(arg2 + 0x58) != 0)
            uint64_t r9_10 = zx.q(*(arg2 + 0x5c))
            rsi.b = 0
            int64_t r8_12 = *(arg2 + 0x70)
            int32_t rdx_33 = *(r8_12 + r9_10 * 0x14)
            
            if (rdx_33 == 0x11481)
                rsi.b = *(r8_12 + zx.q((r9_10 + 1).d) * 0x14) == 0x114b0
            else if (rdx_33 == 0x1148b || rdx_33 == 0x1148d)
                rsi.b = *(r8_12 + zx.q((r9_10 + 1).d) * 0x14) == 0x114ba
            else if (rdx_33 == 0x114aa && *(r8_12 + zx.q((r9_10 + 1).d) * 0x14) - 0x114b5 u<= 1)
                rsi.b = 1
            
            sub_142c08c10(arg2)
            
            if (rsi.b != 0)
                sub_142c47d30(arg2)
            
            if (*(arg2 + 0x5c) + 1 u>= rdi_1)
                break
    
    goto label_142c47c60
