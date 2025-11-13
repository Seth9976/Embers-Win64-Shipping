// 函数: sub_141c4fad0
// 地址: 0x141c4fad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x2b8
    int32_t i
    
    do
        int64_t* rcx_1 = *(rbx_1 + 0x30)
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        int64_t rcx_2 = *(rbx_1 + 0x10)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *(rbx_1 + 8) = 0
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        sub_141c50460(rbx_1 - 0x40)
        int64_t rcx_5 = *(rbx_1 - 0x58)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *(rbx_1 - 0x288)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_1 += 0x2f0
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
