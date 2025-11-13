// 函数: sub_140b0bc20
// 地址: 0x140b0bc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e74790
int32_t i_3 = arg1[0x11].d
int64_t* rbx = arg1[0x10]

if (i_3 != 0)
    int32_t i
    
    do
        sub_140b0de30(rbx, *rbx)
        rbx = &rbx[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rbx = arg1[0x10]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rbx_1 = arg1[0xf]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_4 = arg1[0xc]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t result = DeleteCriticalSection(&arg1[7])
int32_t i_4 = arg1[6].d
int64_t* rbx_2 = arg1[5]

if (i_4 != 0)
    int32_t i_1
    
    do
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rbx_2 = arg1[5]

if (rbx_2 != 0)
    result = sub_140a74f90(rbx_2)

int32_t i_5 = arg1[4].d
int64_t* rbx_3 = arg1[3]

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t rcx_8 = *rbx_3
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        rbx_3 = &rbx_3[2]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx_3 = arg1[3]

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
