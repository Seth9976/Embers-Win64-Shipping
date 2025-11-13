// 函数: sub_141fab050
// 地址: 0x141fab050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0

if (*(arg1 + 0x98) s> 0)
    void* rcx = **(arg1 + 0x90)
    
    if (rcx != 0 && *(rcx + 0x134) != 1)
        int32_t* i = *arg2
        
        for (void* rsi_1 = sx.q(arg2[1].d) * 0x38 + i; i != rsi_1; i = &i[0xe])
            int64_t rax_3 = sub_140d3c6e0(i)
            char rax_4
            
            if (rax_3 != 0)
                int32_t var_18_1 = 2
                rax_4 = sub_1422b1a60(*(i + 8), 0, rax_3, (*(i + 0x18)).d)
            
            if (rax_3 == 0 || rax_4 != 0)
                rdi.b = 1
        
        return zx.q(rdi.b)

return 0
