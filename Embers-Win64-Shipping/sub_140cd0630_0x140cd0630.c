// 函数: sub_140cd0630
// 地址: 0x140cd0630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 8)
void* rcx_1 = rax
void* rax_1

if (rax == 0)
    rax_1 = sub_140cd04d0(arg1, arg2, arg3)
    rcx_1 = rax_1

if (rax != 0 || rax_1 != 0)
    int32_t rax_2 = *(arg1 + 0x18)
    
    if (rax_2 != 0)
        void* result = sub_140caa600(rcx_1, *(*(arg1 + 0x10) + (sx.q(rax_2 - 1) << 3)))
        
        if (result == 0 || rax_2 - 1 s<= 0)
            return result
        
        *(arg1 + 0x10)
        jump(*(*result + 0x48))

return nullptr
