// 函数: sub_141c215f0
// 地址: 0x141c215f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    int64_t* rbx_1 = arg2 + 0xa8
    int32_t i
    
    do
        sub_141c213f0(&rbx_1[-0x15], &rdi_1[-0x15] + rbx_1)
        sub_141c212a0(&rbx_1[-0xa], &rdi_1[-0xa] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        rbx_1[1] = *(rdi_1 + rbx_1 + 8)
        rbx_1 = &rbx_1[0x17]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
