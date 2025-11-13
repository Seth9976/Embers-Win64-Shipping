// 函数: sub_142678960
// 地址: 0x142678960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t result = *(arg1 + 0x4a8)
char result_1 = 0

if (result == 0 || *(result + 8) == 0)
    result.b = 0
else
    void var_98
    sub_1426022c0(&var_98)
    sub_142611af0(&var_98, *(*(arg1 + 0x4a8) + 8), 0, nullptr)
    int128_t zmm1 = *(arg3 + 4) ^ data_142d3f780
    int32_t var_b0 = (*arg3 ^ data_142d3f780).d
    int32_t var_ac_1 = (*(arg3 + 8)).d
    int32_t var_a8_1 = zmm1.d
    int32_t rax_2 = sub_142612180(&var_98, arg2, &var_b0, &result_1)
    char result_2 = result_1
    
    if ((rax_2 u>> 0x1f).b != 0)
        result_2 = 0
    
    result_1 = result_2
    sub_142602500(&var_98)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_d8)
return result
