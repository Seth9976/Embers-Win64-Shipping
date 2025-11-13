// 函数: sub_140f0acf0
// 地址: 0x140f0acf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x678) != 0)
    int64_t* rcx = *(arg1 + 0x670)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        void var_28
        sub_140a96170(&var_28)
        int64_t* rcx_2
        
        if (*(arg1 + 0x678) == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *(arg1 + 0x670)
        
        int32_t result = (*(*rcx_2 + 0x48))(rcx_2, arg2, &var_28)
        int64_t* var_20
        
        if (result.b == 0)
            if (arg3 == 1)
                result = sub_140f15720(arg1, sub_140ac6680(&var_28))
            
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
        
        if (arg3 == 1)
            sub_1405d9400()
            sub_140f15720(arg1, sub_140ac6680(&data_143cd6fd8))
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t rdi_2 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*var_20 + 8))(var_20, zx.q(rdi_2))

return sub_140efc720(arg1 + 0x660, arg2, zx.q(arg3))
