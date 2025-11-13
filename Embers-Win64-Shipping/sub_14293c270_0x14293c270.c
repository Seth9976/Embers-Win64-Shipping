// 函数: sub_14293c270
// 地址: 0x14293c270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0x20
__chkstk(0x20)

if (*arg1 s< 4)
    int64_t* rdi_1 = *(arg1 + 8)
    
    if (rdi_1 != 0)
        int32_t rsi_1 = 0
        int32_t* rax_2
        
        if (sub_142898c70(*rdi_1) s> 0)
            int32_t rax_3
            
            do
                rax_2 = sub_142898ea0(*rdi_1, rsi_1)
                int32_t rcx_2 = *rax_2
                
                if (rcx_2 == 4)
                label_14293c399:
                    *arg1 = 4
                    return rax_2
                
                if (rcx_2 == 3 && *arg1 s< rcx_2)
                    *arg1 = rcx_2
                
                rsi_1 += 1
                rax_3 = sub_142898c70(*rdi_1)
            while (rsi_1 s< rax_3)
        
        int32_t rsi_2 = 0
        rax = sub_142898c70(rdi_1[1])
        
        if (rax s> 0)
            do
                rax_2 = sub_142898ea0(rdi_1[1], rsi_2)
                
                if (*rax_2 == 1)
                    goto label_14293c399
                
                rsi_2 += 1
                rax = sub_142898c70(rdi_1[1])
            while (rsi_2 s< rax)
    
    if (*arg1 s< 3)
        int32_t rdi_2 = 0
        rax = sub_142898c70(*(arg1 + 0x10))
        
        if (rax s> 0)
            do
                int32_t* rax_4 = sub_142898ea0(*(arg1 + 0x10), rdi_2)
                int32_t rdx_4 = *rax_4
                
                if (rdx_4 - 3 u<= 1)
                    *arg1 = 3
                    return rax_4
                
                if (rdx_4 != 0 || **(rax_4 + 8) != rdx_4)
                    *arg1 = 2
                
                rdi_2 += 1
                rax = sub_142898c70(*(arg1 + 0x10))
            while (rdi_2 s< rax)
        
        if (*(arg1 + 8) != 0 || *(arg1 + 0x20) != 0)
            *arg1 = 2
        else if (*arg1 != 2)
            *arg1 = 0

return rax
