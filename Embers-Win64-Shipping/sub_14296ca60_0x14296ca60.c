// 函数: sub_14296ca60
// 地址: 0x14296ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t i = 0
void* const r14 = &data_14354b034
int32_t r10 = 0
uint64_t rbx = 0
int32_t rbp = 2
int64_t rdi = 0

do
    if (r10 u< 0x1c)
        while (i u< 0x38)
            char rdx = *(zx.q(i) + arg2)
            
            if (i == 0x37)
                rdx &= not.b(arg4)
            
            uint64_t rdx_2 = zx.q(rdx) << r10.b
            r10 += 8
            rbx |= rdx_2
            i += 1
            
            if (r10 u>= 0x1c)
                break
    
    int32_t rdx_4 = rbx.d & 0xfffffff
    uint64_t rcx_4 = zx.q(*(r14 - 4))
    
    if (rbp - 2 u>= 0xf)
        rdx_4 = rbx.d
    
    int32_t r10_1 = r10 - 0x1c
    uint64_t r8 = zx.q(rdx_4)
    *(r14 + arg1 - &data_14354b034) = r8.d
    uint64_t rbx_1 = rbx u>> 0x1c
    
    if (r10_1 u< 0x1c)
        while (i u< 0x38)
            char rdx_5 = *(zx.q(i) + arg2)
            
            if (i == 0x37)
                rdx_5 &= not.b(arg4)
            
            uint64_t rdx_7 = zx.q(rdx_5) << r10_1.b
            r10_1 += 8
            rbx_1 |= rdx_7
            i += 1
            
            if (r10_1 u>= 0x1c)
                break
    
    int32_t rdx_9 = rbx_1.d & 0xfffffff
    uint64_t rcx_9 = zx.q(*r14)
    
    if (rbp - 1 u>= 0xf)
        rdx_9 = rbx_1.d
    
    int32_t r10_2 = r10_1 - 0x1c
    uint64_t rsi_1 = zx.q(rdx_9)
    *(r14 + arg1 - &data_14354b034 + 4) = rsi_1.d
    uint64_t rbx_2 = rbx_1 u>> 0x1c
    
    if (r10_2 u< 0x1c)
        while (i u< 0x38)
            char rdx_10 = *(zx.q(i) + arg2)
            
            if (i == 0x37)
                rdx_10 &= not.b(arg4)
            
            uint64_t rdx_12 = zx.q(rdx_10) << r10_2.b
            r10_2 += 8
            rbx_2 |= rdx_12
            i += 1
            
            if (r10_2 u>= 0x1c)
                break
    
    uint64_t rcx_13 = zx.q(*(r14 + 4))
    uint64_t rdi_2 = zx.q(rbx_2.d) & 0xfffffff
    
    if (rbp u>= 0xf)
        rdi_2 = zx.q(rbx_2.d)
    
    int32_t r10_3 = r10_2 - 0x1c
    *(r14 + arg1 - &data_14354b034 + 8) = rdi_2.d
    uint64_t rbx_3 = rbx_2 u>> 0x1c
    
    if (r10_3 u< 0x1c)
        while (i u< 0x38)
            char rdx_13 = *(zx.q(i) + arg2)
            
            if (i == 0x37)
                rdx_13 &= not.b(arg4)
            
            uint64_t rdx_15 = zx.q(rdx_13) << r10_3.b
            r10_3 += 8
            rbx_3 |= rdx_15
            i += 1
            
            if (r10_3 u>= 0x1c)
                break
    
    int32_t rdx_17 = rbx_3.d & 0xfffffff
    uint64_t rcx_18 = zx.q(*(r14 + 8))
    
    if (rbp + 1 u>= 0xf)
        rdx_17 = rbx_3.d
    
    int32_t r10_4 = r10_3 - 0x1c
    uint64_t r8_4 = zx.q(rdx_17)
    *(r14 + arg1 - &data_14354b034 + 0xc) = r8_4.d
    uint64_t rbx_4 = rbx_3 u>> 0x1c
    
    if (r10_4 u< 0x1c)
        while (i u< 0x38)
            char rdx_18 = *(zx.q(i) + arg2)
            
            if (i == 0x37)
                rdx_18 &= not.b(arg4)
            
            uint64_t rdx_20 = zx.q(rdx_18) << r10_4.b
            r10_4 += 8
            rbx_4 |= rdx_20
            i += 1
            
            if (r10_4 u>= 0x1c)
                break
    
    int32_t rdx_22 = rbx_4.d & 0xfffffff
    uint64_t rcx_23 = zx.q(*(r14 + 0xc))
    
    if (rbp + 2 u>= 0xf)
        rdx_22 = rbx_4.d
    
    int32_t r10_5 = r10_4 - 0x1c
    uint64_t rdi_6 = zx.q(rdx_22)
    *(r14 + arg1 - &data_14354b034 + 0x10) = rdi_6.d
    uint64_t rbx_5 = rbx_4 u>> 0x1c
    
    if (r10_5 u< 0x1c)
        while (i u< 0x38)
            char rdx_23 = *(zx.q(i) + arg2)
            
            if (i == 0x37)
                rdx_23 &= not.b(arg4)
            
            uint64_t rdx_25 = zx.q(rdx_23) << r10_5.b
            r10_5 += 8
            rbx_5 |= rdx_25
            i += 1
            
            if (r10_5 u>= 0x1c)
                break
    
    int32_t rdx_27 = rbx_5.d & 0xfffffff
    uint64_t rcx_28 = zx.q(*(r14 + 0x10))
    
    if (rbp + 3 u>= 0xf)
        rdx_27 = rbx_5.d
    
    int32_t r10_6 = r10_5 - 0x1c
    uint64_t r8_8 = zx.q(rdx_27)
    *(r14 + arg1 - &data_14354b034 + 0x14) = r8_8.d
    int64_t r8_10 = r8_8 - rcx_28 + ((rdi_6 - rcx_23 + ((r8_4 - rcx_18
        + ((rdi_2 - rcx_13 + ((rsi_1 - rcx_9 + ((r8 - rcx_4 + rdi) s>> 0x20)) s>> 0x20)) s>> 0x20))
        s>> 0x20)) s>> 0x20)
    uint64_t rbx_6 = rbx_5 u>> 0x1c
    
    if (r10_6 u< 0x1c)
        while (i u< 0x38)
            char rdx_28 = *(zx.q(i) + arg2)
            
            if (i == 0x37)
                rdx_28 &= not.b(arg4)
            
            uint64_t rdx_30 = zx.q(rdx_28) << r10_6.b
            r10_6 += 8
            rbx_6 |= rdx_30
            i += 1
            
            if (r10_6 u>= 0x1c)
                break
    
    int32_t rdx_32 = rbx_6.d & 0xfffffff
    uint64_t rcx_33 = zx.q(*(r14 + 0x14))
    
    if (rbp + 4 u>= 0xf)
        rdx_32 = rbx_6.d
    
    int32_t r10_7 = r10_6 - 0x1c
    uint64_t rsi_5 = zx.q(rdx_32)
    *(r14 + arg1 - &data_14354b034 + 0x18) = rsi_5.d
    uint64_t rbx_7 = rbx_6 u>> 0x1c
    
    if (r10_7 u< 0x1c)
        while (i u< 0x38)
            char rdx_33 = *(zx.q(i) + arg2)
            
            if (i == 0x37)
                rdx_33 &= not.b(arg4)
            
            uint64_t rdx_35 = zx.q(rdx_33) << r10_7.b
            r10_7 += 8
            rbx_7 |= rdx_35
            i += 1
            
            if (r10_7 u>= 0x1c)
                break
    
    int32_t rdx_37 = rbx_7.d & 0xfffffff
    uint64_t rcx_38 = zx.q(*(r14 + 0x18))
    
    if (rbp + 5 u>= 0xf)
        rdx_37 = rbx_7.d
    
    rbp += 8
    uint64_t rdi_10 = zx.q(rdx_37)
    r10 = r10_7 - 0x1c
    *(r14 + arg1 - &data_14354b034 + 0x1c) = rdi_10.d
    rbx = rbx_7 u>> 0x1c
    rdi = (rdi_10 - rcx_38 + ((rsi_5 - rcx_33 + (r8_10 s>> 0x20)) s>> 0x20)) s>> 0x20
    r14 += 0x20
while (rbp - 2 u< 0x10)

int32_t rdx_38

if (arg3 == 0)
    int32_t var_78[0x4]
    int32_t var_48[0x4]
    
    if (&var_78 u> arg1 + 0x3c || &var_48[3] u< arg1)
        int32_t zmm0[0x4] = *arg1
        int32_t zmm1[0x4] = arg1[1]
        int32_t temp0_1[0x4] = _mm_add_epi32(zmm0, zmm0)
        int32_t temp0_2[0x4] = _mm_add_epi32(zmm1, zmm1)
        var_78 = temp0_1
        zmm0 = arg1[2]
        int32_t var_68_1[0x4] = temp0_2
        zmm1 = arg1[3]
        int32_t var_58_1[0x4] = _mm_add_epi32(zmm0, zmm0)
        var_48 = _mm_add_epi32(zmm1, zmm1)
    else
        int64_t i_2 = 0x10
        int128_t* rcx_40 = &var_78
        int64_t i_1
        
        do
            int32_t rax_3 = *(arg1 - &var_78 + rcx_40)
            rcx_40 += 4
            *(rcx_40 - 4) = rax_3 * 2
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    sub_14293f960(&var_78)
    sub_14296d7f0(&var_78)
    rdx_38 = (var_78[0] & 1) - 1
else
    rdx_38 = -1

__security_check_cookie(rax_1 ^ &var_98)
return zx.q(neg.d((rbx - 1).d u>> 0x1f & not.d(rbx.d) u>> 0x1f))
    & zx.q(((rdi - 1).d u>> 0x1f & not.d(rdi.d) u>> 0x1f) - 1) & zx.q(rdx_38)
