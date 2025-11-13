// 函数: sub_142c69fe0
// 地址: 0x142c69fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg1[3] == 0)
    return 

int64_t rax_1 = *(arg2 + 0x10)

if (arg2 != *arg1)
    *(*(arg2 + 8) + 0x10) = rax_1
    void* rcx_1 = *(arg2 + 0x10)
    int64_t rax_3 = *(arg2 + 8)
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) = rax_3
    else
        arg1[1] = rax_3
else
    *arg1 = rax_1
    
    if (rax_1 != 0)
        *(*(arg2 + 0x10) + 8) = 0
    else
        arg1[1] = 0

arg1[3] -= 1

if (arg3[3] == 0)
    *arg3 = arg2
    *(arg2 + 8) = 0
    *(*arg3 + 0x10) = 0
    arg3[3] += 1
    arg3[1] = arg2
    return 

*(arg2 + 0x10) = *(arg4 + 0x10)
*(arg2 + 8) = arg4
void* rax = *(arg4 + 0x10)

if (rax != 0)
    *(rax + 8) = arg2
    *(arg4 + 0x10) = arg2
    arg3[3] += 1
    return 

arg3[1] = arg2
*(arg4 + 0x10) = arg2
arg3[3] += 1
