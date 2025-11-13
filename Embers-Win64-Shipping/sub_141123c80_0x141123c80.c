// 函数: sub_141123c80
// 地址: 0x141123c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x48)

if (*(rdi + 0x11) != 0)
    if (data_143f0f1c7 != 0)
        int64_t* rcx = data_143f0f180
        (*(*rcx + 0x628))(rcx, rdi)
    
    *(rdi + 0x11) = 0

void* rdi_1 = *(arg1 + 0x68)

if (*(rdi_1 + 0x11) != 0)
    if (data_143f0f1c7 != 0)
        int64_t* rcx_1 = data_143f0f180
        (*(*rcx_1 + 0x628))(rcx_1, rdi_1)
    
    *(rdi_1 + 0x11) = 0

if (*arg1 == 0)
    return 

void* rbx_1 = *(arg1 + 0x88)

if (*(rbx_1 + 0x11) == 0)
    return 

if (data_143f0f1c7 != 0)
    int64_t* rcx_2 = data_143f0f180
    (*(*rcx_2 + 0x628))(rcx_2, rbx_1)

*(rbx_1 + 0x11) = 0
