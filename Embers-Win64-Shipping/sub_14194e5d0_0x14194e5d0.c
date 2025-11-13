// 函数: sub_14194e5d0
// 地址: 0x14194e5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t* var_78 = nullptr
int32_t var_6c = 0
int64_t* var_68
int64_t* var_58

if (*arg1 != 0 || arg1[1] != 0 || arg1[2].d != 0)
    int64_t var_48
    int64_t* rax_3 = sub_14088a900(arg1, &var_48)
    var_58 = rax_3
    int32_t rdx_7 = 0
    int64_t* r14_2 = nullptr
    var_68 = nullptr
    int32_t var_60_1 = 0
    int32_t r13_2 = 0
    int32_t rcx_12 = rax_3[1].d
    int32_t var_5c_1 = 0
    int32_t rbx_3 = rcx_12 - 1
    
    if (rcx_12 == 0)
        rbx_3 = 0
    
    if (rbx_3 + 0xb s> 0)
        sub_1405947f0(&var_68, rbx_3 + 0xb)
        rdx_7 = var_60_1
        r13_2 = var_5c_1
        r14_2 = var_68
    
    int32_t r12_3 = rbx_3 + 0xb + rdx_7
    
    if (r12_3 s> r13_2)
        sub_140594770(&var_68)
        r13_2 = var_5c_1
        r14_2 = var_68
    
    int64_t* rdx_9 = var_58
    int64_t rbx_4 = sx.q(rbx_3)
    __builtin_memcpy(r14_2, u"Program V_", 0x14)
    memcpy(r14_2 + 0x14, *rdx_9, rbx_4.d * 2)
    *(r14_2 + (rbx_4 << 1) + 0x14) = 0
    int64_t* rcx_16 = var_78
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = var_48
    var_78 = r14_2
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int64_t* rax_5 = sub_14088a900(arg1 + 0x14, &var_48)
    var_68 = nullptr
    int32_t rdx_12 = 0
    int64_t* r14_3 = nullptr
    int32_t var_60_3 = 0
    int32_t rcx_19 = rax_5[1].d
    int32_t rbx_5 = rcx_19 - 1
    int32_t rcx_20 = 0
    
    if (rcx_19 == 0)
        rbx_5 = 0
    
    int32_t var_5c_2 = 0
    
    if (rbx_5 + 4 s> 0)
        sub_1405947f0(&var_68, rbx_5 + 4)
        rcx_20 = var_5c_2
        rdx_12 = var_60_3
        r14_3 = var_68
    
    int32_t r15_4 = rbx_5 + 4 + rdx_12
    
    if (r15_4 s> rcx_20)
        sub_140594770(&var_68)
        r14_3 = var_68
    
    *r14_3 = 0x50005f
    *(r14_3 + 4) = 0x5f
    int64_t rbx_6 = sx.q(rbx_5)
    memcpy(r14_3 + 6, *rax_5, rbx_6.d * 2)
    *(r14_3 + (rbx_6 << 1) + 6) = 0
    
    if (r15_4 != 0)
        rsi = r15_4 - 1
    
    sub_140a20ba0(&var_78, r14_3, rsi)
    
    if (r14_3 != 0)
        sub_140a74f90(r14_3)
    
    int64_t rcx_26 = var_48
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    *arg2 = var_78
    arg2[1].d = r12_3
    *(arg2 + 0xc) = r13_2
else if (*(arg1 + 0x64) != 0 || *(arg1 + 0x6c) != 0 || *(arg1 + 0x74) != 0)
    int64_t* rax_1 = sub_14088a900(arg1 + 0x64, &var_68)
    var_58 = nullptr
    int32_t rdx_3 = 0
    int32_t var_4c_1 = 0
    int64_t* r14_1 = nullptr
    int32_t var_50_1 = 0
    int32_t rcx_6 = rax_1[1].d
    int32_t r12_1 = 0
    int32_t rbx_1 = rcx_6 - 1
    
    if (rcx_6 == 0)
        rbx_1 = 0
    
    if (rbx_1 + 0xb s> 0)
        sub_1405947f0(&var_58, rbx_1 + 0xb)
        rdx_3 = var_50_1
        r12_1 = var_4c_1
        r14_1 = var_58
    
    int32_t r15_2 = rbx_1 + 0xb + rdx_3
    
    if (r15_2 s> r12_1)
        sub_140594770(&var_58)
        r12_1 = var_4c_1
        r14_1 = var_58
    
    int64_t rbx_2 = sx.q(rbx_1)
    __builtin_memcpy(r14_1, u"Program C_", 0x14)
    memcpy(r14_1 + 0x14, *rax_1, rbx_2.d * 2)
    *(r14_1 + (rbx_2 << 1) + 0x14) = 0
    int64_t* rcx_10 = var_78
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t* rcx_11 = var_68
    var_78 = r14_1
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
        r14_1 = var_78
    
    *arg2 = r14_1
    arg2[1].d = r15_2
    *(arg2 + 0xc) = r12_1
else
    int32_t var_70 = 0
    sub_1405947f0(&var_78, 0x17)
    
    if (var_70 + 0x17 s> var_6c)
        sub_140594770(&var_78)
    
    int64_t* rdx_1 = var_78
    __builtin_memcpy(rdx_1, u"Program with uns", 0x20)
    rdx_1[4] = 0x6b002000740065
    rdx_1[5].d = 0x790065
    *(rdx_1 + 0x2c) = 0
    *arg2 = var_78
    arg2[1].d = var_70 + 0x17
    *(arg2 + 0xc) = var_6c
return arg2
