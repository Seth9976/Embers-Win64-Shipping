// 函数: sub_14066e140
// 地址: 0x14066e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x28)
int32_t arg_8
sub_14062d6e0(rsi, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rcx_1 = *rsi + rax * 0x28
    int64_t* rax_2 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rax_2 = nullptr
    
    if (rax_2 != 0)
        void* rax_3 = *rax_2
        
        if (rax_3 != 0 && *(rax_3 + 8) == 3)
            return zx.q(int.d(sub_140b75280(*(arg1 + 0x28), arg2)))

return 0
