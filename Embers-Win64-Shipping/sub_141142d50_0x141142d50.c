// 函数: sub_141142d50
// 地址: 0x141142d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t r15 = *(arg2 + 0x1b0)
int64_t arg_8 = r15
sub_140741e30(arg2, &arg_8, arg1 + 0x118, &arg_20, 0)

if (*(arg1 + 0x120) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x11e))
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
    rcx_3[4] = arg5
    *rcx_3 = &data_142d99560
    rcx_3[2] = r15
    rcx_3[3].d = r14_1

if (*(arg1 + 0x124) u> 0)
    uint32_t r14_2 = zx.d(*(arg1 + 0x122))
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_9[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    rcx_9[4] = arg6
    *rcx_9 = &data_142d99560
    rcx_9[2] = r15
    rcx_9[3].d = r14_2

int32_t rax_9 = data_143f3d918
char var_30 = 1
return sub_14107ee50(arg1 + 0x126, arg2, &arg_8, *(arg3 + 0x18c8), *(arg3 + 0x18b4), 
    (data_143f3dab0).d, rax_9, rax_9, 1)
