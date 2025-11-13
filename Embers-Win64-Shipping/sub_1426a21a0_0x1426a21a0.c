// 函数: sub_1426a21a0
// 地址: 0x1426a21a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t rdx = sx.q(*((rdi << 5) + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r9) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
char* r14_2 = (sx.q(rdi.d) << 5) + *arg1
int64_t* r8_2 = arg3[1]
*r14_2 = **arg3
*(r14_2 + 8) = 0
*(r14_2 + 0x10) = 0

if (r8_2 != &r14_2[8] && r8_2[1].d != 0)
    int64_t* rcx_7 = *r8_2
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x40))(rcx_7)

*(r14_2 + 0x18) = 0xffffffff
char rbp_1 = *r14_2

if (sub_1426ac380(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    uint64_t r8_5 = zx.q(arg1[9].d - 1) & zx.q(rbp_1)
    void* rax_15 = r9_1
    *(r14_2 + 0x1c) = r8_5.d
    void* rcx_9 = *(r9_1 + 8)
    
    if (rcx_9 != 0)
        rax_15 = rcx_9
    
    *(r14_2 + 0x18) = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
    void* rcx_10 = *(r9_1 + 8)
    
    if (rcx_10 != 0)
        r9_1 = rcx_10
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi.d

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = 0

return arg2
