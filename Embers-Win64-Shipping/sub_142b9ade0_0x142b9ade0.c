// 函数: sub_142b9ade0
// 地址: 0x142b9ade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg1
int64_t rax = arg1[6]

if (rdx != 0)
    (*(rax + 0x10))(rax, rdx)

arg1[1].d = 0
*arg1 = 0
arg1[5] = 0
return 0
