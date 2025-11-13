// 函数: sub_1419ea420
// 地址: 0x1419ea420
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
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0x18 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + r8 * 0x18) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r9 = *arg1 + sx.q(rdi.d) * 0x18
int64_t* rdx_6 = arg3[1]
int64_t rcx_8 = **arg3
*r9 = rcx_8
uint32_t r8_4 = (rcx_8 u>> 0x20).d
r9[1] = *rdx_6
r9[2].d = 0xffffffff
int32_t rax_12 = (rcx_8.d - r8_4) ^ r8_4 u>> 0xd
int32_t rdx_9 = (0x9e3779b9 - rax_12 - r8_4) ^ rax_12 << 8
int32_t r8_7 = (r8_4 - rax_12 - rdx_9) ^ rdx_9 u>> 0xd
int32_t rax_15 = (rax_12 - r8_7 - rdx_9) ^ r8_7 u>> 0xc
int32_t rdx_12 = (rdx_9 - rax_15 - r8_7) ^ rax_15 << 0x10
int32_t r8_10 = (r8_7 - rax_15 - rdx_12) ^ rdx_12 u>> 5
int32_t rax_18 = (rax_15 - r8_10 - rdx_12) ^ r8_10 u>> 3
int32_t rdx_15 = (rdx_12 - rax_18 - r8_10) ^ rax_18 << 0xa
sub_1419ed530(arg1, arg2, (r8_10 - rax_18 - rdx_15) ^ rdx_15 u>> 0xf, r9, rdi.d, arg4)
return arg2
