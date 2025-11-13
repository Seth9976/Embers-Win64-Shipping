// 函数: sub_140fb53b0
// 地址: 0x140fb53b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x491) == 0
*(arg1 + 0x504) = 0

if (cond:0 || *(arg1 + 0x502) != 0)
    sub_140fc3530(arg1)

if (*(arg1 + 0x550) == 0)
    return 

int64_t* rcx = *(arg1 + 0x548)

if (rcx == 0 || (*(*rcx + 0x28))(rcx) == 0)
    return 

if (*(arg1 + 0x550) == 0)
    jump(*(*nullptr + 0x50))

jump(*(**(arg1 + 0x548) + 0x50))
