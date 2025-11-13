// 函数: sub_14271f850
// 地址: 0x14271f850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) == 0)
    void* const rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_1 = sub_142724fa0()
        void* rdx_1 = *(rbx_1 + 0x10)
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            rbx_1 = nullptr
        else
            uint64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) != rax_1 + 0x30)
                rbx_1 = nullptr
    
    *(arg1 + 0x38) = rbx_1

return result
