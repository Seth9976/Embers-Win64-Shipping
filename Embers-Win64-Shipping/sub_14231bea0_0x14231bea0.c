// 函数: sub_14231bea0
// 地址: 0x14231bea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t result = sx.q(*(arg1 + 0x7a0))

if (result.d != 0xffffffff && result.d s< *(arg1 + 0x808))
    void var_68
    int64_t r9_1
    result, r9_1 = sub_142218ad0(*(*(arg1 + 0x800) + (result << 3)), &var_68, 1, 0)
    int32_t i = 0
    
    if (*(arg1 + 0x808) s> 0)
        int64_t rdi_1 = 0
        
        do
            r9_1.b = 1
            result, r9_1 = sub_142221460(*(*(arg1 + 0x800) + rdi_1), arg2, arg3)
            i += 1
            rdi_1 += 8
        while (i s< *(arg1 + 0x808))

__security_check_cookie(rax_1 ^ &var_88)
return result
