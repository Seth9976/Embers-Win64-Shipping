// 函数: sub_1428ed060
// 地址: 0x1428ed060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result

if (arg1 == 0)
label_1428ed427:
    result = 1
else
    int32_t rdi_1 = 0
    
    if (sub_142898c70(arg1) - 1 s<= 0)
    label_1428ed108:
        int32_t rsi_2 = 0
        int32_t var_78_1 = 0
        
        if (sub_142898c70(arg1) s<= 0)
        label_1428ed427_1:
            result = 1
        else
            while (true)
                int64_t* rax_12 = sub_142898ea0(arg1, rsi_2)
                uint32_t rcx_10
                
                if (rax_12 == 0)
                    rcx_10 = 0
                else
                    int32_t* rcx_7 = *rax_12
                    
                    if (rcx_7 == 0)
                        rcx_10 = 0
                    else
                        char* rax_13 = *(rcx_7 + 8)
                        
                        if (rax_13 == 0 || *rcx_7 s< 2)
                            rcx_10 = 0
                        else
                            rcx_10 = zx.d(*rax_13) << 8 | zx.d(rax_13[1])
                
                int32_t count_1
                int64_t r12_1
                
                if (rcx_10 == 1)
                    count_1 = 4
                    r12_1 = 3
                else if (rcx_10 == 2)
                    count_1 = 0x10
                    r12_1 = 0xf
                else
                    count_1 = 0
                    r12_1 = -1
                
                if (rax_12 == 0)
                    break
                
                int32_t* rcx_12 = rax_12[1]
                
                if (rcx_12 == 0)
                    break
                
                int32_t rdx_7 = *rcx_12
                
                if (rdx_7 != 0)
                    if (rdx_7 != 1)
                        break
                    
                    int32_t* r15_1 = *(rcx_12 + 8)
                    
                    if (sub_142898c70(r15_1) == 0)
                        break
                    
                    int32_t r14_1 = 0
                    void var_70
                    void buffer1
                    
                    if (sub_142898c70(r15_1) - 1 s> 0)
                        while (true)
                            int32_t* rax_18 = sub_142898ea0(r15_1, r14_1)
                            r14_1 += 1
                            int32_t* rax_19 = sub_142898ea0(r15_1, r14_1)
                            
                            if (rax_18 == 0)
                                goto label_1428ed456_1
                            
                            int32_t rdx_10 = *rax_18
                            int32_t* rdx_14
                            
                            if (rdx_10 == 0)
                                if (sub_1428ed6c0(&buffer1, *(rax_18 + 8), count_1, 0) == 0)
                                    goto label_1428ed456_1
                                
                                rdx_14 = *(rax_18 + 8)
                            else
                                if (rdx_10 != 1)
                                    goto label_1428ed456_1
                                
                                if (sub_1428ed6c0(&buffer1, **(rax_18 + 8), count_1, 0) == 0)
                                    goto label_1428ed456_1
                                
                                rdx_14 = *(*(rax_18 + 8) + 8)
                            
                            if (sub_1428ed6c0(&var_70, rdx_14, count_1, 0xff) == 0)
                                goto label_1428ed456_1
                            
                            if (rax_19 == 0)
                                goto label_1428ed456_1
                            
                            int32_t rcx_20 = *rax_19
                            char var_50[0x10]
                            int32_t* rdx_19
                            
                            if (rcx_20 == 0)
                                if (sub_1428ed6c0(&var_50, *(rax_19 + 8), count_1, 0) == 0)
                                    goto label_1428ed456_1
                                
                                rdx_19 = *(rax_19 + 8)
                            else
                                if (rcx_20 != 1)
                                    goto label_1428ed456_1
                                
                                if (sub_1428ed6c0(&var_50, **(rax_19 + 8), count_1, 0) == 0)
                                    goto label_1428ed456_1
                                
                                rdx_19 = *(*(rax_19 + 8) + 8)
                            
                            void buffer2
                            
                            if (sub_1428ed6c0(&buffer2, rdx_19, count_1, 0xff) == 0)
                                goto label_1428ed456_1
                            
                            uint64_t count = zx.q(count_1)
                            
                            if (memcmp(&buffer1, &var_50, zx.q(count_1)) s>= 0)
                                goto label_1428ed456_1
                            
                            if (memcmp(&buffer1, &var_70, zx.q(count.d)) s> 0)
                                goto label_1428ed456_1
                            
                            if (memcmp(&var_50, &buffer2, zx.q(count.d)) s> 0)
                                goto label_1428ed456_1
                            
                            int64_t rax_29 = r12_1
                            
                            if (r12_1 s>= 0)
                                int64_t temp2_1
                                
                                do
                                    char rdx_24 = var_50[rax_29]
                                    var_50[rax_29] = rdx_24 - 1
                                    
                                    if (rdx_24 != 0)
                                        break
                                    
                                    temp2_1 = rax_29
                                    rax_29 -= 1
                                while (temp2_1 - 1 s>= 0)
                            
                            if (memcmp(&var_70, &var_50, count) s>= 0)
                                goto label_1428ed456_1
                            
                            if (*rax_18 == 1 && sub_1428ee2e0(&buffer1, &var_70, count_1) s>= 0)
                                goto label_1428ed456_1
                            
                            if (r14_1 s>= sub_142898c70(r15_1) - 1)
                                rsi_2 = var_78_1
                                break
                    
                    int32_t* rax_35 = sub_142898ea0(r15_1, sub_142898c70(r15_1) - 1)
                    
                    if (rax_35 != 0 && *rax_35 == 1)
                        if (sub_1428ed6c0(&buffer1, **(rax_35 + 8), count_1, 0) == 0)
                            break
                        
                        if (sub_1428ed6c0(&var_70, *(*(rax_35 + 8) + 8), count_1, 0xff) == 0)
                            break
                        
                        if (memcmp(&buffer1, &var_70, zx.q(count_1)) s> 0)
                            break
                        
                        if (sub_1428ee2e0(&buffer1, &var_70, count_1) s>= 0)
                            break
                
                rsi_2 += 1
                var_78_1 = rsi_2
                
                if (rsi_2 s>= sub_142898c70(arg1))
                    goto label_1428ed427_1
            
        label_1428ed456:
            result = 0
    else
        while (true)
            int64_t* rax_4 = sub_142898ea0(arg1, rdi_1)
            rdi_1 += 1
            int64_t* rax_5 = sub_142898ea0(arg1, rdi_1)
            int32_t* rcx_2 = *rax_4
            int32_t* rdx_3 = *rax_5
            int32_t rbx_2 = *rcx_2
            int32_t rax_6 = rbx_2
            int32_t rsi_1 = *rdx_3
            
            if (rbx_2 s> rsi_1)
                rax_6 = rsi_1
            
            int32_t rax_7 = memcmp(*(rcx_2 + 8), *(rdx_3 + 8), sx.q(rax_6))
            bool cond:0_1 = rax_7 s>= 0
            
            if (rax_7 == 0)
                cond:0_1 = rbx_2 - rsi_1 s>= 0
            
            if (cond:0_1)
                break
            
            if (rdi_1 s>= sub_142898c70(arg1) - 1)
                goto label_1428ed108
        
    label_1428ed456_1:
        result = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
