// 函数: sub_142968c60
// 地址: 0x142968c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rbp = nullptr
void* const rdi = nullptr
char* r13 = arg2

if (arg3 != 0)
    *arg3 = 0

if (arg4 != 0)
    *arg4 = 0

if (arg1 == 0)
    sub_1428a5670((arg1 + 0x23).d, (arg1 + 0x76).d, (arg1 + 0x69).d, "crypto\pkcs12\p12_kiss.c", 
        0x2f)
    return 0

if (arg2 == 0 || *arg2 == 0)
    if (sub_142968720(arg1, nullptr, 0) == 0)
        r13 = &data_1437020ab
        
        if (sub_142968720(arg1, &data_1437020ab, 0) != 0)
            goto label_142968d2f
        
        sub_1428a5670(0x23, 0x76, 0x71, "crypto\pkcs12\p12_kiss.c", 0x42)
    else
        r13 = nullptr
    label_142968d2f:
        int32_t* rax_4 = sub_142898ba0()
        rbp = rax_4
        
        if (rax_4 != 0)
            int32_t* rax_5 = sub_142975cf0(arg1)
            
            if (rax_5 == 0)
            label_142968eee:
                sub_1428a5670(0x23, 0x76, 0x72, "crypto\pkcs12\p12_kiss.c", 0x53)
            else
                int32_t r15_1 = 0
                
                if (sub_142898c70(rax_5) s> 0)
                    while (true)
                        void* rax_7 = sub_142898ea0(rax_5, r15_1)
                        int32_t rax_8 = sub_1428a96d0(*(rax_7 + 0x18))
                        int32_t* rax_9
                        
                        if (rax_8 == 0x15)
                            rax_9 = sub_142975d60(rax_7)
                        label_142968dc0:
                            int32_t rax_11
                            
                            if (rax_9 != 0)
                                int32_t var_38
                                var_38.q = rax_4
                                rax_11 = sub_142968f80(rax_9, r13, 0xffffffff, arg3, var_38)
                                sub_142898cb0(rax_9, sub_142968c00)
                            
                            if (rax_9 == 0 || rax_11 == 0)
                                sub_142898cb0(rax_5, sub_1428f0b70)
                                rbp = rax_4
                                break
                        else if (rax_8 == 0x1a)
                            rax_9 = sub_142975dc0(rax_7, r13, rax_8 - 0x1b)
                            goto label_142968dc0
                        r15_1 += 1
                        
                        if (r15_1 s>= sub_142898c70(rax_5))
                            rbp = rax_4
                            goto label_142968e20
                    
                    goto label_142968eee
                
            label_142968e20:
                sub_142898cb0(rax_5, sub_1428f0b70)
                void* rax_13 = sub_142898c80(rbp)
                rdi = rax_13
                
                if (rax_13 == 0)
                label_142968ecb:
                    sub_142898cb0(rbp, sub_1428a2c50)
                    return 1
                
                while (true)
                    if (arg3 != 0 && *arg3 != 0 && arg4 != 0 && *arg4 == 0)
                        sub_1428a57b0()
                        
                        if (sub_1428a36a0(rdi, *arg3) != 0)
                            *arg4 = rdi
                            rdi = nullptr
                        
                        sub_1428a5550()
                    
                    if (arg5 != 0 && rdi != 0)
                        int32_t* rax_15 = *arg5
                        
                        if (rax_15 == 0)
                            rax_15 = sub_142898ba0()
                            *arg5 = rax_15
                            
                            if (rax_15 == 0)
                                break
                        
                        if (sub_142898d50(rax_15, rdi) == 0)
                            break
                        
                        rdi = nullptr
                    
                    sub_1428a2c50(rdi)
                    void* rax_17 = sub_142898c80(rbp)
                    rdi = rax_17
                    
                    if (rax_17 == 0)
                        goto label_142968ecb
        else
            sub_1428a5670(0x23, 0x76, (rax_4 + 0x41).d, "crypto\pkcs12\p12_kiss.c", 0x4e)
else
    if (sub_142968720(arg1, arg2, 0xffffffff) != 0)
        goto label_142968d2f
    
    sub_1428a5670(0x23, 0x76, 0x71, "crypto\pkcs12\p12_kiss.c", 0x46)

if (arg3 != 0)
    sub_1428965a0(*arg3)
    *arg3 = 0

if (arg4 != 0)
    sub_1428a2c50(*arg4)
    *arg4 = 0

sub_1428a2c50(rdi)
sub_142898cb0(rbp, sub_1428a2c50)
return 0
