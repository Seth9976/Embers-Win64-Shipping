// 函数: sub_142c6a090
// 地址: 0x142c6a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg1[3] == 0)
    return 

int64_t rax_1 = arg2[2]

if (arg2 != *arg1)
    *(arg2[1] + 0x10) = rax_1
    void* rcx_1 = arg2[2]
    int64_t rax_3 = arg2[1]
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) = rax_3
    else
        arg1[1] = rax_3
else
    *arg1 = rax_1
    
    if (rax_1 != 0)
        *(arg2[2] + 8) = 0
    else
        arg1[1] = 0

*arg2
__builtin_memset(arg2, 0, 0x18)
arg1[3] -= 1
int64_t rax = arg1[2]

if (rax != 0)
    jump(rax)
