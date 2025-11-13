// 函数: sub_1420d7230
// 地址: 0x1420d7230
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
int32_t* r15 = *arg1 + sx.q(rdi.d) * 0x18
int64_t* rdx_6 = arg3[1]
int32_t rcx_8 = **arg3
*r15 = rcx_8
*(r15 + 8) = *rdx_6
r15[4] = 0xffffffff

if (sub_141d54100(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t r8_5 = (arg1[9].d - 1) & rcx_8
    r15[5] = r8_5
    void* rcx_10 = *(r9_1 + 8)
    void* rax_12 = r9_1
    
    if (rcx_10 != 0)
        rax_12 = rcx_10
    
    r15[4] = *(rax_12 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_5)) << 2))
    void* rcx_11 = *(r9_1 + 8)
    
    if (rcx_11 != 0)
        r9_1 = rcx_11
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_5)) << 2)) = rdi.d

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = 0

return arg2
