// 函数: sub_142b04f10
// 地址: 0x142b04f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* r8 = arg1
int32_t rsi = 0
char var_a8 = 0
int32_t* r15 = arg2
int32_t var_a0 = 0
int64_t* r12 = *(*(r8 + 8) + 0x10)
int64_t result = *(r8 + 0x18)
int64_t* var_88 = r12

if (*(r8 + 0x10) u< result)
    while (*r15 s<= 0)
        char rax_3 = *(r12 + 0xa1)
        result = *(r8 + 0x28)
        
        if (*(r8 + 0x20) u>= result)
            *r15 = 0xf
            break
        
        char var_a4
        char* r13_1 = &var_a4
        int32_t i_3 = 0
        uint16_t i = **(r8 + 0x10)
        uint16_t i_2 = i
        
        if (i - 0x80 u<= 0x7f
                && (i - 0xa7 u> 0x30 || not(test_bit(0x100000000a603, zx.q(i - 0xa7))))
                && i != 0xf7)
            *(r12 + 0xa1) = 1
        
        if ((i u> 0x1f || not(test_bit(0xfdffd9fe, zx.d(i)))) && i u< 0x80)
            var_a4 = i.b
            i_3 = 1
        else
            void* rax_8 = &data_143ccb150
            
            if (i u> data_143ccb152)
                do
                    rax_8 += 6
                while (i u> *(rax_8 + 2))
            
            char var_a3
            char var_a2
            
            if (i u< *rax_8)
                r15.b = 0x14
            label_142b05163:
                var_a4 = 0x14
                uint16_t rax_19 = i u>> 8
                
                if (i.b != 0)
                    var_a3 = rax_19.b
                    var_a2 = i.b
                else
                    var_a3 = 0xf6
                    var_a2 = rax_19.b
                
                void var_a1
                r13_1 = &var_a1
                i_3 = zx.d(&var_a1) - &var_a4
            label_142b0518d:
                
                if (i_3 == 0)
                    goto label_142b05197
            else
                r15 = zx.q(*(rax_8 + 4))
                
                if (r15.b == 0x14)
                    goto label_142b05163
                
                if (r15.b == 0xf)
                    if (i u<= 0x1f)
                        var_a3 = i.b + 0x20
                        r13_1 = &var_a2
                        var_a4 = 0xf
                    else if (i - 0x80 u<= 0x20)
                        var_a3 = i.b
                        r13_1 = &var_a2
                        var_a4 = 0xf
                    
                    i_3 = r13_1.d - &var_a4
                    goto label_142b0518d
                
                int64_t var_58
                
                if (r15.b u< 0x14)
                    uint64_t rdi_1 = zx.q(r15.b)
                    char* rbx_2 = &var_a4
                    uint32_t var_80
                    uint64_t rax_10 = sub_142afc250(r12[rdi_1], zx.d(i), &var_80, 0)
                    int32_t rdx_1 = rax_10.d
                    
                    if (rax_10.d s<= 0)
                        *(&var_58 + rdi_1) = 1
                        r8 = arg1
                        i_3 = 0
                    else
                        uint32_t r8_2 = var_80
                        var_a8 = r15.b
                        
                        if (r15.b != 0 && r12[0x14].b != r15.b)
                            var_a4 = r15.b
                            rbx_2 = &var_a3
                            
                            if (rdx_1 != 1)
                                goto label_142b0510a
                            
                            if (r15.b u>= 0x10)
                                var_a3 = r15.b
                                rbx_2 = &var_a2
                            
                            if ((r8_2 u>> ((rax_10 << 3) + -fffffffffffffff8).b).b u>= 0x20)
                                goto label_142b0510a
                            
                            r8 = arg1
                            i_3 = 0
                        else if (rdx_1 != 1
                            || (r8_2 u>> ((rax_10 << 3) + -fffffffffffffff8).b).b u>= 0x20)
                        label_142b0510a:
                            
                            if (rdx_1 == 1)
                                *rbx_2 = r8_2.b
                                rbx_2 = &rbx_2[1]
                            else
                                if (rdx_1 == 2)
                                    goto label_142b05137
                                
                                if (rdx_1 == 3)
                                    goto label_142b0512c
                                
                                if (rdx_1 == 4)
                                    *rbx_2 = (r8_2 u>> 0x18).b
                                    rbx_2 = &rbx_2[1]
                                label_142b0512c:
                                    *rbx_2 = (r8_2 u>> 0x10).b
                                    rbx_2 = &rbx_2[1]
                                label_142b05137:
                                    *rbx_2 = (r8_2 u>> 8).b
                                    rbx_2 = &rbx_2[1]
                                    *rbx_2 = r8_2.b
                                    rbx_2 = &rbx_2[1]
                            
                            r8 = arg1
                            i_3 = rbx_2.d - &var_a4
                        else
                            r8 = arg1
                            i_3 = 0
                    
                    goto label_142b0518d
                
            label_142b05197:
                __builtin_memset(&var_58, 0, 0x14)
                char rax_20 = r12[0x14].b
                
                if (rax_20 == 1)
                label_142b054a5:
                    char rdi_6 = *(r12 + 0xa1)
                    
                    if (rdi_6 != 0)
                        if (r15.b != 0x80)
                            if (r15.b != 0x81)
                                if (r15.b == 0x82)
                                    goto label_142b054e3
                            else if (rdi_6 u>= 0x10)
                                goto label_142b054e3
                        else if (rdi_6 u< 0x10)
                        label_142b054e3:
                            uint64_t rsi_3 = zx.q(rdi_6)
                            void* rbx_6 = r13_1
                            uint32_t var_6c
                            uint64_t rax_57 = sub_142afc250(r12[rsi_3], zx.d(i), &var_6c, 0)
                            int32_t rdx_26 = rax_57.d
                            
                            if (rax_57.d s<= 0)
                                *(&var_58 + rsi_3) = 1
                                i_3 = 0
                            else
                                uint32_t r8_12 = var_6c
                                var_a8 = rdi_6
                                
                                if (rdi_6 != 0 && r12[0x14].b != rdi_6)
                                    *r13_1 = rdi_6
                                    rbx_6 = &r13_1[1]
                                    
                                    if (rdx_26 != 1)
                                        goto label_142b05555
                                    
                                    if (rdi_6 u>= 0x10)
                                        *rbx_6 = rdi_6
                                        rbx_6 += 1
                                    
                                    if ((r8_12 u>> ((rax_57 << 3) + -fffffffffffffff8).b).b
                                            u>= 0x20)
                                        goto label_142b05555
                                    
                                    i_3 = 0
                                else if (rdx_26 != 1
                                    || (r8_12 u>> ((rax_57 << 3) + -fffffffffffffff8).b).b
                                    u>= 0x20)
                                label_142b05555:
                                    
                                    if (rdx_26 == 1)
                                        *rbx_6 = r8_12.b
                                        rbx_6 += 1
                                    else
                                        if (rdx_26 == 2)
                                            goto label_142b05582
                                        
                                        if (rdx_26 == 3)
                                            goto label_142b05577
                                        
                                        if (rdx_26 == 4)
                                            *rbx_6 = (r8_12 u>> 0x18).b
                                            rbx_6 += 1
                                        label_142b05577:
                                            *rbx_6 = (r8_12 u>> 0x10).b
                                            rbx_6 += 1
                                        label_142b05582:
                                            *rbx_6 = (r8_12 u>> 8).b
                                            rbx_6 += 1
                                            *rbx_6 = r8_12.b
                                            rbx_6 += 1
                                    
                                    i_3 = rbx_6.d - r13_1.d
                                else
                                    i_3 = 0
                    
                    if (i_3 == 0)
                        if (var_a8 == 0)
                        label_142b05697:
                            char r12_1 = 1
                            char r14_1 = 0xb
                            
                            if (r15.b == 0x81)
                                r12_1 = 0x10
                            
                            if (r15.b == 0x81)
                                r14_1 = 0x13
                            
                            if (r15.b == 0x82)
                                r12_1 = 1
                                r14_1 = 0x13
                            
                            char rdi_8 = r12_1
                            
                            if (r12_1 u> r14_1)
                            label_142b057c0:
                                r12 = var_88
                                
                                if (r12_1 != 1)
                                label_142b05858:
                                    *r13_1 = 0x14
                                    uint16_t rax_94 = i_2 u>> 8
                                    
                                    if (i_2.b != 0)
                                        r13_1[1] = rax_94.b
                                        r13_1[2] = i_2.b
                                        i_3 = r13_1.d - &var_a4 + 3
                                    else
                                        r13_1[1] = 0xf6
                                        r13_1[2] = rax_94.b
                                        i_3 = r13_1.d - &var_a4 + 3
                                else
                                    void* rdi_9 = r13_1
                                    int32_t var_60
                                    uint64_t rax_85 = sub_142afc250(*r12, zx.d(i_2), &var_60, 0)
                                    int32_t rdx_41 = rax_85.d
                                    int32_t i_9
                                    
                                    if (rax_85.d s> 0)
                                        int32_t r8_18 = var_60
                                        var_a8 = 0
                                        
                                        if (rdx_41 == 1 &&
                                                (r8_18 u>> ((rax_85 << 3) + -fffffffffffffff8).b).b u< 0x20)
                                            goto label_142b05858
                                        
                                        if (rdx_41 == 1)
                                            *rdi_9 = r8_18.b
                                            rdi_9 += 1
                                        else
                                            if (rdx_41 == 2)
                                                goto label_142b05838
                                            
                                            if (rdx_41 == 3)
                                                goto label_142b0582d
                                            
                                            if (rdx_41 == 4)
                                                rdi_9 = &r13_1[1]
                                                *r13_1 = (r8_18 u>> 0x18).b
                                            label_142b0582d:
                                                *rdi_9 = (r8_18 u>> 0x10).b
                                                rdi_9 += 1
                                            label_142b05838:
                                                *rdi_9 = (r8_18 u>> 8).b
                                                rdi_9 += 1
                                                *rdi_9 = r8_18.b
                                                rdi_9 += 1
                                        
                                        i_9 = rdi_9.d - r13_1.d
                                        goto label_142b0584e
                                    
                                    var_58.b = 1
                                    i_9 = 0
                                label_142b0584e:
                                    i_3 = i_9
                                    
                                    if (i_9 == 0)
                                        goto label_142b05858
                            else
                                do
                                    if (i_3 != 0)
                                        goto label_142b05891
                                    
                                    uint64_t rax_75 = zx.q(rdi_8)
                                    void* rcx_20 = var_88[rax_75]
                                    
                                    if (rcx_20 != 0)
                                        void* rsi_5 = &var_58 + rax_75
                                        
                                        if (*rsi_5 == i_3.b)
                                            void* rbx_8 = r13_1
                                            uint32_t var_64
                                            uint64_t rax_76 =
                                                sub_142afc250(rcx_20, zx.d(i_2), &var_64, 0)
                                            int32_t rdx_36 = rax_76.d
                                            
                                            if (rax_76.d s<= 0)
                                                *rsi_5 = 1
                                                i_3 = 0
                                            else
                                                uint32_t r8_16 = var_64
                                                var_a8 = rdi_8
                                                
                                                if (rdi_8 != 0 && var_88[0x14].b != rdi_8)
                                                    *r13_1 = rdi_8
                                                    rbx_8 = &r13_1[1]
                                                    
                                                    if (rdx_36 != 1)
                                                        goto label_142b05766
                                                    
                                                    if (rdi_8 u>= 0x10)
                                                        *rbx_8 = rdi_8
                                                        rbx_8 += 1
                                                    
                                                    if ((r8_16 u>>
                                                            ((rax_76 << 3) + -fffffffffffffff8).b).b
                                                            u>= 0x20)
                                                        goto label_142b05766
                                                    
                                                    i_3 = 0
                                                else if (rdx_36 != 1 || (r8_16
                                                    u>> ((rax_76 << 3) + -fffffffffffffff8).b).b
                                                    u>= 0x20)
                                                label_142b05766:
                                                    
                                                    if (rdx_36 == 1)
                                                        *rbx_8 = r8_16.b
                                                        rbx_8 += 1
                                                    else
                                                        if (rdx_36 == 2)
                                                            goto label_142b05793
                                                        
                                                        if (rdx_36 == 3)
                                                            goto label_142b05788
                                                        
                                                        if (rdx_36 == 4)
                                                            *rbx_8 = (r8_16 u>> 0x18).b
                                                            rbx_8 += 1
                                                        label_142b05788:
                                                            *rbx_8 = (r8_16 u>> 0x10).b
                                                            rbx_8 += 1
                                                        label_142b05793:
                                                            *rbx_8 = (r8_16 u>> 8).b
                                                            rbx_8 += 1
                                                            *rbx_8 = r8_16.b
                                                            rbx_8 += 1
                                                    
                                                    i_3 = rbx_8.d - r13_1.d
                                                else
                                                    i_3 = 0
                                    
                                    rdi_8 += 1
                                while (rdi_8 u<= r14_1)
                                
                                if (i_3 == 0)
                                    goto label_142b057c0
                                
                            label_142b05891:
                                r12 = var_88
                        else
                            if (r15.b != 0x80)
                                if (r15.b != 0x81)
                                    if (r15.b != 0x82)
                                        goto label_142b05697
                                    
                                    goto label_142b055da
                                
                                if (var_a8 u>= 0x10)
                                    goto label_142b055da
                                
                                goto label_142b05697
                            
                            if (var_a8 u>= 0x10)
                                goto label_142b05697
                            
                        label_142b055da:
                            uint64_t rbx_7 = zx.q(var_a8)
                            void* rdi_7 = r13_1
                            uint32_t var_68
                            uint64_t rax_66 = sub_142afc250(r12[rbx_7], zx.d(i), &var_68, 0)
                            int32_t rdx_31 = rax_66.d
                            int32_t i_8
                            
                            if (rax_66.d s<= 0)
                                *(&var_58 + rbx_7) = 1
                                i_8 = 0
                            else
                                uint32_t r8_14 = var_68
                                
                                if (r12[0x14].b != var_a8)
                                    *r13_1 = var_a8
                                    rdi_7 = &r13_1[1]
                                    
                                    if (rdx_31 != 1)
                                        goto label_142b05640
                                    
                                    if (var_a8 u>= 0x10)
                                        *rdi_7 = var_a8
                                        rdi_7 += 1
                                    
                                    if ((r8_14 u>> ((rax_66 << 3) + -fffffffffffffff8).b).b
                                            u>= 0x20)
                                        goto label_142b05640
                                    
                                    i_8 = 0
                                else if (rdx_31 != 1
                                    || (r8_14 u>> ((rax_66 << 3) + -fffffffffffffff8).b).b
                                    u>= 0x20)
                                label_142b05640:
                                    
                                    if (rdx_31 == 1)
                                        *rdi_7 = r8_14.b
                                        rdi_7 += 1
                                    else
                                        if (rdx_31 == 2)
                                            goto label_142b0566d
                                        
                                        if (rdx_31 == 3)
                                            goto label_142b05662
                                        
                                        if (rdx_31 == 4)
                                            *rdi_7 = (r8_14 u>> 0x18).b
                                            rdi_7 += 1
                                        label_142b05662:
                                            *rdi_7 = (r8_14 u>> 0x10).b
                                            rdi_7 += 1
                                        label_142b0566d:
                                            *rdi_7 = (r8_14 u>> 8).b
                                            rdi_7 += 1
                                            *rdi_7 = r8_14.b
                                            rdi_7 += 1
                                    
                                    i_8 = rdi_7.d - r13_1.d
                                else
                                    i_8 = 0
                            
                            i_3 = i_8
                            
                            if (i_8 == 0)
                                goto label_142b05697
                    
                    rsi = var_a0
                else
                    if (r15.b != 0x80)
                        if (r15.b != 0x81)
                            if (r15.b != 0x82)
                                goto label_142b054a5
                            
                            goto label_142b051db
                        
                        if (rax_20 u>= 0x10)
                            goto label_142b051db
                        
                        goto label_142b054a5
                    
                    if (rax_20 u>= 0x10)
                        goto label_142b054a5
                    
                label_142b051db:
                    char rdi_2 = *(r12 + 0xa1)
                    
                    if (rdi_2 u>= 0x10)
                        uint64_t rsi_2 = zx.q(rdi_2)
                        void* rbx_5 = r13_1
                        uint32_t var_70
                        uint64_t rax_48 = sub_142afc250(r12[rsi_2], zx.d(i), &var_70, 0)
                        int32_t rdx_21 = rax_48.d
                        
                        if (rax_48.d s<= 0)
                            *(&var_58 + rsi_2) = 1
                            i_3 = 0
                        else
                            uint32_t r8_10 = var_70
                            var_a8 = rdi_2
                            
                            if (rdi_2 != 0 && r12[0x14].b != rdi_2)
                                *r13_1 = rdi_2
                                rbx_5 = &r13_1[1]
                                
                                if (rdx_21 != 1)
                                    goto label_142b05459
                                
                                if (rdi_2 u>= 0x10)
                                    *rbx_5 = rdi_2
                                    rbx_5 += 1
                                
                                if ((r8_10 u>> ((rax_48 << 3) + -fffffffffffffff8).b).b u>= 0x20)
                                    goto label_142b05459
                                
                                i_3 = 0
                            else if (rdx_21 != 1
                                || (r8_10 u>> ((rax_48 << 3) + -fffffffffffffff8).b).b u>= 0x20)
                            label_142b05459:
                                
                                if (rdx_21 == 1)
                                    *rbx_5 = r8_10.b
                                    rbx_5 += 1
                                else
                                    if (rdx_21 == 2)
                                        goto label_142b05486
                                    
                                    if (rdx_21 == 3)
                                        goto label_142b0547b
                                    
                                    if (rdx_21 == 4)
                                        *rbx_5 = (r8_10 u>> 0x18).b
                                        rbx_5 += 1
                                    label_142b0547b:
                                        *rbx_5 = (r8_10 u>> 0x10).b
                                        rbx_5 += 1
                                    label_142b05486:
                                        *rbx_5 = (r8_10 u>> 8).b
                                        rbx_5 += 1
                                        *rbx_5 = r8_10.b
                                        rbx_5 += 1
                                
                                i_3 = rbx_5.d - r13_1.d
                            else
                                i_3 = 0
                        
                    label_142b0549d:
                        
                        if (i_3 == 0)
                            goto label_142b054a5
                        
                        rsi = var_a0
                    else
                        uint32_t i_4 = zx.d(i)
                        void* rdi_3 = r13_1
                        uint32_t var_7c
                        uint64_t rax_21 = sub_142afc250(r12[1], i_4, &var_7c, 0)
                        int32_t rdx_6 = rax_21.d
                        int32_t i_6
                        
                        if (rax_21.d s> 0)
                            uint32_t r8_4 = var_7c
                            var_a8 = 1
                            
                            if (r12[0x14].b != 1)
                                *r13_1 = 1
                                rdi_3 = &r13_1[1]
                            
                            if (rdx_6 == 1
                                    && (r8_4 u>> ((rax_21 << 3) + -fffffffffffffff8).b).b u< 0x20)
                                goto label_142b0529d
                            
                            if (rdx_6 == 1)
                                *rdi_3 = r8_4.b
                                rdi_3 += 1
                            else
                                if (rdx_6 == 2)
                                    goto label_142b0526f
                                
                                if (rdx_6 == 3)
                                    goto label_142b05264
                                
                                if (rdx_6 == 4)
                                    *rdi_3 = (r8_4 u>> 0x18).b
                                    rdi_3 += 1
                                label_142b05264:
                                    *rdi_3 = (r8_4 u>> 0x10).b
                                    rdi_3 += 1
                                label_142b0526f:
                                    *rdi_3 = (r8_4 u>> 8).b
                                    rdi_3 += 1
                                    *rdi_3 = r8_4.b
                                    rdi_3 += 1
                            
                            i_6 = rdi_3.d - r13_1.d
                            goto label_142b05285
                        
                        var_58:1.b = 1
                        i_6 = 0
                    label_142b05285:
                        i_3 = i_6
                        
                        if (i_6 == 0)
                        label_142b0529d:
                            void* rdi_4 = r13_1
                            uint32_t var_78
                            uint64_t rax_30 = sub_142afc250(*r12, i_4, &var_78, 0)
                            int32_t rdx_11 = rax_30.d
                            int32_t i_7
                            
                            if (rax_30.d s> 0)
                                uint32_t r8_6 = var_78
                                var_a8 = 0
                                
                                if (rdx_11 != 1
                                        || (r8_6 u>> ((rax_30 << 3) + -fffffffffffffff8).b).b
                                        u>= 0x20)
                                    if (rdx_11 == 1)
                                        *rdi_4 = r8_6.b
                                        rdi_4 += 1
                                    else
                                        if (rdx_11 == 2)
                                            goto label_142b052fc
                                        
                                        if (rdx_11 == 3)
                                            goto label_142b052f1
                                        
                                        if (rdx_11 == 4)
                                            rdi_4 = &r13_1[1]
                                            *r13_1 = (r8_6 u>> 0x18).b
                                        label_142b052f1:
                                            *rdi_4 = (r8_6 u>> 0x10).b
                                            rdi_4 += 1
                                        label_142b052fc:
                                            *rdi_4 = (r8_6 u>> 8).b
                                            rdi_4 += 1
                                            *rdi_4 = r8_6.b
                                            rdi_4 += 1
                                    
                                    i_7 = rdi_4.d - r13_1.d
                                    goto label_142b05312
                                
                            label_142b0531c:
                                uint64_t rdi_5 = zx.q(*(r12 + 0xa1))
                                char* rbx_4 = r13_1
                                uint32_t var_74
                                uint64_t rax_39 = sub_142afc250(r12[rdi_5], i_4, &var_74, 0)
                                int32_t rdx_16 = rax_39.d
                                
                                if (rax_39.d s<= 0)
                                    *(&var_58 + zx.q(rdi_5.d)) = 1
                                    i = i_2
                                    i_3 = 0
                                else
                                    uint32_t r8_8 = var_74
                                    var_a8 = rdi_5.b
                                    
                                    if (rdi_5.b != 0 && r12[0x14].b != rdi_5.b)
                                        *r13_1 = rdi_5.b
                                        rbx_4 = &r13_1[1]
                                        
                                        if (rdx_16 != 1)
                                            goto label_142b05394
                                        
                                        if (rdi_5.b u>= 0x10)
                                            *rbx_4 = rdi_5.b
                                            rbx_4 = &rbx_4[1]
                                        
                                        if ((r8_8 u>> ((rax_39 << 3) + -fffffffffffffff8).b).b
                                                u>= 0x20)
                                            goto label_142b05394
                                        
                                        i = i_2
                                        i_3 = 0
                                    else if (rdx_16 != 1
                                        || (r8_8 u>> ((rax_39 << 3) + -fffffffffffffff8).b).b
                                        u>= 0x20)
                                    label_142b05394:
                                        
                                        if (rdx_16 == 1)
                                            *rbx_4 = r8_8.b
                                            rbx_4 = &rbx_4[1]
                                        else
                                            if (rdx_16 == 2)
                                                goto label_142b053c1
                                            
                                            if (rdx_16 == 3)
                                                goto label_142b053b6
                                            
                                            if (rdx_16 == 4)
                                                *rbx_4 = (r8_8 u>> 0x18).b
                                                rbx_4 = &rbx_4[1]
                                            label_142b053b6:
                                                *rbx_4 = (r8_8 u>> 0x10).b
                                                rbx_4 = &rbx_4[1]
                                            label_142b053c1:
                                                *rbx_4 = (r8_8 u>> 8).b
                                                rbx_4 = &rbx_4[1]
                                                *rbx_4 = r8_8.b
                                                rbx_4 = &rbx_4[1]
                                        
                                        i = i_2
                                        i_3 = rbx_4.d - r13_1.d
                                    else
                                        i = i_2
                                        i_3 = 0
                                
                                goto label_142b0549d
                            
                            var_58.b = 1
                            i_7 = 0
                        label_142b05312:
                            i_3 = i_7
                            
                            if (i_7 == 0)
                                goto label_142b0531c
                
                r8 = arg1
            r15 = arg2
        
        *(r8 + 0x10) += 2
        char* rdx_45 = &var_a4
        
        while (*(r8 + 0x20) u< *(r8 + 0x28))
            int32_t i_5 = i_3
            i_3 -= 1
            
            if (i_5 == 0)
                break
            
            char rax_96 = *rdx_45
            rdx_45 = &rdx_45[1]
            **(r8 + 0x20) = rax_96
            *(r8 + 0x20) += 1
            int32_t* rax_97 = *(r8 + 0x30)
            
            if (rax_97 != 0)
                *rax_97 = rsi
                *(r8 + 0x30) += 4
        
        rsi += 1
        var_a0 = rsi
        
        if (i_3 s> 0)
            int64_t rcx_26 = *(r8 + 8)
            *r15 = 0xf
            char* rcx_28 = rcx_26 + 0x68 - rdx_45
            *(*(r8 + 8) + 0x5b) = i_3.b
            int32_t i_1
            
            do
                *(rcx_28 + rdx_45) = *rdx_45
                rdx_45 = &rdx_45[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        *(r12 + 0xa1) = rax_3
        result = *(r8 + 0x18)
        
        if (*(r8 + 0x10) u>= result)
            break

__security_check_cookie(rax_1 ^ &var_c8)
return result
