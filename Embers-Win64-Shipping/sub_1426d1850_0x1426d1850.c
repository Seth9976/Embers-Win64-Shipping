// 函数: sub_1426d1850
// 地址: 0x1426d1850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2

if (arg2 == 0)
    rbx = nullptr
else
    void* rax_1 = sub_142736ba0()
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx = nullptr

sub_1426dff30(arg1, rbx)
return arg1
