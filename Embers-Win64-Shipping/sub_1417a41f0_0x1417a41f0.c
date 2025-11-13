// 函数: sub_1417a41f0
// 地址: 0x1417a41f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg2

if (arg2 == 0)
    return arg2

do
    int64_t* rdi_1 = *arg1
    int32_t arg_10
    sub_1417ae200(rdi_1, &arg_10, i)
    int64_t rax_1 = sx.q(arg_10)
    void* const rcx_3
    
    if (rax_1.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = (rax_1 << 5) + *rdi_1
    
    if (*(rcx_3 + 8) == i)
        break
    
    int32_t arg_18
    sub_1417ae200(rdi_1, &arg_18, i)
    int64_t rax_2 = sx.q(arg_18)
    void* const rbx_2
    
    if (rax_2.d == 0xffffffff)
        rbx_2 = nullptr
    else
        rbx_2 = (rax_2 << 5) + *rdi_1
    
    int32_t arg_20
    sub_1417ae200(rdi_1, &arg_20, *(rbx_2 + 8))
    int64_t rax_3 = sx.q(arg_20)
    void* const rcx_8
    
    if (rax_3.d == 0xffffffff)
        rcx_8 = nullptr
    else
        rcx_8 = (rax_3 << 5) + *rdi_1
    
    *(rbx_2 + 8) = *(rcx_8 + 8)
    i = *(rcx_8 + 8)
while (i != 0)

return i
