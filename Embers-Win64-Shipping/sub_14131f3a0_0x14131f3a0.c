// 函数: sub_14131f3a0
// 地址: 0x14131f3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_1 = *(arg1 + 0x264) - *(arg1 + 0x25c)
int32_t rdi = arg1[0x4c].d
int32_t rbx = arg1[0x4b].d
int32_t arg_8
int32_t* result = sub_14141fde0(arg1, &arg_8)

if (rdi - rbx == *result && rsi_1 == result[1])
    result.b = 0
    return result

result.b = 1
return result
