// 函数: sub_142857990
// 地址: 0x142857990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*(arg1 + 0x508) != 0 && (*(arg1 + 0x44) & 1) == 0 && sub_142856410(arg1) == 0)
    int32_t rax_2 = sub_1428563f0(arg1)
    
    if (rax_2 == 0)
        sub_142857c30(*(arg1 + 0x738), *(arg1 + 0x508), rax_2 + 1)

int32_t* rdx_1 = **(arg1 + 0x598)

if (rdx_1 != *(arg1 + 8))
    int32_t result = sub_142850a80(arg1, rdx_1)
    
    if (result == 0)
        return result

if (arg2 != 0)
    *(arg2 + 0x114)
    *(arg2 + 0x114) += 1
    *(arg1 + 0x5a8) = *(arg2 + 0x110)

sub_1428574d0(*(arg1 + 0x508))
*(arg1 + 0x508) = arg2
return 1
