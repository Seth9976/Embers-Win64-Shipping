// 函数: sub_1425bf590
// 地址: 0x1425bf590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434433a8
int32_t i_2 = arg1[0x11].d
int64_t* rbx = arg1[0x10]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = arg1[0x10]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_3 = arg1[0xf].d
int64_t* rbx_1 = arg1[0xe]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[0xe]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_4 = arg1[0xc]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xa]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[8]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[6]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[4]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[2]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

*arg1 = &data_142e61298

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
