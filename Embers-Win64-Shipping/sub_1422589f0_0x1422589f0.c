// 函数: sub_1422589f0
// 地址: 0x1422589f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1407c39b0(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t rdx = sx.q(*(rbp * 0xe0 + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(rdx * 0xe0 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t* rax_15 = *arg4
uint32_t zmm3[0x4] = data_143f522c0
int64_t* r9_2 = sx.q(rbp.d) * 0xe0 + *arg1
uint32_t zmm0[0x4] = zmm3
zmm3 = __andps_xmmxud_memxud(zmm3, data_143f522d0)
*r9_2 = *rax_15
__builtin_memset(&r9_2[2], 0, 0x40)
zmm0[0].q = zx.o(0) u>> 0x40
int128_t zmm1 = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
*(r9_2 + 0x50) = 0.o
r9_2[0x18].b = 0
*(r9_2 + 0x60) = zmm1
*(r9_2 + 0x70) = zx.o(0)
*(r9_2 + 0x80) = zmm3
*(r9_2 + 0x90) = zmm1
*(r9_2 + 0xa0) = zx.o(0)
*(r9_2 + 0xb0) = zmm3
r9_2[0x1a].d = 0xffffffff
sub_142268400(arg1, arg2, arg3, r9_2, rbp.d, arg5)
return arg2
