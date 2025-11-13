// 函数: sub_1414ff280
// 地址: 0x1414ff280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i

for (i = sub_1414fe860(arg1 + 0x20, arg2); i == 0xffffffff; i = sub_1414fe860(arg1 + 0x20, arg2))
    int32_t rcx_1 = *(arg1 + 0x690)
    
    if (rcx_1 u>= 0x1000)
        break
    
    if ((*(arg1 + 0x1b) & 1) != 0)
        break
    
    *(arg1 + 0x694) += 1
    *(arg1 + 0x690) = rcx_1 * 2
    *(arg1 + 0x69d) = 1
    sub_141509fd0(arg1 + 0x20)

return i
