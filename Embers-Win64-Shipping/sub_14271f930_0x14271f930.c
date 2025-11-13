// 函数: sub_14271f930
// 地址: 0x14271f930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) == 0)
    void* const rdi_1 = *(arg1 + 0x20)
    
    if (rdi_1 == 0)
        rdi_1 = nullptr
    else
        void* rax_1 = sub_142724fa0()
        void* rdx_1 = *(rdi_1 + 0x10)
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            rdi_1 = nullptr
        else
            uint64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) != rax_1 + 0x30)
                rdi_1 = nullptr
    
    *(arg1 + 0x38) = rdi_1

float zmm0 = *(arg1 + 0x158)
*(arg1 + 0x15c) = zmm0 * zmm0
return result
