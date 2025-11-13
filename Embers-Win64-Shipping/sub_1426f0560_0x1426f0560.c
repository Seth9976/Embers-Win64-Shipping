// 函数: sub_1426f0560
// 地址: 0x1426f0560
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
void* r9 = &arg1[2]

if (rax_2 != 0)
    r9 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9 + (r8_1 << 2)) |= 1 << (rdi.b & 0x1f)
int64_t* rdx_5 = arg3[1]
int64_t* r9_2 = sx.q(rdi.d) * 0x38 + *arg1
*r9_2 = **arg3
r9_2[1] = *rdx_5
void* rax_10 = rdx_5[1]
r9_2[2] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

r9_2[3] = rdx_5[2]
r9_2[4].d = rdx_5[3].d
*(r9_2 + 0x24) = *(rdx_5 + 0x1c)
r9_2[5].d ^= (r9_2[5].d ^ rdx_5[4].d) & 1
r9_2[5].d ^= (r9_2[5].d ^ rdx_5[4].d) & 2
r9_2[6].d = 0xffffffff
uint32_t rcx_11 = (*r9_2 u>> 4).d
int32_t rdx_7 = (0x9e3779b9 - rcx_11) ^ rcx_11 << 8
int32_t r8_4 = neg.d(rcx_11 + rdx_7) ^ rdx_7 u>> 0xd
int32_t rcx_14 = (rcx_11 - r8_4 - rdx_7) ^ r8_4 u>> 0xc
int32_t rdx_10 = (rdx_7 - rcx_14 - r8_4) ^ rcx_14 << 0x10
int32_t r8_7 = (r8_4 - rcx_14 - rdx_10) ^ rdx_10 u>> 5
int32_t rcx_17 = (rcx_14 - r8_7 - rdx_10) ^ r8_7 u>> 3
int32_t rdx_13 = (rdx_10 - rcx_17 - r8_7) ^ rcx_17 << 0xa
sub_1426f7ff0(arg1, arg2, (r8_7 - rcx_17 - rdx_13) ^ rdx_13 u>> 0xf, r9_2, rdi.d, arg4)
return arg2
