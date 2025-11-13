// 函数: sub_140d140a0
// 地址: 0x140d140a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4ec0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rdi * 0x28 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9 + r8 * 0x28) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r13 = *arg1 + sx.q(rdi.d) * 0x28
int64_t rcx_8 = **arg3
int128_t* rdx_6 = arg3[1]
uint32_t r12_1 = (rcx_8 u>> 4).d
*r13 = rcx_8
int32_t rbp_1 = (0x9e3779b9 - r12_1) ^ r12_1 << 8
*(r13 + 8) = *rdx_6
int32_t rsi_3 = neg.d(r12_1 + rbp_1) ^ rbp_1 u>> 0xd
r13[3] = rdx_6[1].q
r13[4].d = 0xffffffff
int32_t r12_4 = (r12_1 - rsi_3 - rbp_1) ^ rsi_3 u>> 0xc
int32_t rbp_4 = (rbp_1 - r12_4 - rsi_3) ^ r12_4 << 0x10
int32_t rsi_6 = (rsi_3 - r12_4 - rbp_4) ^ rbp_4 u>> 5
int32_t r12_7 = (r12_4 - rsi_6 - rbp_4) ^ rsi_6 u>> 3
int32_t rbp_7 = (rbp_4 - r12_7 - rsi_6) ^ r12_7 << 0xa

if (sub_140d1a980(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t rsi_10 = ((rsi_6 - r12_7 - rbp_7) ^ rbp_7 u>> 0xf) & (arg1[9].d - 1)
    void* rax_26 = r9_1
    *(r13 + 0x24) = rsi_10
    void* rdx_9 = *(r9_1 + 8)
    int64_t r8_3 = sx.q(rsi_10)
    
    if (rdx_9 != 0)
        rax_26 = rdx_9
    
    r13[4].d = *(rax_26 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
    void* rax_28 = *(r9_1 + 8)
    
    if (rax_28 != 0)
        r9_1 = rax_28
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi.d

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = 0

return arg2
