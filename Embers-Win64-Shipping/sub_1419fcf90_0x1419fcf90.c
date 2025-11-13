// 函数: sub_1419fcf90
// 地址: 0x1419fcf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x20)
        *rbx = &data_143020dc0
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_1405d1550(rbx + 0x18)
        sub_1419948a0(rbx)
        rbx += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
