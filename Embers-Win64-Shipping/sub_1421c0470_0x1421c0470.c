// 函数: sub_1421c0470
// 地址: 0x1421c0470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
char result = *(arg2 + 0x28)

if ((result & 1) != 0)
    if (*(arg2 + 0x40) s< 0x173)
        int32_t var_10_1 = 0
        sub_1421b0a00(arg1)
        void* const rbx_1 = *(arg1 + 0x88)
        void* rax
        int64_t rax_1
        void* rdx
        
        if (rbx_1 != 0)
            rax = sub_14249f580()
            rdx = *(rbx_1 + 0x10)
            rax_1 = sx.q(*(rax + 0x38))
        
        if (rbx_1 == 0 || rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
            rbx_1 = nullptr
        
        *(rbx_1 + 0x30) |= 2
        __builtin_memset(rbx_1 + 0x38, 0, 0x18)
        result = *(arg2 + 0x28)
    
    if ((result & 1) != 0 && *(arg2 + 0x40) s< 0x1df)
        *(arg1 + 0x94) &= 0xfb

return result
