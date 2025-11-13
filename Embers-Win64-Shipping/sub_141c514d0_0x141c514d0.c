// 函数: sub_141c514d0
// 地址: 0x141c514d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 0x68); i != 0; i = *(arg1 + 0x68))
    *(arg1 + 0x68) = **(arg1 + 0x68)
    
    if (i != 0)
        if (*(i + 0x10) != 0)
            void* rax_2 = *(i + 0x20)
            void* rcx = i + 0x30
            
            if (rax_2 != 0)
                rcx = rax_2
            
            (*(*rcx + 0x10))(rcx)
        
        j_sub_140a74f90(i)

int64_t rcx_2 = *(arg1 + 0x38)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return DeleteCriticalSection(arg1 + 0x10) __tailcall
