// 函数: sub_141942520
// 地址: 0x141942520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg3 == 0)
    return 

(*(*arg2 + 0x48))(arg2)

if (data_143f01c92 != 0)
    sub_140a80f40()

void* rax_3 = (*(*arg2 + 0x48))(arg2)
int64_t rdx = *arg3
void* r13_1 = rax_3
void* var_48 = rax_3
(*(rdx + 0x48))(arg3, rdx)

if (data_143f01c92 != 0)
    sub_140a80f40()

int64_t rdx_1 = *arg3
void* const* rax = (*(rdx_1 + 0x48))(arg3, rdx_1)
void* const* var_40 = rax
void* const* r15_1 = rax

if (r13_1 == rax)
    return 

int64_t rdx_2 = *arg2
int64_t rax_4 = (*(rdx_2 + 0x20))(arg2, rdx_2)
int64_t rdx_3 = *arg3
int64_t r14
r14.b = rax_4 != 0
int64_t rax_5 = (*(rdx_3 + 0x20))(arg3, rdx_3)
void* r12_1 = nullptr
int32_t rax_6

if (rax_5 == 0)
    rax_6 = 0
else
    rax_6 = *arg4

int32_t rbp_1 = 1

if (rax_5 != 0)
    rbp_1 = 6

int32_t rbp_3 = rbp_1 * arg4[0xb] + rax_6
int32_t var_54 = rbp_3
int32_t rcx_7

if (r14.b == 0)
    rcx_7 = 0
else
    rcx_7 = *arg4

int32_t rax_7 = 1
int32_t rdx_4 = arg4[4]

if (r14.b != 0)
    rax_7 = 6

int32_t var_5c_1 = rdx_4
int32_t r8 = arg4[1]
int32_t var_70_1 = r8
int32_t rax_9 = rax_7 * arg4[0xa] + rcx_7
int32_t rcx_8 = arg4[2]
int32_t var_6c = rax_9
int32_t rax_10 = arg4[3]
int32_t var_58_1 = rcx_8
int32_t var_78_1 = rax_10
int32_t r14_1

if (rax_10 != r8 || rdx_4 != rcx_8)
    r14_1 = arg4[9]
else
    var_70_1 = 0
    var_58_1 = 0
    int32_t rax_11 = sub_14190d820(arg2)
    int32_t rax_12 = sub_14190d8b0(arg2)
    r14_1 = arg4[9]
    char rcx_11 = r14_1.b
    int32_t r8_2 = rax_11 s>> rcx_11
    
    if (r8_2 s<= 1)
        r8_2 = 1
    
    int32_t rdx_6 = rax_12 s>> rcx_11
    var_78_1 = r8_2
    
    if (rdx_6 s<= 1)
        rdx_6 = 1
    
    var_5c_1 = rdx_6

int32_t r11_1 = arg4[5]
int32_t r10_1 = arg4[7]
int32_t r9 = arg4[6]
int32_t rdx_7 = arg4[8]
int32_t var_60_1 = r11_1
int32_t var_64_1 = r9
int32_t var_74_1 = r10_1
int32_t var_50_1 = rdx_7

if (r10_1 == r11_1 && rdx_7 == r9)
    var_60_1 = 0
    var_64_1 = 0
    int32_t rax_13 = sub_14190d820(arg3)
    int32_t rax_14 = sub_14190d8b0(arg3)
    r14_1 = arg4[9]
    char rcx_14 = r14_1.b
    r9 = 0
    r10_1 = rax_13 s>> rcx_14
    r11_1 = 0
    
    if (r10_1 s<= 1)
        r10_1 = 1
    
    rdx_7 = rax_14 s>> rcx_14
    var_74_1 = r10_1
    
    if (rdx_7 s<= 1)
        rdx_7 = 1
    
    var_50_1 = rdx_7

void* rcx_18 = arg1

if (*(rcx_18 + 0x15be8) != 0)
    void* rax_15 = *(rcx_18 + 0x15c00)
    
    if (rax_15 != 0)
        *(rax_15 + 0x10) += 1
        r14_1 = arg4[9]

bool cond:3_1 = arg2[7].d u> 1
int32_t var_68 = r14_1

if (cond:3_1 || arg3[7].d u> 1 || *(arg2 + 0x3c) != *(arg3 + 0x3c))
    goto label_14194286d

int32_t rdx_10 = var_78_1 - var_70_1
int32_t rcx_16 = var_5c_1 - var_58_1

if (rdx_10 != r10_1 - r11_1 || rcx_16 != rdx_7 - r9 || rdx_10 s<= 0 || rcx_16 s<= 0
        || data_143efbce2 == 0)
    rcx_18 = arg1
label_14194286d:
    int32_t rax_22 = *(r13_1 + 0x1c)
    int32_t* var_d8_2
    void* const* var_d0_1
    int32_t arg_10
    int32_t rax_24
    void* rbx_3
    
    if (rax_22 == 0x821a || rax_22 == 0x8d00)
        rbx_3 = rcx_18 - 0x18
        arg_10.b = 0
        var_6c = sub_14193c970(rbx_3, 0, nullptr, nullptr, 0, r13_1)
        var_d8_2 = nullptr
        rax_24 = sub_14193c970(rbx_3, 0, nullptr, nullptr, 0, r15_1)
    else
        rbx_3 = rcx_18 - 0x18
        arg_10.b = 1
        var_6c = sub_14193c970(rbx_3, 1, &var_48, &var_6c, &var_68, nullptr)
        var_d0_1 = nullptr
        rax_24 = sub_14193c970(rbx_3, 1, &var_40, &var_54, &var_68, nullptr)
        r13_1 = var_48
        r15_1 = var_40
        rbp_3 = var_54
        r14_1 = var_68
    
    data_143f000f8(0x8ca9, zx.q(rax_24))
    int32_t rbx_5 = sbb.d(rbx_3.d, rbx_3.d, arg_10.b != 0) & 0x8ce0
    data_143eff9f8(zx.q(rbx_5))
    data_143f000f8(0x8ca8, zx.q(var_6c))
    data_143effae0(zx.q(rbx_5))
    int32_t rax_27
    
    if (arg_10.b == 0)
        rax_27 = 0x500
        
        if (*(r13_1 + 0x1c) == 0x8d00)
            rax_27 = 0x100
    else
        rax_27 = 0x4000
    
    var_d0_1.d = var_64_1
    var_d8_2.d = var_60_1
    data_143f00150(zx.q(var_70_1), zx.q(var_58_1), zx.q(var_78_1), zx.q(var_5c_1), var_d8_2, 
        var_d0_1, var_74_1, var_50_1, rax_27, 0x2600)
else
    int64_t var_d0
    var_d0.d = rax_9
    int64_t var_d8
    var_d8.d = var_58_1
    data_143f00340(zx.q(*(r13_1 + 0x10)), zx.q(*(r13_1 + 0x14)), zx.q(r14_1), zx.q(var_70_1), 
        var_d8, var_d0, r15_1[2].d, *(r15_1 + 0x14), r14_1, r11_1, r9, rbp_3, rdx_10, rcx_16, 1)

int64_t rax_33
int32_t rdx_15
rax_33, rdx_15 = (*(*arg3 + 8))(arg3)

if (rax_33 != 0 && (arg3[8].d & 0x40005) == 0x40000 && arg3[7].d u<= 1)
    rdx_15 = arg4[1]
    int32_t rcx_27
    
    if (rdx_15 s>= 0)
        rcx_27 = arg4[2]
    
    if (rdx_15 s< 0 || rcx_27 s< 0 || arg4[3] - rdx_15 s<= 0 || arg4[4] - rcx_27 s<= 0)
        if (r15_1 != 0)
            r12_1 = &r15_1[-0xe]
        
        sub_14194c250(r12_1, r14_1, rbp_3)

rdx_15.b = 1
sub_14190d690(arg1 - 0x18, rdx_15.b)[0x31].d = 0xffffffff
