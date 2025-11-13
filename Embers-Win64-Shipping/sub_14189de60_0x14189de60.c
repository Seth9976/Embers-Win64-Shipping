// 函数: sub_14189de60
// 地址: 0x14189de60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 8); i != 0; i = *(arg1 + 8))
    *(arg1 + 8) = **(arg1 + 8)
    
    if (i != 0)
        if (*(i + 0x30) != 0)
            void* rax_1 = *(i + 0x40)
            void* rcx = i + 0x50
            
            if (rax_1 != 0)
                rcx = rax_1
            
            (*(*rcx + 0x10))(rcx)
        
        int64_t rcx_1 = *(i + 0x20)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *(i + 0x10)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        j_sub_140a74f90(i)
