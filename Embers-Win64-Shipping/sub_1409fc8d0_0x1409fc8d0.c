// 函数: sub_1409fc8d0
// 地址: 0x1409fc8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x91]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i_1 = arg1[0x8c].d
void*** rbx = arg1[0x8b]

if (i_1 != 0)
    int32_t i
    
    do
        sub_14222ae60(rbx)
        rbx = &rbx[0x16]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x8b]

if (rbx != 0)
    sub_140a74f90(rbx)

sub_1409fb190(&arg1[0x89])
arg1[0x86] = &data_142e4a8a0
sub_1408db3b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
