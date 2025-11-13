// 函数: sub_1423c7510
// 地址: 0x1423c7510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = data_143f5a700

if (i_2 == 0 && data_143f5a710 == i_2)
    return 

if (i_2 != 0)
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
        i = i_2
        i_2 -= 1
    while (i != 1)

bool cond:0_1 = data_143f5a704 == 0x2710
data_143f5a700 = 0

if (not(cond:0_1))
    sub_1405c5660(&data_143f5a6f8, 0x2710)

int32_t i_1 = 0

if (data_143f5a710 s> 0)
    int64_t* rdi = nullptr
    
    do
        int64_t* rcx_5 = *(rdi + data_143f5a708)
        
        if (rcx_5 != 0)
            (**rcx_5)(rcx_5, 1)
        
        i_1 += 1
        rdi = &rdi[1]
    while (i_1 s< data_143f5a710)

bool cond:1_1 = data_143f5a714 == 0x2710
data_143f5a710 = 0

if (not(cond:1_1))
    return sub_1405c5570(&data_143f5a708, 0x2710) __tailcall
