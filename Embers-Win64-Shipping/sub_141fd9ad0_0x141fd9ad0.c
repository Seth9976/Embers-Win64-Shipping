// 函数: sub_141fd9ad0
// 地址: 0x141fd9ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x11])
int32_t i_1 = arg1[0x10].d
int64_t* rbx = arg1[0xf]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0xf]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_3 = arg1[0xd]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[7]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[5]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
