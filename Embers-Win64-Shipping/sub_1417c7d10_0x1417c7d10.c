// 函数: sub_1417c7d10
// 地址: 0x1417c7d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = j_sub_140a82f30(0x1000)
int32_t* rsi = rax
int32_t rbx = -1

if (rax == 0)
    rsi = nullptr
else
    int64_t i_1 = 0x40
    int64_t i
    
    do
        __builtin_memset(rax, 0xff, 0x40)
        rax = &rax[0x10]
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t rdi = zx.q(arg2)
int32_t rbp_1 = arg1[1].d << 0xa
*rsi = rbp_1
void* r14 = &rsi[rdi]

do
    *r14 = rdi.d + rbp_1
    sub_1417b1ee0(&arg1[2], &rsi[sx.q(rdi.d)])
    rdi = zx.q(rdi.d + 1)
    r14 += 4
while (rdi.d s< 0x400)

int64_t rdi_1 = sx.q(arg1[1].d)
int32_t rax_3 = (rdi_1 + 1).d
arg1[1].d = rax_3

if (rax_3 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rdi_1 << 3)) = rsi
j_sub_140a74f90(0)

if (arg2 != 0)
    rbx = rbp_1

return zx.q(rbx)
