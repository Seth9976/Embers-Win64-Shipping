// 函数: sub_14281c0e0
// 地址: 0x14281c0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_14281c208(arg1) != 0)
    void* rdi_1 = *arg1
    int32_t rax_1 = sub_14281b6d0(*(rdi_1 + 0x28))
    int64_t rbx
    rbx.b = rax_1 == 1
    int32_t rax_2 = sub_14281e710(rdi_1)
    int32_t rax_3 = sub_14281fe58(arg2, *(*arg1 + 0x2c), rax_2, rbx.b)
    
    if (rax_3 == 3 || arg2[2] u> 0x400)
        sub_14281eea4(*arg1, 0x22, 0)
    
    sub_14281b79c(arg1, 2)
    
    if (rax_3 == 0)
        sub_14281f344(&arg1[1], arg2)
    else if (rax_3 == 1)
        sub_14282253c(&arg1[1], arg2)
    else if (rax_3 == 2)
        sub_142822300(&arg1[1], arg2, rax_1)
    else if (rax_3 == 3)
        void* rax_4 = *arg1
        sub_142822464(&arg1[1], arg2, *(rax_4 + 0xc8) + *(rax_4 + 0x48))
    
    sub_14281bb0c(arg1)

return arg1
