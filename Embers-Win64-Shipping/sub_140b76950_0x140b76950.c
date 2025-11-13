// 函数: sub_140b76950
// 地址: 0x140b76950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rdi * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9 + r8 * 0x30) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* rdx_6 = arg3[1]
int64_t* r15_2 = sx.q(rdi.d) * 0x30 + *arg1
*r15_2 = **arg3
r15_2[1] = 0
r15_2[1] = *rdx_6
__builtin_memset(rdx_6, 0, 0x20)
r15_2[2].d = rdx_6[1].d
*(r15_2 + 0x14) = *(rdx_6 + 0xc)
r15_2[3] = 0
r15_2[3] = rdx_6[2]
r15_2[4].d = rdx_6[3].d
*(r15_2 + 0x24) = *(rdx_6 + 0x1c)
r15_2[5].d = 0xffffffff
int64_t rax_15 = *r15_2
int32_t rax_16 = sub_140b5ead0(rax_15.d)

if (sub_140a6d3f0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_20 = (arg1[9].d - 1) & (rax_16 + rax_15:4.d)
    *(r15_2 + 0x2c) = rax_20
    void* rdx_9 = *(r9_1 + 8)
    int64_t r8_3 = sx.q(rax_20)
    void* rax_21 = r9_1
    
    if (rdx_9 != 0)
        rax_21 = rdx_9
    
    r15_2[5].d = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
    void* rax_23 = *(r9_1 + 8)
    
    if (rax_23 != 0)
        r9_1 = rax_23
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi.d

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = 0

return arg2
