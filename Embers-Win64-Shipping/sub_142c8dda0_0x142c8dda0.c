// 函数: sub_142c8dda0
// 地址: 0x142c8dda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rbp = arg4
int32_t* r14 = nullptr
int32_t* arg_8 = nullptr
int64_t* r15 = nullptr
void* rax = sub_142c8e270(arg2, arg1 + 8)
void* r12 = rax
int32_t rdi

if (rax == 0)
    void* rax_1
    
    if ((rbp.b & 2) == 0)
        rax_1 = sub_142c8e270(*(arg1 + 0x48), arg1 + 8)
        r12 = rax_1
    
    if ((rbp.b & 2) == 0 && rax_1 != 0)
        rdi = 1
        goto label_142c8de29
    
    rdi = 0
    sub_1428a5670(0x27, 0x69, 0x76, "crypto\ocsp\ocsp_vfy.c", 0x29)
else
    rdi = 2
label_142c8de29:
    int64_t* rax_2 = sub_14289e400()
    r15 = rax_2
    
    if (rax_2 != 0)
        if (rdi == 2 && test_bit(rbp, 9))
            rbp |= 0x10
        
        if ((rbp.b & 4) != 0)
        label_142c8dea8:
            
            if ((rbp.b & 0x10) == 0)
                if ((rbp.b & 8) != 0)
                    goto label_142c8df28
                
                r14 = *(arg1 + 0x48)
                
                if (arg2 == 0)
                    goto label_142c8df28
                
                if (r14 == 0)
                    r14 = arg2
                label_142c8df28:
                    int32_t rax_11 = sub_14289e160(r15, arg3, r12, r14)
                    
                    if (rax_11 != 0)
                        sub_14289e5c0(r15, 8)
                        rdi = sub_14289e8e0(r15)
                        int32_t* rax_13 = sub_14289e120(r15)
                        arg_8 = rax_13
                        
                        if (rdi s<= 0)
                            int32_t rax_14 = sub_14289e150(r15)
                            sub_1428a5670(0x27, 0x69, 0x65, "crypto\ocsp\ocsp_vfy.c", 0x5d)
                            sub_1428b85a0(rax_14)
                            sub_1428a4880(2)
                        else if (not(test_bit(rbp, 8)))
                            int32_t rax_16 = sub_142c8e0c0(arg1, rax_13)
                            rdi = rax_16
                            
                            if (rax_16 == 0 && (rbp.b & 0x20) == 0)
                                if (sub_1428e78c0(sub_142898ea0(rax_13, sub_142898c70(rax_13) - 1), 
                                        0xb4, 0) == 1)
                                    rdi = 1
                                else
                                    sub_1428a5670(0x27, 0x69, rdi + 0x70, "crypto\ocsp\ocsp_vfy.c", 
                                        0x79)
                                    rdi = 0
                        else
                            rdi = 1
                    else
                        sub_1428a5670(0x27, 0x69, rax_11 + 0xb, "crypto\ocsp\ocsp_vfy.c", 0x53)
                        rdi = -1
                else
                    r14 = sub_142898900(r14)
                    int32_t rbx_1 = 0
                    
                    if (sub_142898c70(arg2) s<= 0)
                        goto label_142c8df28
                    
                    while (sub_142898d50(r14, sub_142898ea0(arg2, rbx_1)) != 0)
                        rbx_1 += 1
                        
                        if (rbx_1 s>= sub_142898c70(arg2))
                            goto label_142c8df28
                    
                    sub_1428a5670(0x27, 0x69, 0x41, "crypto\ocsp\ocsp_vfy.c", 0x48)
                    rdi = -1
        else
            int64_t rax_3 = sub_1428a38c0(r12)
            
            if (rax_3 != 0)
                int32_t var_48
                var_48.q = rax_3
                int32_t rax_5 = sub_1428f0d00(&data_1435055a0, arg1 + 0x30, *(arg1 + 0x40), arg1)
                rdi = rax_5
                
                if (rax_5 s> 0)
                    goto label_142c8dea8
                
                sub_1428a5670(0x27, 0x69, 0x75, "crypto\ocsp\ocsp_vfy.c", 0x3c)
            else
                int32_t rax_4 = (rax_3 + 0x37).d
                sub_1428a5670(0x27, 0x69, rax_4 + 0x4b, "crypto\ocsp\ocsp_vfy.c", rax_4)
                rdi = 0
    else
        sub_1428a5670(0x27, 0x69, (rax_2 + 0x41).d, "crypto\ocsp\ocsp_vfy.c", (rax_2 + 0x2e).d)
        rdi = -1

sub_14289e0e0(r15)
sub_142898cb0(arg_8, sub_1428a2c50)

if (*(arg1 + 0x48) != 0 && arg2 != 0)
    sub_142898a10(r14)

return zx.q(rdi)
