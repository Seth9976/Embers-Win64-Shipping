// 函数: sub_142035070
// 地址: 0x142035070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x4e]

if (rcx == data_143f405d0 || arg1[0x4f] == data_143f40498)
    (*(*arg1 + 0x6c0))(arg1)
    rcx = arg1[0x4e]

if (rcx == data_143f405d8)
    (*(*arg1 + 0x6c8))(arg1)
else if (rcx == data_143f405e0)
    (*(*arg1 + 0x6d0))(arg1)
else if (rcx == data_143f405e8)
    (*(*arg1 + 0x6d8))(arg1)

int64_t result = arg1[0x4e]
arg1[0x4f] = result
return result
