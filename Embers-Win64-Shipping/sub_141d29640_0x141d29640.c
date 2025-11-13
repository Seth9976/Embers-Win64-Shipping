// 函数: sub_141d29640
// 地址: 0x141d29640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rdi + 0xa0
    int32_t i
    
    do
        *(rbx_1 + 8) = 0
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        *(rbx_1 - 0x38) = 0
        
        if (*(rbx_1 - 0x34) != 0)
            sub_1408cf3a0(rbx_1 - 0x40, 0)
        
        *(rbx_1 - 0x10) = 0xffffffff
        *(rbx_1 - 0xc) = 0
        sub_14059a8e0(rbx_1 - 0x30, 0)
        int64_t rcx_3 = *(rbx_1 - 0x20)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rbx_1 - 0x40)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_1 - 0x50)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *(rbx_1 - 0x60)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rbx_1 - 0x70)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *(rbx_1 - 0x80)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *(rbx_1 - 0x90)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = *rdi
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rdi += 0xb8
        rbx_1 += 0xb8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *arg1

if (rdi == 0)
    return 

return sub_140a74f90(rdi) __tailcall
