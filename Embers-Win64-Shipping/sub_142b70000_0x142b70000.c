// 函数: sub_142b70000
// 地址: 0x142b70000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
int16_t* rax = *(arg1 + 8)
int32_t rbp = 0
int64_t var_60 = 0
int32_t var_48 = 0xffffffff
int32_t rax_1
int512_t zmm0
rax_1, zmm0 = sub_142aea6a0(arg2)
int32_t rsi = 0
int32_t i = sub_142aea870(arg2, zmm0)

if (i s>= 0)
    int64_t r14_1 = 0
    int32_t* rdi_1 = arg5
    
    do
        int64_t* rcx_4 = &var_60
        int32_t rax_2
        
        if (rsi != 0)
            rax_2 = sub_142b105d0(rcx_4, i)
        else
            int32_t var_48_1 = 0xffffffff
            rax_2 = sub_142b10910(rcx_4, rax, i)
        
        int32_t rax_3
        int512_t zmm0_1
        rax_3, zmm0_1 = sub_142aea6a0(arg2)
        int32_t rdx_3 = rax_3 - rax_1
        rsi += 1
        bool cond:0_1
        
        if (rax_2 s< 2)
            cond:0_1 = rax_2 == 0
        else
            if (r14_1 s< sx.q(arg4))
                if (arg7 != 0)
                    uint32_t rax_4 = zx.d(*rax)
                    uint32_t rax_5
                    
                    if (test_bit(rax_4, 0xf))
                        rax_5 = rax_4 & 0x7fff
                        
                        if (rax_5 u>= 0x4000)
                            if (rax_5 u>= 0x7fff)
                                goto label_142b70142
                            
                            rax_5 = (rax_5 - 0x4000) << 0x10 | zx.d(rax[1])
                    else if (rax_4 u< 0x4040)
                        rax_5 = (rax_4 u>> 6) - 1
                    else if (rax_4 u>= 0x7fc0)
                    label_142b70142:
                        rax_5 = zx.d(rax[1]) << 0x10 | zx.d(rax[2])
                    else
                        rax_5 = ((rax_4 & 0x7fc0) - 0x4040) << 0xa | zx.d(rax[1])
                    
                    *(arg7 - arg5 + rdi_1) = rax_5
                
                if (arg5 != 0)
                    *rdi_1 = rdx_3
                
                if (arg6 != 0)
                    *(rdi_1 + arg6 - arg5) = rsi
                
                rbp += 1
                r14_1 += 1
                rdi_1 = &rdi_1[1]
            
            cond:0_1 = rax_2 == 2
        
        if (cond:0_1)
            break
        
        if (rdx_3 s>= arg3)
            break
        
        i = sub_142aea870(arg2, zmm0_1)
    while (i s>= 0)

if (arg8 != 0)
    *arg8 = rsi

sub_142a97dd0(&var_60)
return zx.q(rbp)
