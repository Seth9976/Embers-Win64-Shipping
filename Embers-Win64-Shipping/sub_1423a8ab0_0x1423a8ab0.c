// 函数: sub_1423a8ab0
// 地址: 0x1423a8ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = -1

while (i s< 0 || i s>= *(arg1 + 0x130))
    if (*(arg1 + 0x140) s<= 0)
        break
    
    int64_t r8 = sx.q(*(arg1 + 0x140))
    i = *(*(arg1 + 0x138) + (r8 << 2) - 4)
    *(arg1 + 0x140) = (r8 - 1).d
    sub_1405dac90(arg1 + 0x138)

if (i s< 0 || i s>= *(arg1 + 0x130))
    int64_t rbp_1 = sx.q(*(arg1 + 0x18))
    i = *(arg1 + 0x18) << 2
    int32_t rax_3 = (rbp_1 + 1).d
    int128_t var_118
    __builtin_memset(&var_118, 0, 0xd0)
    int128_t var_48
    __builtin_memcpy(&var_48, 
        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x"
    "ff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
        0x20)
    *(arg1 + 0x18) = rax_3
    
    if (rax_3 s> *(arg1 + 0x1c))
        sub_141cac4f0(arg1 + 0x10)
    
    int128_t* rdx_2 = rbp_1 * 0xf0 + *(arg1 + 0x10)
    *rdx_2 = var_118
    __builtin_memset(&rdx_2[1], 0, 0x60)
    rdx_2[7] = zx.o(0)
    __builtin_memset(rdx_2 + 0x80, 0, 0x20)
    int64_t var_78
    rdx_2[0xa] = var_78.o
    __builtin_memset(&rdx_2[0xb], 0, 0x20)
    rdx_2[0xd] = var_48
    int128_t var_38
    rdx_2[0xe] = var_38
    int64_t rbp_2 = sx.q(*(arg1 + 0x130))
    int32_t rax_4 = (rbp_2 + 1).d
    *(arg1 + 0x130) = rax_4
    
    if (rax_4 s> *(arg1 + 0x134))
        sub_1405a4d70(arg1 + 0x128)
    
    *(*(arg1 + 0x128) + (rbp_2 << 3)) = 0
    int64_t rbp_3 = sx.q(*(arg1 + 0x130))
    int32_t rax_6 = (rbp_3 + 1).d
    *(arg1 + 0x130) = rax_6
    
    if (rax_6 s> *(arg1 + 0x134))
        sub_1405a4d70(arg1 + 0x128)
    
    *(*(arg1 + 0x128) + (rbp_3 << 3)) = 0
    int64_t rbp_4 = sx.q(*(arg1 + 0x130))
    int32_t rax_8 = (rbp_4 + 1).d
    *(arg1 + 0x130) = rax_8
    
    if (rax_8 s> *(arg1 + 0x134))
        sub_1405a4d70(arg1 + 0x128)
    
    *(*(arg1 + 0x128) + (rbp_4 << 3)) = 0
    int64_t rbp_5 = sx.q(*(arg1 + 0x130))
    int32_t rax_10 = (rbp_5 + 1).d
    *(arg1 + 0x130) = rax_10
    
    if (rax_10 s> *(arg1 + 0x134))
        sub_1405a4d70(arg1 + 0x128)
    
    *(*(arg1 + 0x128) + (rbp_5 << 3)) = 0
    int64_t rbp_6 = sx.q(*(arg1 + 0x140))
    int32_t rax_12 = (rbp_6 + 1).d
    *(arg1 + 0x140) = rax_12
    
    if (rax_12 s> *(arg1 + 0x144))
        sub_1405a4cf0(arg1 + 0x138)
    
    *(*(arg1 + 0x138) + (rbp_6 << 2)) = i + 3
    int64_t rbp_7 = sx.q(*(arg1 + 0x140))
    int32_t rax_14 = (rbp_7 + 1).d
    *(arg1 + 0x140) = rax_14
    
    if (rax_14 s> *(arg1 + 0x144))
        sub_1405a4cf0(arg1 + 0x138)
    
    *(*(arg1 + 0x138) + (rbp_7 << 2)) = i + 2
    int64_t rbp_8 = sx.q(*(arg1 + 0x140))
    int32_t rax_16 = (rbp_8 + 1).d
    *(arg1 + 0x140) = rax_16
    
    if (rax_16 s> *(arg1 + 0x144))
        sub_1405a4cf0(arg1 + 0x138)
    
    *(*(arg1 + 0x138) + (rbp_8 << 2)) = i + 1

int128_t zmm0 = *arg6
int128_t zmm1 = *(arg6 + 4)
int32_t zmm2 = *(arg6 + 8)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(i)
int32_t rdx_12 = temp0 & 3
int32_t rax_21 = temp1 + rdx_12
int64_t rcx_9 = sx.q((rax_21 & 3) - rdx_12)
int64_t r8_4 = sx.q(rax_21 s>> 2) * 0xf0 + *(arg1 + 0x10)
*(r8_4 + (rcx_9 << 2)) = *arg2
*(r8_4 + (rcx_9 << 2) + 0x10) = arg2[1]
int32_t rax_27 = arg2[2]
*(r8_4 + (rcx_9 << 2) + 0x30) = zmm0.d
*(r8_4 + (rcx_9 << 2) + 0x40) = zmm1.d
*(r8_4 + (rcx_9 << 2) + 0x20) = rax_27
*(r8_4 + (rcx_9 << 2) + 0x50) = zmm2
*(r8_4 + (rcx_9 << 2) + 0x60) = arg2[3]
*(r8_4 + (rcx_9 << 2) + 0x70) = arg2[4]
*(r8_4 + (rcx_9 << 2) + 0x80) = arg2[5]
int32_t rcx_10 = arg2[6]
*(r8_4 + (rcx_9 << 2) + 0xb0) = arg7.d
*(r8_4 + (rcx_9 << 2) + 0xc0) = arg8.d
*(r8_4 + (rcx_9 << 2) + 0xd0) = arg9.d
*(r8_4 + (rcx_9 << 2) + 0xe0) = arg5.d
*(r8_4 + (rcx_9 << 2) + 0x90) = rcx_10
*(r8_4 + (rcx_9 << 2) + 0xa0) = arg3
*(*(arg1 + 0x128) + (sx.q(i) << 3)) = arg4
return zx.q(i)
