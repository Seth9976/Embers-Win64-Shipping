// 函数: sub_14151fe20
// 地址: 0x14151fe20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
sub_140d30800(arg1, &var_28)
int32_t result_1
int32_t result = result_1
int64_t rcx

if (result s<= 1)
    rcx = var_28
else
    rcx = var_28
    int16_t* rax_1 = rcx + (sx.q(result) << 1)
    
    if (rax_1 == rcx)
    label_14151fe86:
        int16_t* var_38 = nullptr
        int32_t var_30_1 = 0
        int16_t* var_48 = nullptr
        int32_t var_40_1 = 0
        int64_t var_58 = 0
        int32_t var_50_1 = 0
        sub_1405947f0(&var_58, 2)
        int32_t rax_3 = var_50_1 + 2
        var_50_1 = rax_3
        
        if (rax_3 s> 0)
            sub_140594770(&var_58)
        
        int64_t rbx_1 = var_58
        UnDecorator::getReferenceType(rbx_1, &data_142d5a024, 4)
        int32_t var_68_1 = 1
        sub_14060a620(&var_28, &var_58, &var_48, &var_38, 1, 1)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        int16_t* const r8_2 = &data_142d40450
        int16_t* rbx_2 = var_38
        int16_t* const r9_2 = &data_142d40450
        
        if (var_30_1 != 0)
            r9_2 = rbx_2
        
        var_68_1.q = r9_2
        
        if (var_40_1 != 0)
            r8_2 = var_48
        
        sub_140a2e390(&var_38, u"%s/%s.%s", r8_2)
        void var_18
        var_58.o = *sub_140a1dfc0(&var_38, &var_18)
        result = sub_140d2c760(arg1, &var_58)
        int16_t* rcx_9 = var_38
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        if (var_48 != 0)
            result = sub_140a74f90(var_48)
        
        if (rbx_2 != 0)
            result = sub_140a74f90(rbx_2)
        
        rcx = var_28
    else
        while (true)
            rax_1 -= 2
            
            if (*rax_1 == 0x2e)
                break
            
            if (rax_1 == rcx)
                goto label_14151fe86
        
        result = ((rax_1 - rcx) s>> 1).d
        
        if (result == 0xffffffff)
            goto label_14151fe86

if (rcx == 0)
    return result

return sub_140a74f90(rcx)
