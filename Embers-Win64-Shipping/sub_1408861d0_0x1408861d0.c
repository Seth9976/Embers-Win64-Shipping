// 函数: sub_1408861d0
// 地址: 0x1408861d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
uint32_t rax_1 = *(arg4 + 0x18) u>> 2
uint32_t arg_10 = rax_1
*(arg2 + 0x1b0) = arg3
sub_14198aa60(arg3)
void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_3[3]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_3[3]

*(arg2 + 0x30) = rax_4
int64_t* rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_3
*(arg2 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142dd5b40
rcx_3[2] = arg3
int64_t rbp = *(arg4 + 8)

if (*(arg1 + 0x11a) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_9[5]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    *rcx_9 = &data_142da77d8
    rcx_9[2] = arg3
    rcx_9[3].d = rsi_1
    rcx_9[4] = rbp

uint64_t rsi_2 = zx.q(*(arg1 + 0x120))

if (rsi_2.d u>= 4)
    rsi_2 = 4

if (rsi_2.d != 0)
    uint32_t rax_10 = zx.d(*(arg1 + 0x11c))
    uint32_t r13_1 = zx.d(*(arg1 + 0x11e))
    int64_t rbp_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_11 = rsi_2 + rbp_3
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rsi_2 + 0x10).d)
        rbp_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_11 = rsi_2 + rbp_3
    
    *(arg2 + 0x30) = rax_11
    void arg_28
    memcpy(rbp_3, &arg_28, rsi_2.d)
    void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_17[6]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_17[6]
    
    *(arg2 + 0x30) = rax_12
    void**** rax_13 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_13 = rcx_17
    *(arg2 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    *rcx_17 = &data_142d99550
    *(rcx_17 + 0x24) = r13_1
    rcx_17[4].d = rax_10
    rcx_17[2] = arg3
    rcx_17[3] = rbp_3
    rcx_17[5].d = rsi_2.d

sub_140741e30(arg2, &arg_18, arg1 + 0x122, &arg_10, 0)
void* result = sub_1419cd1c0(arg2, arg1, (rax_1 + 0x3f) u>> 6, 1, 1)

if (*(arg1 + 0x11a) u> 0)
    uint32_t rsi_3 = zx.d(*(arg1 + 0x118))
    void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_16 = &rcx_25[5]
    
    if (rax_16 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_16 = &rcx_25[5]
    
    *(arg2 + 0x30) = rax_16
    void**** rax_17 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_17 = rcx_25
    result = &rcx_25[1]
    *(arg2 + 8) = result
    *result = 0
    *rcx_25 = &data_142da77d8
    rcx_25[2] = arg3
    rcx_25[3].d = rsi_3
    rcx_25[4] = 0

return result
