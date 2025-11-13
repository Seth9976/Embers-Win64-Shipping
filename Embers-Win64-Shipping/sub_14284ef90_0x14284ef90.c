// 函数: sub_14284ef90
// 地址: 0x14284ef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (sub_142856410(arg1) != 0 && sub_1428563f0(arg1) != 0)
    void* rax_2 = sub_14284fdd0(*(arg1 + 0x598))
    
    if (rax_2 == 0)
        return rax_2
    
    if (*(arg1 + 0x508) == 0)
        int32_t* rsi_1 = *(arg1 + 8)
        int32_t rdx_4 = 1
        int32_t* rbp_1 = *(rax_2 + 8)
        
        if (rbp_1 != rsi_1)
            int64_t r14_1 = *(rax_2 + 0x30)
            
            if (*rbp_1 != *rsi_1)
                (*(rbp_1 + 0x20))(rax_2)
                *(rax_2 + 8) = rsi_1
                rdx_4 = (*(rsi_1 + 0x10))(rax_2)
            else
                *(rax_2 + 8) = rsi_1
            
            if (r14_1 == *(rbp_1 + 0x30))
                *(rax_2 + 0x30) = *(rsi_1 + 0x30)
            else if (r14_1 == *(rbp_1 + 0x28))
                *(rax_2 + 0x30) = *(rsi_1 + 0x28)
        
        if (rbp_1 == rsi_1 || rdx_4 != 0)
            int64_t* rax_15
            
            if (*(arg1 + 0x488) != 0)
                sub_142854060(*(rax_2 + 0x488))
                rax_15 = sub_142853b10(*(arg1 + 0x488))
                *(rax_2 + 0x488) = rax_15
            
            if ((*(arg1 + 0x488) == 0 || rax_15 != 0)
                    && sub_142850a20(rax_2, &arg1[0x13a], arg1[0x138]) != 0)
                goto label_14284f196
    else if (sub_142857990(rax_2, sub_142857980(arg1)) != 0)
        int64_t rax_5 = *(rax_2 + 8)
        int32_t rax_7
        
        if (rax_5 != *(arg1 + 8))
            (*(rax_5 + 0x20))(rax_2)
            int64_t rax_6 = *(arg1 + 8)
            *(rax_2 + 8) = rax_6
            rax_7 = (*(rax_6 + 0x10))(rax_2)
        
        if (rax_5 == *(arg1 + 8) || rax_7 != 0)
            void* rax_8 = *(arg1 + 0x488)
            *(rax_8 + 0x218)
            *(rax_8 + 0x218) += 1
            sub_142854060(*(rax_2 + 0x488))
            *(rax_2 + 0x488) = *(arg1 + 0x488)
            uint64_t rax_10 = zx.q(arg1[0x138])
            
            if (rax_10.d u<= 0x20)
                *(rax_2 + 0x4e0) = rax_10
                memcpy(rax_2 + 0x4e8, &arg1[0x13a], rax_10.d)
            label_14284f196:
                int32_t rsi_2 = 0
                
                if (arg1 == -0xd8)
                label_14284f27a:
                    *rax_2 = *arg1
                    *(rax_2 + 0x5c4) = arg1[0x171]
                    *(rax_2 + 0x5c8) = arg1[0x172]
                    int64_t rax_26 = sx.q(arg1[0x176])
                    
                    if (rax_26.d s>= 0)
                        *(rax_2 + 0x5d8) = rax_26
                    
                    *(rax_2 + 0x808) = arg1[0x202]
                    *(rax_2 + 0xb8) = *(arg1 + 0xb8)
                    *(rax_2 + 0xc0) = *(arg1 + 0xc0)
                    int64_t rcx_24 = *(arg1 + 0x560)
                    *(rax_2 + 0x558) = arg1[0x156]
                    
                    if (rcx_24 != 0)
                        *(rax_2 + 0x560) = rcx_24
                    
                    int32_t rax_31 = sub_140611e80(*(arg1 + 0xd0))
                    sub_14289a9b0(*(rax_2 + 0xd0), rax_31)
                    *(rax_2 + 0x528) = *(arg1 + 0x528)
                    *(rax_2 + 0x568) = *(arg1 + 0x568)
                    
                    if (sub_1428a5d40(0, rax_2 + 0x5b0, &arg1[0x16c]) != 0)
                        int64_t* rcx_27 = *(arg1 + 0x10)
                        int32_t rax_35
                        
                        if (rcx_27 != 0)
                            rax_35 = sub_142899cf0(rcx_27, 0xc, 0, rax_2 + 0x10)
                        
                        if (rcx_27 == 0 || rax_35 != 0)
                            int64_t* rcx_28 = *(arg1 + 0x18)
                            
                            if (rcx_28 == 0)
                                goto label_14284f39e
                            
                            if (rcx_28 == *(arg1 + 0x10))
                                sub_14289aa00(*(rax_2 + 0x10))
                                *(rax_2 + 0x18) = *(rax_2 + 0x10)
                            label_14284f39e:
                                *(rax_2 + 0x38) = arg1[0xe]
                                
                                if (*(arg1 + 0x30) != 0)
                                    if (arg1[0xe] == 0)
                                        sub_1428507d0(rax_2)
                                    else
                                        sub_1428505a0(rax_2)
                                
                                void* rcx_31 = *(rax_2 + 0xd0)
                                *(rax_2 + 0x44) = arg1[0x11]
                                *(rax_2 + 0xc8) = arg1[0x32]
                                *(rax_2 + 0x16b8) = *(arg1 + 0x16b8)
                                *(rax_2 + 0x16c0) = *(arg1 + 0x16c0)
                                sub_1428ab2a0(rcx_31, *(arg1 + 0xd0))
                                int128_t* rcx_32 = *(arg1 + 0x110)
                                int128_t* rax_43
                                
                                if (rcx_32 != 0)
                                    rax_43 = sub_142898900(rcx_32)
                                    *(rax_2 + 0x110) = rax_43
                                
                                if (rcx_32 == 0 || rax_43 != 0)
                                    int128_t* rcx_33 = *(arg1 + 0x118)
                                    int128_t* rax_44
                                    
                                    if (rcx_33 != 0)
                                        rax_44 = sub_142898900(rcx_33)
                                        *(rax_2 + 0x118) = rax_44
                                    
                                    if (rcx_33 == 0 || rax_44 != 0)
                                        int128_t* rcx_34 = *(arg1 + 0x5b8)
                                        
                                        if (rcx_34 == 0)
                                            return rax_2
                                        
                                        int128_t* rax_45 = sub_142898900(rcx_34)
                                        
                                        if (rax_45 != 0)
                                            *(rax_2 + 0x5b8) = rax_45
                                            
                                            if (sub_142898c70(rax_45) s<= 0)
                                                return rax_2
                                            
                                            int64_t rax_47
                                            
                                            while (true)
                                                rax_47 = sub_142898ea0(rax_45, rsi_2)
                                                
                                                if (sub_142898dc0(rax_45, rsi_2, 
                                                        sub_1428abf10(rax_47)) == 0)
                                                    break
                                                
                                                rsi_2 += 1
                                                
                                                if (rsi_2 s>= sub_142898c70(rax_45))
                                                    return rax_2
                                            
                                            sub_1428abf30(rax_47)
                            else if (sub_142899cf0(rcx_28, 0xc, 0, rax_2 + 0x18) != 0)
                                goto label_14284f39e
                else
                    if (sub_142898c70(*(arg1 + 0xe0)) s<= 0)
                        goto label_14284f27a
                    
                    int32_t rax_19 = sub_142898c70(*(arg1 + 0xe0))
                    sub_1428510e0(rax_2 + 0xd8)
                    *(rax_2 + 0x10c) = arg1[0x43]
                    *(rax_2 + 0xd8) = *(rax_2 + 0x598) + 0x350
                    int32_t* rax_20 = sub_142898be0(0, rax_19)
                    *(rax_2 + 0xe0) = rax_20
                    
                    if (rax_20 != 0)
                        int32_t rbp_2 = 0
                        
                        if (rax_19 s> 0)
                            do
                                char* rax_21 = sub_142898ea0(*(arg1 + 0xe0), rbp_2)
                                int64_t var_20_1 = *(rax_21 + 0x10)
                                int32_t var_28
                                var_28.q = *(rax_21 + 8)
                                
                                if (sub_142851150(rax_2 + 0xd8, *rax_21, rax_21[1], rax_21[2], 
                                        var_28) s<= 0)
                                    goto label_14284f09c
                                
                                rbp_2 += 1
                            while (rbp_2 s< rax_19)
                        
                        goto label_14284f27a
                    
                    sub_1428a5670(0x14, 0x193, 0x41, "ssl\ssl_lib.c", 0xe0)
            else
                sub_1428a5670(0x14, 0xda, 0x111, "ssl\ssl_lib.c", 0x372)
    
label_14284f09c:
    sub_14284f4d0(rax_2)
    return nullptr

arg1[0x170]
arg1[0x170] += 1
return arg1
