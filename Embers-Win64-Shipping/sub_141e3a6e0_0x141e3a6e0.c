// 函数: sub_141e3a6e0
// 地址: 0x141e3a6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae200(&arg1[0x14])
int64_t rcx_1 = arg1[0x10]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0xe]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xc]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xa]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_1 = arg1[9].d
int64_t* rbx = arg1[8]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[8]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_7 = arg1[6]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
