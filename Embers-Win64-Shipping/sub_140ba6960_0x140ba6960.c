// 函数: sub_140ba6960
// 地址: 0x140ba6960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t* rdi_1 = sx.q(arg3) * 0x38 + *arg4
int32_t r8 = rdi_1[1].d

if (r8 s< 0)
    int32_t arg_18
    sub_140ba6960(&arg_18, arg5, zx.q(not.d(r8)))
    void* rdi_2 = *(arg2 + 0x2e0)
    int64_t var_28 = *rdi_1
    int32_t var_20_1 = arg_18
    int32_t arg_8
    sub_140ba6e00(rdi_2 + 0x3a0, &arg_8, &var_28)
    int64_t rax_3 = sx.q(arg_8)
    void* const rcx_2
    
    if (rax_3.d == 0xffffffff)
        rcx_2 = nullptr
    else
        rcx_2 = *(rdi_2 + 0x3a0) + rax_3 * 0x18
    
    int32_t* rax_5 = rcx_2 + 0xc
    
    if (rcx_2 == 0)
        rax_5 = nullptr
    
    if (rax_5 != 0)
        *arg1 = *rax_5

return arg1
