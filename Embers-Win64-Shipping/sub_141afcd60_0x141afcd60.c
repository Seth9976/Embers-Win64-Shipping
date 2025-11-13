// 函数: sub_141afcd60
// 地址: 0x141afcd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[9].b

if ((rax & 1) == 0)
    *arg1 = &data_142d4ba58
    return &data_142d4ba58

void* rcx

if ((rax & 2) == 0)
    rcx = arg1[3]
else
    rcx = &arg1[3]

arg1[9].b = rax & 0xfe
(**rcx)(rcx, 0)

if ((arg1[9].b & 2) == 0)
    sub_140a74f90(arg1[3])

*arg1 = &data_142d4ba58
return &data_142d4ba58
