// 函数: sub_141c82590
// 地址: 0x141c82590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 8); i != 0; i = *(arg1 + 8))
    *(arg1 + 8) = **(arg1 + 8)
    
    if (i != 0)
        if (*(i + 0x10) != 0)
            void* rax_1 = *(i + 0x20)
            void* rcx = i + 0x30
            
            if (rax_1 != 0)
                rcx = rax_1
            
            (*(*rcx + 0x10))(rcx)
        
        j_sub_140a74f90(i)
