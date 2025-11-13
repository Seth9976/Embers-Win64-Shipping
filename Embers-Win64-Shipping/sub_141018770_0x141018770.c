// 函数: sub_141018770
// 地址: 0x141018770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t arg_10 = arg2
void* var_50
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(data_1439c7a08)]), &var_50, 
    &data_143f13280, 0)
void* r15 = var_50
void* r14 = nullptr

if (r15 != 0)
    int64_t rdx_1 = sx.q(*(r15 + 0x10c))
    void* var_48
    int64_t* rbx_1 = *(var_48 + 0x10)
    int64_t r14_1 = rdx_1 << 3
    int64_t rax_3 = rbx_1[3]
    
    if (*(r14_1 + rax_3) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_3 = rbx_1[3]
    
    r14 = *(r14_1 + rax_3)

*(arg1 + 0x1b0) = r14
sub_14198aa60(r14)
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_6[3]

if (rax_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_6[3]

*(arg1 + 0x30) = rax_4
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_6
*(arg1 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = r14
uint64_t rbp = zx.q(*(r15 + 0x11c))

if (rbp.d u>= 4)
    rbp = 4

uint32_t arg_8

if (rbp.d != 0)
    uint32_t r13_1 = zx.d(*(r15 + 0x11a))
    int64_t rsi_3 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg_8 = zx.d(*(r15 + 0x118))
    int64_t rax_8 = rsi_3 + rbp
    
    if (rax_8 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, (rbp + 0x10).d)
        rsi_3 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_8 = rsi_3 + rbp
    
    *(arg1 + 0x30) = rax_8
    memcpy(rsi_3, &arg_10, rbp.d)
    void*** rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_14[6]
    
    if (rax_9 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_14[6]
    
    *(arg1 + 0x30) = rax_9
    void**** rax_10 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_10 = rcx_14
    *(arg1 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142d99550
    rcx_14[4].d = arg_8
    rcx_14[2] = r14
    rcx_14[3] = rsi_3
    *(rcx_14 + 0x24) = r13_1
    rcx_14[5].d = rbp.d

uint64_t rbp_1 = zx.q(*(r15 + 0x122))

if (rbp_1.d u>= 4)
    rbp_1 = 4

if (rbp_1.d != 0)
    uint32_t r13_2 = zx.d(*(r15 + 0x120))
    int64_t rsi_8 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg_8 = zx.d(*(r15 + 0x11e))
    int64_t rax_14 = rsi_8 + rbp_1
    
    if (rax_14 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, (rbp_1 + 0x10).d)
        rsi_8 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_14 = rsi_8 + rbp_1
    
    *(arg1 + 0x30) = rax_14
    memcpy(rsi_8, &arg_18, rbp_1.d)
    void*** rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_22[6]
    
    if (rax_15 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_22[6]
    
    *(arg1 + 0x30) = rax_15
    void** rax_16 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_16 = rcx_22
    *(arg1 + 8) = &rcx_22[1]
    rcx_22[1] = 0
    *rcx_22 = &data_142d99550
    rcx_22[4].d = arg_8
    rcx_22[2] = r14
    rcx_22[3] = rsi_8
    *(rcx_22 + 0x24) = r13_2
    rcx_22[5].d = rbp_1.d

void* arg_30
void* rsi_11 = arg_30
arg_8.b = 1
void* var_58 = r14
(*rsi_11)(*(rsi_11 + 8), &var_58, r15 + 0x124, r15 + 0x128, &arg_8)
void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint32_t rbp_4 = (arg_10 + 0x3f) u>> 6
void* rax_19 = &rcx_29[4]

if (rax_19 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rcx_29[4]

*(arg1 + 0x30) = rax_19
void**** rax_20 = *(arg1 + 8)
*(arg1 + 0x14) += 1
arg_30.b = 0
arg_8.q = r14
*rax_20 = rcx_29
*(arg1 + 8) = &rcx_29[1]
rcx_29[1] = 0
*rcx_29 = &data_142ef57a8
rcx_29[2].d = rbp_4
*(rcx_29 + 0x14) = 1
rcx_29[3].d = 1
return (*rsi_11)(*(rsi_11 + 8), &arg_8, r15 + 0x124, r15 + 0x128, &arg_30)
