// 函数: sub_140961090
// 地址: 0x140961090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t i_1 = -1

if (*(arg1 + 0x60) s> 0)
    int64_t rdi
    int64_t arg_18 = rdi
    int64_t r15_1 = 0
    
    do
        int64_t rax_1 = *(arg1 + 0x58)
        void* j = *(r15_1 + rax_1 + 0x30)
        int64_t rax_2 = sx.q(*(r15_1 + rax_1 + 0x38))
        
        for (void* rsi_3 = rax_2 * 0x50 + j; j != rsi_3; j += 0x50)
            int64_t* rcx = *(j + 8)
            
            if (rcx != 0)
                rax_2 = (*(*rcx + 0x28))(rcx)
            
            if (rcx == 0 || rax_2.b == 0)
                rdi.b = 0
            else
                rdi.b = 1
            
            int64_t* rcx_1 = *(arg2 + 8)
            
            if (rcx_1 != 0)
                rax_2 = (*(*rcx_1 + 0x28))(rcx_1)
            
            if (rcx_1 == 0 || rax_2.b == 0)
                rax_2.b = 0
            else
                rax_2.b = 1
            
            if (rdi.b == rax_2.b)
                if (rdi.b != 0)
                    int64_t* rcx_2 = *(j + 8)
                    rax_2 = (**rcx_2)(rcx_2, *(arg2 + 8))
                
                if (rdi.b == 0 || rax_2.b != 0)
                    i_1 = i
                    break
        
        i += 1
        r15_1 += 0x50
    while (i s< *(arg1 + 0x60))

return zx.q(i_1)
