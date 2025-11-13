// 函数: sub_142938320
// 地址: 0x142938320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xf0)
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rsi = arg2
int64_t rdi = arg1
int64_t result

if (*arg2 == 0)
label_1429383db:
    int32_t rbx_1 = 0
    
    if (sub_142898c70(rsi[1]) s> 0)
        int32_t rax_35
        
        do
            int64_t* rax_6 = sub_142898ea0(rsi[1], rbx_1)
            rbx_1 += 1
            int32_t var_108_1 = rbx_1
            
            if (sub_1428b6f70(arg3, "%*sEntry %0d:\n", zx.q(arg4)) s<= 0)
                goto label_142938787_2
            
            if (*rax_6 != 0)
                if (sub_1428b6f70(arg3, "%*s  admissionAuthority:\n", zx.q(arg4)) s<= 0)
                    goto label_142938787_2
                
                if (sub_1428b6f70(arg3, "%*s    ", zx.q(arg4)) s<= 0)
                    goto label_142938787_2
                
                if (sub_1428b6f70(arg3, &data_14370209c, sub_14292c5b0(arg3, *rax_6)) s<= 0)
                    goto label_142938787_2
            
            int64_t* rdx_3 = rax_6[1]
            
            if (rdx_3 != 0 && sub_142938790(rdi, rdx_3, arg3, arg4) s<= 0)
                goto label_142938787_2
            
            int32_t r13_1 = 0
            
            if (sub_142898c70(rax_6[2]) s> 0)
                int32_t rax_34
                
                do
                    int64_t* rax_13 = sub_142898ea0(rax_6[2], r13_1)
                    r13_1 += 1
                    int32_t var_108_2 = r13_1
                    
                    if (sub_1428b6f70(arg3, "%*s  Profession Info Entry %0d:\n", zx.q(arg4)) s<= 0)
                        goto label_142938787_2
                    
                    if (rax_13[3] != 0)
                        if (sub_1428b6f70(arg3, "%*s    registrationNumber: ", zx.q(arg4)) s<= 0)
                            goto label_142938787_2
                        
                        int32_t rax_16
                        int64_t r8_10
                        rax_16, r8_10 = sub_14292ba90(arg3, rax_13[3])
                        
                        if (rax_16 s<= 0)
                            goto label_142938787_2
                        
                        if (sub_1428b6f70(arg3, &data_14370209c, r8_10) s<= 0)
                            goto label_142938787_2
                    
                    int64_t* rdx_6 = *rax_13
                    
                    if (rdx_6 != 0 && sub_142938790(rdi, rdx_6, arg3, arg4 + 2) s<= 0)
                        goto label_142938787_2
                    
                    if (rax_13[1] != 0)
                        if (sub_1428b6f70(arg3, "%*s    Info Entries:\n", zx.q(arg4)) s<= 0)
                            goto label_142938787_2
                        
                        int32_t rdi_1 = 0
                        
                        if (sub_142898c70(rax_13[1]) s> 0)
                            int32_t rax_25
                            
                            do
                                int32_t* rax_21 = sub_142898ea0(rax_13[1], rdi_1)
                                
                                if (sub_1428b6f70(arg3, "%*s      ", zx.q(arg4)) s<= 0)
                                    goto label_142938787_2
                                
                                int32_t rax_23
                                int64_t r8_14
                                rax_23, r8_14 = sub_14292ba90(arg3, rax_21)
                                
                                if (rax_23 s<= 0)
                                    goto label_142938787_2
                                
                                if (sub_1428b6f70(arg3, &data_14370209c, r8_14) s<= 0)
                                    goto label_142938787_2
                                
                                rdi_1 += 1
                                rax_25 = sub_142898c70(rax_13[1])
                            while (rdi_1 s< rax_25)
                    
                    if (rax_13[2] != 0)
                        if (sub_1428b6f70(arg3, "%*s    Profession OIDs:\n", zx.q(arg4)) s<= 0)
                            goto label_142938787_2
                        
                        int32_t r14_1 = 0
                        
                        if (sub_142898c70(rax_13[2]) s> 0)
                            int32_t rax_33
                            
                            do
                                void* rax_28 = sub_142898ea0(rax_13[2], r14_1)
                                char* rax_30 = sub_1428a94b0(sub_1428a96d0(rax_28))
                                void var_c8
                                sub_1428a97f0(&var_c8, 0x80, rax_28, 1)
                                char* const rdx_10 = &data_1437020ab
                                
                                if (rax_30 != 0)
                                    rdx_10 = &data_143702098
                                
                                char* const rcx_32 = &data_1437020ab
                                char* const var_f0_1 = rdx_10
                                
                                if (rax_30 != 0)
                                    rcx_32 = &data_14370208c
                                
                                void* var_f8_1 = &var_c8
                                char* const rax_31 = &data_1437020ab
                                char* const var_100_1 = rcx_32
                                
                                if (rax_30 != 0)
                                    rax_31 = rax_30
                                
                                var_108_2.q = rax_31
                                
                                if (sub_1428b6f70(arg3, "%*s      %s%s%s%s\n", zx.q(arg4)) s<= 0)
                                    goto label_142938787_2
                                
                                r14_1 += 1
                                rax_33 = sub_142898c70(rax_13[2])
                            while (r14_1 s< rax_33)
                    
                    rax_34 = sub_142898c70(rax_6[2])
                    rdi = arg1
                while (r13_1 s< rax_34)
                rsi = arg2
            
            rax_35 = sub_142898c70(rsi[1])
        while (rbx_1 s< rax_35)
    
    result = 1
else if (sub_1428b6f70(arg3, "%*sadmissionAuthority:\n", zx.q(arg4)) s<= 0)
label_142938787:
    result = 0xffffffff
else if (sub_1428b6f70(arg3, "%*s  ", zx.q(arg4)) s<= 0)
label_142938787_1:
    result = 0xffffffff
else
    if (sub_1428b6f70(arg3, &data_14370209c, sub_14292c5b0(arg3, *rsi)) s> 0)
        goto label_1429383db
    
label_142938787_2:
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_128)
return result
