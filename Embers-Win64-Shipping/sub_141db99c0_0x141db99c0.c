// 函数: sub_141db99c0
// 地址: 0x141db99c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x21].d = 0
int64_t rcx = arg1[0x20]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1405df330(&arg1[0x18])
int64_t* rcx_2 = arg1[0x15]

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

sub_141994e10(&arg1[0x10])
int64_t rcx_4 = arg1[0xd]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[8] = &data_142d44da8
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
