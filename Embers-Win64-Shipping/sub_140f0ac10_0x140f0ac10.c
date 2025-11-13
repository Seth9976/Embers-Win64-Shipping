// 函数: sub_140f0ac10
// 地址: 0x140f0ac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140926420(arg1 + 0x650)

if (*(arg1 + 0x678) != 0)
    int64_t* rcx_1 = *(arg1 + 0x670)
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x28))(rcx_1)
        
        if (result.b != 0)
            void var_28
            sub_140a96170(&var_28)
            int64_t* rcx_3
            
            if (*(arg1 + 0x678) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(arg1 + 0x670)
            
            void* rax_3
            
            if ((*(*rcx_3 + 0x48))(rcx_3, arg2, &var_28) != 0)
                rax_3 = sub_1405d9400()
            else
                rax_3 = &var_28
            
            result = sub_140f15720(arg1, sub_140ac6680(rax_3))
            int64_t* var_20
            
            if (var_20 != 0)
                result = var_20[1].d
                var_20[1].d -= 1
                
                if (result == 1)
                    result = (**var_20)(var_20)
                    int32_t rdi_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
