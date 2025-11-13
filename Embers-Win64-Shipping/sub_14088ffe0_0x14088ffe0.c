// 函数: sub_14088ffe0
// 地址: 0x14088ffe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 0x118))
uint32_t count = zx.d(*(arg1 + 0x11c))
int64_t r12 = *(arg2 + 0x1b0)
int64_t rsi_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
uint32_t r13 = zx.d(*(arg1 + 0x11a))
int64_t count_4 = sx.q(count)
int64_t rax_1 = count_4 + rsi_2

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, count + 0x10)
    rsi_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_1 = count_4 + rsi_2

*(arg2 + 0x30) = rax_1
memcpy(rsi_2, arg7, count)
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_4[6]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_4[6]

*(arg2 + 0x30) = rax_2
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d99550
rcx_4[4].d = rax
rcx_4[5].d = count
rcx_4[2] = r12
rcx_4[3] = rsi_2
*(rcx_4 + 0x24) = r13
uint64_t r14 = zx.q(*(arg1 + 0x122))

if (r14.d u>= 0x40)
    r14 = 0x40

if (r14.d != 0)
    uint32_t rax_6 = zx.d(*(arg1 + 0x11e))
    uint32_t r13_1 = zx.d(*(arg1 + 0x120))
    int64_t rsi_7 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_7 = r14 + rsi_7
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (r14 + 0x10).d)
        rsi_7 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_7 = r14 + rsi_7
    
    *(arg2 + 0x30) = rax_7
    memcpy(rsi_7, arg8, r14.d)
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_12[6]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_12[6]
    
    *(arg2 + 0x30) = rax_8
    void**** rax_9 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_9 = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_142d99550
    rcx_12[4].d = rax_6
    rcx_12[2] = r12
    rcx_12[3] = rsi_7
    *(rcx_12 + 0x24) = r13_1
    rcx_12[5].d = r14.d

uint32_t rsi_10 = zx.d(*(arg1 + 0x128))
void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_18[5]

if (rax_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_18[5]

*(arg2 + 0x30) = rax_12
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_18
*(arg2 + 8) = &rcx_18[1]
rcx_18[1] = 0
*rcx_18 = &data_142d99560
rcx_18[3].d = rsi_10
rcx_18[4] = arg4
rcx_18[2] = r12
uint32_t rax_16 = zx.d(*(arg1 + 0x12c))
uint32_t count_1 = zx.d(*(arg1 + 0x130))
uint32_t r13_2 = zx.d(*(arg1 + 0x12e))
int64_t rsi_13 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
int64_t count_5 = sx.q(count_1)
int64_t rax_17 = count_5 + rsi_13

if (rax_17 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, count_1 + 0x10)
    rsi_13 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_17 = count_5 + rsi_13

*(arg2 + 0x30) = rax_17
void arg_28
memcpy(rsi_13, &arg_28, count_1)
void*** rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_26[6]

if (rax_18 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_26[6]

*(arg2 + 0x30) = rax_18
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_26
*(arg2 + 8) = &rcx_26[1]
rcx_26[1] = 0
*rcx_26 = &data_142d99550
rcx_26[3] = rsi_13
rcx_26[4].d = rax_16
rcx_26[2] = r12
*(rcx_26 + 0x24) = r13_2
rcx_26[5].d = count_1
uint32_t rax_22 = zx.d(*(arg1 + 0x132))
uint32_t count_2 = zx.d(*(arg1 + 0x136))
uint32_t r13_3 = zx.d(*(arg1 + 0x134))
int64_t rsi_18 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
int64_t count_6 = sx.q(count_2)
int64_t rax_23 = count_6 + rsi_18

if (rax_23 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, count_2 + 0x10)
    rsi_18 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_23 = count_6 + rsi_18

*(arg2 + 0x30) = rax_23
void arg_30
memcpy(rsi_18, &arg_30, count_2)
void*** rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rcx_34[6]

if (rax_24 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_34[6]

*(arg2 + 0x30) = rax_24
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_34
*(arg2 + 8) = &rcx_34[1]
rcx_34[1] = 0
*rcx_34 = &data_142d99550
rcx_34[4].d = rax_22
rcx_34[3] = rsi_18
rcx_34[2] = r12
*(rcx_34 + 0x24) = r13_3
rcx_34[5].d = count_2
uint32_t count_3 = zx.d(*(arg1 + 0x13c))
uint32_t r13_4 = zx.d(*(arg1 + 0x13a))
int64_t rsi_23 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
uint32_t var_48 = arg3
int32_t var_44 = arg5
uint32_t rax_30 = zx.d(*(arg1 + 0x138))
int64_t count_7 = sx.q(count_3)
int64_t var_40 = 0
int64_t rax_31 = count_7 + rsi_23

if (rax_31 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, count_3 + 0x10)
    rsi_23 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_31 = count_7 + rsi_23

*(arg2 + 0x30) = rax_31
memcpy(rsi_23, &var_48, count_3)
void*** rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_32 = &rcx_42[6]

if (rax_32 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_32 = &rcx_42[6]

*(arg2 + 0x30) = rax_32
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_42
*(arg2 + 8) = &rcx_42[1]
rcx_42[1] = 0
*rcx_42 = &data_142d99550
rcx_42[4].d = rax_30
rcx_42[2] = r12
rcx_42[3] = rsi_23
*(rcx_42 + 0x24) = r13_4
rcx_42[5].d = count_3
uint32_t rsi_26 = zx.d(*(arg1 + 0x13e))
void*** rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_36 = &rcx_48[5]

if (rax_36 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_36 = &rcx_48[5]

*(arg2 + 0x30) = rax_36
void**** rax_37 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_37 = rcx_48
*(arg2 + 8) = &rcx_48[1]
rcx_48[1] = 0
*rcx_48 = &data_142d99560
int64_t result = arg6
rcx_48[4] = result
rcx_48[2] = r12
rcx_48[3].d = rsi_26

if (*(arg1 + 0x126) u> 0)
    uint32_t rsi_27 = zx.d(*(arg1 + 0x124))
    void*** rcx_54 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_39 = &rcx_54[5]
    
    if (rax_39 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_54 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_39 = &rcx_54[5]
    
    *(arg2 + 0x30) = rax_39
    int64_t* rax_40 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_40 = rcx_54
    *(arg2 + 8) = &rcx_54[1]
    rcx_54[1] = 0
    *rcx_54 = &data_142da77d8
    result = arg9
    rcx_54[4] = result
    rcx_54[2] = r12
    rcx_54[3].d = rsi_27

return result
