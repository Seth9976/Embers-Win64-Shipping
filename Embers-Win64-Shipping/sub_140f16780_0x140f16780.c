// 函数: sub_140f16780
// 地址: 0x140f16780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
*(arg1 + 0x390) = arg2

if (arg2 == 0)
    void var_388
    sub_140e93090(&var_388)
    int64_t var_1d8
    *(arg1 + 0x390) = var_1d8
    sub_140e978a0(&var_388)

int64_t* rax_3 = sub_140f46f60(*(arg1 + 0x528))
void* rcx_3 = rax_3[1]
int64_t var_398 = *rax_3
void* var_390 = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

int64_t result = sub_140eea5e0(arg1, &var_398)
__security_check_cookie(rax_1 ^ &var_3b8)
return result
