// 函数: sub_142858dc0
// 地址: 0x142858dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result

if (arg2 s<= 0x4f)
    int64_t rbx_1 = sx.q(arg2)
    char var_68[0x50]
    memcpy(&var_68, arg1, rbx_1.d)
    
    if (rbx_1 u>= 0x50)
        __report_rangecheckfailure()
        noreturn
    
    var_68[rbx_1] = 0
    void* rax_2 = sub_142871f60(&var_68)
    
    if (rax_2 != 0)
        int32_t rax_3 = sub_142898d50(arg3, rax_2)
        
        if (rax_3 != 0)
            result = 1
        else
            sub_1428a5670(0x14, 0x26e, rax_3 + 0x44, "ssl\ssl_ciph.c", 0x511)
            result = 0
    else
        sub_1428a5670(0x14, 0x26e, 0xb9, "ssl\ssl_ciph.c", 0x50c)
        result = 0
else
    sub_1428a5670(0x14, 0x26e, 0xb9, "ssl\ssl_ciph.c", 0x503)
    result = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
