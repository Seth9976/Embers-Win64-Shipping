// 函数: sub_142c78ae0
// 地址: 0x142c78ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int32_t result_1

if ((*(arg1[0x87] + 0x80) & 1) == 0 || *(arg1 + 0x70c) != 0)
label_142c78b39:
    int32_t result_2
    result_2, arg3 = sub_142c8f150(&arg1[0xd3], 0, arg3)
    result_1 = result_2
    result_2.b = arg1[0xe1].d == 0
    *arg2 = result_2.b
    result = result_1
else
    result, arg3 = sub_142c5b310(arg1, 0, arg1 + 0x70c, arg3)
    result_1 = result
    
    if (result == 0 && *(arg1 + 0x70c) != result.b)
        goto label_142c78b39

if (result_1 != 0 || *arg2 == result_1.b)
    return result

if (**(*arg1 + 0x250) != 0)
    sub_142c68d40(arg1, 0xffffffff, -1, 0, arg3, 0, 0xffffffff, nullptr)

return 0
