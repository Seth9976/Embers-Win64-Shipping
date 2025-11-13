// 函数: sub_14243f830
// 地址: 0x14243f830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == data_143f5e628)
    data_143f5e628 = 0
    z = true
else
    data_143f5e628
    z = false

if (z || *(arg1 + 0x6c) != 0 || *(arg1 + 0x10) == 0)
    uint64_t result
    result.b = 0
    return result

EnterCriticalSection(arg1 + 0x30)
*(arg1 + 0x18) = arg2
uint64_t (* var_38)(int64_t arg1, int32_t arg2, int32_t arg3, void* arg4) = sub_14243dde0
*(arg1 + 0x20) = arg3
int64_t (* var_30_1)(void* arg1, int32_t arg2, int32_t arg3) = sub_14243de40
*(arg1 + 0x24) = 0
int64_t (* var_28_1)() = sub_140594890
uint64_t (* var_20_1)(void* arg1) = sub_1418a39c0
char rax = sub_1424364c0(arg1, &var_38, arg4)
*(arg1 + 0x6c) = rax

if (arg1 != -0x30)
    LeaveCriticalSection(arg1 + 0x30)

return zx.q(rax)
