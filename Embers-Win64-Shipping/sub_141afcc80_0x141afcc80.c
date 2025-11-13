// 函数: sub_141afcc80
// 地址: 0x141afcc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[0xd].b

if ((rax & 1) == 0)
    *arg1 = &data_142d4ba58
    return &data_142d4ba58

void* rcx

if ((rax & 2) == 0)
    rcx = arg1[3]
else
    rcx = &arg1[3]

arg1[0xd].b = rax & 0xfe
(**rcx)(rcx, 0)

if ((arg1[0xd].b & 2) == 0)
    sub_140a74f90(arg1[3])

*arg1 = &data_142d4ba58
return &data_142d4ba58
