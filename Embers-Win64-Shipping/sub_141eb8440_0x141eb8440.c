// 函数: sub_141eb8440
// 地址: 0x141eb8440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rbx_1 = arg2 + 0x40d8

for (int64_t i = 0x40; i != 0; )
    rbx_1 -= 0x100
    i -= 1
    int64_t rcx = rbx_1[2]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    sub_140745b20(rbx_1)
    int64_t rcx_2 = rbx_1[-0xe]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t rcx_3 = rbx_1[-0x12]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

j_sub_140a74f90(arg2)
