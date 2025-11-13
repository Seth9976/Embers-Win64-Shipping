// 函数: sub_141d001c0
// 地址: 0x141d001c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x18)
int32_t rdx_2 = (*(arg1 + 0x20) + 0xf) & 0xfffffff0
int128_t var_18 = *(arg1 + 0x48)
sub_141cff040(rcx, rdx_2, &var_18)
int32_t var_28 = 0
uint64_t result =
    sub_140b02330(*(arg1 + 0x24), *(arg1 + 8), *(arg1 + 0x10), *(arg1 + 0x18), *(arg1 + 0x20), 0)
int64_t rcx_2 = *(arg1 + 0x30)

if (rcx_2 != 0)
    result = memcpy(rcx_2, *(arg1 + 0x38) + *(arg1 + 8), (*(arg1 + 0x40)).d)

*(arg1 + 0x58) -= 1
return result
