// 函数: sub_142209c70
// 地址: 0x142209c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_14090a6a0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x60 + r10_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x60 + r10_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
uint32_t zmm3[0x4] = data_143f51030
uint32_t zmm0[0x4] = zmm3
int64_t* r9_2 = sx.q(rdi.d) * 0x60 + *arg1
int64_t rcx_8 = **arg3
zmm3 = __andps_xmmxud_memxud(zmm3, data_143f51040)
zmm0[0].q = zx.o(0) u>> 0x40
*r9_2 = rcx_8
r9_2[2] = 0
r9_2[3] = 0
*(r9_2 + 0x20) = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
*(r9_2 + 0x30) = zx.o(0)
*(r9_2 + 0x40) = zmm3
r9_2[0xa].d = 0xffffffff
uint32_t rcx_10 = (*r9_2 u>> 4).d
int32_t rdx_7 = (0x9e3779b9 - rcx_10) ^ rcx_10 << 8
int32_t r8_5 = neg.d(rdx_7 + rcx_10) ^ rdx_7 u>> 0xd
int32_t rcx_13 = (rcx_10 - rdx_7 - r8_5) ^ r8_5 u>> 0xc
int32_t rdx_10 = (rdx_7 - r8_5 - rcx_13) ^ rcx_13 << 0x10
int32_t r8_8 = (r8_5 - rdx_10 - rcx_13) ^ rdx_10 u>> 5
int32_t rcx_16 = (rcx_13 - rdx_10 - r8_8) ^ r8_8 u>> 3
int32_t rdx_13 = (rdx_10 - r8_8 - rcx_16) ^ rcx_16 << 0xa
sub_142214d90(arg1, arg2, (r8_8 - rdx_13 - rcx_16) ^ rdx_13 u>> 0xf, r9_2, rdi.d, arg4)
return arg2
