// 函数: sub_141fe76e0
// 地址: 0x141fe76e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
char rax_3

if (arg2 != 0)
    rax_3 = (*(*arg2 + 0x290))(arg2)

uint64_t result

if (arg2 == 0 || rax_3 == 0)
    int32_t rdx_1 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    arg1[2].d = 0
    
    if (*(arg1 + 0x14) != 3)
        sub_1405dadb0(&arg1[1], 3)
        rdx_1 = arg1[2].d
    
    arg1[2].d = rdx_1 + 3
    
    if (rdx_1 + 3 s> *(arg1 + 0x14))
        sub_1406105e0(&arg1[1])
    
    int32_t* rax_5 = arg1[1]
    arg1[3].d = 0x30101
    *arg1 = 0
    *rax_5 = var_28_1.d
    *(arg1[1] + 4) = var_28_1:4.d
    result = arg1[1]
    *(result + 8) = var_20_1
else
    result = sub_141fd2af0(arg1, arg2)

__security_check_cookie(rax_1 ^ &var_48)
return result
