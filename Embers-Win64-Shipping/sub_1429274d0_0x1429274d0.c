// 函数: sub_1429274d0
// 地址: 0x1429274d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t r13 = 0
int32_t r12 = 0xa
int32_t rbp = 0xc
int32_t r15_1 = arg3 & 0xf0000
int32_t var_48 = r15_1

if (r15_1 != 0x40000)
    rbp = 0

if (arg3 == 0)
    rbp = 0x10

if ((arg4.b & 1) != 0)
label_14292757c:
    int32_t var_58
    int32_t rax_4
    
    if ((arg4.b & 2) == 0)
        int32_t rax_3 = sub_1428a3b50(arg2)
        
        if (rax_3 u> 2)
            rax_4 = sub_1428b6f70(arg1, "%8sVersion: Unknown (%ld)\n", &data_1437020ab)
        else
            var_58 = rax_3
            rax_4 = sub_1428b6f70(arg1, "%8sVersion: %ld (0x%lx)\n", &data_1437020ab)
    
    if ((arg4.b & 2) != 0 || rax_4 s> 0)
        if ((arg4.b & 4) != 0)
        label_1429276e6:
            
            if ((arg4.b & 8) != 0)
            label_142927729:
                int32_t rsi_3
                
                if ((arg4.b & 0x10) != 0)
                    rsi_3 = arg3
                label_1429277a2:
                    
                    if ((arg4.b & 0x20) != 0)
                    label_142927856:
                        
                        if ((arg4.b & 0x40) != 0)
                        label_1429278c4:
                            int32_t* var_40
                            
                            if (arg4.b s< 0)
                            label_142927997:
                                
                                if (test_bit(arg4, 0xc))
                                label_142927a2b:
                                    
                                    if (not(test_bit(arg4, 8)))
                                        sub_142968580(arg1, "X509v3 extensions", 
                                            sub_1428a3a80(arg2), arg4, 8)
                                    
                                    int32_t rax_44
                                    
                                    if (not(test_bit(arg4, 9)))
                                        sub_1428a2c70(&var_40, &var_48, arg2)
                                        rax_44 = sub_142927be0(arg1, var_48.q, var_40)
                                    
                                    if (test_bit(arg4, 9) || rax_44 s> 0)
                                        if (not(test_bit(arg4, 0xa)))
                                            sub_1429271f0(arg1, arg2, 0)
                                        
                                        r13 = 1
                                else
                                    sub_1428a3aa0(arg2, &var_48, &var_40)
                                    
                                    if (var_48.q == 0)
                                    label_1429279ef:
                                        
                                        if (var_40 == 0)
                                            goto label_142927a2b
                                        
                                        if (sub_1428b6f70(arg1, "%8sSubject Unique ID: ", 
                                                &data_1437020ab) s> 0
                                                && sub_142927ad0(arg1, var_40, 0xc) != 0)
                                            goto label_142927a2b
                                    else if (sub_1428b6f70(arg1, "%8sIssuer Unique ID: ", 
                                            &data_1437020ab) s> 0
                                            && sub_142927ad0(arg1, var_48.q, 0xc) != 0)
                                        goto label_1429279ef
                            else
                                var_58.q = sub_1427ec3c0(arg2)
                                sub_1428a2700(&var_40, nullptr, nullptr, nullptr, var_58)
                                
                                if (sub_14289aa40(arg1, "        Subject Public Key Info:\n", 0x21)
                                        s> 0 && sub_1428b6f70(arg1, "%12sPublic Key Algorithm: ", 
                                        &data_1437020ab) s> 0 && sub_1428cdc60(arg1, var_40) s> 0
                                        && sub_14289a750(arg1, &data_14370209c) s> 0)
                                    int32_t* rax_38 = sub_1428a38c0(arg2)
                                    
                                    if (rax_38 != 0)
                                        sub_142896ad0(arg1, rax_38, 0x10, 0)
                                    else
                                        sub_1428b6f70(arg1, "%12sUnable to load Public Key\n", 
                                            &data_1437020ab)
                                        sub_1429680e0(arg1)
                                    
                                    goto label_142927997
                        else
                            if (r15_1 != 0x40000)
                                r12 = 0x20
                            
                            if (sub_1428b6f70(arg1, "        Subject:%c", zx.q(r12)) s> 0
                                    && sub_1428f6c70(arg1, sub_1428a3930(arg2), rbp, rsi_3) s>= 0
                                    && sub_14289aa40(arg1, &data_14370209c, 1) s> 0)
                                goto label_1429278c4
                    else if (sub_14289aa40(arg1, "        Validity\n", 0x11) s> 0
                            && sub_14289aa40(arg1, "            Not Before: ", 0x18) s> 0
                            && sub_1428e5890(arg1, sub_14289a060(arg2)) != 0
                            && sub_14289aa40(arg1, "\n            Not After : ", 0x19) s> 0
                            && sub_1428e5890(arg1, sub_1406bc560(arg2)) != 0
                            && sub_14289aa40(arg1, &data_14370209c, 1) s> 0)
                        goto label_142927856
                else
                    int64_t r8_2 = 0xa
                    
                    if (r15_1 != 0x40000)
                        r8_2 = 0x20
                    
                    if (sub_1428b6f70(arg1, "        Issuer:%c", r8_2) s> 0)
                        rsi_3 = arg3
                        
                        if (sub_1428f6c70(arg1, sub_1428a38f0(arg2), rbp, rsi_3) s>= 0
                                && sub_14289aa40(arg1, &data_14370209c, 1) s> 0)
                            goto label_1429277a2
            else
                int64_t* rax_14 = sub_1428a3a90(arg2)
                
                if (sub_14289a750(arg1, "    ") s> 0 && sub_142927be0(arg1, rax_14, nullptr) s> 0)
                    goto label_142927729
        else if (sub_14289aa40(arg1, "        Serial Number:", 0x16) s> 0)
            int32_t* rax_6 = sub_14060ee10(arg2)
            int32_t rbp_1
            
            if (*rax_6 s> 4)
                rbp_1 = -1
            else
                sub_1428a57b0()
                rbp_1 = sub_1428e4860(rax_6)
                sub_1428a5550()
            
            int32_t rax_8 = rax_6[1]
            
            if (rbp_1 == 0xffffffff)
                if (sub_1428b6f70(arg1, "\n%12s%s", &data_1437020ab) s> 0)
                    int32_t i = 0
                    
                    if (*rax_6 s> 0)
                        int64_t rbp_2 = 0
                        
                        do
                            i += 1
                            
                            if (sub_1428b6f70(arg1, "%02x%c", zx.q(*(*(rax_6 + 8) + rbp_2))) s<= 0)
                                goto label_142927ab5
                            
                            rbp_2 += 1
                        while (i s< *rax_6)
                    
                    r15_1 = var_48
                    goto label_1429276e6
            else
                void* const r8 = &data_142d8bc68
                
                if (rax_8 != 0x102)
                    r8 = &data_1437020ab
                
                int32_t r9_3 = neg.d(rbp_1)
                
                if (rax_8 != 0x102)
                    r9_3 = rbp_1
                
                int32_t var_50_1 = r9_3
                var_58.q = r8
                
                if (sub_1428b6f70(arg1, " %s%lu (%s0x%lx)\n", r8) s> 0)
                    goto label_1429276e6
else if (sub_14289aa40(arg1, "Certificate:\n", 0xd) s> 0
        && sub_14289aa40(arg1, "    Data:\n", 0xa) s> 0)
    goto label_14292757c

label_142927ab5:
sub_1428a6780(0)
return zx.q(r13)
