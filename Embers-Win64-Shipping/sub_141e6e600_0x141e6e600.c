// 函数: sub_141e6e600
// 地址: 0x141e6e600
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
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x38 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x38 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r9_2 = &arg1[2]

if (rax_2 != 0)
    r9_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
float zmm2[0x4] = zx.o(0)
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
zmm2[0] = 0x3f000000
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x27)
zmm2[0] = 0x40000000
*(r9_2 + (r8_1 << 2)) |= 1 << (rdi.b & 0x1f)
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
int64_t rax_8 = *arg3
int64_t* r9_4 = sx.q(rdi.d) * 0x38 + *arg1
*(r9_4 + 8) = 1.o
*r9_4 = rax_8
*(r9_4 + 0x18) = zmm2
uint128_t zmm0
zmm0.d = (zx.o(0)).d
r9_4[5] = zmm0.q
r9_4[6].d = 0xffffffff
int32_t arg_8
sub_141e7a680(arg1, &arg_8, arg2, r9_4, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x38 + 8
