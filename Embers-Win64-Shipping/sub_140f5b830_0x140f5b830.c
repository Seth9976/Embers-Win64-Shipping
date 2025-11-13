// 函数: sub_140f5b830
// 地址: 0x140f5b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi_1 = *(arg1 + 0x398) + 0x2b0
int32_t i = 0
int64_t result = (**rdi_1)(rdi_1)

if (result.d s> 0)
    void** rsi_1 = nullptr
    
    do
        int64_t rdx = rdi_1[2]
        result = *arg2
        
        if (*(*(rsi_1 + rdx) + 0x10) == result)
            if (rdi_1[4].b != 0)
                break
            
            int64_t rdi_2 = sx.q(i) << 3
            int64_t* rcx_3 = *(rdi_2 + rdx)
            
            if (rcx_3 != 0)
                (**rcx_3)(rcx_3, 1)
            
            int32_t rcx_5 = rdi_1[3].d
            int32_t rax_5 = rcx_5 - i
            
            if (rax_5 != 1)
                int64_t r9_1 = rdi_1[2]
                memmove(r9_1 + rdi_2, r9_1 + (sx.q(i + 1) << 3), (rax_5 - 1) << 3)
                rcx_5 = rdi_1[3].d
            
            rdi_1[3].d = rcx_5 - 1
            return sub_1405c53d0(&rdi_1[2])
        
        i += 1
        rsi_1 = &rsi_1[1]
        result = (**rdi_1)(rdi_1)
    while (i s< result.d)

return result
