// 函数: sub_1424c3150
// 地址: 0x1424c3150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_68 = 0
int64_t var_60 = 0

if (&var_68 != arg2)
    int32_t rbx_1 = arg2[1].d
    int64_t rdi_1 = *arg2
    var_60.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_68, rbx_1, 0)
        memcpy(var_68, rdi_1, rbx_1 * 2)

int32_t var_50 = arg4.d
int32_t var_44 = arg5[1].d
int64_t var_4c = *arg5
int64_t var_58 = arg3
int32_t var_38 = arg6[1].d
int32_t var_34 = arg7
char var_30 = arg8
char var_2f = arg9
char var_2e = arg10
int64_t var_28 = arg11
int64_t var_40 = *arg6
char var_1c = arg13
int32_t var_20 = arg12.d
int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f64ad8), &var_68)
uint64_t rcx_4 = var_68

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
