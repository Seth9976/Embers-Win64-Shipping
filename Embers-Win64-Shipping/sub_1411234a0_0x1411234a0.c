// 函数: sub_1411234a0
// 地址: 0x1411234a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_1439b54a0
int64_t r14 = *(arg1 + 0x20)
int64_t r15 = *(arg1 + 0x28)
int64_t r12 = *(arg1 + 0x60)
int64_t r13 = data_1439b5e98
char arg_8
char* var_40 = &arg_8
void*** (* var_48)() = j_sub_140597fc0
arg_8 = 0
void*** result = sub_14081d830(0x68, sub_140a756e0(&var_48, &data_143958018) + 0x10, 1, 0)
void*** result_1 = result

if (result != 0)
    sub_14125c360(result, arg1, *(arg1 + 8), arg2, arg3)
    *result_1 = &data_142f218a8
    result_1[5] = rax
    result = result_1
    result_1[6] = r13
    result_1[7].d = arg_8.d
    result_1[8] = r14
    result_1[9] = r15
    result_1[0xa] = 0
    result_1[0xb] = r12
    result_1[0xc].d = 1

return result
