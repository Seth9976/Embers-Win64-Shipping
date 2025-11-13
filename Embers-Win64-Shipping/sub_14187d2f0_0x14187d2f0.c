// 函数: sub_14187d2f0
// 地址: 0x14187d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x10)

if (rdi == 0)
    return 

for (void* i = *(rdi + 8); i != 0; i = *(rdi + 8))
    *(rdi + 8) = **(rdi + 8)
    
    if (i != 0)
        int64_t rcx = *(i + 0x18)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        j_sub_140a74f90(i)

j_sub_140a74f90(rdi)
