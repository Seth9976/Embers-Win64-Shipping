// 函数: sub_142bce2e0
// 地址: 0x142bce2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t i_6 = zx.q(arg4)
int64_t* r12 = arg1
int32_t i_7 = i_6.d
char* i_5
sub_142bcde90(arg1, &i_5)
int32_t var_70
int32_t result

if (var_70 == 0)
label_142bce799:
    result = 3
else
    int64_t var_78
    int64_t r14_1 = var_78
    uint64_t rax_2 = 0
    int32_t r15_1 = *(arg2 + 0xc)
    char* i_1 = i_5
    int32_t var_c4_1 = 1
    int32_t var_c0_1 = 0
    int64_t var_a0_1 = r14_1
    int32_t rcx_2
    
    if (r15_1 != 7)
        if (var_70 != 3)
            goto label_142bce3c9
        
        rcx_2 = i_6.d
        var_c4_1 = rcx_2
    label_142bce3a1:
        
        if (i_6.d == 0)
        label_142bce799_1:
            result = 3
        else
            i_1 = &i_1[1]
            rax_2 = 1
            r14_1 -= 1
            var_c0_1 = 1
            var_a0_1 = r14_1
            
            if (rcx_2 != 0)
                goto label_142bce3c9
            
            result = 0
    else
        int64_t rsi_1 = *r12
        int64_t rdi_1 = r12[2]
        *r12 = &i_1[1]
        r12[2] = r14_1 - 1
        int32_t var_68
        sub_142bcde90(r12, &var_68)
        *r12 = rsi_1
        r12[2] = rdi_1
        int32_t var_58
        
        if (var_58 == 3)
            rcx_2 = var_c4_1
            r15_1 = 8
            goto label_142bce3a1
        
        rax_2 = zx.q(var_c0_1)
    label_142bce3c9:
        void* rdi_2 = arg2
        int32_t r8 = r15_1 - 1
        int32_t var_d8_1 = r8
        
        while (true)
            char* i = i_1
            int32_t* r15_3 = zx.q(*(rdi_2 + 0x18)) + arg3[rax_2]
            
            if (i_1 u< r14_1)
                do
                    char rcx_4 = *i
                    
                    if (rcx_4 u> 0x20 || not(test_bit(0x100003601, zx.q(rcx_4))))
                        if (rcx_4 != 0x25)
                            break
                        
                        for (; i u< r14_1; i = &i[1])
                            char rax_6 = *i
                            
                            if (rax_6 == 0xd)
                                break
                            
                            if (rax_6 == 0xa)
                                break
                    
                    i = &i[1]
                while (i u< r14_1)
            
            char* i_3 = i
            i_1 = i
            
            if (r8 u> 7)
                goto label_142bce799_1
            
            int32_t result_1
            int32_t rax_9
            int32_t rcx_7
            
            switch (r8)
                case 0
                    if (&i[3] u>= r14_1 || *i != 0x74 || i[1] != 0x72 || i[2] != 0x75
                            || i[3] != 0x65)
                        rcx_7 = 0
                        
                        if (&i[4] u< r14_1 && *i == 0x66 && i[1] == 0x61 && i[2] == 0x6c
                                && i[3] == 0x73 && i[4] == 0x65)
                            i_1 = &i[6]
                    else
                        i_1 = &i[5]
                        rcx_7 = 1
                    
                    goto label_142bce4ea
                case 1
                    rax_9 = sub_142bd0580(&i_3, r14_1)
                    goto label_142bce4e4
                case 2
                    rax_9 = sub_142bd02f0(&i_3, r14_1, 0)
                label_142bce4e4:
                    i_1 = i_3
                    rcx_7 = rax_9
                label_142bce4ea:
                    uint32_t rdx_5 = zx.d(*(rdi_2 + 0x1c))
                    r8 = var_d8_1
                    
                    if (rdx_5 == 1)
                        *r15_3 = rcx_7.b
                    else if (rdx_5 == 2)
                        *r15_3 = rcx_7.w
                    else
                        *r15_3 = rcx_7
                case 3
                    rax_9 = sub_142bd02f0(&i_3, r14_1, 3)
                    goto label_142bce4e4
                case 4, 5
                    int64_t rsi_2 = r12[4]
                    int32_t rdi_4 = r14_1.d - i.d
                    
                    if (i u>= r14_1)
                        rdi_2 = arg2
                    else
                        uint64_t rdi_5
                        
                        if (var_70 != 4)
                            if (var_70 != 2)
                                goto label_142bce799_1
                            
                            rdi_5 = zx.q(rdi_4 - 2)
                        else
                            rdi_5 = zx.q(rdi_4 - 1)
                        
                        i_1 = &i[1]
                        int64_t rdx_8 = *r15_3
                        
                        if (rdx_8 != 0)
                            sub_142b99980(rsi_2, rdx_8)
                            *r15_3 = 0
                        
                        int64_t rax_11 = sub_142b99860(rsi_2, (rdi_5 + 1).d, &result_1)
                        result = result_1
                        
                        if (result != 0)
                            goto label_142bce7a5
                        
                        memcpy(rax_11, i_1, rdi_5.d)
                        *(rdi_5 + rax_11) = 0
                        *r15_3 = rax_11
                        r8 = var_d8_1
                        rdi_2 = arg2
                case 6
                    if (sub_142bd81d0(&i_3, r14_1, 4, &var_68, 0) s< 4)
                        goto label_142bce799_1
                    
                    *r15_3 = sub_142b96160(var_68)
                    int32_t var_64
                    r15_3[1] = sub_142b96160(var_64)
                    int32_t var_60
                    r15_3[2] = sub_142b96160(var_60)
                    int32_t var_5c
                    int32_t rax_16 = sub_142b96160(var_5c)
                    r8 = var_d8_1
                    i_1 = i_3
                    r15_3[3] = rax_16
                case 7
                    int64_t r12_1 = r12[4]
                    int64_t var_90_1 = r12_1
                    int32_t var_e8
                    var_e8.q = 0
                    int32_t* rax_17 = sub_142b99a90(r12_1, 4, 0, (i_6 << 2).d, var_e8, &result_1)
                    int32_t* r15_4 = rax_17
                    result = result_1
                    
                    if (result != 0)
                        goto label_142bce7a5
                    
                    int32_t rdi_6 = 0
                    uint64_t rsi_4 = 0
                    
                    while (true)
                        int32_t rax_18 = sub_142bd81d0(&i_3, r14_1, i_6.d, &r15_4[rsi_4], 0)
                        
                        if (rax_18 s< 0 || rax_18 u< i_6.d)
                            result_1 = 3
                            sub_142b99980(r12_1, r15_4)
                            result = result_1
                            goto label_142bce7a5
                        
                        i_1 = i_3
                        char* i_4 = i_1
                        
                        if (i_1 u< r14_1)
                            do
                                char rcx_21 = *i_1
                                
                                if (rcx_21 u> 0x20 || not(test_bit(0x100003601, zx.q(rcx_21))))
                                    if (rcx_21 != 0x25)
                                        break
                                    
                                    for (; i_1 u< r14_1; i_1 = &i_1[1])
                                        char rax_20 = *i_1
                                        
                                        if (rax_20 == 0xd)
                                            break
                                        
                                        if (rax_20 == 0xa)
                                            break
                                
                                i_1 = &i_1[1]
                            while (i_1 u< r14_1)
                            
                            r12_1 = var_90_1
                            i_4 = i_1
                        
                        rdi_6 += 1
                        i_3 = i_1
                        rsi_4 = zx.q(rsi_4.d + i_6.d)
                        
                        if (rdi_6 u< 4)
                            continue
                        
                        if (i_6.d != 0)
                            int64_t* r12_2 = arg3
                            uint64_t rsi_5 = zx.q((i_6 << 1).d)
                            int32_t* rbx_1 = r15_4
                            int32_t rax_22 = neg.d(i_6.d)
                            uint64_t i_2
                            
                            do
                                int32_t* rdi_7 = *r12_2
                                *rdi_7 = sub_142b96160(*r15_4)
                                rdi_7[1] = sub_142b96160(rbx_1[zx.q(rax_22 + rsi_5.d)])
                                rdi_7[2] = sub_142b96160(rbx_1[rsi_5])
                                int32_t rax_29 = sub_142b96160(rbx_1[zx.q(i_7 + rsi_5.d)])
                                rsi_5 = zx.q(rsi_5.d + 1)
                                rdi_7[3] = rax_29
                                r12_2 = &r12_2[1]
                                r15_4 = &r15_4[1]
                                i_2 = i_6
                                i_6 -= 1
                            while (i_2 != 1)
                            i_1 = i_4
                            r14_1 = var_a0_1
                            r15_4 = rax_17
                            i_6 = zx.q(i_7)
                            r12_1 = var_90_1
                        
                        sub_142b99980(r12_1, r15_4)
                        r12 = arg1
                        break
                    
                    r8 = var_d8_1
                    rdi_2 = arg2
            
            int32_t rcx_28 = var_c4_1 - 1
            rax_2 = zx.q(var_c0_1 + 1)
            var_c4_1 = rcx_28
            var_c0_1 = rax_2.d
            
            if (rcx_28 == 0)
                break
        
        result = 0

label_142bce7a5:
__security_check_cookie(rax_1 ^ &var_108)
return result
