// 函数: sub_1426cc6c0
// 地址: 0x1426cc6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae080(&arg1[0x1b])
int64_t rcx_1 = arg1[0x19]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x17]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t i_1 = arg1[0x16].d
void* rcx_3 = arg1[0x15]

if (i_1 != 0)
    int64_t* rdi_1 = rcx_3 + 8
    int32_t i
    
    do
        sub_1426ca9a0(rdi_1)
        rdi_1 = &rdi_1[0x2f]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_3 = arg1[0x15]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x14].d = 0
int64_t rcx_5 = arg1[0x13]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140dded10(&arg1[0xb])
sub_140596d80(&arg1[8])
sub_140b0be90(&arg1[7])
sub_1426a7a70(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
