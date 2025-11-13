// 函数: sub_14294f4d0
// 地址: 0x14294f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t i_1 = 0
int32_t* rcx = arg4
char* rsi = arg2
void* rdi = nullptr
int64_t* r12 = nullptr

if (arg5 != 0)
    rcx = arg5

int32_t rax_1 = sub_1428916c0(arg4)
int32_t rbx = arg6
int64_t r15 = sx.q(rax_1)

if (rax_1 s>= 0)
    if (rbx != 0xffffffff)
        if (rbx == 0xfffffffe)
            rbx = -3
            goto label_14294f54b
        
        if (rbx s>= 0xfffffffd)
            goto label_14294f54b
        
        sub_1428a5670(4, 0x98, 0x88, "crypto\rsa\rsa_pss.c", 0xae)
    else
        rbx = r15.d
    label_14294f54b:
        int32_t r13_1 = sub_142890560(*(arg1 + 0x18)) - 1
        int32_t rax_3 = sub_142897860(arg1)
        arg6 = rax_3
        int32_t rcx_4 = rax_3
        int32_t r13_2 = r13_1 & 7
        
        if (r13_2 == 0)
            *rsi = 0
            rsi = &rsi[1]
            rcx_4 -= 1
            arg6 = rcx_4
        
        if (rcx_4 s>= (r15 + 2).d)
            int32_t rbp_2 = rcx_4 - r15.d
            
            if (rbx != 0xfffffffd)
                if (rbx s<= rbp_2 - 2)
                    goto label_14294f5ea
                
                sub_1428a5670(4, 0x98, 0x6e, "crypto\rsa\rsa_pss.c", 0xc1)
            else
                rbx = rbp_2 - 2
            label_14294f5ea:
                
                if (rbx s<= 0)
                label_14294f644:
                    void* rax_10 = &rsi[sx.q(rbp_2 - 1)]
                    int64_t* rax_11 = sub_142891ee0()
                    r12 = rax_11
                    
                    if (rax_11 != 0 && sub_1428919c0(rax_11, arg4, nullptr) != 0
                            && sub_142891c10(r12, &data_143545fa0, 8) != 0
                            && sub_142891c10(r12, arg3, r15) != 0)
                        int32_t rax_15
                        
                        if (rbx != 0)
                            rax_15 = sub_142891c10(r12, rdi, sx.q(rbx))
                        
                        if ((rbx == 0 || rax_15 != 0) && sub_1428918e0(r12, rax_10, nullptr) != 0)
                            int32_t var_58
                            var_58.q = rcx
                            
                            if (sub_142923910(rsi, rbp_2 - 1, rax_10, r15.d, var_58) == 0)
                                void* rax_20 = &rsi[sx.q(rbp_2 - rbx)]
                                *(rax_20 - 2) ^= 1
                                void* rax_21 = rax_20 - 1
                                
                                if (rbx s> 0)
                                    if (rbx u>= 0x40)
                                        int64_t rdx_7 = sx.q(rbx - 1)
                                        
                                        if (rax_21 u> rdx_7 + rdi || rdx_7 + rax_21 u< rdi)
                                            int32_t rdx_9 = rbx & 0x8000003f
                                            
                                            if (rdx_9 s< 0)
                                                rdx_9 = ((rdx_9 - 1) | 0xffffffc0) + 1
                                            
                                            void* rdx_12 = rdi + 0x10
                                            
                                            do
                                                i_1 += 0x40
                                                int128_t zmm1 = *(rdx_12 - 0x10)
                                                rdx_12 += 0x40
                                                int128_t zmm0_1 = *(rdx_12 - 0x40)
                                                *rax_21 ^= zmm1
                                                *(rax_21 + 0x10) ^= zmm0_1
                                                *(rax_21 + 0x20) ^= *(rdx_12 - 0x30)
                                                *(rax_21 + 0x30) ^= *(rdx_12 - 0x20)
                                                rax_21 += 0x40
                                            while (-0x10 - rdi + rdx_12 s< sx.q(rbx - rdx_9))
                                    
                                    int64_t i = sx.q(i_1)
                                    
                                    while (i s< sx.q(rbx))
                                        char rdx_13 = *(i + rdi)
                                        i += 1
                                        *rax_21 ^= rdx_13
                                        rax_21 += 1
                                
                                if (r13_2 != 0)
                                    *rsi &= (0xff s>> (8 - r13_2.b)).b
                                
                                i_1 = 1
                                rsi[sx.q(arg6) - 1] = 0xbc
                else
                    void* rax_6 = sub_1428a6730(sx.q(rbx))
                    rdi = rax_6
                    
                    if (rax_6 != 0)
                        if (sub_142897af0(rax_6, zx.q(rbx)) s> 0)
                            goto label_14294f644
                    else
                        sub_1428a5670(4, 0x98, (rax_6 + 0x41).d, "crypto\rsa\rsa_pss.c", 0xc8)
        else
            sub_1428a5670(4, 0x98, 0x6e, "crypto\rsa\rsa_pss.c", 0xba)

sub_142891ea0(r12)
sub_1428a6890(rdi, sx.q(rbx), "crypto\rsa\rsa_pss.c", 0xf7)
return zx.q(i_1)
