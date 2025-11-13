// 函数: sub_1423075a0
// 地址: 0x1423075a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rdi + 0x38
    int32_t i
    
    do
        *(rbx_1 - 8) = &data_142da8048
        sub_140a1d5c0(rbx_1 + 0x10)
        sub_140a1d5c0(rbx_1)
        int64_t rcx_2 = *(rbx_1 - 0x18)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 - 0x28)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rdi
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rdi += 0x78
        rbx_1 += 0x78
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *arg1

if (rdi == 0)
    return 

return sub_140a74f90(rdi) __tailcall
