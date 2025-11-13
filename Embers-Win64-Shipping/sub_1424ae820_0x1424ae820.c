// 函数: sub_1424ae820
// 地址: 0x1424ae820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* rbx = arg2

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    int32_t i
    
    do
        *rbx ^= (*rbx ^ *(rdi_1 + rbx)) & 1
        int32_t rcx_3 = ((*rbx ^ *(rdi_1 + rbx)) & 2) ^ *rbx
        *rbx = rcx_3
        int32_t rdx_3 = ((rcx_3 ^ *(rdi_1 + rbx)) & 4) ^ rcx_3
        *rbx = rdx_3
        *rbx = ((rdx_3 ^ *(rdi_1 + rbx)) & 8) ^ rdx_3
        sub_141ae65e0(&rbx[2], rdi_1 + 8 + rbx)
        rbx = &rbx[0x24]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
