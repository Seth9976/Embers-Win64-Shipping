// 函数: sub_142135bf0
// 地址: 0x142135bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4d20(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0x14 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + r8 * 0x14) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int32_t* r9 = *arg1 + sx.q(rdi.d) * 0x14
int64_t rcx_8 = **arg3
*r9 = rcx_8
r9[2] = 0
r9[3] = 0xffffffff
int32_t r8_3 = r9[1]
int32_t rdx_8 = (rcx_8.d - r8_3) ^ r8_3 u>> 0xd
int32_t rcx_11 = (0x9e3779b9 - rdx_8 - r8_3) ^ rdx_8 << 8
int32_t r8_6 = (r8_3 - rcx_11 - rdx_8) ^ rcx_11 u>> 0xd
int32_t rdx_11 = (rdx_8 - rcx_11 - r8_6) ^ r8_6 u>> 0xc
int32_t rcx_14 = (rcx_11 - rdx_11 - r8_6) ^ rdx_11 << 0x10
int32_t r8_9 = (r8_6 - rcx_14 - rdx_11) ^ rcx_14 u>> 5
int32_t rdx_14 = (rdx_11 - rcx_14 - r8_9) ^ r8_9 u>> 3
int32_t rcx_17 = (rcx_14 - rdx_14 - r8_9) ^ rdx_14 << 0xa
sub_1409b7be0(arg1, arg2, (r8_9 - rcx_17 - rdx_14) ^ rcx_17 u>> 0xf, r9, rdi.d, arg4)
return arg2
