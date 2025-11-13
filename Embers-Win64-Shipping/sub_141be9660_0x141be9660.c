// 函数: sub_141be9660
// 地址: 0x141be9660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2

if (arg2 == 0)
    rbx = nullptr
else
    void* rax_1 = sub_141a77be0()
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx = nullptr

int64_t result
result.b = rbx == sub_141c038f0()
return result
