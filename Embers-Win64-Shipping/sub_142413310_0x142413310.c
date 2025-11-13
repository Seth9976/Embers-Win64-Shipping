// 函数: sub_142413310
// 地址: 0x142413310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = j_sub_140a82f30(0x60)
void*** result_1 = result

if (result == 0)
    result_1 = result
else
    *(result + 8) = 0xffffffff
    *(result + 0xc) = 4
    *result_1 = &data_1433460e0
    result_1[2] = 0
    *(result_1 + 0x44) = 0
    *result_1 = &data_1433472f0
    result_1[9] = 0
    result_1[0xa] = arg1
    result_1[0xb].d = 0
    result_1[3].d = *(arg1 + 0x54)
    *(result_1 + 0x1c) = *(arg1 + 0x58)
    result_1[4].d = *(arg1 + 0x5c)
    *(result_1 + 0x24) = *(arg1 + 0x44)
    *(result_1 + 0x28) = *(arg1 + 0x28)
    arg4 = *(arg1 + 0x38)
    result_1[7] = arg4
    result = zx.q(*(arg1 + 0x40))
    result_1[8].d = result.d

if (arg3 == 0)
    result = sub_141997e80(result_1, arg4)

void*** rcx_1 = *arg2
*arg2 = result_1

if (result_1 != 0)
    *(result_1 + 0x44) += 1

if (rcx_1 != 0)
    int32_t rsi_1 = *(rcx_1 + 0x44)
    *(rcx_1 + 0x44) -= 1
    
    if (rsi_1 == 1)
        result = (**rcx_1)(rcx_1, zx.q(rsi_1))

arg2[0x20].b = 1
return result
