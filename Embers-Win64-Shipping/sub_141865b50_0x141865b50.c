// 函数: sub_141865b50
// 地址: 0x141865b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
void* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *(rbx + 0x10)
        
        if (rcx != 0)
            (*(*rcx + 8))(rcx, 1)
        
        int64_t* rcx_1 = *(rbx + 8)
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        int64_t* rcx_2 = *rbx
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        rbx += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx != 0)
    sub_140a74f90(rbx)
