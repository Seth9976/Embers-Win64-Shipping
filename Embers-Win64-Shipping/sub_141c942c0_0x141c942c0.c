// 函数: sub_141c942c0
// 地址: 0x141c942c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14320fe38
int32_t i_4 = arg1[0x10].d
int64_t* rbx = arg1[0xf]

if (i_4 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[3]
        i = i_4
        i_4 -= 1
    while (i != 1)
    rbx = arg1[0xf]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_5 = arg1[0xe].d
int64_t* rbx_1 = arg1[0xd]

if (i_5 != 0)
    int32_t i_1
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[3]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[0xd]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int32_t i_6 = arg1[0xc].d
int64_t* rbx_2 = arg1[0xb]

if (i_6 != 0)
    int32_t i_2
    
    do
        int64_t rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_2 = &rbx_2[2]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    rbx_2 = arg1[0xb]

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int32_t i_7 = arg1[0xa].d
int64_t* rbx_3 = arg1[9]

if (i_7 != 0)
    int32_t i_3
    
    do
        int64_t rcx_6 = *rbx_3
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_3 = &rbx_3[2]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    rbx_3 = arg1[9]

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t rcx_8 = arg1[6]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

DeleteCriticalSection(&arg1[1])
*arg1 = &data_142d565e8
return &data_142d565e8
