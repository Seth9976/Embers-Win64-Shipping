// 函数: sub_141cdd7c0
// 地址: 0x141cdd7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68

if (arg2 s>= 0 && arg2 s< *(arg1 + 0xa0))
    void* r9_1 = arg1 + 0xa8
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    
    if (test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg2 & 0x1f))
        int32_t var_48[0x8]
        int32_t rbx = sub_141cd0dc0(arg1 + 0x28, &var_48, arg2)[0xa]
        int64_t var_28
        
        if (var_28 != 0)
            sub_140a74f90(var_28)
        
        __security_check_cookie(rax_1 ^ &var_68)
        return zx.q(rbx)

__security_check_cookie(rax_1 ^ &var_68)
return 0
