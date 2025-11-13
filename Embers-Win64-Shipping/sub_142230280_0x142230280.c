// 函数: sub_142230280
// 地址: 0x142230280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x28)
void* rbp_2 = (sx.q(*(arg1 + 0x30)) << 6) + i
uint128_t result = 0x7f7fffff
int64_t var_48
int32_t var_40
int64_t var_38
int32_t var_30
uint128_t result_1

for (; i != rbp_2; i += 0x40)
    result_1, result = sub_14222f7b0(i, arg2, arg3, &var_48, &var_38)
    
    if (not(result_1.d f>= result.d))
        result = result_1
        *arg4 = var_48
        arg4[1].d = var_40
        *arg5 = var_38
        arg5[1].d = var_30

void* i_1 = *(arg1 + 0x48)

for (void* rbp_5 = sx.q(*(arg1 + 0x50)) * 0x50 + i_1; i_1 != rbp_5; i_1 += 0x50)
    result_1, result = sub_14222fa30(i_1, arg2, arg3, &var_48, &var_38)
    
    if (not(result_1.d f>= result.d))
        result = result_1
        *arg4 = var_48
        arg4[1].d = var_40
        *arg5 = var_38
        arg5[1].d = var_30

void* i_2 = *(arg1 + 0x38)

for (void* rbp_7 = sx.q(*(arg1 + 0x40)) * 0x58 + i_2; i_2 != rbp_7; i_2 += 0x58)
    result_1, result = sub_14222ee70(i_2, arg2, arg3, &var_48, &var_38)
    
    if (not(result_1.d f>= result.d))
        result = result_1
        *arg4 = var_48
        arg4[1].d = var_40
        *arg5 = var_38
        arg5[1].d = var_30

return result
