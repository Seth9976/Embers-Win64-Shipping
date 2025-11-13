// 函数: sub_14087b290
// 地址: 0x14087b290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18 = 0
int32_t var_10 = 0
int64_t var_28 = arg2
int32_t r8
int32_t var_20 = r8
char r9
char var_1c = r9

if (&var_18 != arg3)
    int32_t rbx_1 = arg3[1].d
    int64_t rbp_1 = *arg3
    var_10 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_18, rbx_1, 0)
        memcpy(var_18, rbp_1, rbx_1 * 2)

(*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143ce53c8), &var_28)
uint64_t rbx_3 = var_18
uint64_t* result = &var_18

if (arg3 != &var_18)
    int32_t r8_4 = *(arg3 + 0xc)
    arg3[1].d = var_10
    
    if (var_10 != 0 || r8_4 != 0)
        sub_1405a4c70(arg3, var_10, r8_4)
        result = memcpy(*arg3, rbx_3, var_10 * 2)
        rbx_3 = var_18
    else
        *(arg3 + 0xc) = 0

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
