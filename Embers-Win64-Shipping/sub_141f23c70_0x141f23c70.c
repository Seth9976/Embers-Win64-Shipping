// 函数: sub_141f23c70
// 地址: 0x141f23c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = *(arg1 + 0xb0)
int64_t result = sub_141ef3930(arg1, arg2)

if ((arg2[5].b & 1) != 0)
    *(arg1 + 0xb0) = rdi
    
    if (rdi == 0)
        rdi = nullptr
    else
        void* rax = sub_142577430()
        void* rdx = *(rdi + 0x10)
        result = sx.q(*(rax + 0x38))
        
        if (result.d s> *(rdx + 0x38))
            rdi = nullptr
        else
            int64_t result_1 = result
            result = *(rdx + 0x30)
            
            if (*(result + (result_1 << 3)) != rax + 0x30)
                rdi = nullptr
    
    *(arg1 + 0xb8) = rdi

return result
