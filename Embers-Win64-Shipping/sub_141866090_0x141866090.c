// 函数: sub_141866090
// 地址: 0x141866090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 8); i != 0; i = *(arg1 + 8))
    *(arg1 + 8) = **(arg1 + 8)
    
    if (i != 0)
        *(i + 0x50) = 0
        int64_t rcx_1 = *(i + 0x48)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *(i + 0x10) = 0
        
        if (*(i + 0x14) != 0)
            sub_1405a5130(i + 8, 0)
        
        *(i + 0x38) = 0xffffffff
        *(i + 0x3c) = 0
        sub_14059a8e0(i + 0x18, 0)
        int64_t rcx_4 = *(i + 0x28)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(i + 8)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        j_sub_140a74f90(i)
