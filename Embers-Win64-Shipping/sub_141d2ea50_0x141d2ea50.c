// 函数: sub_141d2ea50
// 地址: 0x141d2ea50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x50
    int32_t i
    
    do
        *(rbx_1 + 8) = 0
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_1409aaf90(rbx_1 - 0x40)
        int64_t* rcx_3 = *(rbx_1 - 0x48)
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        rbx_1 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
