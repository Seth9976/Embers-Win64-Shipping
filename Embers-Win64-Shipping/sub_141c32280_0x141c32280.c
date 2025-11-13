// 函数: sub_141c32280
// 地址: 0x141c32280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x40)
int64_t* rbx = *(arg1 + 0x38)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x38)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_2 = *(arg1 + 0x20)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rbx_1 = *(arg1 + 0x18)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp2_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp2_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
