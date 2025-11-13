// 函数: sub_140b257f0
// 地址: 0x140b257f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b17d90()

if (*(rax + 0xf9) == 0)
    int64_t var_18
    int64_t* rax_1 = sub_140b16fc0(&var_18)
    
    if (rax + 0x48 != rax_1)
        int64_t rcx_2 = *(rax + 0x48)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *(rax + 0x48) = *rax_1
        *rax_1 = 0
        *(rax + 0x50) = rax_1[1].d
        *(rax + 0x54) = *(rax_1 + 0xc)
        rax_1[1] = 0
    
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *(rax + 0xf9) = 1

return rax + 0x48
