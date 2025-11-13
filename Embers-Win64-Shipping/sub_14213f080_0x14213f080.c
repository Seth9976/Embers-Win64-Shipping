// 函数: sub_14213f080
// 地址: 0x14213f080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de542c == 0)
    *(arg1 + 0x68) = 0
    *(arg1 + 0x58) = 0
    return 0

int64_t* rcx = *(arg1 + 0x98)

if (rcx == 0)
    *(arg1 + 0x68) = 0
    *(arg1 + 0x58) = 0
    return 0

if ((rcx[1].d & 0x18000) == 0)
    (*(*rcx + 0x3f0))(rcx, arg1)

*(arg1 + 0x98) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x58) = 0
return 0
