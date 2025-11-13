// 函数: sub_140fc3330
// 地址: 0x140fc3330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x80)
void*** result_1 = result

if (result != 0)
    sub_140ddb700(result)
    __builtin_memset(&result_1[4], 0, 0x19)
    result_1[8] = 0
    result_1[9].d = 0
    *result_1 = &data_142ee4fc0
    result_1[0xa] = 0
    result_1[0xb] = 0
    result = result_1
    result_1[0xc].d = arg1
    *(result_1 + 0x64) = 1
    result_1[0xd].d = arg2
    *(result_1 + 0x6c) = 1
    result_1[0xe].d = arg3
    *(result_1 + 0x74) = data_143dbb1f0.d
    result_1[0xf].d = data_143dbb1f0:4.d

return result
