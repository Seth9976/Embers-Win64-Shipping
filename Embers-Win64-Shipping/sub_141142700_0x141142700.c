// 函数: sub_141142700
// 地址: 0x141142700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t r14 = *(arg2 + 0x1b0)
int64_t arg_8 = r14
sub_140741e30(arg2, &arg_8, arg1 + 0x118, &arg_20, 0)

if (*(arg1 + 0x120) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x11e))
    void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_3[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_3[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_3
    *(arg2 + 8) = &rcx_3[1]
    rcx_3[1] = 0
    rcx_3[3].d = r15_1
    rcx_3[4] = arg5
    *rcx_3 = &data_142d99560
    rcx_3[2] = r14

int32_t rax_5 = data_143f3d918
char var_40 = 1
uint64_t result = sub_14107ee50(arg1 + 0x122, arg2, &arg_8, *(arg3 + 0x18c8), *(arg3 + 0x18b4), 
    (data_143f3dab0).d, rax_5, rax_5, 1)

if (*(arg1 + 0x148) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x146))
    void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_10[5]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_10[5]
    
    *(arg2 + 0x30) = rax_8
    void**** rax_9 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_9 = rcx_10
    *(arg2 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    result = arg6
    rcx_10[4] = result
    *rcx_10 = &data_142d99560
    rcx_10[2] = r14
    rcx_10[3].d = rbp_1

if (*(arg1 + 0x14c) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x14a))
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_16[5]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_16[5]
    
    *(arg2 + 0x30) = rax_11
    void**** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    result = arg7
    rcx_16[4] = result
    *rcx_16 = &data_142d99560
    rcx_16[2] = r14
    rcx_16[3].d = rsi_1

return result
