// 函数: sub_140f8de20
// 地址: 0x140f8de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_478
int64_t rax_1 = __security_cookie ^ &var_478

if (arg2 == 0)
    void var_458
    sub_14068d9d0(&var_458)
    void* var_288
    sub_140de1940(&arg1[0x5c], var_288)
    sub_1406913d0(&var_458)
else
    sub_140de1940(&arg1[0x5c], arg2)

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

int64_t result = sub_140e19ef0(arg1, 1)
__security_check_cookie(rax_1 ^ &var_478)
return result
