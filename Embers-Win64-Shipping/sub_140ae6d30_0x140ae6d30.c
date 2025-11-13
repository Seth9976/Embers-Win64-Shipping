// 函数: sub_140ae6d30
// 地址: 0x140ae6d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x20
    int32_t i
    
    do
        if (rbx_1[-2] != 0)
            void* rax_1 = *rbx_1
            void* rcx_1 = &rbx_1[2]
            
            if (rax_1 != 0)
                rcx_1 = rax_1
            
            (*(*rcx_1 + 0x10))(rcx_1)
        
        rbx_1 = &rbx_1[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
