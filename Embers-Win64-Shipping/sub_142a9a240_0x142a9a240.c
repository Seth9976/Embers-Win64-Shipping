// 函数: sub_142a9a240
// 地址: 0x142a9a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 0

if (*(arg1 + 0x68) == 0)
    int64_t* rax_2 = j_sub_142a7dd00(0x58)
    int64_t* arg_10 = rax_2
    
    if (rax_2 != 0)
        rax_2 = sub_142a56eb0(rax_2, arg2)
    
    *(arg1 + 0x68) = rax_2
    
    if (rax_2 == 0)
        *arg2 = 7
        return *(arg1 + 0x68)
    
    void* rax_4 = *(arg1 + 0x58)
    
    if (rax_4 != 0)
        int32_t rdi_1 = *(rax_4 + 8)
        int32_t rdi_2 = rdi_1 - 1
        
        if (rdi_1 - 1 s>= 0)
            int32_t temp1_1
            
            do
                int64_t* rax_5 = sub_142ae72d0(*(arg1 + 0x58), rdi_2)
                int64_t r9_1 = *rax_5
                (*(r9_1 + 0x18))(rax_5, *(arg1 + 0x68), arg2, r9_1)
                temp1_1 = rdi_2
                rdi_2 -= 1
            while (temp1_1 - 1 s>= 0)
        
        if (*arg2 s> 0)
            int64_t* rdi_3 = *(arg1 + 0x68)
            
            if (rdi_3 != 0)
                int64_t* rcx_3 = *rdi_3
                
                if (rcx_3 != 0)
                    sub_142a869e0(rcx_3)
                
                sub_142a47920(rdi_3)
            
            *(arg1 + 0x68) = 0

return *(arg1 + 0x68)
