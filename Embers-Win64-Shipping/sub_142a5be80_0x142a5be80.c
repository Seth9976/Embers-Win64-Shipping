// 函数: sub_142a5be80
// 地址: 0x142a5be80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t quot = arg2

if (arg3 != 0)
    int16_t var_68 = *(*(arg1 + 0x170) + 0x896)
    sub_142a48d70(arg4, &var_68, 0, 1)
    quot = neg.d(quot)

void* rcx_1 = *(arg1 + 0x170)
void var_3e
uint16_t* rdi = &var_3e
int64_t rsi
rsi.b = 0
int64_t rbp
rbp.b = 0

if (*(rcx_1 + 0x899) s> 0)
    while (quot != 0 || rbp.b s< *(rcx_1 + 0x898))
        char rax_3 = rsi.b
        rsi.b += 1
        
        if (rax_3 == 3)
            uint16_t rax_4 = *(rcx_1 + 0x894)
            
            if (rax_4 != 0)
                rdi -= 2
                rsi.b = 1
                *rdi = rax_4
        
        ldiv_t_1 rax_5 = div(quot, 0xa)
        rcx_1 = *(arg1 + 0x170)
        rdi -= 2
        quot = rax_5.quot
        rbp.b += 1
        *rdi = (rax_5 u>> 0x20).w + *(rcx_1 + 0x892)
        
        if (rbp.b s>= *(rcx_1 + 0x899))
            break

void var_58
void* result = sub_142a48d70(arg4, rdi, 0, 0xd - ((rdi - &var_58) s>> 1).d)
__security_check_cookie(rax_1 ^ &var_88)
return result
