// 函数: sub_1407e6260
// 地址: 0x1407e6260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x1e]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

int64_t rcx_1 = arg1[0x18]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x13]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xe]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1407e4370(&arg1[0xa])
sub_1407e4310(&arg1[8])
sub_1407e4310(&arg1[6])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
