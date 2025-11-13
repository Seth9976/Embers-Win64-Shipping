// 函数: sub_1410956f0
// 地址: 0x1410956f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 0x20)
int64_t r15 = *(arg1 + 0x40)
int64_t r12 = *(arg1 + 0x28)
int64_t r13 = data_1439b53d0
char arg_8
char* var_30 = &arg_8
arg_8 = 0
void*** (* var_38)() = j_sub_140597fc0
void*** result = sub_14081d830(0x78, sub_140a756e0(&var_38, &data_143958018) + 0x10, 1, 0)
void*** result_1 = result

if (result != 0)
    sub_14125c360(result, arg1, *(arg1 + 8), arg2, arg3)
    *result_1 = &data_142f11a30
    result_1[5] = 0
    result_1[0xa] = 0
    result_1[0xc].d = 0
    result_1[6] = r13
    result_1[7].d = 0x11
    result_1[8] = r14
    result_1[9] = r12
    result_1[0xb] = r15
    result_1[0xd].d = 1
    *(result_1 + 0x6c) = 0x101
    int32_t rcx_2 = *(arg1 + 0xf68)
    *(result_1 + 0x74) = 0
    result = result_1
    result_1[0xe].d = rcx_2

return result
