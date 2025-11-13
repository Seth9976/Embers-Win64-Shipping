// 函数: sub_141914a90
// 地址: 0x141914a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void var_b8
sub_1408f2b40(&var_b8, arg2)
int64_t rax_2 = data_143f002f0

if (rax_2 != 0 && data_143eff5c4 != 0)
    int64_t r8 = -1
    char* var_30
    
    do
        r8 += 1
    while (var_30[r8] != 0)
    
    rax_2(0x824a, 1, r8)

int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

int64_t result = (*(*(arg1 + 0x15be0) + 0x10))(arg1 + 0x15be0, arg2, zx.q(arg3))
__security_check_cookie(rax_1 ^ &var_d8)
return result
