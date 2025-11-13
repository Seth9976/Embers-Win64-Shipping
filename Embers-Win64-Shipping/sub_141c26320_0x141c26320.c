// 函数: sub_141c26320
// 地址: 0x141c26320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x112]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x110]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x10e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t i_2 = arg1[0x10d].d
int64_t* rbx = arg1[0x10c]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx = &rbx[5]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = arg1[0x10c]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_3 = arg1[0x10b].d
int64_t* rbx_1 = arg1[0x10a]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_1 = &rbx_1[4]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[0x10a]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_7 = arg1[0x100]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_141c26130(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
