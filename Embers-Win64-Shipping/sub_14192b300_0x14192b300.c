// 函数: sub_14192b300
// 地址: 0x14192b300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x48
    int32_t i
    
    do
        *(rbx_1 + 8) = 0
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *(rbx_1 - 0x38) = 0
        
        if (*(rbx_1 - 0x34) != 0)
            sub_1405a5410(rbx_1 - 0x40, 0)
        
        *(rbx_1 - 0x10) = 0xffffffff
        *(rbx_1 - 0xc) = 0
        sub_14059a8e0(rbx_1 - 0x30, 0)
        int64_t rcx_4 = *(rbx_1 - 0x20)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_1 - 0x40)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
