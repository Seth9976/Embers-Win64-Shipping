// 函数: sub_14214e9e0
// 地址: 0x14214e9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t rax_1 = zx.q(*(arg1 + 8) u>> 4)

if ((rax_1.b & 1) == 0)
    rax_1 = j_sub_140a82f30(0x58)
    
    if (rax_1 != 0)
        void* rax_2 = sub_142137b30(rax_1)
        *(arg1 + 0x68) = rax_2
        return rax_2
    
    *(arg1 + 0x68) = rax_1

return rax_1
