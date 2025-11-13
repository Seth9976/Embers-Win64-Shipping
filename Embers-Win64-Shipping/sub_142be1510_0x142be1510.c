// 函数: sub_142be1510
// 地址: 0x142be1510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x460) = 0
*(arg1 + 0x468) = 0
*(arg1 + 0x470) = 0
int32_t arg_8
int32_t rbx_1

if ((*(arg1 + 0x2a0))(arg3, 0x43424c43, arg2, &arg_8) != 0)
    int32_t rax_1 = (*(arg1 + 0x2a0))(arg1, 0x45424c43, arg2, &arg_8)
    
    if (rax_1 == 0)
    label_142be159c:
        *(arg1 + 0x46c) = 1
        
        if (rax_1 != 0)
            goto label_142be15ba
    else
        rax_1 = (*(arg1 + 0x2a0))(arg1, 0x626c6f63, arg2, &arg_8)
        
        if (rax_1 == 0)
            goto label_142be159c
        
    label_142be15ba:
        int32_t rax_2 = (*(arg1 + 0x2a0))(arg1, 0x73626978, arg2, &arg_8)
        rbx_1 = rax_2
        
        if (rax_2 != 0)
            goto label_142be17d4
        
        *(arg1 + 0x46c) = 3
else
    *(arg1 + 0x46c) = 2

if (arg_8 u< 8)
label_142be17cc:
    rbx_1 = 3
label_142be17d4:
    
    if (*(arg1 + 0x460) != 0)
        sub_142b97020(arg2, arg1 + 0x460)
    
    *(arg1 + 0x468) = 0
    return zx.q(rbx_1)

int32_t rax_3 = sub_1408e52d0(arg2)
int32_t rcx_4 = *(arg1 + 0x46c)

if (rcx_4 == 0)
    goto label_142be16d1

int32_t r8_5

if (rcx_4 u<= 2)
    int32_t rax_13 = sub_142b96670(arg2, arg_8, arg1 + 0x460)
    rbx_1 = rax_13
    
    if (rax_13 != 0)
        goto label_142be17d4
    
    char* rcx_15 = *(arg1 + 0x460)
    r8_5 = arg_8
    *(arg1 + 0x468) = r8_5
    uint32_t r9_10 =
        ((zx.d(*rcx_15) << 8 | zx.d(rcx_15[1])) << 8 | zx.d(rcx_15[2])) << 8 | zx.d(rcx_15[3])
    uint64_t rdx_10 = zx.q(((zx.d(rcx_15[4]) << 8 | zx.d(rcx_15[5])) << 8 | zx.d(rcx_15[6])) << 8)
        | zx.q(rcx_15[7])
    int32_t rcx_17 = r9_10 & 0xffff0000
    uint32_t rax_20
    
    if (rcx_17 != 0x20000)
        rax_20 = zx.d(r9_10.w)
    
    if (rcx_17 != 0x20000 && rax_20 != 0x200 && rcx_17 != 0x30000 && rax_20 != 0x300)
        rbx_1 = 2
        goto label_142be17d4
    
    if (rdx_10.d u>= 0x10000)
        goto label_142be17cc
    
    if (((rdx_10 * 3).d << 4) + 8 u> r8_5)
        rdx_10 = zx.q((r8_5 - 8) u/ 0x30)
    
    *(arg1 + 0x470) = rdx_10.d
else
    if (rcx_4 != 3)
        goto label_142be16d1
    
    int32_t rax_4 = sub_142b96500(arg2, rcx_4 + 5)
    rbx_1 = rax_4
    
    if (rax_4 != 0)
        goto label_142be17d4
    
    uint16_t rax_5 = sub_142b967c0(arg2)
    uint16_t rax_6 = sub_142b967c0(arg2)
    uint64_t rbp_1 = zx.q(sub_142b96720(arg2))
    sub_142b96620(arg2)
    
    if (rax_5 u< 1)
        rbx_1 = 2
        goto label_142be17d4
    
    if ((0xfffd & (rax_6 - 1)) != 0 || rbp_1.d u>= 0x10000)
        goto label_142be17cc
    
    int32_t rcx_10 = arg_8
    
    if (((rbp_1 << 2) + 8).d u> rcx_10)
        rbp_1 = zx.q((rcx_10 - 8) u>> 2)
    
    int32_t rax_10 = sub_142b97060(arg2, sub_1408e52d0(arg2) - 8, arg4)
    rbx_1 = rax_10
    
    if (rax_10 != 0)
        goto label_142be17d4
    
    int32_t rdx_2 = ((rbp_1 << 2) + 8).d
    *(arg1 + 0x468) = rdx_2
    int32_t rax_11 = sub_142b96670(arg2, rdx_2, arg1 + 0x460)
    rbx_1 = rax_11
    
    if (rax_11 != 0)
        goto label_142be17d4
    
    *(arg1 + 0x470) = rbp_1.d
label_142be16d1:
    r8_5 = arg_8

int32_t rax_12 = *(arg1 + 0x46c)
*(arg1 + 0x4c8) = 0

if (rax_12 == 3)
    *(arg1 + 0x4c8) = rax_3
    *(arg1 + 0x4cc) = r8_5
else
    int32_t arg_18
    
    if (rax_12 != 0)
        if ((*(arg1 + 0x2a0))(arg1, 0x43424454, arg2, &arg_18) == 0)
            *(arg1 + 0x4c8) = sub_1408e52d0(arg2)
            *(arg1 + 0x4cc) = arg_18
        else if ((*(arg1 + 0x2a0))(arg1, 0x45424454, arg2, &arg_18) == 0)
            *(arg1 + 0x4c8) = sub_1408e52d0(arg2)
            *(arg1 + 0x4cc) = arg_18
        else if ((*(arg1 + 0x2a0))(arg1, 0x62646174, arg2, &arg_18) == 0)
            *(arg1 + 0x4c8) = sub_1408e52d0(arg2)
            *(arg1 + 0x4cc) = arg_18

if (*(arg1 + 0x4cc) == 0)
    *(arg1 + 0x470) = 0

return 0
