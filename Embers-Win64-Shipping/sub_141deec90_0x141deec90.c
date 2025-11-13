// 函数: sub_141deec90
// 地址: 0x141deec90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ea8a50(arg1, arg2)
void* rbx = arg1

if (arg1 != 0)
    void* rax_1
    int64_t rax_2
    void* rdx_1
    
    do
        sub_141e29460(rbx + 0x438, arg2)
        rbx = *(rbx + 0x40)
        
        if (rbx == 0)
            break
        
        rax_1 = sub_142458800()
        rdx_1 = *(rbx + 0x10)
        rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38))
            break
    while (*(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)

return sub_141dee0f0(arg1, arg2) __tailcall
