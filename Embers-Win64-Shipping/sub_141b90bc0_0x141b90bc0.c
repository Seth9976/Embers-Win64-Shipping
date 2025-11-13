// 函数: sub_141b90bc0
// 地址: 0x141b90bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f30f60(arg1, arg2)
void* const rdx

if (*(arg1 + 0xa8) == 0)
    rdx = nullptr
else
    void* rax_1 = sub_141c122a0()
    
    if (rax_1 == 0)
        rdx = nullptr
    else
        rdx = *(arg1 + 0xa8)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx = nullptr

int64_t rax_4 = *arg2
void* const arg_8 = rdx
(*(rax_4 + 0x38))(arg2, &arg_8, 0, 0)
return (*(*arg2 + 0x38))(arg2, arg1 + 0xb0, 0, 0)
