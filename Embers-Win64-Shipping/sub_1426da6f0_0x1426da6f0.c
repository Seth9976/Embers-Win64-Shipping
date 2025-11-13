// 函数: sub_1426da6f0
// 地址: 0x1426da6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = arg1

if (arg1 != 0)
    void* rax_1 = sub_14255d000()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        result = *(result + 0x258)
    
    if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
            || result != 0)
        void* rax_4 = sub_1427249f0()
        void* rdx_2 = *(result + 0x10)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
            return result

return nullptr
