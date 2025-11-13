// 函数: sub_1408905f0
// 地址: 0x1408905f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x11a) u<= 0
int32_t r13 = arg4
int64_t r12 = *(arg2 + 0x1b0)
int64_t r14 = *(arg3 + 0x10)
int64_t arg_18 = r12

if (not(cond:0))
    uint32_t rsi_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    int64_t* rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d99560
    rcx_2[2] = r12
    rcx_2[3].d = rsi_1
    rcx_2[4] = r14

uint64_t rsi_2 = zx.q(*(arg1 + 0x120))

if (rsi_2.d u>= 4)
    rsi_2 = 4

if (rsi_2.d != 0)
    uint32_t rax_4 = zx.d(*(arg1 + 0x11e))
    uint32_t rax_5 = zx.d(*(arg1 + 0x11c))
    int64_t rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_6 = rdi_3 + rsi_2
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rsi_2 + 0x10).d)
        rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_6 = rdi_3 + rsi_2
    
    *(arg2 + 0x30) = rax_6
    memcpy(rdi_3, &arg3[6], rsi_2.d)
    void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_10[6]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_10[6]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r13 = arg4
    *rax_8 = rcx_10
    *(arg2 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    *rcx_10 = &data_142d99550
    rcx_10[4].d = rax_5
    *(rcx_10 + 0x24) = rax_4
    rcx_10[2] = r12
    rcx_10[3] = rdi_3
    rcx_10[5].d = rsi_2.d

int64_t rsi_3 = *(arg3 + 0x20)

if (*(arg1 + 0x124) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x122))
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_16[5]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_16[5]
    
    *(arg2 + 0x30) = rax_12
    void**** rax_13 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_13 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    *rcx_16 = &data_142d99560
    rcx_16[2] = r12
    rcx_16[3].d = r14_1
    rcx_16[4] = rsi_3

int32_t var_68 = *arg3
int32_t var_64 = arg3[0xa]
int64_t var_60 = 0
sub_14077c870(arg2, &arg_18, arg1 + 0x126, &var_68, 0)
int32_t var_54 = arg5
uint32_t var_50 = zx.d(arg3[1].b)
int32_t var_4c = arg3[2]
int32_t var_58 = r13
sub_14077c870(arg2, &arg_18, arg1 + 0x12c, &var_58, 0)
sub_14077c870(arg2, &arg_18, arg1 + 0x132, arg6, 0)
sub_14077c5f0(arg2, &arg_18, arg1 + 0x138, &arg3[0xb], 0)
return sub_14077c5f0(arg2, &arg_18, arg1 + 0x13e, &arg3[0xe], 0)
