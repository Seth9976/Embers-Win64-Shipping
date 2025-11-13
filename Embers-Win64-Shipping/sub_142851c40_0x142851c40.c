// 函数: sub_142851c40
// 地址: 0x142851c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*(arg1 + 0x20) != 0)
    int64_t rax_1 = sub_14289a670(*(arg1 + 0x18))
    int64_t* rcx_1 = *(arg1 + 0x20)
    *(arg1 + 0x18) = rax_1
    sub_142899e70(rcx_1)
    *(arg1 + 0x20) = 0

return 1
