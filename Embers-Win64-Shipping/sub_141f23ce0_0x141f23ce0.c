// 函数: sub_141f23ce0
// 地址: 0x141f23ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0x130)
void* const rbx = *(arg1 + 0xb0)
sub_141ef3930(arg1, arg2)
char result = arg2[5].b

if ((result & 1) != 0)
    *(arg1 + 0xb0) = rbx
    void* rax
    int64_t rax_1
    void* rdx
    
    if (rbx != 0)
        rax = sub_142577430()
        rdx = *(rbx + 0x10)
        rax_1 = sx.q(*(rax + 0x38))
    
    if (rbx == 0 || rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
        rbx = nullptr
    
    *(arg1 + 0xb8) = rbx
    result = arg2[5].b
    
    if ((result & 1) != 0)
        *(arg1 + 0x130) = rbp

return result
