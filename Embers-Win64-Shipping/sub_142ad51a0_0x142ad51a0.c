// 函数: sub_142ad51a0
// 地址: 0x142ad51a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x188))(arg1, zx.q(arg3))
int32_t rbx = rax_1
int64_t r8
int32_t r14

if (arg2 s>= rax_1)
    r14 = rax_1
    int32_t rax_4
    rax_4, r8 = (*(*arg1 + 0x188))(arg1, zx.q(arg3 + 1))
    rbx = rax_4
else
    int32_t rax_2
    rax_2, r8 = (*(*arg1 + 0x188))(arg1, zx.q(arg3 - 1))
    r14 = rax_2

int64_t rdx_3 = *arg1
r8.b = 1
_mm_cvtepi32_pd(zx.q(r14 + 1))
int32_t rax_6 = (*(rdx_3 + 0x190))(arg1, rdx_3, r8)
int64_t rdx_4 = *arg1
_mm_cvtepi32_pd(zx.q(rbx + 1))
int32_t rax_7 = (*(rdx_4 + 0x190))(arg1, rdx_4, 0)
int64_t rdx_5 = *arg1
_mm_cvtepi32_pd(zx.q(arg2 + 1))
int32_t rax_8 = (*(rdx_5 + 0x190))(arg1, rdx_5, 0)
int64_t r9 = *arg1
int32_t rax_9 = (*(r9 + 0x198))(arg1, zx.q(rax_6), zx.q(rax_7), r9)
int64_t r9_1 = *arg1
arg1[0x4d].b = rax_9 == 0xc
int32_t rbx_2 = (*(r9_1 + 0x198))(arg1, zx.q(rax_6), zx.q(rax_8), r9_1)

if (arg1[0x4d].b != 0)
    int64_t r9_2 = *arg1
    
    if ((*(r9_2 + 0x1b0))(arg1, zx.q(rax_6), zx.q(rax_8), r9_2) != 0)
        rbx_2 -= 1

int32_t r14_1 = rbx_2 + 0xc

if (rbx_2 s>= 1)
    r14_1 = rbx_2

int32_t rcx_13

if (arg1[0x4d].b == 0)
    rcx_13 = 0
else if ((*(*arg1 + 0x1a8))(arg1, zx.q(rax_8)) == 0)
    rcx_13 = 0
else
    int64_t rbx_3 = *arg1
    
    if ((*(rbx_3 + 0x1b0))(arg1, zx.q(rax_6), 
            zx.q((*(rbx_3 + 0x190))(arg1, _mm_cvtepi32_pd(zx.q(rax_8 - 0x19)), 0))) != 0)
        rcx_13 = 0
    else
        rcx_13 = 1

char arg_28
bool cond:3 = arg_28 == 0
int32_t result = r14_1 - 1
*(arg1 + 0x14) = result
arg1[0x11].d = 1
*(arg1 + 0x6a) = 1
*(arg1 + 0x64) = rcx_13
arg1[0x1b].d = 1
*(arg1 + 0x7e) = 1

if (not(cond:3))
    int32_t rcx_14 = arg3 + 0xa4c
    int32_t rax_18 = arg3 - *(arg1 + 0x26c)
    
    if (r14_1 s< 0xb || arg4 s>= 6)
        rax_18 += 1
        rcx_14 += 1
    
    arg1[0xb].d = rax_18
    *(arg1 + 0xcc) = 1
    uint128_t zmm0 = _mm_cvtepi32_pd(zx.q(rcx_14 - 1))
    *(arg1 + 0x7b) = 1
    int32_t rax_21 = sub_142acca60(zmm0, 0x3c, &arg_28) + 1
    arg1[0x10].d = 1
    *(arg1 + 0xc) = rax_21
    arg1[0xd].w = 0x101
    arg1[2].d = arg_28.d + 1
    *(arg1 + 0x84) = 1
    *(arg1 + 0x94) = 1
    arg1[4].d = arg2 - rax_8 + 1
    *(arg1 + 0x6d) = 1
    result = (*(*arg1 + 0x1c0))(arg1, zx.q(arg3))
    
    if (arg2 s< result)
        result = (*(*arg1 + 0x1c0))(arg1, zx.q(arg3 - 1))
    
    arg1[0x13].d = 1
    *(arg1 + 0x24) = arg2 - result + 1
    *(arg1 + 0x6e) = 1

return result
