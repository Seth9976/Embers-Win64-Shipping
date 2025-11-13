// 函数: sub_1414fbb00
// 地址: 0x1414fbb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) != 0)
    *(arg1 + 0x4c) = 0
    *(arg1 + 0x50) = 0
    j_sub_140a74f90(*(arg1 + 0x58))
    int64_t rcx_1 = *(arg1 + 0x60)
    *(arg1 + 0x58) = &data_14399e5d8
    j_sub_140a74f90(rcx_1)
    *(arg1 + 0x60) = 0

int64_t rcx_2 = *(arg1 + 0x38)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x28)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x18)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 8)

if (rcx_5 == 0)
    return 

return sub_140a74f90(rcx_5) __tailcall
