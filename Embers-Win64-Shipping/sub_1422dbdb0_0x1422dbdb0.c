// 函数: sub_1422dbdb0
// 地址: 0x1422dbdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_14306d5a8
*arg1 = &data_14306d5a8
void* rcx = arg1[2]

if (rcx != 0)
    result = arg1[3]
    *(rcx + 8) = result

void*** rcx_1 = arg1[3]

if (rcx_1 != 0)
    result = arg1[2]
    *rcx_1 = result

arg1[2] = 0
arg1[3] = 0
int64_t* rcx_2 = arg1[1]

if (rcx_2 != 0)
    result = (**rcx_2)(rcx_2)
    arg1[1] = 0

return result
