// 函数: sub_140b2fad0
// 地址: 0x140b2fad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 8); i != 0; i = *(arg1 + 8))
    *(arg1 + 8) = **(arg1 + 8)
    
    if (i != 0)
        *(i + 0x50) = 0
        int64_t rcx = *(i + 0x48)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_1405e1b50(i + 8, 0)
        int64_t rcx_2 = *(i + 0x28)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(i + 8)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        j_sub_140a74f90(i)
