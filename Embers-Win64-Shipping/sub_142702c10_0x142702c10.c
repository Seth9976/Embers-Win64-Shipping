// 函数: sub_142702c10
// 地址: 0x142702c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2[4].d
uint8_t rax_1 = ((r10 u>> 6).b & 1) * 2
uint8_t rcx = rax_1 | 1

if (((r10 u>> 5).b & 1) == 0)
    rcx = rax_1

if (((r10 u>> 1).b & 1) == 0)
    int32_t rax_4 = arg2[2].d
    int128_t zmm3 = *(arg2 + 0x24)
    int64_t var_18 = arg2[1]
    int32_t var_10 = rax_4
    return sub_142702cb0(arg1, &var_18, rcx, zmm3)

void* result = *arg2

if (result == 0)
    return result

return sub_142702db0(arg1, result, rcx, (*(arg2 + 0x24)).d, 1)
