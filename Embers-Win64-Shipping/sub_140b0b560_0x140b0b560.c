// 函数: sub_140b0b560
// 地址: 0x140b0b560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x100)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0x110)

if (i_1 != 0)
    int32_t i
    
    do
        if (*rbx != 0)
            void* rax_1 = *(rbx + 0x10)
            void* rcx_1 = rbx + 0x20
            
            if (rax_1 != 0)
                rcx_1 = rax_1
            
            (*(*rcx_1 + 0x10))(rcx_1)
        
        rbx += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x100)

if (rcx != 0)
    sub_140a74f90(rcx)
