// 函数: sub_140cad630
// 地址: 0x140cad630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rdi + 0xb8
    int32_t i
    
    do
        *(rbx_1 + 8) = 0
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_140a71df0(rbx_1 - 0x40, 0)
        int64_t rcx_2 = *(rbx_1 - 0x20)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 - 0x40)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *(rbx_1 - 0x48) = 0
        int64_t rcx_4 = *(rbx_1 - 0x50)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        sub_140a71df0(rbx_1 - 0x90, 0)
        int64_t rcx_6 = *(rbx_1 - 0x70)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rbx_1 - 0x90)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *(rbx_1 - 0xa8)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *rdi
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rdi += 0xc8
        rbx_1 += 0xc8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *arg1

if (rdi == 0)
    return 

return sub_140a74f90(rdi) __tailcall
