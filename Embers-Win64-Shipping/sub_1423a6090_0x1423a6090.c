// 函数: sub_1423a6090
// 地址: 0x1423a6090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x50)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0x58)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_1 = *(rbx + 0x10)
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x50)

if (rcx != 0)
    sub_140a74f90(rcx)
