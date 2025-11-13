// 函数: sub_141f6b830
// 地址: 0x141f6b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x430)

if (result != 0)
    int32_t r15_1 = *(result + 0xe0)
    
    if (r15_1 != *(arg1 + 0x578))
        int32_t i_2 = *(arg1 + 0x578)
        void* rbx_1 = *(arg1 + 0x570)
        
        if (i_2 != 0)
            int32_t i
            
            do
                int64_t* rcx = *(rbx_1 + 0x10)
                
                if (rcx != 0)
                    (**rcx)(rcx, 1)
                    *(rbx_1 + 0x10) = 0
                
                void*** rsi_1 = *(rbx_1 + 0x18)
                
                if (rsi_1 != 0)
                    sub_1422b5540(rsi_1)
                    j_sub_140a74f90(rsi_1)
                    *(rbx_1 + 0x18) = 0
                
                if (*(rbx_1 + 0x20) != 0)
                    *(rbx_1 + 0x20) = 0
                
                int64_t rcx_3 = *rbx_1
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                rbx_1 += 0x28
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        *(arg1 + 0x578) = 0
        
        if (*(arg1 + 0x57c) != r15_1)
            sub_1405c5660(arg1 + 0x570, r15_1)
        
        result = *(arg1 + 0x430)
        int32_t i_1 = 0
        
        if (*(result + 0xe0) s> 0)
            do
                int64_t rbx_2 = sx.q(*(arg1 + 0x578))
                int32_t rax_1 = (rbx_2 + 1).d
                *(arg1 + 0x578) = rax_1
                
                if (rax_1 s> *(arg1 + 0x57c))
                    sub_1405c4ec0(arg1 + 0x570)
                
                int64_t rax_3 = *(arg1 + 0x570) + rbx_2 * 0x28
                
                if (rax_3 != 0)
                    __builtin_memset(rax_3, 0, 0x28)
                
                result = *(arg1 + 0x430)
                i_1 += 1
            while (i_1 s< *(result + 0xe0))

return result
