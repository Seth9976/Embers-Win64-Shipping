// 函数: sub_1417059c0
// 地址: 0x1417059c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[8]
*arg1 = &data_142fc4af8

if (rdi != 0)
    DeleteCriticalSection(rdi + 0xb0)
    int32_t i_1 = *(rdi + 0xa8)
    int64_t* rbx_1 = *(rdi + 0xa0)
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = *(rdi + 0xa0)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    sub_1408d45e0(rdi + 0x90)
    int64_t rcx_4 = *(rdi + 0x78)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *(rdi + 0x70) = 0
    int64_t rcx_5 = *(rdi + 0x68)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    sub_141735ff0(rdi + 0x28, 0)
    int64_t rcx_7 = *(rdi + 0x48)
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = *(rdi + 0x28)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t rcx_9 = *(rdi + 0x18)
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    j_sub_140a74f90(rdi)

*arg1 = &data_142fc4250
arg1[4] = &data_142fc4220
int64_t rcx_11 = arg1[5]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

*arg1 = &data_142fc4068
int64_t rcx_12 = arg1[1]

if (rcx_12 == 0)
    return &data_142fc4068

return sub_140a74f90(rcx_12) __tailcall
