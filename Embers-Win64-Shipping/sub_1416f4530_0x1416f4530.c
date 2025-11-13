// 函数: sub_1416f4530
// 地址: 0x1416f4530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *arg3
int32_t rax

if (rcx == 1)
    arg4[sx.q(arg3[1])] = 0x3f800000
    int64_t rcx_7 = sx.q(arg3[1]) * 3
    *arg1 = *(arg2 + (rcx_7 << 2))
    rax = *(arg2 + (rcx_7 << 2) + 8)
else
    uint64_t var_18
    
    if (rcx == 2)
        uint64_t* rax_3 = sub_1416e69d0(&var_18, arg2, &arg3[1], arg3, arg4)
        *arg1 = *rax_3
        rax = rax_3[1].d
    else if (rcx == 3)
        uint64_t* rax_2 = sub_1416fa750(&var_18, arg2, arg3, arg4)
        *arg1 = *rax_2
        rax = rax_2[1].d
    else if (rcx == 4)
        uint64_t* rax_1 = sub_1416f9c90(&var_18, arg2, arg3, arg4)
        *arg1 = *rax_1
        rax = rax_1[1].d
    else
        int32_t var_10_1 = 0
        rax = 0
        *arg1 = _mm_unpacklo_ps(zx.o(0), 0).q

arg1[1].d = rax
int64_t rcx_8 = sx.q(arg3[1]) * 3
int64_t zmm0 = *(arg2 + (rcx_8 << 2))
int32_t r10 = *(arg2 + (rcx_8 << 2) + 8)
int64_t rdx = sx.q(arg3[2]) * 3
int64_t zmm3 = *(arg2 + (rdx << 2))
int32_t r9_1 = *(arg2 + (rdx << 2) + 8)
int64_t rdx_1 = sx.q(arg3[3]) * 3
int64_t zmm2 = *(arg2 + (rdx_1 << 2))
int32_t r8_1 = *(arg2 + (rdx_1 << 2) + 8)
int64_t rdx_2 = sx.q(arg3[4]) * 3
int32_t rax_10 = *(arg2 + (rdx_2 << 2) + 8)
*(arg2 + 0x24) = *(arg2 + (rdx_2 << 2))
*arg2 = zmm0
*(arg2 + 0xc) = zmm3
arg2[3] = zmm2
*(arg2 + 0x2c) = rax_10
arg2[1].d = r10
*(arg2 + 0x14) = r9_1
arg2[4].d = r8_1
int64_t zmm1 = arg4[sx.q(arg3[3])]
zmm0 = arg4[sx.q(arg3[4])]
int32_t rcx_9 = arg4[sx.q(arg3[1])]
arg4[1] = arg4[sx.q(arg3[2])].d
arg4[2] = zmm1.d
arg4[3] = zmm0.d
*arg4 = rcx_9

if (arg5 != 0)
    int64_t rcx_10 = sx.q(arg3[1]) * 3
    zmm0 = *(arg5 + (rcx_10 << 2))
    int32_t r10_1 = *(arg5 + (rcx_10 << 2) + 8)
    int64_t rdx_3 = sx.q(arg3[2]) * 3
    zmm3 = *(arg5 + (rdx_3 << 2))
    int32_t r9_2 = *(arg5 + (rdx_3 << 2) + 8)
    int64_t rdx_4 = sx.q(arg3[3]) * 3
    zmm2 = *(arg5 + (rdx_4 << 2))
    int32_t r8_2 = *(arg5 + (rdx_4 << 2) + 8)
    int64_t rdx_5 = sx.q(arg3[4]) * 3
    int32_t rax_19 = *(arg5 + (rdx_5 << 2) + 8)
    *(arg5 + 0x24) = *(arg5 + (rdx_5 << 2))
    *arg5 = zmm0
    *(arg5 + 0xc) = zmm3
    arg5[3] = zmm2
    *(arg5 + 0x2c) = rax_19
    arg5[1].d = r10_1
    *(arg5 + 0x14) = r9_2
    arg5[4].d = r8_2

if (arg6 != 0)
    int64_t rcx_11 = sx.q(arg3[1]) * 3
    zmm0 = *(arg6 + (rcx_11 << 2))
    int32_t r10_2 = *(arg6 + (rcx_11 << 2) + 8)
    int64_t rdx_6 = sx.q(arg3[2]) * 3
    zmm3 = *(arg6 + (rdx_6 << 2))
    int32_t r9_3 = *(arg6 + (rdx_6 << 2) + 8)
    int64_t rdx_7 = sx.q(arg3[3]) * 3
    zmm2 = *(arg6 + (rdx_7 << 2))
    int32_t r8_3 = *(arg6 + (rdx_7 << 2) + 8)
    int64_t rdx_8 = sx.q(arg3[4]) * 3
    int32_t rax_24 = *(arg6 + (rdx_8 << 2) + 8)
    *(arg6 + 0x24) = *(arg6 + (rdx_8 << 2))
    *arg6 = zmm0
    *(arg6 + 0xc) = zmm3
    arg6[3] = zmm2
    *(arg6 + 0x2c) = rax_24
    arg6[1].d = r10_2
    *(arg6 + 0x14) = r9_3
    arg6[4].d = r8_3

arg3[1] = 0
arg3[2] = 1
arg3[3] = 2
arg3[4] = 3
return arg1
