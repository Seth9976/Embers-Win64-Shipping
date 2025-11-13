// 函数: sub_141a905f0
// 地址: 0x141a905f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rdi + 0x98
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1[-0xe] = &data_142d6a040
        int64_t rcx_1 = rbx_1[-3]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_1405ae180(&rbx_1[-0xd])
        int64_t rcx_3 = *rdi
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rdi += 0xc0
        rbx_1 = &rbx_1[0x18]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *arg1

if (rdi == 0)
    return 

return sub_140a74f90(rdi) __tailcall
