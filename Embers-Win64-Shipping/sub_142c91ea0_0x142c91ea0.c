// 函数: sub_142c91ea0
// 地址: 0x142c91ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(arg3)
char* r14 = arg2
void** result = data_143ccb898(zx.q(*(arg1 + 0x18) * 2) + zx.q(*(arg1 + 0x20)) + 0x18)

if (result == 0)
    return result

*result = arg1
result[1] = &result[3]
result[2] = zx.q(*(arg1 + 0x18)) + &result[3]

if (i_2.d u> *(arg1 + 0x1c))
    (*arg1)()
    (*(arg1 + 8))(result[1], r14, zx.q(i_2.d))
    r14 = zx.q(*(arg1 + 0x18)) + result[2]
    (*(arg1 + 0x10))(r14, result[1])
    i_2 = zx.q(*(arg1 + 0x20))

(*arg1)(result[1])
(*arg1)(result[2])
uint64_t i_1 = 0

if (i_2 != 0)
    i_1 = i_2
    uint64_t i
    
    do
        char arg_8 = *r14 ^ 0x36
        (*(arg1 + 8))(result[1], &arg_8, 1)
        char rax_6 = *r14 ^ 0x5c
        r14 = &r14[1]
        arg_8 = rax_6
        (*(arg1 + 8))(result[2], &arg_8, 1)
        i = i_2
        i_2 -= 1
    while (i != 1)

for (; i_1 u< zx.q(*(arg1 + 0x1c)); i_1 += 1)
    (*(arg1 + 8))(result[1], &data_1436bb942, 1)
    (*(arg1 + 8))(result[2], &data_1436bb943, 1)

return result
