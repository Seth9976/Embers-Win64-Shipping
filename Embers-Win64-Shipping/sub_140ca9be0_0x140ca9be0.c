// 函数: sub_140ca9be0
// 地址: 0x140ca9be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*(r10_1 + rdi * 0x10 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + rdx * 0x10) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t rax_11 = *arg3
int64_t* r9_2 = (sx.q(rdi.d) << 4) + *arg1
uint32_t rcx_7 = (rax_11 u>> 4).d
*r9_2 = rax_11
int32_t rdx_6 = (0x9e3779b9 - rcx_7) ^ rcx_7 << 8
r9_2[1].d = 0xffffffff
int32_t r8_4 = neg.d(rdx_6 + rcx_7) ^ rdx_6 u>> 0xd
int32_t rcx_10 = (rcx_7 - rdx_6 - r8_4) ^ r8_4 u>> 0xc
int32_t rdx_9 = (rdx_6 - rcx_10 - r8_4) ^ rcx_10 << 0x10
int32_t r8_7 = (r8_4 - rdx_9 - rcx_10) ^ rdx_9 u>> 5
int32_t rcx_13 = (rcx_10 - rdx_9 - r8_7) ^ r8_7 u>> 3
int32_t rdx_12 = (rdx_9 - rcx_13 - r8_7) ^ rcx_13 << 0xa
sub_14095bb80(arg1, arg2, (r8_7 - rdx_12 - rcx_13) ^ rdx_12 u>> 0xf, r9_2, rdi.d, arg4)
return arg2
