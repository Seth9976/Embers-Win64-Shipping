// 函数: sub_142a79bd0
// 地址: 0x142a79bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax

if (*arg2 s<= 0)
    rax = *(arg1 + 0x13c)
    
    if (rax s<= 0)
        void* rcx = *(arg1 + 0x20)
        
        if (*(rcx + 0x20) == 0)
            int64_t rdx = *(arg1 + 0x30)
            
            if (rdx == *(rcx + 0x10) && rdx == sx.q(*(rcx + 0x1c)))
                return sub_142a7a620(arg1, arg2) __tailcall
        
        void** rax_3 = *(arg1 + 0x90)
        void** rbx = rax_3
        
        if (rax_3 == 0)
            rbx = *(arg1 + 0x70)
        
        if (*(arg1 + 0x82) != 0)
            *(arg1 + 0x98) = rax_3
            
            if (*(arg1 + 0x88) != rax_3)
                goto label_142a79d17
            
            if (rbx s< *(arg1 + 0x78))
                void* rdx_4 = rbx - *(rcx + 0x20)
                
                if (rbx - *(rcx + 0x20) s< 0 || rdx_4 s>= sx.q(*(rcx + 0x1c))
                        || *(*(rcx + 0x30) + (rdx_4 << 1)) u>= 0xdc00)
                    sub_142aeacd0(rcx, rbx)
                else
                    *(rcx + 0x28) = rdx_4.d
                
                void* rdx_6 = *(arg1 + 0x20)
                int64_t r8_2 = sx.q(*(rdx_6 + 0x28))
                
                if (r8_2.d s>= *(rdx_6 + 0x2c) || *(*(rdx_6 + 0x30) + (r8_2 << 1)) u>= 0xd800)
                    sub_142aea870(rdx_6, arg3)
                else
                    *(rdx_6 + 0x28) = (r8_2 + 1).d
                
                void* rcx_4 = *(arg1 + 0x20)
                int64_t rax_8 = sx.q(*(rcx_4 + 0x28))
                
                if (rax_8.d s> *(rcx_4 + 0x1c))
                    rbx = (*(*(rcx_4 + 0x38) + 0x40))()
                else
                    rbx = rax_8 + *(rcx_4 + 0x20)
                
                goto label_142a79d17
            
            *(arg1 + 0x82) = 0
            *(arg1 + 0xa8) = 1
            rax_3.b = 0
        else if (*(arg1 + 0x98) s>= 0)
            *(arg1 + 0xa8) = 1
            rax_3.b = 0
        else
        label_142a79d17:
            void* r8_3 = *(arg1 + 0x20)
            void* rdx_7 = *(arg1 + 8)
            int64_t r12_1 = *(arg1 + 0x78)
            void* r12_2
            
            if (*(*(r8_3 + 0x38) + 0x48) != 0)
                int64_t rax_12
                rax_12.b = *(rdx_7 + 0x7c) s> 0
                r12_2 = r12_1 - rax_12
            label_142a79d5f:
                rax_3 = sx.q(*(rdx_7 + 0xa0))
                
                if (rax_3.d u> 5)
                    abort()
                    noreturn
                
                switch (rax_3)
                    case nullptr
                        int512_t zmm0_1
                        rax_3, zmm0_1 = sub_142a748a0(arg1, rbx, 0, arg2)
                        
                        if (*arg2 s<= 0)
                            while (true)
                                if (*(arg1 + 0x82) != 0)
                                    goto label_142a7a4c7
                                
                                if (rbx s>= r12_2)
                                    break
                                
                                void* rcx_8 = *(arg1 + 0x20)
                                void* rdx_10 = rbx - *(rcx_8 + 0x20)
                                
                                if (rbx - *(rcx_8 + 0x20) s< 0 || rdx_10 s>= sx.q(*(rcx_8 + 0x1c))
                                        || *(*(rcx_8 + 0x30) + (rdx_10 << 1)) u>= 0xdc00)
                                    sub_142aeacd0(rcx_8, rbx)
                                else
                                    *(rcx_8 + 0x28) = rdx_10.d
                                
                                void* rdx_12 = *(arg1 + 0x20)
                                int64_t r8_4 = sx.q(*(rdx_12 + 0x28))
                                
                                if (r8_4.d s>= *(rdx_12 + 0x2c)
                                        || *(*(rdx_12 + 0x30) + (r8_4 << 1)) u>= 0xd800)
                                    sub_142aea870(rdx_12, zmm0_1)
                                else
                                    *(rdx_12 + 0x28) = (r8_4 + 1).d
                                
                                void* rcx_10 = *(arg1 + 0x20)
                                int64_t rax_17 = sx.q(*(rcx_10 + 0x28))
                                
                                if (rax_17.d s> *(rcx_10 + 0x1c))
                                    rbx = (*(*(rcx_10 + 0x38) + 0x40))()
                                else
                                    rbx = rax_17 + *(rcx_10 + 0x20)
                                
                                if (sub_142a7a5e0(arg1, rbx, arg2).b != 0)
                                    goto label_142a79e6b_2
                                
                                rax_3, zmm0_1 = sub_142a748a0(arg1, rbx, 0, arg2)
                                
                                if (*arg2 s> 0)
                                    goto label_142a79e6b_2
                            
                            goto label_142a7a4d5
                        
                    labelid_9:
                        rax_3.b = 0
                    case 1, 5
                        int32_t r15_1 = *(rdx_7 + 0xb8)
                        void* rcx_26 = rbx - *(r8_3 + 0x20)
                        
                        if (rbx - *(r8_3 + 0x20) s< 0 || rcx_26 s>= sx.q(*(r8_3 + 0x1c))
                                || *(*(r8_3 + 0x30) + (rcx_26 << 1)) u>= 0xdc00)
                            sub_142aeacd0(r8_3, rbx)
                        else
                            *(r8_3 + 0x28) = rcx_26.d
                        
                        while (true)
                            void* rdx_27 = *(arg1 + 0x20)
                            void** rbp_2 = rbx
                            int64_t r8_9 = sx.q(*(rdx_27 + 0x28))
                            int16_t r9_7
                            
                            if (r8_9.d s< *(rdx_27 + 0x2c))
                                r9_7 = *(*(rdx_27 + 0x30) + (r8_9 << 1))
                            
                            uint32_t rsi_3
                            
                            if (r8_9.d s>= *(rdx_27 + 0x2c) || r9_7 u>= 0xd800)
                                rsi_3 = sub_142aea870(rdx_27, arg3).d
                            else
                                rsi_3 = zx.d(r9_7)
                                *(rdx_27 + 0x28) = (r8_9 + 1).d
                            
                            void* rcx_29 = *(arg1 + 0x20)
                            int64_t rdx_28 = sx.q(*(rcx_29 + 0x28))
                            
                            if (rdx_28.d s> *(rcx_29 + 0x1c))
                                rbx = (*(*(rcx_29 + 0x38) + 0x40))()
                            else
                                rbx = rdx_28 + *(rcx_29 + 0x20)
                            
                            if (rsi_3 == r15_1)
                                rax_3, arg3 = sub_142a748a0(arg1, rbp_2, 0, arg2)
                                
                                if (*arg2 s> 0)
                                    goto label_142a79e6b_2
                                
                                if (*(arg1 + 0x82) != 0)
                                    goto label_142a7a4c7
                                
                                void* rcx_31 = *(arg1 + 0x20)
                                void* rdx_31 = rbx - *(rcx_31 + 0x20)
                                
                                if (rbx - *(rcx_31 + 0x20) s< 0 || rdx_31 s>= sx.q(*(rcx_31 + 0x1c))
                                        || *(*(rcx_31 + 0x30) + (rdx_31 << 1)) u>= 0xdc00)
                                    sub_142aeacd0(rcx_31, rbx)
                                else
                                    *(rcx_31 + 0x28) = rdx_31.d
                            
                            if (rbx s> r12_2)
                                break
                            
                            if (sub_142a7a5e0(arg1, rbx, arg2).b != 0)
                                goto label_142a79e6b_2
                        
                        goto label_142a7a4ce
                    case 2
                        void* rcx_15 = rbx - *(r8_3 + 0x20)
                        
                        if (rbx - *(r8_3 + 0x20) s< 0 || rcx_15 s>= sx.q(*(r8_3 + 0x1c))
                                || *(*(r8_3 + 0x30) + (rcx_15 << 1)) u>= 0xdc00)
                            sub_142aeacd0(r8_3, rbx)
                        else
                            *(r8_3 + 0x28) = rcx_15.d
                        
                        while (true)
                            void* rdx_17 = *(arg1 + 0x20)
                            void** rbp_1 = rbx
                            int64_t r8_6 = sx.q(*(rdx_17 + 0x28))
                            int16_t r9_5
                            
                            if (r8_6.d s< *(rdx_17 + 0x2c))
                                r9_5 = *(*(rdx_17 + 0x30) + (r8_6 << 1))
                            
                            uint32_t rsi_1
                            
                            if (r8_6.d s>= *(rdx_17 + 0x2c) || r9_5 u>= 0xd800)
                                rsi_1 = sub_142aea870(rdx_17, arg3)
                            else
                                rsi_1 = zx.d(r9_5)
                                *(rdx_17 + 0x28) = (r8_6 + 1).d
                            
                            void* rcx_18 = *(arg1 + 0x20)
                            rax_3 = sx.q(*(rcx_18 + 0x28))
                            
                            if (rax_3.d s> *(rcx_18 + 0x1c))
                                rbx = (*(*(rcx_18 + 0x38) + 0x40))()
                            else
                                rbx = rax_3 + *(rcx_18 + 0x20)
                            
                            if (rsi_1 s>= 0)
                                if (rsi_1 s>= 0x100)
                                    rax_3, arg3 = sub_142a9f280(*(*(arg1 + 8) + 0xb0), zx.q(rsi_1))
                                    
                                    if (rax_3.b != 0)
                                    label_142a79f9d:
                                        rax_3, arg3 = sub_142a748a0(arg1, rbp_1, 0, arg2)
                                        
                                        if (*arg2 s> 0)
                                            goto label_142a79e6b_2
                                        
                                        if (*(arg1 + 0x82) != 0)
                                            goto label_142a7a4c7
                                        
                                        void* rcx_23 = *(arg1 + 0x20)
                                        void* rdx_23 = rbp_1 - *(rcx_23 + 0x20)
                                        
                                        if (rbp_1 - *(rcx_23 + 0x20) s< 0
                                                || rdx_23 s>= sx.q(*(rcx_23 + 0x1c))
                                                || *(*(rcx_23 + 0x30) + (rdx_23 << 1)) u>= 0xdc00)
                                            sub_142aeacd0(rcx_23, rbp_1)
                                        else
                                            *(rcx_23 + 0x28) = rdx_23.d
                                else if (test_bit(
                                        sx.d(*((sx.q(rsi_1) s>> 3) + *(*(arg1 + 8) + 0xc0))), 
                                        rsi_1 & 7))
                                    goto label_142a79f9d
                            
                            if (rbx s> r12_2)
                                break
                            
                            if (sub_142a7a5e0(arg1, rbx, arg2).b != 0)
                                goto label_142a79e6b_2
                        
                    label_142a7a4ce:
                        *(arg1 + 0x82) = 0
                    label_142a7a4d5:
                        *(arg1 + 0xa8) = 1
                    label_142a79e6b:
                        rax_3.b = 0
                    case 3
                        if (rbx s<= *(arg1 + 0x70))
                            sub_142a748a0(arg1, rbx, 0, arg2)
                            
                            if (*arg2 s<= 0)
                                return zx.q(*(arg1 + 0x82))
                        else
                            *(arg1 + 0x82) = 0
                        
                    label_142a79e6b_1:
                        rax_3.b = 0
                    case 4
                        uint32_t rsi_4
                        
                        if (rbx != *(arg1 + 0x50))
                            void* rcx_38 = rbx - *(r8_3 + 0x20)
                            
                            if (rbx - *(r8_3 + 0x20) s< 0 || rcx_38 s>= sx.q(*(r8_3 + 0x1c))
                                    || *(*(r8_3 + 0x30) + (rcx_38 << 1)) u>= 0xdc00)
                                sub_142aeacd0(r8_3, rbx)
                            else
                                *(r8_3 + 0x28) = rcx_38.d
                            
                            void* rdx_40 = *(arg1 + 0x20)
                            int32_t rax_43 = *(rdx_40 + 0x28)
                            
                            if (rax_43 s<= 0
                                    || *(*(rdx_40 + 0x30) + (sx.q(rax_43 - 1) << 1)) u>= 0xd800)
                                rsi_4 = sub_142aeabf0(rdx_40)
                            else
                                *(rdx_40 + 0x28) = rax_43 - 1
                                rsi_4 = zx.d(*(*(*(arg1 + 0x20) + 0x30) + (sx.q(rax_43 - 1) << 1)))
                            
                            void* rcx_43 = *(arg1 + 0x20)
                            void* rdx_43 = rbx - *(rcx_43 + 0x20)
                            
                            if (rbx - *(rcx_43 + 0x20) s< 0 || rdx_43 s>= sx.q(*(rcx_43 + 0x1c))
                                    || *(*(rcx_43 + 0x30) + (rdx_43 << 1)) u>= 0xdc00)
                                sub_142aeacd0(rcx_43, rbx)
                            else
                                *(rcx_43 + 0x28) = rdx_43.d
                            
                        label_142a7a284:
                            
                            if (((*(arg1 + 8))[3].b & 1) != 0)
                                while (true)
                                    if (rsi_4 == 0xa)
                                        rax_3, arg3 = sub_142a748a0(arg1, rbx, 0, arg2)
                                        
                                        if (*arg2 s> 0)
                                            goto label_142a79e6b_2
                                        
                                        if (*(arg1 + 0x82) != 0)
                                            goto label_142a7a4c7
                                        
                                        void* rcx_45 = *(arg1 + 0x20)
                                        void* rdx_47 = rbx - *(rcx_45 + 0x20)
                                        
                                        if (rbx - *(rcx_45 + 0x20) s< 0
                                                || rdx_47 s>= sx.q(*(rcx_45 + 0x1c))
                                                || *(*(rcx_45 + 0x30) + (rdx_47 << 1)) u>= 0xdc00)
                                            sub_142aeacd0(rcx_45, rbx)
                                        else
                                            *(rcx_45 + 0x28) = rdx_47.d
                                    
                                    if (rbx s>= r12_2)
                                        break
                                    
                                    void* rdx_49 = *(arg1 + 0x20)
                                    int64_t r8_13 = sx.q(*(rdx_49 + 0x28))
                                    int16_t r9_12
                                    
                                    if (r8_13.d s< *(rdx_49 + 0x2c))
                                        r9_12 = *(*(rdx_49 + 0x30) + (r8_13 << 1))
                                    
                                    if (r8_13.d s>= *(rdx_49 + 0x2c) || r9_12 u>= 0xd800)
                                        rsi_4 = sub_142aea870(rdx_49, arg3)
                                    else
                                        rsi_4 = zx.d(r9_12)
                                        *(rdx_49 + 0x28) = (r8_13 + 1).d
                                    
                                    void* rcx_47 = *(arg1 + 0x20)
                                    int64_t rax_53 = sx.q(*(rcx_47 + 0x28))
                                    
                                    if (rax_53.d s> *(rcx_47 + 0x1c))
                                        rbx = (*(*(rcx_47 + 0x38) + 0x40))()
                                    else
                                        rbx = rax_53 + *(rcx_47 + 0x20)
                                    
                                    if (sub_142a7a5e0(arg1, rbx, arg2).b != 0)
                                        goto label_142a79e6b_2
                                
                                goto label_142a7a4ce
                            
                            while (true)
                                if (sub_142a7b5d0(rsi_4).b != 0)
                                    if (rsi_4 == 0xd && rbx s< *(arg1 + 0x78))
                                        void* rdx_51 = *(arg1 + 0x20)
                                        int64_t rax_56 = sx.q(*(rdx_51 + 0x28))
                                        int16_t r8_15
                                        
                                        if (rax_56.d s< *(rdx_51 + 0x2c))
                                            r8_15 = *(*(rdx_51 + 0x30) + (rax_56 << 1))
                                        
                                        uint32_t rax_58
                                        
                                        if (rax_56.d s>= *(rdx_51 + 0x2c) || r8_15 u>= 0xd800)
                                            rax_58 = sub_142aea4f0(rdx_51, arg3)
                                        else
                                            rax_58 = zx.d(r8_15)
                                        
                                        if (rax_58 == 0xa)
                                            void* rdx_52 = *(arg1 + 0x20)
                                            int64_t r8_16 = sx.q(*(rdx_52 + 0x28))
                                            
                                            if (r8_16.d s>= *(rdx_52 + 0x2c)
                                                    || *(*(rdx_52 + 0x30) + (r8_16 << 1))
                                                    u>= 0xd800)
                                                sub_142aea870(rdx_52, arg3)
                                            else
                                                *(rdx_52 + 0x28) = (r8_16 + 1).d
                                            
                                            void* rcx_53 = *(arg1 + 0x20)
                                            int64_t rax_61 = sx.q(*(rcx_53 + 0x28))
                                            
                                            if (rax_61.d s> *(rcx_53 + 0x1c))
                                                rbx = (*(*(rcx_53 + 0x38) + 0x40))()
                                            else
                                                rbx = rax_61 + *(rcx_53 + 0x20)
                                    
                                    rax_3, arg3 = sub_142a748a0(arg1, rbx, 0, arg2)
                                    
                                    if (*arg2 s> 0)
                                        goto label_142a79e6b_2
                                    
                                    if (*(arg1 + 0x82) != 0)
                                        goto label_142a7a4c7
                                    
                                    void* rcx_55 = *(arg1 + 0x20)
                                    void* rdx_55 = rbx - *(rcx_55 + 0x20)
                                    
                                    if (rbx - *(rcx_55 + 0x20) s< 0
                                            || rdx_55 s>= sx.q(*(rcx_55 + 0x1c))
                                            || *(*(rcx_55 + 0x30) + (rdx_55 << 1)) u>= 0xdc00)
                                        sub_142aeacd0(rcx_55, rbx)
                                    else
                                        *(rcx_55 + 0x28) = rdx_55.d
                                
                                if (rbx s>= r12_2)
                                    break
                                
                                void* rdx_57 = *(arg1 + 0x20)
                                int64_t r8_17 = sx.q(*(rdx_57 + 0x28))
                                int16_t r9_14
                                
                                if (r8_17.d s< *(rdx_57 + 0x2c))
                                    r9_14 = *(*(rdx_57 + 0x30) + (r8_17 << 1))
                                
                                if (r8_17.d s>= *(rdx_57 + 0x2c) || r9_14 u>= 0xd800)
                                    rsi_4 = sub_142aea870(rdx_57, arg3)
                                else
                                    rsi_4 = zx.d(r9_14)
                                    *(rdx_57 + 0x28) = (r8_17 + 1).d
                                
                                void* rcx_57 = *(arg1 + 0x20)
                                int64_t rax_68 = sx.q(*(rcx_57 + 0x28))
                                
                                if (rax_68.d s> *(rcx_57 + 0x1c))
                                    rbx = (*(*(rcx_57 + 0x38) + 0x40))()
                                else
                                    rbx = rax_68 + *(rcx_57 + 0x20)
                                
                                if (sub_142a7a5e0(arg1, rbx, arg2).b != 0)
                                    goto label_142a79e6b_2
                            
                            goto label_142a7a4ce
                        
                        rax_3, arg3 = sub_142a748a0(arg1, rbx, 0, arg2)
                        
                        if (*arg2 s> 0)
                        label_142a79e6b_2:
                            rax_3.b = 0
                        else
                            if (*(arg1 + 0x82) == 0)
                                void* rcx_34 = *(arg1 + 0x20)
                                void* rdx_36 = rbx - *(rcx_34 + 0x20)
                                
                                if (rbx - *(rcx_34 + 0x20) s< 0 || rdx_36 s>= sx.q(*(rcx_34 + 0x1c))
                                        || *(*(rcx_34 + 0x30) + (rdx_36 << 1)) u>= 0xdc00)
                                    sub_142aeacd0(rcx_34, rbx)
                                else
                                    *(rcx_34 + 0x28) = rdx_36.d
                                
                                void* rdx_38 = *(arg1 + 0x20)
                                int64_t r8_11 = sx.q(*(rdx_38 + 0x28))
                                int16_t r9_10
                                
                                if (r8_11.d s< *(rdx_38 + 0x2c))
                                    r9_10 = *(*(rdx_38 + 0x30) + (r8_11 << 1))
                                
                                if (r8_11.d s>= *(rdx_38 + 0x2c) || r9_10 u>= 0xd800)
                                    rsi_4 = sub_142aea870(rdx_38, arg3)
                                else
                                    rsi_4 = zx.d(r9_10)
                                    *(rdx_38 + 0x28) = (r8_11 + 1).d
                                
                                void* rcx_36 = *(arg1 + 0x20)
                                int64_t rax_38 = sx.q(*(rcx_36 + 0x28))
                                
                                if (rax_38.d s> *(rcx_36 + 0x1c))
                                    rbx = (*(*(rcx_36 + 0x38) + 0x40))()
                                else
                                    rbx = rax_38 + *(rcx_36 + 0x20)
                                
                                goto label_142a7a284
                            
                        label_142a7a4c7:
                            rax_3.b = 1
            else
                r12_2 = r12_1 - sx.q(*(rdx_7 + 0x7c))
                
                if (rbx s<= r12_2)
                    goto label_142a79d5f
                
                *(arg1 + 0x82) = 0
                rax_3.b = 0
                *(arg1 + 0xa8) = 1
        
        return rax_3
    
    *arg2 = rax

rax.b = 0
return rax
