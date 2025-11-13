// 函数: sub_142c75880
// 地址: 0x142c75880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
int32_t rbp = 0
int64_t* r15 = nullptr
int64_t arg_10
int32_t rax
int64_t r8
rax, r8 = sub_14284eae0(*(arg2 + 0x18), 0x46, 0, &arg_10)

if (arg_10 != 0)
    int64_t* rax_1
    int64_t r8_2
    int512_t zmm2
    rax_1, r8_2, zmm2 = sub_1428af390(nullptr, &arg_10, rax)
    r15 = rax_1
    
    if (rax_1 != 0)
        int32_t rax_2 = sub_1428af640(r15)
        
        if (rax_2 == 0)
            void* rax_4
            int64_t r8_4
            int512_t zmm2_1
            rax_4, r8_4, zmm2_1 = sub_1428af5b0(r15)
            
            if (rax_4 != 0)
                int32_t rax_7
                int64_t r8_6
                int512_t zmm2_2
                rax_7, r8_6, zmm2_2 = sub_142c8dda0(rax_4, sub_14284fc30(*(arg2 + 0x18)), 
                    sub_1427ec4a0(*(arg2 + 0x10)), 0)
                char* rdx_2
                
                if (rax_7 s> 0)
                    int32_t rdi_1 = 0
                    
                    if (sub_1428af550(rax_4) s> 0)
                        while (true)
                            void* rax_9 = sub_1428af580(rax_4, rdi_1)
                            
                            if (rax_9 != 0)
                                void var_48
                                int32_t arg_8
                                int32_t* arg_18
                                int32_t* arg_20
                                int32_t rax_10 =
                                    sub_1428af660(rax_9, &arg_8, &var_48, &arg_20, &arg_18)
                                int32_t rax_11
                                rax_11, r8_6, zmm2_2 =
                                    sub_1428af3d0(arg_20, arg_18, 0x12c, 0xffffffff)
                                
                                if (rax_11 == 0)
                                    rdx_2 = "OCSP response has expired"
                                    goto label_142c75a7f
                                
                                int512_t zmm2_3 = sub_142c64850(r14, 
                                    "SSL certificate status: %s (%d)\n", sub_142c8dd10(rax_10), 
                                    zmm2_2)
                                
                                if (rax_10 == 1)
                                    rbp = 0x5b
                                    sub_142c64760(r14, 
                                        "SSL certificate revocation reason: %s (%d)", 
                                        sub_142c8dd40(arg_8), zmm2_3)
                                    goto label_142c75a8c
                                
                                if (rax_10 == 2)
                                    break
                            
                            rdi_1 += 1
                            
                            if (rdi_1 s>= sub_1428af550(rax_4))
                                goto label_142c75a8c
                        
                        rbp = 0x5b
                else
                    rdx_2 = "OCSP response verification failed"
                label_142c75a7f:
                    sub_142c64760(r14, rdx_2, r8_6, zmm2_2)
                    rbp = 0x5b
            label_142c75a8c:
                sub_1428af2e0(rax_4)
            else
                sub_142c64760(r14, "Invalid OCSP response", r8_4, zmm2_1)
                rbp = (rax_4 + 0x5b).d
        else
            sub_142c64760(r14, "Invalid OCSP response status: %s (%d)", sub_142c8dd70(rax_2), zmm2)
            rbp = 0x5b
    else
        sub_142c64760(r14, "Invalid OCSP response", r8_2, zmm2)
        rbp = (r15 + 0x5b).d
else
    sub_142c64760(r14, "No OCSP response received", r8, arg3)
    rbp = 0x5b

sub_1428af340(r15)
return zx.q(rbp)
