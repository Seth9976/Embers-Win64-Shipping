// 函数: sub_14294f860
// 地址: 0x14294f860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb8)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t r15 = 0
int128_t* rdi = nullptr
int32_t* rbx = arg4
int64_t* rax_2 = sub_142891ee0()
int64_t* rbp_1

if (rax_2 == 0)
    rbp_1 = rax_2
else
    if (rbx == 0)
        rbx = arg3
    
    int32_t count_1 = sub_1428916c0(arg3)
    
    if (count_1 s< 0)
        rbp_1 = rax_2
    else
        int32_t count_2 = arg6
        
        if (count_2 != 0xffffffff)
            if (count_2 s>= 0xfffffffd)
                goto label_14294f902
            
            sub_1428a5670(4, 0x7e, 0x88, "crypto\rsa\rsa_pss.c", 0x3f)
            rbp_1 = rax_2
        else
            count_2 = count_1
        label_14294f902:
            int32_t r14_2 = (sub_142890560(*(arg1 + 0x18)) - 1) & 7
            int32_t r8 = sub_142897860(arg1)
            
            if ((*arg5 & (0xff << r14_2.b).b) == 0)
                if (r14_2 == 0)
                    r8 -= 1
                
                char* rbx_1 = &arg5[1]
                
                if (r14_2 != 0)
                    rbx_1 = arg5
                
                int32_t var_d8_3
                
                if (r8 s>= count_1 + 2)
                    int32_t rsi_2 = r8 - count_1
                    
                    if (count_2 == 0xfffffffd)
                        count_2 = rsi_2 - 2
                    else if (count_2 s> rsi_2 - 2)
                        var_d8_3 = 0x54
                        goto label_14294f99e
                    
                    if (rbx_1[sx.q(r8) - 1] == 0xbc)
                        int64_t i = sx.q(rsi_2 - 1)
                        void* buffer2 = &rbx_1[i]
                        int128_t* rax_8 = sub_1428a6730(i)
                        rdi = rax_8
                        
                        if (rax_8 != 0)
                            int32_t var_d8
                            var_d8.q = rbx
                            
                            if (sub_142923910(rdi, rsi_2 - 1, buffer2, count_1, var_d8) s< 0)
                                rbp_1 = rax_2
                            else
                                int32_t r8_4 = 0
                                
                                if (rsi_2 - 1 s> 0 && rsi_2 - 1 u>= 0x40)
                                    int64_t rcx_6 = sx.q(rsi_2 - 2)
                                    
                                    if (rdi u> &rbx_1[rcx_6] || rcx_6 + rdi u< rbx_1)
                                        int32_t rcx_8 = (rsi_2 - 1) & 0x8000003f
                                        
                                        if (rcx_8 s< 0)
                                            rcx_8 = ((rcx_8 - 1) | 0xffffffc0) + 1
                                        
                                        int128_t* rcx_11 = rdi
                                        void* rdx_5 = rbx_1 - rdi
                                        
                                        do
                                            r8_4 += 0x40
                                            *rcx_11 ^= *(rcx_11 + rdx_5)
                                            rcx_11[1] ^= *(rcx_11 + rdx_5 + 0x10)
                                            rcx_11[2] ^= *(rcx_11 + rdx_5 + 0x20)
                                            rcx_11[3] ^= *(rcx_11 + rdx_5 + 0x30)
                                            rcx_11 = &rcx_11[4]
                                        while (rcx_11 - rdi s< sx.q(rsi_2 - 1 - rcx_8))
                                
                                int64_t rax_17 = sx.q(r8_4)
                                
                                if (rax_17 s< i)
                                    void* rax_18 = rax_17 + rdi
                                    
                                    do
                                        *rax_18 ^= *(rbx_1 - rdi + rax_18)
                                        rax_18 += 1
                                    while (rax_18 - rdi s< i)
                                
                                char rdx_6 = *rdi
                                char r12_1
                                
                                if (r14_2 == 0)
                                    r12_1 = rdx_6
                                else
                                    r12_1 = (0xff s>> (8 - r14_2.b)).b & rdx_6
                                    *rdi = r12_1
                                
                                int32_t i_1 = 0
                                
                                if (r12_1 == 0)
                                    int128_t* rax_19 = rdi
                                    
                                    while (i_1 s< rsi_2 - 2)
                                        rax_19 += 1
                                        i_1 += 1
                                        
                                        if (*rax_19 != 0)
                                            break
                                
                                if (*(sx.q(i_1) + rdi) == 1)
                                    int32_t rsi_4 = rsi_2 - 1 - (i_1 + 1)
                                    
                                    if (count_2 == 0xfffffffe || rsi_4 == count_2)
                                        rbp_1 = rax_2
                                        
                                        if (sub_1428919c0(rbp_1, arg3, nullptr) != 0
                                                && sub_142891c10(rbp_1, &data_143545fa0, 8) != 0)
                                            uint64_t count = sx.q(count_1)
                                            
                                            if (sub_142891c10(rbp_1, arg2, count) != 0)
                                                int32_t rax_24
                                                
                                                if (rsi_4 != 0)
                                                    rax_24 = sub_142891c10(rbp_1, 
                                                        sx.q(i_1 + 1) + rdi, sx.q(rsi_4))
                                                
                                                void buffer1
                                                
                                                if ((rsi_4 == 0 || rax_24 != 0)
                                                        && sub_1428918e0(rbp_1, &buffer1, nullptr)
                                                        != 0)
                                                    if (memcmp(&buffer1, buffer2, count) == 0)
                                                        r15 = 1
                                                    else
                                                        sub_1428a5670(4, 0x7e, 0x68, 
                                                            "crypto\rsa\rsa_pss.c", 0x7c)
                                    else
                                        sub_1428a5670(4, 0x7e, 0x88, "crypto\rsa\rsa_pss.c", 0x6e)
                                        rbp_1 = rax_2
                                else
                                    sub_1428a5670(4, 0x7e, 0x87, "crypto\rsa\rsa_pss.c", 0x6a)
                                    rbp_1 = rax_2
                        else
                            sub_1428a5670(4, 0x7e, (rax_8 + 0x41).d, "crypto\rsa\rsa_pss.c", 0x5f)
                            rbp_1 = rax_2
                    else
                        sub_1428a5670(4, 0x7e, 0x86, "crypto\rsa\rsa_pss.c", 0x58)
                        rbp_1 = rax_2
                else
                    var_d8_3 = 0x4e
                label_14294f99e:
                    sub_1428a5670(4, 0x7e, 0x6d, "crypto\rsa\rsa_pss.c", var_d8_3)
                    rbp_1 = rax_2
            else
                sub_1428a5670(4, 0x7e, 0x85, "crypto\rsa\rsa_pss.c", 0x46)
                rbp_1 = rax_2

sub_1428a6780(rdi)
sub_142891ea0(rbp_1)
__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(r15)
