// 函数: sub_141e48000
// 地址: 0x141e48000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg2[1]
int64_t rcx = *rdx
int32_t arg_8
bool cond:2

if (rcx + 4 u> rdx[1])
    int32_t rax_2
    rax_2.b = arg2[0xe] != 0
    arg_8 = rax_2
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    cond:2 = arg_8 != 0
else
    cond:2 = *rcx != 0
    *rdx = rcx + 4

int64_t* rcx_2 = arg2[1]
int64_t r14
r14.b = cond:2
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u<= rcx_2[1])
    *arg1 = *rdx_2
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1, 4)

int64_t* rcx_4 = arg2[1]
int32_t* r8 = *rcx_4
uint64_t result

if (&r8[1] u<= rcx_4[1])
    arg1[1] = *r8
    result = arg2[1]
    *result += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    result = sub_140b54070(arg2, &arg1[1], arg5)
else
    result = (*(*arg2 + 0x150))(arg2, &arg1[1], 4)

if (r14.b == 0)
    return result

char var_108
int32_t var_100

if (arg4 == 0)
    uint64_t* rcx_7
    
    if ((arg2[5].b & 1) == 0)
        rcx_7 = *(arg1 + 8)
    else
        uint64_t* rax_11 = j_sub_140a82f30(zx.q(arg4 + 0x70))
        rcx_7 = rax_11
        
        if (rax_11 == 0)
            rcx_7 = nullptr
            *(arg1 + 8) = 0
        else
            __builtin_memset(rax_11, 0, 0x6c)
            *(arg1 + 8) = rax_11
    
    char var_f0_1 = 0
    var_100.q = *(arg3 + 0xc8)
    var_108.q = *(arg3 + 0x38)
    return sub_141e0c0a0(rcx_7, arg2, 0, arg3, arg5, var_108, var_100, (*(arg3 + 0xd0)).b)

sub_140bd0790(&arg1[4], 0x400)

if ((arg2[5].b & 2) != 0)
    void* rax_15 = *(arg1 + 8)
    int64_t var_e8 = 0
    int32_t var_dc_1 = 0
    int64_t* rcx_9 = *(rax_15 + 0x50)
    int32_t rax_17 = (*(*rcx_9 + 0x18))(rcx_9)
    uint32_t count = 0
    
    if (rax_17 s> var_dc_1)
        sub_1405c5510(&var_e8, rax_17)
    
    arg_8.q = 0
    void** const var_d8
    memset(&var_d8, 0, 0x90)
    sub_140b4c2a0(&var_d8)
    int64_t var_48_1 = 0
    var_d8 = &data_142d6ad48
    int64_t* var_40_1 = &var_e8
    int64_t var_38_1 = 0
    sub_140b552b0(&var_d8, 1)
    int64_t rdx_8
    rdx_8.b = 1
    var_d8[0x1b](&var_d8, rdx_8)
    char var_f0_2 = 0
    var_100.q = *(arg3 + 0xc8)
    var_108.q = *(arg3 + 0x38)
    sub_141e0c0a0(*(arg1 + 8), &var_d8, 0, arg3, arg5, var_108, var_100, (*(arg3 + 0xd0)).b)
    sub_140bcb6b0(&arg1[4], 2)
    memcpy(sub_140bce470(&arg1[4], sx.q(count)), var_e8, count)
    sub_140bd1d40(&arg1[4])
    arg5 = sub_140b4cb40(&var_d8)
    int64_t rcx_21 = var_e8
    
    if (rcx_21 != 0)
        arg5 = sub_140a74f90(rcx_21)

int32_t var_100_1 = 1
return sub_140bcfa90(&arg1[4], arg2, arg3, arg5, arg4.b, 0)
