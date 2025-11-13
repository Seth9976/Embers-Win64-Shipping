// 函数: sub_142c62ae0
// 地址: 0x142c62ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = arg3
arg3.b = 1
int32_t rdi = 0
int64_t rax = sub_142c65dc0(arg1, nullptr, arg3.b, arg2)

if (*(arg2 + 0x3f2) != 0)
    *rsi = 0
    return 0

int64_t arg_10

if (*(arg2 + 0x3f5) != 0)
    int64_t r14_1 = 0x140
    
    if (*(arg2 + 0x3f7) != 0)
        r14_1 = 0x108
    
    int32_t rax_4
    int512_t zmm2_1
    rax_4, zmm2_1 = sub_142c5a6f0(arg2, *(r14_1 + arg2 + 0x10), arg2[0x2f].d, &arg_10, arg4, rax)
    
    if (rax_4 == 1)
        *rsi = 1
    else if (rax_4 == 0xfffffffe)
        rdi = 0x1c
    else if (arg_10 == 0)
        sub_142c64760(arg1, "Couldn't resolve proxy '%s'", *(r14_1 + arg2 + 0x18), zmm2_1)
        rdi = 5
else
    int64_t r14 = 0xc0
    
    if (*(arg2 + 0x3f3) != 0)
        r14 = 0xe8
    
    int32_t rax_2
    
    if (*(arg2 + 0x3f4) == 0)
        rax_2 = *(arg2 + 0x17c)
    else
        rax_2 = arg2[0x30].d
    
    arg2[0x2f].d = rax_2
    int32_t rax_3
    int512_t zmm2
    rax_3, zmm2 = sub_142c5a6f0(arg2, *(r14 + arg2 + 0x10), rax_2, &arg_10, arg4, rax)
    
    if (rax_3 == 1)
        *rsi = 1
    else if (rax_3 == 0xfffffffe)
        rdi = 0x1c
    else if (arg_10 == 0)
        sub_142c64760(arg1, "Couldn't resolve host '%s'", *(r14 + arg2 + 0x18), zmm2)
        rdi = 6

arg2[0xd] = arg_10
return zx.q(rdi)
