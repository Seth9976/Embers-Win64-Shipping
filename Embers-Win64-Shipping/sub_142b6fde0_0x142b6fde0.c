// 函数: sub_142b6fde0
// 地址: 0x142b6fde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
char* rax = *(arg1 + 8)
int32_t r14 = 0
int64_t var_58 = 0
int32_t var_40 = 0xffffffff
int32_t rax_1
int512_t zmm0
rax_1, zmm0 = sub_142aea6a0(arg2)
int32_t rbp = 0
int32_t i = sub_142aea870(arg2, zmm0)

if (i s>= 0)
    int64_t r15_1 = 0
    int32_t* rsi_1 = arg5
    
    do
        int32_t rdx_4 = *(arg1 + 0x10)
        int32_t rcx_4 = rdx_4 & 0x7f000000
        int32_t rax_2
        
        if (rbp != 0)
            if (rcx_4 == 0x1000000)
                if (i == 0x200d)
                    i = 0xff
                else if (i != 0x200c)
                    int32_t i_2 = i - (rdx_4 & 0x1fffff)
                    i = -1
                    
                    if (i_2 u<= 0xfd)
                        i = i_2
                else
                    i = 0xfe
            
            rax_2 = sub_142b0dfe0(&var_58, i)
        else
            if (rcx_4 == 0x1000000)
                if (i == 0x200d)
                    i = 0xff
                else if (i != 0x200c)
                    int32_t i_1 = i - (rdx_4 & 0x1fffff)
                    i = -1
                    
                    if (i_1 u<= 0xfd)
                        i = i_1
                else
                    i = 0xfe
            
            int32_t var_40_1 = 0xffffffff
            int32_t i_3 = i + 0x100
            
            if (i s>= 0)
                i_3 = i
            
            rax_2 = sub_142b0e050(&var_58, rax, i_3)
        
        int32_t rax_3
        int512_t zmm0_1
        rax_3, zmm0_1 = sub_142aea6a0(arg2)
        int32_t rdi_2 = rax_3 - rax_1
        rbp += 1
        bool cond:0_1
        
        if (rax_2 s< 2)
            cond:0_1 = rax_2 == 0
        else
            if (r15_1 s< sx.q(arg4))
                if (arg7 != 0)
                    *(arg7 - arg5 + rsi_1) = sub_142b0e0f0(&rax[1], zx.d(*rax) u>> 1)
                
                if (arg5 != 0)
                    *rsi_1 = rdi_2
                
                if (arg6 != 0)
                    *(arg6 - arg5 + rsi_1) = rbp
                
                r14 += 1
                r15_1 += 1
                rsi_1 = &rsi_1[1]
            
            cond:0_1 = rax_2 == 2
        
        if (cond:0_1)
            break
        
        if (rdi_2 s>= arg3)
            break
        
        i = sub_142aea870(arg2, zmm0_1)
    while (i s>= 0)

if (arg8 != 0)
    *arg8 = rbp

sub_142a97dd0(&var_58)
return zx.q(r14)
