// 函数: sub_141df36a0
// 地址: 0x141df36a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x190)

if (rcx != 0)
    sub_140a74f90(rcx)

if (*(arg1 + 0x184) != 0)
    *(arg1 + 0x184) = 0

if (*(arg1 + 0x17c) != 0)
    *(arg1 + 0x17c) = 0

int32_t i_1 = *(arg1 + 0x120)
void* rcx_1 = *(arg1 + 0x118)

if (i_1 != 0)
    int32_t i
    
    do
        *(rcx_1 + 0x60) = &data_142e0b890
        *rcx_1 = &data_142e0b890
        rcx_1 += 0xb8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_1 = *(arg1 + 0x118)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0xf8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0xe8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0xd8)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0xc8)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0xa0)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x90)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = *(arg1 + 0x40)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140745b20(arg1 + 0x18)
sub_140745b20(arg1 + 8)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
