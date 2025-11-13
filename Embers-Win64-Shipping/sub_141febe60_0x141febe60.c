// 函数: sub_141febe60
// 地址: 0x141febe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
char rax_3

if (arg2 != 0)
    rax_3 = (*(*arg2 + 0x288))(arg2)

int32_t* result
int64_t var_38

if (arg2 == 0 || rax_3 == 0)
    bool cond:0_1 = *(arg1 + 0x14) == 1
    int32_t rdx_2 = 0
    var_38 = 0
    arg1[1].d = 0
    
    if (not(cond:0_1))
        sub_1405dadb0(arg1 + 8, 1)
        rdx_2 = arg1[1].d
    
    arg1[1].d = rdx_2 + 1
    
    if (rdx_2 + 1 s> *(arg1 + 0x14))
        sub_1406105e0(arg1 + 8)
    
    result = *(arg1 + 8)
    int32_t zmm0 = var_38.d
    *(arg1 + 0x18) = 0x10101
    *arg1 = 0
    *result = zmm0
else
    __builtin_memset(&var_38, 0, 0x1d)
    sub_141fd28b0(&var_38, arg2)
    result = sub_141fec070(arg1, &var_38)
    int64_t var_30
    
    if (var_30 != 0)
        result = sub_140a74f90(var_30)
__security_check_cookie(rax_1 ^ &var_58)
return result
