// 函数: sub_1423bc020
// 地址: 0x1423bc020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x15]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

sub_141994e10(&arg1[0x10])
int64_t rcx_2 = arg1[0xd]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[8] = &data_142d44da8
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
