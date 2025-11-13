// 函数: sub_1419a2440
// 地址: 0x1419a2440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2

if (r9 == 0)
    return 

int32_t r8_1 = *(arg1 + 0x18)
uint64_t rax = 0

if (r8_1 == 0)
    return 

int64_t* rcx
int64_t rdx

while (true)
    rdx = sx.q(rax.d)
    rcx = *(*(arg1 + 0x10) + (rdx << 3))
    
    if (rcx == r9)
        break
    
    rax = zx.q(rax.d + 1)
    
    if (rax.d u>= r8_1)
        return 

if (rax.d == 0xffffffff)
    return 

int64_t r14_1 = rdx << 3

if (rcx == 0 || rcx[0x1c].b != 0 || rcx[0x11].d != 1)
    return 

int32_t rax_2 = (*(*rcx + 0x20))()
int64_t r15_1 = *(arg1 + 0x10)
*(arg1 + 0x50) -= (rax_2 + 0x3ff) u>> 0xa
int64_t rbp_1 = sx.q(*(arg1 + 0x28))
int32_t rax_5 = (rbp_1 + 1).d
*(arg1 + 0x28) = rax_5

if (rax_5 s> *(arg1 + 0x2c))
    sub_1405a4d70(arg1 + 0x20)

void* rdx_2 = *(r14_1 + r15_1)
*(*(arg1 + 0x20) + (rbp_1 << 3)) = rdx_2

if (rdx_2 != 0 && *(rdx_2 + 0xe0) == 0)
    *(rdx_2 + 0x88) += 1

rax = *(arg1 + 0x10)
int64_t* rcx_2 = *(r14_1 + rax)
*(r14_1 + rax) = 0

if (rcx_2 != 0)
    sub_1419aa220(rcx_2)

int64_t* rcx_3 = *arg2
*arg2 = 0

if (rcx_3 != 0)
    (*(*rcx_3 + 0x38))(rcx_3)
