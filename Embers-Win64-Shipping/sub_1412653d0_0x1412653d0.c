// 函数: sub_1412653d0
// 地址: 0x1412653d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0x20)
int64_t r14 = *(arg1 + 0xd8)
int64_t r15 = data_1439b53d0
int64_t r12 = data_1439b6728
char arg_8
char* var_30 = &arg_8
arg_8 = 0
void*** (* var_38)() = j_sub_140597fc0
void*** result = sub_14081d830(0x68, sub_140a756e0(&var_38, &data_143958018) + 0x10, 1, 0)
void*** result_1 = result

if (result != 0)
    result_1[2].d = *(arg1 + 8)
    *result_1 = &data_142f52328
    result_1[1] = arg1
    result_1[3] = arg2
    result_1[4] = arg3
    result_1[9] = 0
    result_1[0xa] = 0
    result_1[0xc].d = 0
    result = result_1
    result_1[5] = r12
    result_1[6] = r15
    result_1[7].d = 0x11
    result_1[8] = rbp
    result_1[0xb] = r14

return result
