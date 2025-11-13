// 函数: sub_1406b62e0
// 地址: 0x1406b62e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 8); i != 0; i = *(arg1 + 8))
    *(arg1 + 8) = **(arg1 + 8)
    
    if (*(i + 0x10) != 0)
        void* rax_2 = *(i + 0x20)
        void* rcx = i + 0x30
        
        if (rax_2 != 0)
            rcx = rax_2
        
        (*(*rcx + 0x10))(rcx)
    
    j_sub_140a74f90(i)
