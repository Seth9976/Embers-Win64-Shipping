// 函数: sub_14278a190
// 地址: 0x14278a190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140a74f90(arg1[0x26])
int64_t rcx_1 = arg1[0x23]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x16] = &data_142d40478
int64_t rcx_2 = arg1[0x12]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xe]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xc]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1423baf20(&arg1[6])
arg1[5] = &data_142d44da8
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
