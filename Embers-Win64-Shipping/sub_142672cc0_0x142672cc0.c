// 函数: sub_142672cc0
// 地址: 0x142672cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143458578
arg1[0x63].d = 0
int64_t rcx = arg1[0x62]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_142679810(&arg1[0x5a], 0)
int64_t rcx_2 = arg1[0x5e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x5a]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x58]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x56]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x54]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x52]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t i_1 = arg1[0x51].d
int64_t* rbx = arg1[0x50]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_8 = *rbx
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x50]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_10 = arg1[0x4e]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140745b20(&arg1[0x4b])
sub_1426451d0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
