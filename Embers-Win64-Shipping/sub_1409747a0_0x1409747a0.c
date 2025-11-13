// 函数: sub_1409747a0
// 地址: 0x1409747a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) != 0)
    int32_t rax_1 = *(arg1 + 0x68)
    int64_t rsi_1 = sx.q(rax_1 - 1)
    
    if (rax_1 - 1 s>= 0)
        int64_t r14_2 = rsi_1 * 0x18
        int64_t temp1_1
        
        do
            int64_t* i = *(arg1 + 8)
            int64_t* rbx_2 = *(arg1 + 0x60) + r14_2
            
            for (; i != &i[sx.q(*(arg1 + 0x10)) * 2]; i = &i[2])
                if (i[1].d != 0 && *i != 0)
                    if (*(rbx_2 + 0x15) != 0 || *(rbx_2 + 0x14) != 0)
                        int64_t var_18 = *rbx_2
                        void* rax_4 = rbx_2[1]
                        void* var_10_1 = rax_4
                        
                        if (rax_4 != 0)
                            *(rax_4 + 8) += 1
                        
                        sub_140954cd0(arg1 + 8, &var_18, 0)
                    
                    break
            
            int64_t* rcx_4 = *(arg1 + 0x38)
            (*(*rcx_4 + 0x48))(rcx_4, *rbx_2)
            r14_2 -= 0x18
            temp1_1 = rsi_1
            rsi_1 -= 1
        while (temp1_1 - 1 s>= 0)

return sub_14095cca0(arg1 + 0x60, *(arg1 + 0x4c)) __tailcall
