// 函数: sub_141a85800
// 地址: 0x141a85800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char* rbx = arg3
char* rsi = arg2

if (arg4 != 0)
    int32_t i
    
    do
        char* rdi_1 = rsi
        rsi = &rsi[0x10]
        int64_t* rcx = *(rdi_1 + 8)
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
            *(rdi_1 + 8) = 0
        
        *rdi_1 = *rbx
        void* rdx = *(rbx + 8)
        
        if (rdx != 0)
            char rax = *rbx
            
            if (rax == 0)
                sub_141a864e0(rdi_1, rdx)
            else if (rax == 1)
                sub_141a86430(rdi_1, rdx)
        
        rbx = &rbx[0x10]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
