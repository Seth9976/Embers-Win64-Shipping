// 函数: sub_1428f4ee0
// 地址: 0x1428f4ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rdi = arg2

if (arg2 != 0)
    if (sub_142890300(arg1) != 0)
        return sub_142890900(arg1, rdi)
    
    if (arg1[2].d != 0)
        arg1[2].d = 0
        int32_t rdi_1
        
        if (sub_142890300(arg1) != 0)
            int32_t rax_3 = sub_142890900(arg1, rdi)
            rdi_1 = rax_3
            
            if (rax_3 != 0)
                sub_1428908e0(arg1, 1)
        else if (arg1[2].d == 0)
            int64_t* rax_5
            int64_t rcx_5
            
            if (arg1[1].d == 1)
                rax_5 = *arg1
                rcx_5 = *rax_5
            
            if (arg1[1].d != 1 || rcx_5 u>= rdi)
                int64_t* rdx_3 = *arg1
                int32_t r8_1 = 0
                
                if (*rdx_3 u< rdi)
                    int64_t rcx_6 = 0
                    int64_t* r9_1 = nullptr
                    
                    do
                        int64_t rax_6 = *arg1
                        rcx_6 += 1
                        r8_1 += 1
                        *(r9_1 + rax_6) -= rdi
                        rdi = 1
                        rdx_3 = *arg1
                        r9_1 = rcx_6 << 3
                    while (*(rdx_3 + r9_1) u< 1)
                
                int64_t* rcx_7 = sx.q(r8_1) << 3
                *(rcx_7 + rdx_3) -= rdi
                
                if (*(rcx_7 + *arg1) == 0)
                    int32_t rax_10 = arg1[1].d - 1
                    
                    if (r8_1 == rax_10)
                        arg1[1].d = rax_10
            else
                *rax_5 = rdi - rcx_5
                arg1[2].d = 1
            
            rdi_1 = 1
        else
            arg1[2].d = 0
            rdi_1 = sub_1428f4ee0(arg1, rdi)
            arg1[2].d = 1
        
        if (sub_142890300(arg1) == 0)
            int32_t rbp_1
            rbp_1.b = arg1[2].d == 0
            arg1[2].d = rbp_1
        
        return zx.q(rdi_1)
    
    int32_t rsi_1 = 0
    int64_t r9_2 = 0
    int64_t rdx_5
    int64_t r8_2
    
    do
        r8_2 = rdi
        
        if (rsi_1 s>= arg1[1].d)
            break
        
        int64_t* rcx_9 = *arg1
        rdx_5 = *(rcx_9 + r9_2) + rdi
        *(rcx_9 + r9_2) = rdx_5
        int64_t rax_12
        rax_12.b = rdi u> rdx_5
        rsi_1 += 1
        r9_2 += 8
        rdi = rax_12
    while (r8_2 u> rdx_5)
    
    if (rdi != 0)
        int32_t rdx_6 = arg1[1].d
        
        if (rsi_1 == rdx_6)
            int64_t* result = sub_142890e60(arg1, rdx_6 + 1)
            
            if (result == 0)
                return result
            
            arg1[1].d += 1
            *(*arg1 + (sx.q(rsi_1) << 3)) = rdi

return 1
