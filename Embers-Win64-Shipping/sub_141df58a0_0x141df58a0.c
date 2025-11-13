// 函数: sub_141df58a0
// 地址: 0x141df58a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax = *arg2

if (rax != 0)
    return rax

void* rbx_1 = *arg3

if (*(rbx_1 + 0x78) != rax)
    void* rax_1 = sub_14245f6d0()
    
    if (rax_1 != 0)
        void* const rdx = *(rbx_1 + 0x78)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            return rdx

return nullptr
