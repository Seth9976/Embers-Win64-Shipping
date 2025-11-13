// 函数: sub_141930750
// 地址: 0x141930750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* var_58 = arg2
int128_t* rdi = arg2
sub_1419261c0(arg1 + 0x90, arg2, &var_58)
int128_t* r14 = var_58
int64_t i_1 = 5
int32_t* result
int64_t i

do
    result = nullptr
    
    if (*rdi != 0 || *(rdi + 8) != 0 || rdi[1].d != 0)
        if (*(arg1 + 0xe8) == *(arg1 + 0x114))
        label_141930825:
            char var_50_1 = 0
            int64_t* var_48 = nullptr
            int64_t var_40_1 = 1
            sub_1405a4d70(&var_48)
            int64_t* rbx_1 = var_48
            *rbx_1 = r14
            int32_t var_38
            sub_141930970(arg1 + 0xe0, &var_38)
            int32_t* var_30
            *var_30 = *rdi
            var_30[4] = rdi[1].d
            var_30[6].b = var_50_1
            *(var_30 + 0x20) = rbx_1
            var_30[0xa] = var_40_1.d
            var_30[0xb] = var_40_1:4.d
            int32_t rax_10 = var_38
            var_30[0xc] = 0xffffffff
            result = sub_1419384d0(arg1 + 0xe0, &var_58, *var_30, var_30, rax_10, nullptr)
        else
            void* rcx_1 = *(arg1 + 0x120)
            void* rdx = arg1 + 0x118
            int64_t r9_1 = sx.q(*rdi)
            
            if (rcx_1 != 0)
                rdx = rcx_1
            
            int32_t rax_5 = *(rdx + (((sx.q(*(arg1 + 0x128)) - 1) & r9_1) << 2))
            
            if (rax_5 == 0xffffffff)
                goto label_141930825
            
            int64_t r8_1 = *(arg1 + 0xe0)
            
            while (true)
                int64_t* rdx_1 = sx.q(rax_5) * 0x38
                
                if (*(rdx_1 + r8_1) == *rdi && *(rdx_1 + r8_1 + 8) == *(rdi + 8)
                        && *(rdx_1 + r8_1 + 0x10) == rdi[1].d)
                    break
                
                rax_5 = *(rdx_1 + r8_1 + 0x30)
                
                if (rax_5 == 0xffffffff)
                    goto label_141930825
            
            if (rax_5 == 0xffffffff)
                goto label_141930825
            
            int64_t* rcx_14
            
            if (*(arg1 + 0xe8) == *(arg1 + 0x114))
            label_141930943:
                rcx_14 = nullptr
            else
                void* rax_12 = *(arg1 + 0x120)
                void* rdx_6 = arg1 + 0x118
                
                if (rax_12 != 0)
                    rdx_6 = rax_12
                
                int32_t rax_13 = *(rdx_6 + (((sx.q(*(arg1 + 0x128)) - 1) & r9_1) << 2))
                
                if (rax_13 == 0xffffffff)
                label_141930943_1:
                    rcx_14 = nullptr
                else
                    while (true)
                        rcx_14 = sx.q(rax_13) * 0x38 + r8_1
                        
                        if (*rcx_14 == *rdi && rcx_14[1] == *(rdi + 8) && rcx_14[2].d == rdi[1].d)
                            break
                        
                        rax_13 = rcx_14[6].d
                        
                        if (rax_13 == 0xffffffff)
                            goto label_141930943_2
                    
                    if (rax_13 == 0xffffffff)
                    label_141930943_2:
                        rcx_14 = nullptr
            
            int64_t rsi_2 = sx.q(rcx_14[5].d)
            int32_t rax_14 = (rsi_2 + 1).d
            rcx_14[5].d = rax_14
            
            if (rax_14 s> *(rcx_14 + 0x2c))
                sub_1405a4d70(&rcx_14[4])
            
            result = rcx_14[4]
            *(result + (rsi_2 << 3)) = r14
    
    rdi += 0x14
    i = i_1
    i_1 -= 1
while (i != 1)
return result
