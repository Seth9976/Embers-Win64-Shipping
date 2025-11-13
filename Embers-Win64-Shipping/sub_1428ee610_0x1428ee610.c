// 函数: sub_1428ee610
// 地址: 0x1428ee610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t r13 = 0
int64_t r15 = 0
int64_t rdi = 0
int64_t* rax = sub_1428a7510()

if (rax == 0)
    sub_1428a5670((rax + 0xd).d, (rax + 0x6b).d, 0x41, "crypto\asn1\a_d2i_fp.c", 0x6e)
    return zx.q((rax - 1).d)

sub_1428a49e0()

while (true)
    int64_t rsi_2 = rdi - r15
    
    if (rsi_2 u> 8)
        goto label_1428ee717
    
    int64_t rdx_1 = rdi + r15 - rdi + 8
    int64_t rax_2
    
    if (rdx_1 u>= rdi)
        rax_2 = sub_1428a73a0(rax, rdx_1)
    
    int32_t var_58_2
    int32_t r8_4
    
    if (rdx_1 u< rdi || rax_2 == 0)
        var_58_2 = 0x78
        r8_4 = 0x41
    else
        int32_t rax_3 = sub_14289a950(arg1, rax[1] + rdi, (r15 - rdi + 8).d)
        bool cond:0_1 = rax_3 s<= 0
        
        if (rax_3 s>= 0)
            goto label_1428ee6e5
        
        if (rsi_2 == 0)
            var_58_2 = 0x7d
            r8_4 = 0x8e
        else
            cond:0_1 = rax_3 s<= 0
        label_1428ee6e5:
            
            if (cond:0_1)
                goto label_1428ee717
            
            int64_t rcx_4 = sx.q(rax_3) + rdi
            
            if (rcx_4 u< rdi)
                var_58_2 = 0x82
                r8_4 = 0x9b
            else
                rdi = rcx_4
            label_1428ee717:
                int64_t rbx_5 = rax[1] + r15
                int64_t var_40 = rbx_5
                void var_48
                int32_t arg_18
                int32_t arg_20
                char rax_6 = sub_1428f2ef0(&var_40, &arg_18, &arg_20, &var_48, rdi.d - r15.d)
                
                if (rax_6 s< 0)
                    if ((sub_1428a54c0() & 0xfff) != 0x9b)
                        break
                    
                    sub_1428a49e0()
                
                r15 += sx.q(var_40.d - rbx_5.d)
                
                if ((rax_6 & 1) == 0)
                    int64_t rcx_6 = sx.q(arg_18)
                    bool cond:1_1
                    
                    if (r13 != 0 && rcx_6.d == 0 && arg_20 == rcx_6.d)
                        int32_t temp1_1 = r13
                        r13 -= 1
                        cond:1_1 = temp1_1 != 1
                    label_1428ee78e:
                        
                        if (cond:1_1)
                            continue
                        else
                            if (r15 u<= 0x7fffffff)
                                *arg2 = rax
                                return zx.q(r15.d)
                            
                            var_58_2 = 0xe1
                    else if (rcx_6 u<= rdi - r15)
                    label_1428ee861:
                        int64_t rcx_10 = sx.q(rcx_6.d) + r15
                        
                        if (rcx_10 u>= r15)
                            r15 = rcx_10
                            cond:1_1 = r13 != 0
                            goto label_1428ee78e
                        
                        var_58_2 = 0xd5
                    else
                        int64_t r14_1 = 0x4000
                        int64_t rsi_5 = rcx_6 + r15 - rdi
                        
                        if (rsi_5 u<= 0x7fffffff && rdi + rsi_5 u>= rdi)
                            if (rsi_5 != 0)
                                while (true)
                                    int64_t rbx_6 = rsi_5
                                    
                                    if (rsi_5 u> r14_1)
                                        rbx_6 = r14_1
                                    
                                    if (sub_1428a73a0(rax, rbx_6 + rdi) == 0)
                                        var_58_2 = 0xbe
                                        r8_4 = 0x41
                                        goto label_1428ee905
                                    
                                    rsi_5 -= rbx_6
                                    
                                    if (rbx_6 != 0)
                                        while (true)
                                            int32_t rax_18 =
                                                sub_14289a950(arg1, rax[1] + rdi, rbx_6.d)
                                            
                                            if (rax_18 s<= 0)
                                                var_58_2 = 0xc6
                                                r8_4 = 0x8e
                                                break
                                            
                                            int64_t rax_19 = sx.q(rax_18)
                                            rdi += rax_19
                                            int64_t temp2_1 = rbx_6
                                            rbx_6 -= rax_19
                                            
                                            if (temp2_1 == rax_19)
                                                goto label_1428ee847
                                        
                                        goto label_1428ee905
                                    
                                label_1428ee847:
                                    int64_t rax_20 = r14_1 * 2
                                    
                                    if (r14_1 u>= 0x3fffffff)
                                        rax_20 = r14_1
                                    
                                    r14_1 = rax_20
                                    
                                    if (rsi_5 == 0)
                                        rcx_6 = zx.q(arg_18)
                                        break
                            
                            goto label_1428ee861
                        
                        var_58_2 = 0xb1
                    r8_4 = 0x9b
                else if (r13 == 0xffffffff)
                    var_58_2 = 0x9c
                    r8_4 = 0x7b
                else
                    r13 += 1
                    continue
    
label_1428ee905:
    sub_1428a5670(0xd, 0x6b, r8_4, "crypto\asn1\a_d2i_fp.c", var_58_2)
    break

sub_1428a71f0(rax)
return 0xffffffff
