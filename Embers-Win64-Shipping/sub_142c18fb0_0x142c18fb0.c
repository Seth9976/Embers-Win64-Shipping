// 函数: sub_142c18fb0
// 地址: 0x142c18fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax_6 = *(arg1 + 0x28)
int64_t r8 = *(rax_6 + 0x10)
*(arg1 + 8) = r8
int64_t rcx_1 = zx.q(*(rax_6 + 0x18)) + r8
*(arg1 + 0x10) = rcx_1

if (arg2 != 0)
    if (arg2 u>= r8 && rcx_1 u> arg2)
        *(arg1 + 8) = arg2
        uint64_t rcx_8 =
            (((((zx.q(*arg2) << 8) + zx.q(arg2[1])) << 8) + zx.q(arg2[2])) << 8) + zx.q(arg2[3])
        uint64_t rax_4 = *(arg1 + 0x10) - arg2
        
        if (rax_4 u>= rcx_8)
            rax_4 = rcx_8
        
        void* rax_5 = &arg2[rax_4]
        *(arg1 + 0x10) = rax_5
        return rax_5
    
    rax_6 = nullptr
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = 0

return rax_6
