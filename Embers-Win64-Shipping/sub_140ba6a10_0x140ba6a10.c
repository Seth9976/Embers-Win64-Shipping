// 函数: sub_140ba6a10
// 地址: 0x140ba6a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg3 + 0x20)
*arg1 = 0

if (r8 != 0)
    int32_t arg_8
    sub_140ba6a10(&arg_8)
    void* rdi_1 = *(arg2 + 0x2e0)
    int64_t var_28 = *(arg3 + 0x18)
    int32_t var_20_1 = arg_8
    int32_t arg_18
    sub_140ba6e00(rdi_1 + 0x3a0, &arg_18, &var_28)
    int64_t rax_3 = sx.q(arg_18)
    void* const rcx_2
    
    if (rax_3.d == 0xffffffff)
        rcx_2 = nullptr
    else
        rcx_2 = *(rdi_1 + 0x3a0) + rax_3 * 0x18
    
    int32_t* rax_5 = rcx_2 + 0xc
    
    if (rcx_2 == 0)
        rax_5 = nullptr
    
    if (rax_5 != 0)
        *arg1 = *rax_5

return arg1
