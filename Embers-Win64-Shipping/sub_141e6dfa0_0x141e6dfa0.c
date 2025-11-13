// 函数: sub_141e6dfa0
// 地址: 0x141e6dfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405fdd60(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x70 + r10_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x70 + r10_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int128_t* rdx_5 = arg3[1]
int64_t* r9_1 = sx.q(rdi.d) * 0x70 + *arg1
int64_t rcx_7 = **arg3
*r9_1 = rcx_7
uint32_t rcx_8 = (rcx_7 u>> 4).d
*(r9_1 + 8) = *rdx_5
*(r9_1 + 0x18) = rdx_5[1]
*(r9_1 + 0x28) = rdx_5[2]
*(r9_1 + 0x38) = rdx_5[3]
*(r9_1 + 0x48) = rdx_5[4]
int32_t rdx_7 = (0x9e3779b9 - rcx_8) ^ rcx_8 << 8
*(r9_1 + 0x58) = rdx_5[5]
r9_1[0xd].d = 0xffffffff
int32_t r8_5 = neg.d(rcx_8 + rdx_7) ^ rdx_7 u>> 0xd
int32_t rcx_11 = (rcx_8 - r8_5 - rdx_7) ^ r8_5 u>> 0xc
int32_t rdx_10 = (rdx_7 - rcx_11 - r8_5) ^ rcx_11 << 0x10
int32_t r8_8 = (r8_5 - rcx_11 - rdx_10) ^ rdx_10 u>> 5
int32_t rcx_14 = (rcx_11 - r8_8 - rdx_10) ^ r8_8 u>> 3
int32_t rdx_13 = (rdx_10 - rcx_14 - r8_8) ^ rcx_14 << 0xa
sub_141e79f80(arg1, arg2, (r8_8 - rcx_14 - rdx_13) ^ rdx_13 u>> 0xf, r9_1, rdi.d, arg4)
return arg2
