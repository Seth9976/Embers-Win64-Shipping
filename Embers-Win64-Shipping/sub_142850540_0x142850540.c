// 函数: sub_142850540
// 地址: 0x142850540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*(arg1 + 0x20) != 0)
    *(arg1 + 0x18) = sub_14289a670(*(arg1 + 0x18))

int64_t* result = sub_142899f50(*(arg1 + 0x18))
int64_t* rcx_2 = *(arg1 + 0x20)
*(arg1 + 0x18) = arg2

if (rcx_2 != 0)
    result = sub_14289a6f0(rcx_2, arg2)
    *(arg1 + 0x18) = result

return result
