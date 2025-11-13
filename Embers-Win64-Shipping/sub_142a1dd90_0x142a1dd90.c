// 函数: sub_142a1dd90
// 地址: 0x142a1dd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg3
int32_t rbp = arg3[1]
int32_t r13 = arg3[2]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x2aaaaaab, arg1[0x648] * 0xa)
int128_t* rax_1 = *(arg1 + 0x778)
int32_t r15_2 = (temp0 u>> 0x1f) + temp0

if (rax_1 == 0)
    return 0xffffffff

if (r15_2 s> 0x3f)
    r15_2 = 0x3f

if (rbx == 0)
    *arg2 = *rax_1
    arg2[1] = rax_1[1]
    arg2[2] = rax_1[2]
    arg2[3] = rax_1[3]
    arg2[4] = rax_1[4]
    arg2[5] = rax_1[5]
    arg2[6] = rax_1[6]
    arg2[7] = rax_1[7]
    arg2[8] = rax_1[8]
    *arg2 = arg1[0x1d8]
    int32_t rax_4 = arg1[0x1d9]
    *(arg2 + 4) = rax_4
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_4)
    *(arg2 + 0x18) = (temp3_1 - temp2_1) s>> 1
    arg1[0x88e] = arg1[0x2f4]
    arg1[0x88f] = 1
    return 0

int32_t r12_2 = rbx & 4

if (r12_2 != 0 && *(arg1 + 0x2248) == 0)
    void* rax_9 = sub_1429dddd0(sx.q(arg1[0x1d8] + 0x100), 1)
    *(arg1 + 0x2248) = rax_9
    
    if (rax_9 == 0)
        return 1

int32_t rdi_2 = rbx & 8

if (rdi_2 != 0 && arg1[0x2e4] == 0 && (rbx.b & 3) != 0)
    int32_t rax_10
    int64_t r9_2
    rax_10, r9_2 = sub_142a1cd30(&arg1[0x2c0], (arg1[0x1d8] + 0xf) & 0xfffffff0, 
        (arg1[0x1d9] + 0xf) & 0xfffffff0, 0x20)
    
    if (rax_10 != 0)
        sub_1429da010(arg1, 2, "Failed to allocate MFQE framebuffer", r9_2)
    
    int64_t count = sx.q(arg1[0x2b6])
    int64_t rcx_5 = *(arg1 + 0xb58)
    arg1[0x2e4] = 1
    memset(rcx_5, 0x80, count)

int32_t rcx_6

if (rdi_2 != 0 && arg1[0x88f] != 0 && arg1[0x887] u>= 2)
    rcx_6 = arg1[0x88e]

if (rdi_2 == 0 || arg1[0x88f] == 0 || arg1[0x887] u< 2 || rcx_6 s>= 0x3c
        || arg1[0x2f4] - rcx_6 s< 0x14)
    if ((rbx.b & 2) != 0)
        int32_t var_40_3 = 0
        int32_t rbx_2 = r15_2 + (rbp - 5) * 0xa
        int32_t var_48_3 = 1
        sub_142a1db20(arg1, *(arg1 + 0x778), &arg1[0x29c], rbx_2)
        sub_142a1da80(&arg1[0x29c], rbx_2)
    else if ((rbx.b & 1) == 0)
        sub_142a216f0(*(arg1 + 0x778), &arg1[0x29c])
    else
        int32_t var_40_4 = 0
        int32_t var_48_4 = 1
        sub_142a1db20(arg1, *(arg1 + 0x778), &arg1[0x29c], r15_2)
    
    arg1[0x88e] = arg1[0x2f4]
else
    sub_142a2ddb0(arg1)
    
    if ((rbx.b & 3) != 0 && arg1[0x2e4] != 0)
        sub_142a216f0(&arg1[0x29c], &arg1[0x2c0])
        
        if ((rbx.b & 2) != 0)
            int32_t var_40_1 = 0
            int32_t var_48_1 = 1
            int32_t rbx_1 = r15_2 + (rbp - 5) * 0xa
            sub_142a1db20(arg1, &arg1[0x2c0], &arg1[0x29c], rbx_1)
            sub_142a1da80(&arg1[0x29c], rbx_1)
        else if ((rbx.b & 1) != 0)
            int32_t var_40_2 = 0
            int32_t var_48_2 = 1
            sub_142a1db20(arg1, &arg1[0x2c0], &arg1[0x29c], r15_2)
    
    arg1[0x88e] = (arg1[0x88e] * 3 + arg1[0x2f4]) s>> 2

arg1[0x88f] = 1

if (r12_2 != 0)
    if (arg1[0x88c] != r15_2 || arg1[0x88d] != r13)
        void* rdx_13 = *(arg1 + 0x2248)
        int32_t r8_9 = arg1[0x1d8] + 0x100
        uint128_t zmm0_1
        zmm0_1.q = _mm_cvtepi32_pd(zx.q(r15_2)).q f* 0.59999999999999998
        zmm0_1.q = zmm0_1.q f/ 63.0
        uint128_t zmm1
        zmm1.q = _mm_cvtepi32_pd(zx.q(r13)).q f+ 0.5
        zmm0_1.q = zmm0_1.q f+ zmm1.q
        arg1[0x890] = sub_142a2d510(zmm0_1, rdx_13, r8_9)
        arg1[0x88c] = r15_2
        arg1[0x88d] = r13
    
    uint64_t r8_10 = zx.q(arg1[0x890])
    sub_1403baac0(*(arg1 + 0xaa8), *(arg1 + 0x2248), r8_10, zx.q(r8_10.d), arg1[0x29c], 
        arg1[0x29d], arg1[0x2a0])

*arg2 = *(arg1 + 0xa70)
arg2[1] = *(arg1 + 0xa80)
arg2[2] = *(arg1 + 0xa90)
arg2[3] = *(arg1 + 0xaa0)
arg2[4] = *(arg1 + 0xab0)
arg2[5] = *(arg1 + 0xac0)
arg2[6] = *(arg1 + 0xad0)
arg2[7] = *(arg1 + 0xae0)
arg2[8] = *(arg1 + 0xaf0)
*arg2 = arg1[0x1d8]
int32_t rax_22 = arg1[0x1d9]
*(arg2 + 4) = rax_22
int32_t temp4_1
int32_t temp5_1
temp4_1:temp5_1 = sx.q(rax_22)
*(arg2 + 0x18) = (temp5_1 - temp4_1) s>> 1
return 0
