// 函数: sub_142c648f0
// 地址: 0x142c648f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t arg_8 = 0x38
int64_t r14

if (sub_142c53090(*(rdi + 0xc0), 1) == 0 || *arg1[0xf4] != 1)
    r14.b = 0
else
    r14.b = 1

int32_t rdx
rdx.b = arg2 == arg1[0x48]
*arg5 = 0

if (r14.b == 0)
    *(rdi + 0x598)
label_142c649d0:
    int32_t* var_28_1 = &arg_8
    int64_t rax_5 = arg1[zx.q(rdx) + 0x4c](arg1)
    
    if (rax_5 s< 0)
        return zx.q(arg_8)
    
    if (r14.b != 0)
        memcpy(arg3, arg1[0x9f], rax_5.d)
        arg1[0xa1] = rax_5
        arg1[0xa0] = rax_5
    
    *arg5 += rax_5
else
    int64_t rcx_1 = arg1[0xa0]
    int64_t rdi_1 = arg4
    int64_t rax_3 = arg1[0xa1] - rcx_1
    
    if (rax_3 u< arg4)
        rdi_1 = rax_3
    
    if (rdi_1 == 0)
        goto label_142c649d0
    
    memcpy(arg3, arg1[0x9f] + rcx_1, rdi_1.d)
    arg1[0xa0] += rdi_1
    *(arg1 + 0x409) = 0
    *arg5 = rdi_1

return 0
