// 函数: sub_141febf50
// 地址: 0x141febf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
char rax_3

if (arg2 != 0)
    rax_3 = (*(*arg2 + 0x290))(arg2)

void* result
int64_t var_38

if (arg2 == 0 || rax_3 == 0)
    bool cond:0_1 = *(arg1 + 0x14) == 3
    int32_t rdx_2 = 0
    var_38 = 0
    int32_t var_30_1 = 0
    arg1[1].d = 0
    
    if (not(cond:0_1))
        sub_1405dadb0(arg1 + 8, 3)
        rdx_2 = arg1[1].d
    
    arg1[1].d = rdx_2 + 3
    
    if (rdx_2 + 3 s> *(arg1 + 0x14))
        sub_1406105e0(arg1 + 8)
    
    int32_t* rax_5 = *(arg1 + 8)
    int32_t zmm0 = var_38.d
    int32_t zmm1 = var_38:4.d
    *(arg1 + 0x18) = 0x30101
    *arg1 = 0
    *rax_5 = zmm0
    *(*(arg1 + 8) + 4) = zmm1
    result = *(arg1 + 8)
    *(result + 8) = var_30_1
else
    __builtin_memset(&var_38, 0, 0x1d)
    sub_141fd2af0(&var_38, arg2)
    result = sub_141fec070(arg1, &var_38)
    int64_t var_30
    
    if (var_30 != 0)
        result = sub_140a74f90(var_30)
__security_check_cookie(rax_1 ^ &var_58)
return result
