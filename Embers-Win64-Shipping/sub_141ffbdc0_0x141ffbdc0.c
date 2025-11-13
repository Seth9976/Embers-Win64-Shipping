// 函数: sub_141ffbdc0
// 地址: 0x141ffbdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) == 1)
    void* rax_1 = data_143e29f28
    
    if (rax_1 != 0)
        void* rcx = *(rax_1 + 0x20)
        
        if (rcx != 0)
            void* var_18
            sub_140e149c0(*(rcx + 8), &var_18)
            sub_140da2720(var_18, arg1 + 0x148)
            sub_140da2a10(var_18, arg1)
            int64_t* var_10
            
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    (**var_10)(var_10)
                    int32_t temp1_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_10 + 8))(var_10, 1)

return sub_140cd7d40(arg1) __tailcall
