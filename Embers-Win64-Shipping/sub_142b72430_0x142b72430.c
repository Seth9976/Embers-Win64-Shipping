// 函数: sub_142b72430
// 地址: 0x142b72430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rbx = sx.q(arg2)
int64_t rdi = 0

do
    rdi += 0x10
    *(rdi + *arg1 - 0x10) = i
    i += 0x40
while (i s< 0x80)

int64_t* rsi = arg6
int64_t rbp = 0x40
int32_t var_50 = 0x40

if (sub_142b73d40(rsi, arg4, 0x40) == 0)
    *arg7 = 7
    return 0

sub_142b71b00(rsi, arg3, 0, 0, i)
int64_t* rdx_2 = arg1
int32_t i_5 = 0
int32_t rax_6 = rdx_2[6].d s>> 4

if (rax_6 s> 8)
    int64_t i_12 = sx.q(i)
    int64_t rbx_1 = 4
    int64_t rdi_1 = 8
    int64_t var_58_1 = 4
    int64_t i_13 = i_12
    int64_t var_48_1 = 8
    
    while (true)
        if (rdi_1 == rbx)
            rbp = 0x10
            rbx_1 = 1
            var_50 = 0x10
            var_58_1 = 1
            i_5 = i
            
            if (sub_142b73d40(rsi, arg4, 0x10) == 0)
                *arg7 = 7
                return 0
            
            sub_142b71b00(rsi, arg3, 0, 0, i)
            rdx_2 = arg1
        
        char rax_8 = *(rdi_1 + rdx_2 + 0x40)
        int32_t i_11
        int64_t* r11_1
        
        if (rax_8 == 0)
            int32_t* rsi_1 = *rdx_2
            int32_t* r15_1 = &rsi_1[rdi_1]
            int32_t i_2 = *r15_1
            int32_t i_10 = i_2
            int32_t rax_9 = arg6[3].d
            
            if (rax_9 s> 1)
                uint64_t i_7 = zx.q(rax_9 - 1)
                uint64_t i_1
                
                do
                    i_10 = i_10 * 0x25 + i_2
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
            
            int32_t rax_10 = sub_142b73aa0(arg6, arg3, i_2, i_10)
            r11_1 = arg6
            
            if (rax_10 s< 0)
            label_142b726a8:
                int32_t i_8 = i
                int64_t rdi_3 = sx.q(i - var_50 + 1)
                int64_t i_6 = sx.q(i)
                
                if (rdi_3 s< i_6)
                    int32_t* rcx_11 = arg3 - 4 + (i_6 << 2)
                    
                    while (*rcx_11 == i_2)
                        i_8 -= 1
                        i_6 -= 1
                        rcx_11 -= 4
                        
                        if (rdi_3 s>= i_6)
                            break
                
                *r15_1 = i_8
                i_12 = i_13
                int32_t rcx_13 = i - i_8
                i_11 = i
                
                if (rcx_13 s>= var_50)
                    goto label_142b72835
                
                uint64_t rdx_8 = zx.q(var_50 - rcx_13)
                i += rdx_8.d
                int64_t rcx_15
                int64_t rdi_5
                rdi_5, rcx_15 = __memfill_u32(arg3 + (i_12 << 2), i_2, zx.q(rdx_8.d))
                i_12 += rdx_8
            label_142b72822:
                i_13 = i_12
            label_142b72835:
                sub_142b71b00(r11_1, arg3, 0, i_11, i)
                rdi_1 = var_48_1
                rsi = arg6
                rbx_1 = var_58_1
            else
                int32_t r9_2 = *(*r11_1 + (sx.q(rax_10) << 2)) & *(r11_1 + 0x14)
                int32_t r9_3 = r9_2 - 1
                
                if (r9_2 - 1 s< 0)
                    goto label_142b726a8
                
            label_142b725fb:
                
                if (rdi_1 == sx.q(arg5) && rdi_1 s>= rbx && r9_3 s< i_5)
                    int64_t rcx_7 = 0
                    
                    if (rbx s> 0)
                        int32_t* rax_13 = rsi_1
                        
                        do
                            if (*rax_13 == r9_3)
                                r9_3 += 1
                                int64_t r10_2 = sx.q(i - var_50)
                                int64_t r8_1 = sx.q(r9_3)
                                
                                if (r8_1 s> r10_2)
                                    goto label_142b726a8
                                
                                while (*(arg3 + (r8_1 << 2)) != i_2)
                                label_142b72692:
                                    r9_3 += 1
                                    r8_1 += 1
                                    
                                    if (r8_1 s> r10_2)
                                        goto label_142b726a8
                                
                                int32_t rdi_2 = 1
                                int64_t rax_16 = 1
                                int32_t* rcx_9 = arg3 + 4 + (r8_1 << 2)
                                
                                while (rax_16 != rbp)
                                    if (*rcx_9 != i_2)
                                        r9_3 += rdi_2
                                        r8_1 += rax_16
                                        goto label_142b72692
                                    
                                    rdi_2 += 1
                                    rax_16 += 1
                                    rcx_9 = &rcx_9[1]
                                
                                if (r9_3 s< 0)
                                    goto label_142b726a8
                                
                                rdi_1 = var_48_1
                                goto label_142b725fb
                            
                            rcx_7 += 4
                            rax_13 = &rax_13[4]
                        while (rcx_7 s< rbx)
                
                if (r9_3 s< 0)
                    goto label_142b726a8
                
                rbx_1 = var_58_1
                rsi = r11_1
                *r15_1 = r9_3
                i_12 = i_13
        else if (rax_8 != 1)
            int64_t rcx_21 = *rdx_2
            *(rcx_21 + (rdi_1 << 2)) = *(rcx_21 + (zx.q(*(rcx_21 + (rdi_1 << 2))) << 2))
        else
            int64_t rax_21 = *rdx_2
            int32_t* rsi_2 = rax_21 + (rdi_1 << 2)
            int32_t* rbx_2 = rdx_2[2] + (zx.q(*(rax_21 + (rdi_1 << 2))) << 2)
            int64_t i_3 = 1
            int32_t rax_23 = *rbx_2
            
            do
                rax_23 = rax_23 * 0x25 + rbx_2[i_3]
                i_3 += 1
            while (i_3 s< sx.q(arg6[3].d))
            
            int32_t rax_25 = sub_142b71d70(arg6, arg3, rbx_2, 0, rax_23)
            r11_1 = arg6
            int32_t rdx_12
            
            if (rax_25 s>= 0)
                rdx_12 = *(*r11_1 + (sx.q(rax_25) << 2)) & *(r11_1 + 0x14)
            
            if (rax_25 s< 0 || rdx_12 - 1 s< 0)
                int64_t rdi_6 = rbp - 1
                int32_t i_4 = var_50 - 1
                
                if (i_4 s> 0)
                    int32_t r10_5 = i - i_4
                    
                    do
                        int32_t i_9 = i_4
                        int32_t* rcx_19 = rbx_2
                        
                        if (i_4 s> 0)
                            while (*((sx.q(r10_5) << 2) - rbx_2 + arg3 + rcx_19) == *rcx_19)
                                rcx_19 = &rcx_19[1]
                                i_9 -= 1
                                
                                if (i_9 s<= 0)
                                    break
                        
                        if (i_9 == 0)
                            break
                        
                        i_4 -= 1
                        r10_5 += 1
                        rdi_6 -= 1
                    while (i_4 s> 0)
                
                i_11 = i
                *rsi_2 = i - i_4
                
                if (rdi_6 s>= rbp)
                    goto label_142b72835
                
                i += rbp.d - rdi_6.d
                
                do
                    int32_t rax_32 = rbx_2[rdi_6]
                    rdi_6 += 1
                    *(arg3 + (i_12 << 2)) = rax_32
                    i_12 += 1
                while (rdi_6 s< rbp)
                
                goto label_142b72822
            
            rbx_1 = var_58_1
            *rsi_2 = rdx_12 - 1
            rsi = r11_1
        rdi_1 += rbx_1
        var_48_1 = rdi_1
        
        if (rdi_1 s>= sx.q(rax_6))
            break
        
        rdx_2 = arg1

return zx.q(i)
