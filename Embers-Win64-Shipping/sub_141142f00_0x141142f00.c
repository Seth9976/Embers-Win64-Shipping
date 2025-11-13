// 函数: sub_141142f00
// 地址: 0x141142f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t r14 = *(arg2 + 0x1b0)
int64_t arg_8 = r14
sub_140741e30(arg2, &arg_8, arg1 + 0x118, &arg_20, 0)

if (*(arg1 + 0x120) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x11e))
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
    rcx_3[2] = r14
    rcx_3[3].d = rbp_1

if (*(arg1 + 0x124) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x122))
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
    rcx_9[2] = r14
    rcx_9[3].d = rbp_2

void* rdx_1 = data_143a2dd48
char var_30 = 1
uint64_t result = sub_14107ee50(arg1 + 0x126, arg2, &arg_8, 
    *(arg3 + (sx.q(*(arg3 + 0x18d0)) << 3) + 0x18b8), *(arg3 + 0x18b0), rdx_1.d, *(rdx_1 + 0x60), 
    *(rdx_1 + 0x64), (*(rdx_1 + 0x68)).b)
return result
