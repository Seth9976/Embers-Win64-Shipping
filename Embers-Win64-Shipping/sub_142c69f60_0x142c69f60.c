// 函数: sub_142c69f60
// 地址: 0x142c69f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = arg3

if (arg1[3] == 0)
    *arg1 = arg4
    arg4[1] = 0
    int64_t* rax = *arg1
    rax[2] = 0
    arg1[3] += 1
    arg1[1] = arg4
    return rax

void* rax_1 = arg2 + 0x10

if (arg2 == 0)
    rax_1 = arg1

arg4[2] = *rax_1
arg4[1] = arg2

if (arg2 == 0)
    int64_t* rax_3 = *arg1
    rax_3[1] = arg4
    arg1[3] += 1
    *arg1 = arg4
    return rax_3

void* rax_4 = *(arg2 + 0x10)

if (rax_4 == 0)
    arg1[1] = arg4
    *(arg2 + 0x10) = arg4
    arg1[3] += 1
    return rax_4

*(rax_4 + 8) = arg4
*(arg2 + 0x10) = arg4
arg1[3] += 1
return rax_4
