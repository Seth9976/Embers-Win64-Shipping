// 函数: sub_14290f360
// 地址: 0x14290f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* r13 = *(arg2 + 0x28)
int32_t r14 = 0
int32_t rbx = 0
int64_t* rcx = *(r13 + 0x18)

if (rcx != 0)
    rbx = sub_142890560(rcx)

sub_142898c70(*(r13 + 0x58))

if (sub_14289a2c0(arg1, arg3, 0x80) != 0)
    void* const r8 = &data_1434d88f4
    
    if (**(arg2 + 0x10) == 0x390)
        r8 = "RSA-PSS"
    
    if (sub_1428b6f70(arg1, "%s ", r8) s> 0)
        char const* const rdx_1
        char const* const rbx_1
        
        if (arg4 == 0 || *(r13 + 0x28) == 0)
            if (sub_1428b6f70(arg1, "Public-Key: (%d bit)\n", zx.q(rbx)) s> 0)
                rdx_1 = "Modulus:"
                rbx_1 = "Exponent:"
            label_14290f477:
                int32_t var_38_1 = arg3
                
                if (sub_14293b8e0(arg1, rdx_1, *(r13 + 0x18), 0) != 0)
                    int32_t var_38_2 = arg3
                    
                    if (sub_14293b8e0(arg1, rbx_1, *(r13 + 0x20), 0) != 0)
                        if (arg4 == 0)
                        label_14290f68b:
                            int32_t rax_29
                            
                            if (**(arg2 + 0x10) == 0x390)
                                rax_29 = sub_1429101c0(arg1, 1, *(r13 + 0x60), arg3)
                            
                            if (**(arg2 + 0x10) != 0x390 || rax_29 != 0)
                                r14 = 1
                        else
                            int32_t var_38_3 = arg3
                            
                            if (sub_14293b8e0(arg1, "privateExponent:", *(r13 + 0x28), 0) != 0)
                                int32_t var_38_4 = arg3
                                
                                if (sub_14293b8e0(arg1, "prime1:", *(r13 + 0x30), 0) != 0)
                                    int32_t var_38_5 = arg3
                                    
                                    if (sub_14293b8e0(arg1, "prime2:", *(r13 + 0x38), 0) != 0)
                                        int32_t var_38_6 = arg3
                                        
                                        if (sub_14293b8e0(arg1, "exponent1:", *(r13 + 0x40), 0)
                                                != 0)
                                            int32_t var_38_7 = arg3
                                            
                                            if (sub_14293b8e0(arg1, "exponent2:", *(r13 + 0x48), 0)
                                                    != 0)
                                                int32_t var_38_8 = arg3
                                                
                                                if (sub_14293b8e0(arg1, "coefficient:", 
                                                        *(r13 + 0x50), 0) != 0)
                                                    int32_t rbx_2 = 0
                                                    int32_t r12_1 = 0
                                                    
                                                    if (sub_142898c70(*(r13 + 0x58)) s> 0)
                                                        int32_t rbp_1 = 3
                                                        
                                                        while (true)
                                                            int64_t* rdi_1 = nullptr
                                                            int64_t** rax_18 =
                                                                sub_142898ea0(*(r13 + 0x58), r12_1)
                                                            
                                                            while (true)
                                                                if (sub_14289a2c0(arg1, arg3, 0x80)
                                                                        != 0)
                                                                    if (rbx_2 == 0)
                                                                        if (sub_1428b6f70(arg1, "prime%d:", 
                                                                                zx.q(rbp_1)) s> 0)
                                                                            rdi_1 = *rax_18
                                                                        label_14290f637:
                                                                            int32_t var_38_9 = arg3
                                                                            
                                                                            if (sub_14293b8e0(arg1, 
                                                                                    &data_1437020ab, rdi_1, 0) != 0)
                                                                                rbx_2 += 1
                                                                                
                                                                                if (rbx_2 s>= 3)
                                                                                    break
                                                                                
                                                                                continue
                                                                    else if (rbx_2 == 1)
                                                                        if (sub_1428b6f70(arg1, "exponent%d:", 
                                                                                zx.q(rbp_1)) s> 0)
                                                                            rdi_1 = rax_18[1]
                                                                            goto label_14290f637
                                                                    else
                                                                        if (rbx_2 != 2)
                                                                            goto label_14290f637
                                                                        
                                                                        if (sub_1428b6f70(arg1, 
                                                                                "coefficient%d:", zx.q(rbp_1)) s> 0)
                                                                            rdi_1 = rax_18[2]
                                                                            goto label_14290f637
                                                                
                                                                r14 = 0
                                                                goto label_14290f6ce
                                                            
                                                            r12_1 += 1
                                                            rbp_1 += 1
                                                            rbx_2 = 0
                                                            
                                                            if (r12_1
                                                                    s>= sub_142898c70(*(r13 + 0x58)))
                                                                break
                                                        
                                                        r14 = 0
                                                    
                                                    goto label_14290f68b
        else if (sub_1428b6f70(arg1, "Private-Key: (%d bit, %d primes)\n", zx.q(rbx)) s> 0)
            rdx_1 = "modulus:"
            rbx_1 = "publicExponent:"
            goto label_14290f477

label_14290f6ce:
return zx.q(r14)
