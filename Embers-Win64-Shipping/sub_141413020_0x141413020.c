// 函数: sub_141413020
// 地址: 0x141413020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)

if (rcx != 0)
    (*(*rcx + 0x38))(rcx)

void* rcx_2 = *(arg1 + 0x20)
void* rbx = arg1
int32_t i_1 = *(arg1 + 0x28)

if (rcx_2 != 0)
    rbx = rcx_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1)
        
        rbx += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_2 = *(arg1 + 0x20)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
