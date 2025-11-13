// 函数: sub_141e71ab0
// 地址: 0x141e71ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
void* rcx = *arg1

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x78
    int32_t i
    
    do
        sub_141e858b0(&rbx_1[-0xe], 0)
        
        while (*rbx_1 != 0)
            int64_t* rcx_2 = *rbx_1
            *rbx_1 = *rcx_2
            j_sub_140a74f90(rcx_2)
        
        DeleteCriticalSection(&rbx_1[-6])
        sub_141e719f0(&rbx_1[-0xe])
        rbx_1 = &rbx_1[0x12]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
