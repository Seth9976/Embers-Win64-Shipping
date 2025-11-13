// 函数: sub_1425c7690
// 地址: 0x1425c7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *arg2
*arg2 = 0
int32_t result
int64_t zmm0
result, zmm0 = sub_1425c6430(arg1, arg2, arg3)

if (result.b == 0)
    result.b = 0
else
    result = *arg2
    
    if (result == 3)
        result.b = 1
    else
        int64_t var_18
        wchar16 const* const rdx_3
        
        if (rsi == 2)
        label_1425c772a:
            uint32_t r8_1
            
            if (*arg2 != 7)
                var_18 = 0
                int32_t var_10_2 = 0
                sub_1405947f0(&var_18, 0x26)
                int32_t rax_1 = var_10_2 + 0x26
                var_10_2 = rax_1
                
                if (rax_1 s> 0)
                    sub_140594770(&var_18)
                
                r8_1 = 0x4c
                rdx_3 = u"String token expected, but not found."
                goto label_1425c77cd
            
            int64_t zmm0_1 = sub_140597df0(arg1 + 0x28, arg1 + 0x48)
            *arg2 = 0
            int64_t zmm0_2
            result, zmm0_2 = sub_1425c6430(arg1, arg2, zmm0_1)
            
            if (result.b == 0)
                result.b = 0
            else if (*arg2 == 6)
                *arg2 = 0
                
                if (sub_1425c6430(arg1, arg2, zmm0_2).b == 0)
                    result.b = 0
                else
                    result.b = 1
            else
                var_18 = 0
                int32_t var_10_3 = 0
                sub_1405947f0(&var_18, 0x25)
                int32_t rax_2 = var_10_3 + 0x25
                var_10_3 = rax_2
                
                if (rax_2 s> 0)
                    sub_140594770(&var_18)
                
                rdx_3 = u"Colon token expected, but not found."
            label_1425c77c3:
                r8_1 = 0x4a
            label_1425c77cd:
                UnDecorator::getReferenceType(var_18, rdx_3, r8_1)
                sub_140e88b20(arg1, &var_18)
                int64_t rcx_11 = var_18
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                result.b = 0
        else
            if (result != 1)
                var_18 = 0
                int32_t var_10_1 = 0
                sub_1405947f0(&var_18, 0x25)
                int32_t rax = var_10_1 + 0x25
                var_10_1 = rax
                
                if (rax s> 0)
                    sub_140594770(&var_18)
                
                rdx_3 = u"Comma token expected, but not found."
                goto label_1425c77c3
            
            *arg2 = 0
            
            if (sub_1425c6430(arg1, arg2, zmm0).b != 0)
                goto label_1425c772a
            
            result.b = 0

return result
