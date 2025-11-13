// 函数: sub_140baeee0
// 地址: 0x140baeee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount

if (*(arg1 + 0x110) != 3)
    QueryPerformanceCounter(&performanceCount)
    int64_t* rcx_22 = *(arg1 + 0x90)
    bool cond:1 = (*(*rcx_22 + 0x18))(rcx_22) == 0
    int32_t rax_12 = data_143e1a334
    int32_t rbx_2
    
    if (cond:1)
        if (rax_12 s>= 0)
            rbx_2 = 5
            
            if (rax_12 s< 5)
                rbx_2 = rax_12
        else
            rbx_2 = 0
    else if (rax_12 s>= 0)
        int32_t rbx_3 = 5
        
        if (rax_12 s< 5)
            rbx_3 = rax_12
        
        rbx_2 = rbx_3 | 0x100
    else
        rbx_2 = 0x100
    
    int64_t* rcx_23 = *(arg1 + 0x90)
    return (*(*rcx_23 + 0x10))(rcx_23, arg2 - *(arg1 + 0x108), arg3, zx.q(rbx_2), arg4, 0)

*(arg1 + 0x108) = *(arg1 + 0x100)
int64_t var_48
int64_t* rax_1 = sub_140b18720(&var_48, arg1 + 0x160, 0)
int16_t* rcx_1 = *rax_1
int32_t rdx_1 = rax_1[1].d
int32_t rdx_2 = neg.d(rdx_1)
*rax_1 = 0
int32_t r8 = rax_1[1].d
int16_t* var_58 = rcx_1
int32_t rcx_2 = *(rax_1 + 0xc)
int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 6 + r8
int32_t var_4c = rcx_2
rax_1[1] = 0

if (rdx_5 s> rcx_2)
    sub_1405947f0(&var_58, rdx_5)

int32_t rbx = 5
sub_140a20ba0(&var_58, u".uexp", 5)
int64_t rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

QueryPerformanceCounter(&performanceCount)
int64_t* rax_2 = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rdx_6 = &data_142d40450
int16_t* r12 = var_58
int64_t r8_1 = *rax_2

if (r8 != 0)
    rdx_6 = r12

int64_t* rax_3 = (*(r8_1 + 0x118))(rax_2, rdx_6, r8_1)
QueryPerformanceCounter(&performanceCount)
int64_t rdx_7 = *rax_3

if ((*(rdx_7 + 0x18))(rax_3, rdx_7) == 0)
    int32_t rax_5 = data_143e1a334
    
    if (rax_5 s< 0)
        rbx = 0
    else if (rax_5 s< 5)
        rbx = rax_5
else
    int32_t rcx_10 = data_143e1a334
    
    if (rcx_10 s>= 0)
        if (rcx_10 s< 5)
            rbx = rcx_10
        
        rbx |= 0x100
    else
        rbx = 0x100

int64_t result = (*(*rax_3 + 0x10))(rax_3, arg2 - *(arg1 + 0x108), arg3, zx.q(rbx), arg4, 0)
sub_140ba8e10(arg1)
int64_t* rcx_14 = *(arg1 + 0x90)

if (rcx_14 != 0)
    int64_t r8_3 = *rcx_14
    (*r8_3)(rcx_14, 1, r8_3)

*(arg1 + 0x90) = rax_3

if (arg1 + 0x160 != &var_48)
    int32_t r8_4 = *(arg1 + 0x16c)
    *(arg1 + 0x168) = r8
    
    if (r8 != 0 || r8_4 != 0)
        sub_1405a4c70(arg1 + 0x160, r8, r8_4)
        memcpy(*(arg1 + 0x160), r12, r8 * 2)
    else
        *(arg1 + 0x16c) = 0

sub_140ba8c30(arg1)
int64_t* rcx_18 = *(arg1 + 0x90)
void* rax_8 = (*(*rcx_18 + 8))(rcx_18, 0)
*(arg1 + 0x98) = rax_8

if (*(rax_8 + 0x61) != 0)
    sub_140bbce60(arg1)

if (r12 != 0)
    sub_140a74f90(r12)

return result
