// 函数: sub_1418277c0
// 地址: 0x1418277c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rcx = *(arg2 + 0x40)

if (rcx != 0)
    (**rcx)(rcx, 1)

void* i = *(arg2 + 0x30)

while (i != 0)
    *(arg2 + 0x38) = *(i + 0x18)
    *(i + 0x10) = 0
    *(i + 0x18) = 0
    j_sub_140a74f90(i)
    i = *(arg2 + 0x38)
    *(arg2 + 0x30) = i

int64_t rcx_3 = *(arg2 + 0x20)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

j_sub_140a74f90(arg2)
