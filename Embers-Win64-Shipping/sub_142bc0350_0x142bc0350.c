// 函数: sub_142bc0350
// 地址: 0x142bc0350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx == 0)
    return 

int64_t rdi_1 = *(rcx + 0x30)

if (arg1[5] != 0)
    sub_142b97020(rcx, &arg1[5])

sub_142b99980(rdi_1, arg1[4])
arg1[4] = 0
__builtin_memset(arg1, 0, 0x30)
