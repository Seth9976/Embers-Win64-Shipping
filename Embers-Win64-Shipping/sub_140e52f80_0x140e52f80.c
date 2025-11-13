// 函数: sub_140e52f80
// 地址: 0x140e52f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        *(rbx + 0x48) = 0
        int64_t rcx = *(rbx + 0x40)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_14095cf80(rbx, 0)
        int64_t rcx_2 = *(rbx + 0x20)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
