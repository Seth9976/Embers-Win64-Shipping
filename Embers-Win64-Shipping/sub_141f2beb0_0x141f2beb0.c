// 函数: sub_141f2beb0
// 地址: 0x141f2beb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rdi * 0x18 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9 + r8 * 0x18) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r15 = *arg1 + sx.q(rdi.d) * 0x18
int64_t* rdx_6 = arg3[1]
int64_t rcx_8 = **arg3
*r15 = rcx_8
r15[1] = *rdx_6
r15[2].d = 0xffffffff

if (sub_140bd9620(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r8_3 = &arg1[7]
    int32_t rbp_4 = ((rcx_8 u>> 0x20).d ^ rcx_8.d) & (arg1[9].d - 1)
    *(r15 + 0x14) = rbp_4
    void* rcx_10 = *(r8_3 + 8)
    void* rax_14 = r8_3
    
    if (rcx_10 != 0)
        rax_14 = rcx_10
    
    r15[2].d = *(rax_14 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_4)) << 2))
    void* rcx_11 = *(r8_3 + 8)
    
    if (rcx_11 != 0)
        r8_3 = rcx_11
    
    *(r8_3 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_4)) << 2)) = rdi.d

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = 0

return arg2
