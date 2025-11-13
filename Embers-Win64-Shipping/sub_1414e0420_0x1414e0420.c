// 函数: sub_1414e0420
// 地址: 0x1414e0420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x30)
int64_t rsi

if ((rbx.b & 8) == 0 || arg1[4] u> 1)
    rsi.b = 0
else
    rsi.b = 1

char r8 = sub_1405fba70(*arg1, 3).b
int64_t result
int64_t rdx_4

if ((rbx.b u>> 1 & 1) != 0 || (not.b((rbx u>> 8).b) & 1) != 0 || rsi.b != 0
        || ((rbx u>> 0xe).b & 1) != 0)
    result = 1 << (*arg1).b
    rdx_4 = result & data_143f13cb8
    
    if ((data_143f13cc8 & result) == 0 || ((*(*(arg1 + 0x38) + 0x28) u>> 1).b & 1) == 0)
        result.b = 0
    else
        result.b = 1

if (((rbx.b u>> 1 & 1) != 0 || (not.b((rbx u>> 8).b) & 1) != 0 || rsi.b != 0
        || ((rbx u>> 0xe).b & 1) != 0) && (rdx_4 == 0 || result.b != 0))
    result.b = 1
else
    result.b = 0

if (r8 != 0 && (result.b != 0 || ((rbx u>> 0x1f).b & 1) != 0))
    result.b = 1
    return result

result.b = 0
return result
