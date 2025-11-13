// 函数: sub_14066ee70
// 地址: 0x14066ee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x28)
int32_t arg_8
sub_14062d6e0(r14, &arg_8, arg3)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    *arg2 = 0
    arg2[1] = 0
else
    void* rcx_1 = *r14 + rax * 0x28
    int64_t* rax_2 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rax_2 = nullptr
    
    if (rax_2 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        void* rax_3 = *rax_2
        
        if (rax_3 == 0 || *(rax_3 + 8) != 2)
            *arg2 = 0
            arg2[1] = 0
        else
            sub_140b75430(*(arg1 + 0x28), arg2, arg3)

return arg2
