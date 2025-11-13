// 函数: sub_14287eea0
// 地址: 0x14287eea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rax = arg1 + 0x30
int64_t i

do
    int64_t rcx = *rax
    __builtin_memset(&rax[-6], 0, 0x30)
    rax[1] = 0
    rax[2] = 0
    *rax = rcx
    rax = &rax[9]
    i = arg2
    arg2 -= 1
while (i != 1)
