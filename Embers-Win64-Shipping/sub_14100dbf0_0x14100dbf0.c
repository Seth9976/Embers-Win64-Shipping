// 函数: sub_14100dbf0
// 地址: 0x14100dbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x78
    int32_t i
    
    do
        int64_t rcx_1 = *(rbx_1 + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_1405ec8a0(rbx_1)
        int64_t rcx_3 = *(rbx_1 - 0x28)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 += 0xa0
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
