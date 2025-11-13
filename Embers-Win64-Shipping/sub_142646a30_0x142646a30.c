// 函数: sub_142646a30
// 地址: 0x142646a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x48)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x38)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x28)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x18)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
