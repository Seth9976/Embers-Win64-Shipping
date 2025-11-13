// 函数: sub_140ec96b0
// 地址: 0x140ec96b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t var_100 = arg3
void* var_108 = arg1 - 8
int64_t var_f8 = arg4
char var_e8
sub_140e99cf0(&var_108, &var_e8)

if (var_e8 != 0 || *(arg1 + 0x548) == 0)
    sub_140596b00(arg2, &var_e8)
else
    int64_t* rcx_1 = *(arg1 + 0x540)
    
    if (rcx_1 == 0)
        sub_140596b00(arg2, &var_e8)
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        sub_140596b00(arg2, &var_e8)
    else if (*(arg1 + 0x548) == 0)
        int64_t r9_1 = *nullptr
        (*(r9_1 + 0x48))(0, arg2, arg4, r9_1)
    else
        int64_t* rcx_2 = *(arg1 + 0x540)
        int64_t r9 = *rcx_2
        (*(r9 + 0x48))(rcx_2, arg2, arg4, r9)

sub_140597700(&var_e8)
__security_check_cookie(rax_1 ^ &var_128)
return arg2
