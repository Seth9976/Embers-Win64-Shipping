// 函数: sub_1412651f0
// 地址: 0x1412651f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_1439b5400
int64_t rbp = *(arg1 + 0x20)
int64_t r14 = *(arg1 + 0xd0)
int64_t r15 = *(arg1 + 0x28)
int32_t r13 = *(arg1 + 0xf70)
int64_t r12 = data_14395da00
char arg_8
char* var_40 = &arg_8
void*** (* var_48)() = j_sub_140597fc0
arg_8 = 0
void*** result = sub_14081d830(0x70, sub_140a756e0(&var_48, &data_143958018) + 0x10, 1, 0)
void*** result_1 = result

if (result != 0)
    result_1[2].d = *(arg1 + 8)
    *result_1 = &data_142f51ea0
    result_1[1] = arg1
    result_1[3] = arg2
    result_1[4] = arg3
    result_1[6] = rax
    result = result_1
    result_1[5] = r12
    result_1[7].d = r13
    result_1[8] = rbp
    result_1[9] = r15
    result_1[0xa] = 0
    result_1[0xb] = r14
    result_1[0xc].d = 0
    result_1[0xd].d = 4
    *(result_1 + 0x6c) = 0
    *(result_1 + 0x6e) = 1

return result
