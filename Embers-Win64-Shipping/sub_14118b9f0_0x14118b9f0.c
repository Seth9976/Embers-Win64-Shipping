// 函数: sub_14118b9f0
// 地址: 0x14118b9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11_1 = arg4[3] - arg4[1]
int32_t r9_1 = arg4[2] - *arg4
void* r13 = *arg1
int32_t* rax_1
int32_t rcx
int32_t rdx

if (arg3 == 0)
    rcx = *arg2
    int32_t var_a4
    rax_1 = &var_a4
    rdx = arg2[1]
    int32_t var_a0_1 = rdx
    int32_t var_9c_1 = rcx
    var_a4 = 1
else
    rcx = *arg2
    int32_t var_b0
    rax_1 = &var_b0
    rdx = arg2[1]
    int32_t var_a8_1 = rdx
    var_b0 = 0
    int32_t var_ac_1 = rcx

int32_t rax_2 = rax_1[2]
int64_t var_d0 = *rax_1
int32_t var_c8 = rax_2
int32_t* rax_3

if (arg3 == 0)
    int32_t var_8c = 0
    rax_3 = &var_8c
    int32_t var_88_1 = rcx
    int32_t var_84_1 = rdx
else
    int32_t var_98 = 1
    rax_3 = &var_98
    int32_t var_94_1 = rdx
    int32_t var_90_1 = rcx

int32_t rax_5 = rax_3[2] + 2
int64_t var_c0 = *rax_3
int32_t var_b8 = rax_5
int64_t rax_7

if (arg3 == 0)
    int32_t arg_24 = rdx + 2
    rax_7 = r9_1.q
else
    int32_t arg_c = r11_1
    rax_7 = (rcx + 2).q

int64_t* arg_30
int64_t* r14 = arg_30
int64_t* arg_38
int64_t* rsi = arg_38
int64_t var_60 = rax_7
uint32_t rax_10 = (var_d0 u>> 0x20).d
int64_t var_d8 = 0
int64_t var_68 = 0
int32_t* var_e8
int64_t r15

if (rax_10 u> 0x1000)
    int32_t var_74 = 0x7f7fffff
    int32_t var_70_1 = 0xff7fffff
    int32_t var_6c_1 = 0
    r15.b = sub_1411931e0(arg1, &var_d0, arg4, arg5, rsi, r14, &var_74) != 0
else
    int64_t* rcx_2 = rsi[2]
    int32_t var_80 = 0x7f7fffff
    int32_t var_78_1 = 0
    int32_t var_7c_1 = 0xff7fffff
    arg_30 = rcx_2
    
    if (rcx_2 != 0)
        rcx_2[1].d += 1
    
    arg_38 = rcx_2
    
    if (rcx_2 != 0)
        rcx_2[1].d += 1
    
    var_e8 = &var_80
    sub_14118a380(arg1, &var_d0, arg5, arg4, &arg_38, &var_68)
    sub_1405d1550(&arg_30)
    r15.b = 1

int64_t rax_12 = r14[2]
int64_t* rdi_2 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_6 = &rdi_2[1]

if (rcx_6 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x10)
    rdi_2 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_6 = &rdi_2[1]

*(r13 + 0x30) = rcx_6
*rdi_2 = rax_12
void*** rcx_10 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_10[6]

if (rax_13 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x38)
    rcx_10 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_10[6]

*(r13 + 0x30) = rax_13
*(r13 + 0x14) += 1
**(r13 + 8) = rcx_10
*(r13 + 8) = &rcx_10[1]
rcx_10[3] = rdi_2
rcx_10[1] = 0
*rcx_10 = &data_142da7798
rcx_10[2].d = 1
rcx_10[4].d = 2
*(rcx_10 + 0x24) = 3
rcx_10[5] = 0
int64_t rax_16 = rsi[2]
int64_t* rdi_7 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_14 = &rdi_7[1]

if (rcx_14 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x10)
    rdi_7 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_14 = &rdi_7[1]

*(r13 + 0x30) = rcx_14
*rdi_7 = rax_16
void*** rcx_18 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_18[6]

if (rax_17 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x38)
    rcx_18 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_18[6]

*(r13 + 0x30) = rax_17
void**** rax_18 = *(r13 + 8)
*(r13 + 0x14) += 1
bool cond:0 = var_c0:4.d u> 0x1000
*rax_18 = rcx_18
*(r13 + 8) = &rcx_18[1]
rcx_18[1] = 0
rcx_18[3] = rdi_7
*rcx_18 = &data_142da7798
rcx_18[2].d = 1
rcx_18[4].d = 2
*(rcx_18 + 0x24) = 3
rcx_18[5] = 0

if (cond:0)
    if (r15.b != 0)
        var_e8.b = 0
        
        if (sub_141192aa0(arg1, &var_c0, &var_68, &rsi[1], r14, rsi) != 0)
            return 1
else if (r15.b != 0)
    void* rcx_22 = r14[2]
    void* var_48 = rcx_22
    
    if (rcx_22 != 0)
        *(rcx_22 + 8) += 1
    
    void* var_50 = rcx_22
    
    if (rcx_22 != 0)
        *(rcx_22 + 8) += 1
    
    void** var_f8_2 = &var_50
    sub_141189970(arg1, &var_c0, &rsi[1], &var_68)
    sub_1405d1550(&var_48)
    return 1

return 0
