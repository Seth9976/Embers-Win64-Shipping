// 函数: sub_142b96620
// 地址: 0x142b96620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4] == 0)
    arg1[7] = 0
    arg1[8] = 0
    return 0

int64_t rdx = *arg1
int64_t rax = arg1[6]

if (rdx != 0)
    (*(rax + 0x10))(rax, rdx)

*arg1 = 0
arg1[7] = 0
arg1[8] = 0
return 0
