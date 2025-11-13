// 函数: sub_142937d30
// 地址: 0x142937d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xe0)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t result_1 = arg3
int32_t rdi = 0

if (sub_142898c70(arg2) s> 0)
    int32_t rax_4
    
    do
        void** rax_3 = sub_142898ea0(arg2, rdi)
        char var_68[0x50]
        sub_1428cddd0(&var_68, 0x50, *rax_3)
        char var_b8[0x50]
        sub_1428cddd0(&var_b8, 0x50, rax_3[1])
        sub_1428e8b00(&var_68, &var_b8, &result_1)
        rdi += 1
        rax_4 = sub_142898c70(arg2)
    while (rdi s< rax_4)

int64_t result = result_1
__security_check_cookie(rax_1 ^ &var_e8)
return result
