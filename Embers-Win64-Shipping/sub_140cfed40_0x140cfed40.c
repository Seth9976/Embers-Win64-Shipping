// 函数: sub_140cfed40
// 地址: 0x140cfed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t arg_8
sub_140865c40(arg1, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rdx_1

if (rax.d == 0xffffffff)
    rdx_1 = nullptr
else
    rdx_1 = *arg1 + rax * 0x18

int64_t* rax_2 = rdx_1 + 8

if (rdx_1 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return *rax_2

int64_t* result_2 = j_sub_140a82f30(0xb0)
int64_t* result_1 = result_2

if (result_2 == 0)
    result_1 = nullptr
else
    __builtin_memset(result_2, 0, 0x18)
    int64_t* rcx = &result_2[3]
    rcx[2] = 0
    rcx[3].d = 0
    *(rcx + 0x1c) = 0x80
    int64_t* rax_4 = rcx[2]
    
    if (rax_4 != 0)
        rcx = rax_4
    
    *rcx = 0
    rcx[1] = 0
    void* rcx_1 = &result_1[0xd]
    result_1[7].d = 0xffffffff
    *(result_1 + 0x3c) = 0
    result_1[9] = 0
    result_1[0xa].d = 0
    result_1[0xb] = 0
    result_1[0xc] = 0
    *(rcx_1 + 0x1c) = 0x80
    void* rax_5 = *(rcx_1 + 0x10)
    
    if (rax_5 != 0)
        rcx_1 = rax_5
    
    __builtin_memset(rcx_1, 0, 0x1c)
    result_1[0x11].d = 0xffffffff
    *(result_1 + 0x8c) = 0
    result_1[0x13] = 0
    result_1[0x14].d = 0
    result_1[0x15].d = 0

int64_t rax_6 = arg_10
int64_t* result = result_1
*result_1 = rax_6
int64_t* var_18 = &arg_10
void** var_10 = &result
sub_140bd2cc0(arg1, &arg_8, &var_18, nullptr)
return result
