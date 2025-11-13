// 函数: sub_140746770
// 地址: 0x140746770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = &arg1[0x59]

for (int64_t i = 4; i != 0; )
    rbx = &rbx[-0x14]
    i -= 1
    sub_1405ae180(&rbx[9])
    int32_t j_1 = rbx[8].d
    void* rax_1 = rbx[7]
    
    if (j_1 != 0)
        char* rax_2 = rax_1 + 4
        int32_t j
        
        do
            if (*rax_2 != 0)
                *rax_2 = 0
            
            rax_2 = &rax_2[8]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rax_1 = rbx[7]
    
    if (rax_1 != 0)
        sub_140a74f90(rax_1)
    
    int64_t rcx_2 = rbx[4]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t rcx_3 = rbx[2]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *rbx = &data_142d4bb80

int64_t rcx_4 = arg1[7]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*arg1 = &data_142d4b9d8
return &data_142d4b9d8
