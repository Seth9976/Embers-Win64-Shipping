// 函数: sub_140f74d00
// 地址: 0x140f74d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
char rbp = arg1[0xf1].b
int64_t var_30
int64_t rsi

if (rbp == 0)
    rsi = var_30
else
    rsi = arg1[0xf0]

uint128_t var_40 = *(arg1 + 0x790)
uint64_t var_48 = arg1[0xf4]
char rdx
uint32_t r8_1
rdx, r8_1 = sub_140f8b290(arg1, arg2, 1)

if (&var_30 != &arg1[0xf0])
    if (arg1[0xf1].b != 0)
        arg1[0xf1].b = 0
    
    if (rbp != 0)
        arg1[0xf0] = rsi
        arg1[0xf1].b = 1

*(arg1 + 0x790) = var_40
arg1[0xf4] = var_48
sub_140f8fc70(arg1, rdx, r8_1)
int64_t* rcx_1 = arg1[9]
int64_t result = (*(*rcx_1 + 8))(rcx_1)
__security_check_cookie(rax_1 ^ &var_68)
return result
