// 函数: sub_141961560
// 地址: 0x141961560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = &arg1[6]
*arg1 = *arg2
__builtin_memset(&arg1[1], 0, 0x14)
sub_1419620f0(rbx)
int32_t rcx_1 = *arg1
arg1[0x6e] = arg2[0x6e]

if (rcx_1 == 0)
    *(arg1 + 4) = *(arg2 + 4)
    arg1[5] = arg2[5]
else if (rcx_1 == 1)
    void* rax_2 = &arg2[6]
    int64_t i_1 = 3
    int64_t i
    
    do
        rbx = &rbx[8]
        int128_t zmm0_1 = *rax_2
        rax_2 += 0x80
        rbx[-8] = zmm0_1
        rbx[-7] = *(rax_2 - 0x70)
        rbx[-6] = *(rax_2 - 0x60)
        rbx[-5] = *(rax_2 - 0x50)
        rbx[-4] = *(rax_2 - 0x40)
        rbx[-3] = *(rax_2 - 0x30)
        rbx[-2] = *(rax_2 - 0x20)
        rbx[-1] = *(rax_2 - 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)
    *rbx = *rax_2
    rbx[1] = *(rax_2 + 0x10)

return arg1
