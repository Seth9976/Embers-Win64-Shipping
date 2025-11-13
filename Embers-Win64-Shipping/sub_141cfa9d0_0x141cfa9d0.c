// 函数: sub_141cfa9d0
// 地址: 0x141cfa9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0
uint64_t result =
    sub_140b02330(*(arg1 + 0x24), *(arg1 + 8), *(arg1 + 0x10), *(arg1 + 0x18), *(arg1 + 0x20), 0)
int64_t rcx_1 = *(arg1 + 0x30)

if (rcx_1 != 0)
    result = memcpy(rcx_1, *(arg1 + 0x38) + *(arg1 + 8), (*(arg1 + 0x40)).d)

*(arg1 + 0x58) -= 1
int64_t* rcx_2 = *(arg1 + 0x60)

if (rcx_2 == 0)
    return result

jump(*(*rcx_2 + 0x10))
