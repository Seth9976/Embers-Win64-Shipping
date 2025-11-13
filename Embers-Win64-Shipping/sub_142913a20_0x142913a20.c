// 函数: sub_142913a20
// 地址: 0x142913a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rdi = *(arg1 + 0x28)
int64_t r14 = *(*(arg1 + 0x10) + 0x28)
int32_t* rax_3 = sub_142891580(arg2)
int32_t rax_4 = sub_1428916c0(rax_3)
int64_t result

if (*(rdi + 0x20) == 0)
    sub_1428a5670(0x35, 0x72, 0x70, "crypto\sm2\sm2_pmeth.c", 0x10e)
    result = 0
else if (rax_4 s>= 0)
    int32_t var_78
    var_78.q = r14
    void var_68
    
    if (sub_14294c8a0(&var_68, rax_3, *(rdi + 0x10), *(rdi + 0x18), var_78) == 0)
        result = 0
    else
        result = sub_142891c10(arg2, &var_68, sx.q(rax_4))
else
    sub_1428a5670(0x35, 0x72, 0x66, "crypto\sm2\sm2_pmeth.c", 0x113)
    result = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
