// 函数: sub_142a67cd0
// 地址: 0x142a67cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 

uint128_t __saved_zmm7_1 = arg3
arg3 = zx.o(arg1[0x1c])
int64_t* rcx = arg1[0x1e]
int512_t zmm1
zmm1.o = arg3
int32_t arg_10
int32_t arg_18
(*(*rcx + 0x18))(rcx, zmm1, 0, &arg_10, &arg_18, arg2, __saved_zmm7_1)
char* rax_2 = &arg1[0xd]
uint32_t rdx = 0x80067
int64_t i_1 = 0x17
void* rcx_3 = &arg1[0x10]
arg3.q = arg3.q f+ _mm_cvtepi32_pd(zx.q(arg_18 + arg_10))
int64_t i

do
    if ((rdx.b & 1) != 0)
        *rcx_3 = 0
        *rax_2 = 0
    else
        *rcx_3 = 1
        *rax_2 = 1
    
    rdx u>>= 1
    rcx_3 += 4
    rax_2 = &rax_2[1]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rbx_1 = int.d(sub_142a4b9b0(arg3.q f/ 86400000.0))
arg1[0x1a].d = 1
*(arg1 + 0x5c) = rbx_1 + 0x253d8c
*(arg1 + 0x7c) = 1
double zmm7 = sub_142a67e90(arg1, rbx_1 + 0x253d8c)
(*(*arg1 + 0x140))(arg1, zx.q(*(arg1 + 0x5c)), arg2)
sub_142a68340(arg1, arg2)
int32_t rcx_7 = int.d(zmm7 f- _mm_cvtepi32_pd(zx.q(rbx_1)) f* 86400000.0)
arg1[0xc].d = rcx_7
int32_t r8_5 = rcx_7 s/ 0x3e8
*(arg1 + 0x44) = rcx_7 s% 0x3e8
int32_t r9_4 = r8_5 s/ 0x3c
arg1[8].d = r8_5 s% 0x3c
int32_t rcx_14 = r9_4 s/ 0x3c
arg1[7].d = rcx_14
*(arg1 + 0x3c) = r9_4 s% 0x3c
uint64_t rdx_9 = zx.q(rcx_14 s/ 0xc)
arg1[6].d = rdx_9.d
arg1[9].d = arg_10
*(arg1 + 0x4c) = arg_18
*(arg1 + 0x34) = rcx_14 - ((rdx_9 * 3).d << 2)
