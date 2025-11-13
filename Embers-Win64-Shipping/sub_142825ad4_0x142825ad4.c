// 函数: sub_142825ad4
// 地址: 0x142825ad4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_14282589c(arg1)
int128_t var_48 = zx.o(0)
char var_58
void* var_38
sub_140593830(&var_58, sub_142825ddc(&var_38))
int64_t* result = sub_14281bb14(*(arg1 + 8), &var_58)
int64_t rdx_3 = var_48:8.q

if (rdx_3 u>= 0x10)
    result = sub_14058ba50(var_58.q, rdx_3 + 1)

int128_t var_48_1 = data_143702ea0
var_58 = 0
int64_t var_20

if (var_20 u>= 0x10)
    result = sub_14058ba50(var_38, var_20 + 1)

__security_check_cookie(rax_1 ^ &var_78)
return result
