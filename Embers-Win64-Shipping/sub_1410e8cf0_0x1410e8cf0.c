// 函数: sub_1410e8cf0
// 地址: 0x1410e8cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1b0)
sub_1410809a0(arg1, arg2, r12, *(arg3 + 0x10))
int32_t zmm0 = sub_1422e5e20(arg3)
uint64_t rbp = zx.q(*(arg1 + 0x11c))
int32_t arg_8 = zmm0

if (rbp.d u>= 4)
    rbp = 4

if (rbp.d != 0)
    uint32_t rax_1 = zx.d(*(arg1 + 0x118))
    uint32_t r13_1 = zx.d(*(arg1 + 0x11a))
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_2 = rbx_3 + rbp
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = rbx_3 + rbp
    
    *(arg2 + 0x30) = rax_2
    memcpy(rbx_3, &arg_8, rbp.d)
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_5[6]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_5[6]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    *rcx_5 = &data_142d99550
    rcx_5[4].d = rax_1
    rcx_5[2] = r12
    rcx_5[3] = rbx_3
    *(rcx_5 + 0x24) = r13_1
    rcx_5[5].d = rbp.d

uint64_t rbp_1 = zx.q(*(arg1 + 0x122))
int32_t var_48 = arg5
int32_t var_44 = arg6
uint32_t var_40 = zx.d(arg7)
uint64_t result = 0x10
int32_t var_3c = 0

if (rbp_1.d u>= 0x10)
    rbp_1 = 0x10

if (rbp_1.d != 0)
    uint32_t r13_2 = zx.d(*(arg1 + 0x120))
    int64_t rbx_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg7.d = zx.d(*(arg1 + 0x11e))
    int64_t rax_11 = rbx_8 + rbp_1
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp_1 + 0x10).d)
        rbx_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_11 = rbx_8 + rbp_1
    
    *(arg2 + 0x30) = rax_11
    memcpy(rbx_8, &var_48, rbp_1.d)
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_13[6]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_13[6]
    
    *(arg2 + 0x30) = rax_12
    void**** rax_13 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_13 = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142d99550
    result = zx.q(arg7.d)
    rcx_13[4].d = result.d
    rcx_13[2] = r12
    rcx_13[3] = rbx_8
    *(rcx_13 + 0x24) = r13_2
    rcx_13[5].d = rbp_1.d

if (*(arg1 + 0x126) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x124))
    void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_19[5]
    
    if (rax_15 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_19[5]
    
    *(arg2 + 0x30) = rax_15
    void**** rax_16 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_16 = rcx_19
    *(arg2 + 8) = &rcx_19[1]
    rcx_19[1] = 0
    *rcx_19 = &data_142da77d8
    result = arg4
    rcx_19[4] = result
    rcx_19[2] = r12
    rcx_19[3].d = rsi_1

return result
