// 函数: sub_140846cc0
// 地址: 0x140846cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[2]
int32_t i_1 = arg1[3].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x28
    int32_t i
    
    do
        int64_t rcx_1 = *(rbx_1 + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 - 0x10)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rbx_1 - 0x20)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[2]

if (rcx != 0)
    sub_140a74f90(rcx)

return sub_140745ac0(arg1) __tailcall
