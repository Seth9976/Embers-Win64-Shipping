// 函数: sub_1420f29b0
// 地址: 0x1420f29b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rsi * 0x18 + 4))
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
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int64_t* r13 = *arg1 + sx.q(rsi.d) * 0x18
int64_t rcx_8 = **arg3
int64_t* rdx_6 = arg3[1]
uint32_t r12_1 = (rcx_8 u>> 4).d
*r13 = rcx_8
r13[1] = *rdx_6
int32_t rbp_1 = (0x9e3779b9 - r12_1) ^ r12_1 << 8
r13[2].d = 0xffffffff
int32_t rdi_3 = neg.d(r12_1 + rbp_1) ^ rbp_1 u>> 0xd
int32_t r12_4 = (r12_1 - rdi_3 - rbp_1) ^ rdi_3 u>> 0xc
int32_t rbp_4 = (rbp_1 - r12_4 - rdi_3) ^ r12_4 << 0x10
int32_t rdi_6 = (rdi_3 - r12_4 - rbp_4) ^ rbp_4 u>> 5
int32_t r12_7 = (r12_4 - rdi_6 - rbp_4) ^ rdi_6 u>> 3
int32_t rbp_7 = (rbp_4 - r12_7 - rdi_6) ^ r12_7 << 0xa

if (sub_1405b6470(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r8_3 = &arg1[7]
    int32_t rdi_10 = ((rdi_6 - r12_7 - rbp_7) ^ rbp_7 u>> 0xf) & (arg1[9].d - 1)
    *(r13 + 0x14) = rdi_10
    void* rcx_10 = *(r8_3 + 8)
    void* rax_28 = r8_3
    
    if (rcx_10 != 0)
        rax_28 = rcx_10
    
    r13[2].d = *(rax_28 + (((sx.q(arg1[9].d) - 1) & sx.q(rdi_10)) << 2))
    void* rcx_11 = *(r8_3 + 8)
    
    if (rcx_11 != 0)
        r8_3 = rcx_11
    
    *(r8_3 + (((sx.q(arg1[9].d) - 1) & sx.q(rdi_10)) << 2)) = rsi.d

*arg2 = rsi.d

if (arg4 != 0)
    *arg4 = 0

return arg2
