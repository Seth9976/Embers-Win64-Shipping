// 函数: sub_1414fb9a0
// 地址: 0x1414fb9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x98)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x88)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x70)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x60)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x50)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x40)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (*(arg1 + 0x20) != 0)
    int64_t rcx_6 = *(arg1 + 0x28)
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0
    j_sub_140a74f90(rcx_6)
    int64_t rcx_7 = *(arg1 + 0x30)
    *(arg1 + 0x28) = &data_14399e5d8
    j_sub_140a74f90(rcx_7)
    *(arg1 + 0x30) = 0

int64_t rcx_8 = *(arg1 + 8)

if (rcx_8 == 0)
    return 

return sub_140a74f90(rcx_8) __tailcall
