// 函数: sub_14091b190
// 地址: 0x14091b190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x38)
int64_t* rbx = *(arg1 + 0x30)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x30)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_2 = *(arg1 + 0x18)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rcx_3 = *(arg1 + 0x10)

if (rcx_3 == 0)
    return 

int32_t temp1_1 = *(rcx_3 + 0xc)
*(rcx_3 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rcx_3 + 8))(rcx_3, 1)
