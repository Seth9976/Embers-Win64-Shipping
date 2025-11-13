// 函数: sub_142d0f820
// 地址: 0x142d0f820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = data_143f5a700

if (i_1 != 0)
    int64_t* rbx_2 = data_143f5a6f8 + 0x20
    int32_t i
    
    do
        char* rcx_3 = *rbx_2
        rbx_2[-4] = &data_14333b518
        
        if (rcx_3 != 0 && (*rcx_3 & 1) != 0)
            sub_1423c0390()
            sub_1423c7640(*(*rbx_2 + 0x28), &rbx_2[-4])
            char* rax_1 = *rbx_2
            *rax_1 &= 0xfe
            rcx_3 = *rbx_2
        
        j_sub_140a74f90(rcx_3)
        int64_t rcx_4 = rbx_2[-2]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_2 = &rbx_2[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rcx_5 = data_143f5a6f8

if (rcx_5 == 0)
    return 

return sub_140a74f90(rcx_5) __tailcall
