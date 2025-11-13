// 函数: sub_1411b87c0
// 地址: 0x1411b87c0
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
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + r8 * 0x30) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r9_2 = sx.q(rdi.d) * 0x30 + *arg1
int64_t var_28
__builtin_memset(&var_28, 0, 0x20)
int128_t zmm0 = var_28.o
int64_t rcx_8 = **arg3
*r9_2 = rcx_8
uint32_t rcx_9 = (rcx_8 u>> 4).d
int32_t rdx_7 = (0x9e3779b9 - rcx_9) ^ rcx_9 << 8
*(r9_2 + 8) = zmm0
int32_t r8_5 = neg.d(rcx_9 + rdx_7) ^ rdx_7 u>> 0xd
int32_t rcx_12 = (rcx_9 - r8_5 - rdx_7) ^ r8_5 u>> 0xc
int32_t rdx_10 = (rdx_7 - rcx_12 - r8_5) ^ rcx_12 << 0x10
int32_t r8_8 = (r8_5 - rcx_12 - rdx_10) ^ rdx_10 u>> 5
int32_t rcx_15 = (rcx_12 - r8_8 - rdx_10) ^ r8_8 u>> 3
int32_t rdx_13 = (rdx_10 - rcx_15 - r8_8) ^ rcx_15 << 0xa
int128_t var_20
*(r9_2 + 0x18) = var_20
r9_2[5].d = 0xffffffff
sub_1411e0580(arg1, arg2, (r8_8 - rcx_15 - rdx_13) ^ rdx_13 u>> 0xf, r9_2, rdi.d, arg4)
return arg2
