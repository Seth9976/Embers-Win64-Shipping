// 函数: sub_141f04c40
// 地址: 0x141f04c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x50
    int32_t i
    
    do
        sub_140596d80(rbx_1 + 0x10)
        *(rbx_1 + 8) = 0
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        sub_141f10e50(rbx_1 - 0x40, 0)
        int64_t rcx_4 = *(rbx_1 - 0x20)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_1 - 0x40)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_1 += 0x70
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
