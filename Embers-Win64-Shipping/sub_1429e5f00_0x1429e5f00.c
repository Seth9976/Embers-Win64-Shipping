// 函数: sub_1429e5f00
// 地址: 0x1429e5f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x370) = sub_1429e0bd0(arg3, 8)
int32_t rax_2

if (sub_1429e0b80(arg3, arg4) == 0)
    rax_2 = 0
else
    rax_2 = sub_1429e0c50(arg3, 4)

*(arg1 + 0x374) = rax_2
int32_t rax_4

if (sub_1429e0b80(arg3, arg4) == 0)
    rax_4 = 0
else
    rax_4 = sub_1429e0c50(arg3, 4)

*(arg1 + 0x378) = rax_4
int32_t rcx_7

if (sub_1429e0b80(arg3, arg4) == 0)
    rcx_7 = 0
else
    rcx_7 = sub_1429e0c50(arg3, 4)

bool cond:0 = *(arg1 + 0x370) != 0
int32_t result = *(arg1 + 0x452c)
*(arg1 + 0x4530) = result
*(arg1 + 0x37c) = rcx_7

if (not(cond:0) && *(arg1 + 0x374) == 0 && *(arg1 + 0x378) == 0 && rcx_7 == 0)
    *(arg2 + 0x258) = 1
    return result

*(arg2 + 0x258) = 0
return result
