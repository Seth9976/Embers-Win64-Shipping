// 函数: sub_1428ba590
// 地址: 0x1428ba590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t r14 = 0
void* r12 = nullptr
int32_t* rax = sub_142907bb0()
int32_t* rbx = rax
int32_t r13 = 7

if (rax != 0)
    sub_142907c90(rax)
    int64_t rbx_1 = -1
    char* rdi_1 = -ffffffffffffffff
    
    do
        rdi_1 = &rdi_1[1]
    while (rdi_1[arg2] != 0)
    
    if (sub_14289aa40(arg1, "-----BEGIN ", 0xb) != 0xb)
        rbx = rax
        sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
    else if (sub_14289aa40(arg1, arg2, rdi_1.d) != rdi_1.d)
        rbx = rax
        sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
    else if (sub_14289aa40(arg1, "-----\n", 6) != 6)
        rbx = rax
        sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
    else
        do
            rbx_1 += 1
        while (arg3[rbx_1] != 0)
        
        if (rbx_1.d s<= 0)
        label_1428ba6a5:
            void* rax_6 = sub_1428a6730(0x2000)
            r12 = rax_6
            
            if (rax_6 != 0)
                uint32_t rbx_2 = arg5
                int32_t rbp_1 = 0
                int32_t var_48
                
                if (rbx_2 s<= 0)
                label_1428ba732:
                    rbx = rax
                    sub_142907c10(rbx, r12, &var_48)
                    int32_t r8_6 = var_48
                    int32_t rax_9
                    
                    if (r8_6 s> 0)
                        rax_9 = sub_14289aa40(arg1, r12, r8_6)
                    
                    if (r8_6 s> 0 && rax_9 != var_48)
                        r14 = 0
                        sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
                    else if (sub_14289aa40(arg1, "-----END ", 9) != 9)
                        r14 = 0
                        sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
                    else if (sub_14289aa40(arg1, arg2, rdi_1.d) != rdi_1.d)
                        r14 = 0
                        sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
                    else if (sub_14289aa40(arg1, "-----\n", 6) != 6)
                        r14 = 0
                        sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
                    else
                        int32_t temp0_1 = r14
                        r14 += var_48
                        
                        if (temp0_1 == neg.d(var_48))
                            sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
                else
                    while (true)
                        uint32_t rsi_1 = rbx_2
                        
                        if (rbx_2 s> 0x1400)
                            rsi_1 = 0x1400
                        
                        if (sub_142907ca0(rax, r12, &var_48, sx.q(rbp_1) + arg4, rsi_1) != 0)
                            int32_t rcx_7 = var_48
                            
                            if (rcx_7 == 0)
                            label_1428ba722:
                                r14 += rcx_7
                                rbx_2 -= rsi_1
                                rbp_1 += rsi_1
                                
                                if (rbx_2 s<= 0)
                                    goto label_1428ba732
                                
                                continue
                            else
                                int32_t rax_8 = sub_14289aa40(arg1, r12, rcx_7)
                                rcx_7 = var_48
                                
                                if (rax_8 == rcx_7)
                                    goto label_1428ba722
                        
                        r14 = 0
                        break
                    
                    rbx = rax
                    sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
            else
                rbx = rax
                sub_1428a5670(9, 0x72, (rax_6 + 0x41).d, "crypto\pem\pem_lib.c", 0x292)
        else if (sub_14289aa40(arg1, arg3, rbx_1.d) != rbx_1.d)
            rbx = rax
            sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
        else
            if (sub_14289aa40(arg1, &data_14370209c, 1) == 1)
                goto label_1428ba6a5
            
            rbx = rax
            sub_1428a5670(9, 0x72, r13, "crypto\pem\pem_lib.c", 0x292)
else
    sub_1428a5670(9, 0x72, 0x41, "crypto\pem\pem_lib.c", 0x292)

sub_142907b80(rbx)
sub_1428a6890(r12, 0x2000, "crypto\pem\pem_lib.c", 0x294)
return zx.q(r14)
