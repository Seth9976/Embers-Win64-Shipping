// 函数: sub_1413c9a30
// 地址: 0x1413c9a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
memset(&var_4a8, 0, 0x480)
int64_t r8 = *arg1
int64_t var_28 = 0
sub_1413bd780(&var_4a8, &arg1[3], r8)
int64_t r12 = *(arg1[2] + 0x51e8)
void*** rdx_3
void* rbp
int64_t i_2

if (*(arg1 + 0x34) != 2)
    int32_t r14_1 = *(arg1 + 0x2c)
    int32_t r15_1 = arg1[5].d
    rbp = sub_140790e00(&arg1[3])
    rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rdi_2 = *(arg1[2] + 0x51f0)
    void* rcx_8 = &rdx_3[0x96]
    
    if (rcx_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x4b8)
        rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_8 = &rdx_3[0x96]
    
    *(arg2 + 0x30) = rcx_8
    i_2 = 9
    void**** rax_6 = *(arg2 + 8)
    void* rcx_10 = &var_4a8
    *(arg2 + 0x14) += 1
    *rax_6 = rdx_3
    *(arg2 + 8) = &rdx_3[1]
    rdx_3[1] = 0
    *rdx_3 = &data_142f51dd0
    void* rax_8 = &rdx_3[4]
    rdx_3[2] = rdi_2
    rdx_3[3] = r12
    int64_t i
    
    do
        rax_8 += 0x80
        int128_t zmm0_2 = *rcx_10
        rcx_10 += 0x80
        *(rax_8 - 0x80) = zmm0_2
        *(rax_8 - 0x70) = *(rcx_10 - 0x70)
        *(rax_8 - 0x60) = *(rcx_10 - 0x60)
        *(rax_8 - 0x50) = *(rcx_10 - 0x50)
        *(rax_8 - 0x40) = *(rcx_10 - 0x40)
        *(rax_8 - 0x30) = *(rcx_10 - 0x30)
        *(rax_8 - 0x20) = *(rcx_10 - 0x20)
        *(rax_8 - 0x10) = *(rcx_10 - 0x10)
        i = i_2
        i_2 -= 1
    while (i != 1)
    rdx_3[0x95].d = r15_1
    *(rdx_3 + 0x4ac) = r14_1
else
    int32_t r14 = arg1[6].d
    rbp = sub_140790e00(&arg1[3])
    rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rdi_1 = *(arg1[2] + 0x51f0)
    void* rcx_4 = &rdx_3[0x96]
    
    if (rcx_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x4b8)
        rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_4 = &rdx_3[0x96]
    
    *(arg2 + 0x30) = rcx_4
    i_2 = 9
    void** rax_2 = *(arg2 + 8)
    void* rcx_6 = &rdx_3[4]
    *(arg2 + 0x14) += 1
    *rax_2 = rdx_3
    *(arg2 + 8) = &rdx_3[1]
    rdx_3[1] = 0
    *rdx_3 = &data_142f51dd0
    void* rax_4 = &var_4a8
    rdx_3[2] = rdi_1
    rdx_3[3] = r12
    int64_t i_1
    
    do
        rcx_6 += 0x80
        int128_t zmm0_1 = *rax_4
        rax_4 += 0x80
        *(rcx_6 - 0x80) = zmm0_1
        *(rcx_6 - 0x70) = *(rax_4 - 0x70)
        *(rcx_6 - 0x60) = *(rax_4 - 0x60)
        *(rcx_6 - 0x50) = *(rax_4 - 0x50)
        *(rcx_6 - 0x40) = *(rax_4 - 0x40)
        *(rcx_6 - 0x30) = *(rax_4 - 0x30)
        *(rcx_6 - 0x20) = *(rax_4 - 0x20)
        *(rcx_6 - 0x10) = *(rax_4 - 0x10)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rdx_3[0x95].d = r14
    *(rdx_3 + 0x4ac) = 1

rdx_3[0x94] = rbp
return sub_1405d1550(&var_28, rdx_3, i_2)
