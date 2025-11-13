// 函数: sub_1410ea190
// 地址: 0x1410ea190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[0xc].w = 0
*(arg1 + 0x64) = arg4
int64_t* rax = sub_14139bef0(arg2)
arg1[1].d = 0x1010101
__builtin_memset(&arg1[3], 0, 0x48)
*(arg1 + 0xc) = 0x1010101
arg1[2].b = 1
void* rax_1 = rax[0x14]

if (rax_1 != 0)
    arg1[8] = *(rax_1 + 8)

void* rax_3 = rax[0x15]

if (rax_3 != 0)
    arg1[9] = *(rax_3 + 8)

void* rax_5 = rax[0x16]

if (rax_5 != 0)
    arg1[0xa] = *(rax_5 + 8)

if (sub_1410a09e0(arg3) == 0 && sub_1419a4830(arg3) == 0)
    int32_t rax_9
    rax_9.b = arg5 - 1 u<= 1
    arg1[0xc].b = rax_9.b
    rax_9.b = arg5 == 2
    *(arg1 + 0x61) = rax_9.b

return arg1
