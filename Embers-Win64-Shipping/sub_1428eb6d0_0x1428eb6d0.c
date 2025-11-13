// 函数: sub_1428eb6d0
// 地址: 0x1428eb6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0 && arg1 != arg2)
    if (arg1 == 0)
        return 0
    
    int32_t rbx_1 = 0
    int32_t r14_1 = 0
    
    if (sub_142898c70(arg2) s> 0)
        while (true)
            int32_t* rax_2 = sub_142898ea0(arg2, r14_1)
            
            if (rax_2 == 0)
                return 0
            
            int32_t rdx_1 = *rax_2
            int32_t* rbp_1
            int32_t* r15_1
            
            if (rdx_1 == 0)
                r15_1 = *(rax_2 + 8)
                rbp_1 = r15_1
            else
                if (rdx_1 != 1)
                    return 0
                
                int64_t* rax_3 = *(rax_2 + 8)
                r15_1 = *rax_3
                rbp_1 = rax_3[1]
            
            int32_t* rdi_1
            
            while (true)
                if (rbx_1 s>= sub_142898c70(arg1))
                    return 0
                
                int32_t* rax_5 = sub_142898ea0(arg1, rbx_1)
                
                if (rax_5 == 0)
                    return 0
                
                int32_t rdx_3 = *rax_5
                int32_t* rcx_5
                
                if (rdx_3 == 0)
                    rdi_1 = *(rax_5 + 8)
                    rcx_5 = rdi_1
                else
                    if (rdx_3 != 1)
                        return 0
                    
                    int64_t* rcx_4 = *(rax_5 + 8)
                    rdi_1 = *rcx_4
                    rcx_5 = rcx_4[1]
                
                if (sub_1428e47f0(rcx_5, rbp_1) s>= 0)
                    break
                
                rbx_1 += 1
            
            if (sub_1428e47f0(rdi_1, r15_1) s> 0)
                return 0
            
            r14_1 += 1
            
            if (r14_1 s>= sub_142898c70(arg2))
                return 1

return 1
