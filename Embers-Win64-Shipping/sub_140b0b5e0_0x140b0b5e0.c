// 函数: sub_140b0b5e0
// 地址: 0x140b0b5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        void* rcx = rbx + 0x10
        
        if ((*(rbx + 0xc) | *(rbx + 8) | *(rbx + 4) | *rbx) == 0)
            rcx = nullptr
        
        if (rcx != 0)
            (**rcx)(rcx, 0)
        
        rbx += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
