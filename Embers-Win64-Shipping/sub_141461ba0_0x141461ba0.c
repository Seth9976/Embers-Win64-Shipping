// 函数: sub_141461ba0
// 地址: 0x141461ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, arg1[1])
uint32_t result

if (arg1[1] != (temp0 + (temp0 u>> 0x1f)) * 3)
    result = *arg1
    
    if (result u<= 0x10 && test_bit(0x10015, result))
        result.b = 1
        return result

result.b = 0
return result
