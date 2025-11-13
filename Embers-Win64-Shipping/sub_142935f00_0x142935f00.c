// 函数: sub_142935f00
// 地址: 0x142935f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result_1 = arg3
int32_t rbx = 0

if (sub_142898c70(arg2) s> 0)
    int32_t rax_4
    
    do
        char var_68[0x50]
        sub_1428cddd0(&var_68, 0x50, sub_142898ea0(arg2, rbx))
        sub_1428e8b00(nullptr, &var_68, &result_1)
        rbx += 1
        rax_4 = sub_142898c70(arg2)
    while (rbx s< rax_4)

int64_t result = result_1
__security_check_cookie(rax_1 ^ &var_98)
return result
