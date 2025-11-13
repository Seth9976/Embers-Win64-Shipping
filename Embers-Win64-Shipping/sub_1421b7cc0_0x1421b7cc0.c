// 函数: sub_1421b7cc0
// 地址: 0x1421b7cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x100)

if (rbx != 0)
    void* rdi_1 = *(arg1 + 0x10)
    int32_t arg_8
    sub_140865c40(rdi_1 + 0x100, &arg_8, arg2)
    int64_t rax_1 = sx.q(arg_8)
    void* const rcx_1
    
    if (rax_1.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(rdi_1 + 0x100) + rax_1 * 0x18
    
    int32_t* rax_3 = rcx_1 + 8
    
    if (rcx_1 == 0)
        rax_3 = nullptr
    
    if (rax_3 != 0)
        return zx.q(*rax_3) + rbx

return 0
