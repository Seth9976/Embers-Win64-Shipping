// 函数: sub_141e13a90
// 地址: 0x141e13a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x35]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x32]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x30]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t i_1 = arg1[0x2e].d
void*** rcx_3 = arg1[0x2d]

if (i_1 != 0)
    int32_t i
    
    do
        *rcx_3 = &data_142e0b890
        rcx_3 = &rcx_3[8]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_3 = arg1[0x2d]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1408464b0(&arg1[0x2b])
sub_141e13080(&arg1[0x29])
int64_t rcx_6 = arg1[0x27]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x25]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_141ddfa40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
