// 函数: sub_14060a440
// 地址: 0x14060a440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = arg1[7].d
int64_t* rbx = arg1[6]

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rbx = arg1[6]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_4 = arg1[5].d
int64_t* rbx_1 = arg1[4]

if (i_4 != 0)
    int32_t i_1
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[4]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int32_t i_5 = arg1[3].d
int64_t* rbx_2 = arg1[2]

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_2 = &rbx_2[2]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx_2 = arg1[2]

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

arg1[1] = &IModuleInterface::`vftable'
*arg1 = &data_142d63200

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
