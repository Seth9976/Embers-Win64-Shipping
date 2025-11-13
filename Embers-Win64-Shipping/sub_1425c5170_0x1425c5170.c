// 函数: sub_1425c5170
// 地址: 0x1425c5170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x20)

if (rax == 0)
    return sub_1425c94b0(*(arg1 + 8)) __tailcall

sub_140cea1e0()

if (sub_140cc1670(rax + 0x10, &data_143e1b870) == 0 || *(rax + 0x10) == 0)
    void* rsi_1 = *(arg2 + 0x20)
    sub_140d11d60()
    
    if (sub_140cc1670(rsi_1 + 0x10, &data_143e1c310) == 0 || *(rsi_1 + 0x10) == 0)
        int64_t* rcx_4 = *(arg2 + 0x10)
        int64_t var_18
        
        if (rcx_4 == 0)
            void* rcx_7 = *(arg2 + 0x20)
            
            if (rcx_7 == 0)
                var_18 = 0
                int32_t var_10_2 = 0
                sub_1405947f0(&var_18, 5)
                int32_t rax_5 = var_10_2 + 5
                var_10_2 = rax_5
                
                if (rax_5 s> 0)
                    sub_140594770(&var_18)
                
                UnDecorator::getReferenceType(var_18, u"None", 0xa)
            else
                sub_140b63b70(rcx_7 + 0x28, &var_18)
        else
            int64_t r8_2 = *(arg2 + 8)
            var_18 = 0
            int64_t var_10_1 = 0
            (*(*rcx_4 + 0xa0))(rcx_4, &var_18, r8_2, 0, 0, 0, 0)
        
        int64_t result = sub_1425c9340(*(arg1 + 8), &var_18)
        int64_t rcx_6 = var_18
        
        if (rcx_6 == 0)
            return result
        
        return sub_140a74f90(rcx_6)

return sub_1425c94b0(*(arg1 + 8)) __tailcall
