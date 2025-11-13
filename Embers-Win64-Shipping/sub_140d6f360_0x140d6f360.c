// 函数: sub_140d6f360
// 地址: 0x140d6f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1406798d0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x38 + r10_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x38 + r10_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* rcx_7 = *arg3
int64_t* r9_1 = sx.q(rdi.d) * 0x38 + *arg1
*r9_1 = *rcx_7
r9_1[1] = rcx_7[1]
rcx_7[1] = 0
*rcx_7 = 0
__builtin_memset(&r9_1[2], 0, 0x1c)
r9_1[6].d = 0xffffffff
uint32_t rcx_9 = (*r9_1 u>> 4).d
int32_t rdx_6 = (0x9e3779b9 - rcx_9) ^ rcx_9 << 8
int32_t r8_5 = neg.d(rdx_6 + rcx_9) ^ rdx_6 u>> 0xd
int32_t rcx_12 = (rcx_9 - rdx_6 - r8_5) ^ r8_5 u>> 0xc
int32_t rdx_9 = (rdx_6 - r8_5 - rcx_12) ^ rcx_12 << 0x10
int32_t r8_8 = (r8_5 - rdx_9 - rcx_12) ^ rdx_9 u>> 5
int32_t rcx_15 = (rcx_12 - rdx_9 - r8_8) ^ r8_8 u>> 3
int32_t rdx_12 = (rdx_9 - r8_8 - rcx_15) ^ rcx_15 << 0xa
sub_140d797d0(arg1, arg2, (r8_8 - rdx_12 - rcx_15) ^ rdx_12 u>> 0xf, r9_1, rdi.d, arg4)
return arg2
