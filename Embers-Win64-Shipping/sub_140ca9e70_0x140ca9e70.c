// 函数: sub_140ca9e70
// 地址: 0x140ca9e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rbp = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rbp * 0x18 + 4))
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
temp0:temp1 = sx.q(rbp.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rbp.b & 0x1f)
int64_t* rax_8 = *arg3
int64_t* rdi = *arg1 + sx.q(rbp.d) * 0x18
int32_t* rcx_8 = arg3[1]
*rdi = *rax_8
rdi[1].d = rax_8[1].d
*(rdi + 0xc) = *rcx_8
rdi[2].d = 0xffffffff
int64_t rbx_1 = *rdi
int32_t rax_11 = sub_140b5ead0(rbx_1.d)
int32_t r8_3 = rdi[1].d
int32_t rdx_9 = ((rbx_1 u>> 0x20).d + rax_11 - r8_3) ^ r8_3 u>> 0xd
int32_t rcx_14 = (0x9e3779b9 - rdx_9 - r8_3) ^ rdx_9 << 8
int32_t r8_6 = (r8_3 - rdx_9 - rcx_14) ^ rcx_14 u>> 0xd
int32_t rdx_12 = (rdx_9 - r8_6 - rcx_14) ^ r8_6 u>> 0xc
int32_t rcx_17 = (rcx_14 - rdx_12 - r8_6) ^ rdx_12 << 0x10
int32_t r8_9 = (r8_6 - rdx_12 - rcx_17) ^ rcx_17 u>> 5
int32_t rdx_15 = (rdx_12 - r8_9 - rcx_17) ^ r8_9 u>> 3
int32_t rcx_20 = (rcx_17 - rdx_15 - r8_9) ^ rdx_15 << 0xa
sub_140cb8e20(arg1, arg2, (r8_9 - rdx_15 - rcx_20) ^ rcx_20 u>> 0xf, rdi, rbp.d, arg4)
return arg2
