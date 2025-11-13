// 函数: sub_142bf7e30
// 地址: 0x142bf7e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t var_38
int32_t* var_48 = &var_38
var_38 = 0
int16_t var_30
int32_t rax_2 = sub_142b69d20(arg5, arg2, &var_30, 4, var_48)
uint64_t result

if (var_38 s> 0 || rax_2 s< 0)
    result = 0
else
    int32_t rax_3 = sub_142a8bb50(&var_30, rax_2)
    int16_t var_2e
    
    if (rax_3 != 1)
        if (rax_3 == 2)
            uint32_t rcx_7 = zx.d(var_30)
            int32_t rdx_3 = rax_3 - 1
            *arg3 = rcx_7
            
            if ((rcx_7 & 0xfffffc00) == 0xd800)
                rdx_3 = 2
                *arg3 = (rcx_7 << 0xa) + zx.d(var_2e) - 0x35fdc00
            
            uint32_t r8_3 = zx.d((&var_30)[zx.q(rdx_3)])
            *arg4 = r8_3
            
            if ((r8_3 & 0xfffffc00) == 0xd800)
                *arg4 = zx.d((&var_30)[zx.q(rdx_3 + 1)]) - 0x35fdc00 + (r8_3 << 0xa)
        
        result = 1
    else
        uint32_t r8_1 = zx.d(var_30)
        *arg3 = r8_1
        
        if ((r8_1 & 0xfffff800) != 0xd800)
            goto label_142bf7ef5
        
        int32_t result_1
        
        if (test_bit(r8_1, 0xa))
            int16_t var_32
            *arg3 = r8_1 - 0x35fdc00 + (zx.d(var_32) << 0xa)
        label_142bf7ef5:
            *arg4 = 0
            result_1.b = *arg3 != arg2
            result = zx.q(result_1)
        else
            *arg3 = zx.d(var_2e) - 0x35fdc00 + (r8_1 << 0xa)
            *arg4 = 0
            result_1.b = *arg3 != arg2
            result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_68)
return result
