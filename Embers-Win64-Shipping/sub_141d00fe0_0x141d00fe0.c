// 函数: sub_141d00fe0
// 地址: 0x141d00fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
int32_t rdx_1 = (arg2 + 0x1f) & 0xffffffe0

if (rdx_1 s> rax || rax s> 0)
    int32_t rax_5 = 0
    
    if (rdx_1 s>= 0)
        rax_5 = rdx_1
    
    *(arg1 + 0xc) = rax_5
    void* rax_6 = sub_141d0cad0(arg1, 0)
    arg1[1].d = 0
    return rax_6

void* rdi = *arg1

if ((rdi.b & 1) != 0)
    rdi = (rdi s>> 1) + arg1

uint32_t rax_3 = (arg1[1].d + 0x1f) u>> 5

if (rax_3 u> 8)
    int64_t rax_4 = memset(rdi, 0, zx.q(rax_3) << 2)
    arg1[1].d = 0
    return rax_4

if (rax_3 == 0)
    arg1[1].d = 0
    return rax_3

__builtin_memset(rdi, 0, zx.q(rax_3) << 2)
arg1[1].d = 0
return 0
