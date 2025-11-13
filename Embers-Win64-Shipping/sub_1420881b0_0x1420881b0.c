// 函数: sub_1420881b0
// 地址: 0x1420881b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()

if (rax_1 != 0)
    void* rbx_1 = *(rax_1 + 0x188)
    void* rbx_2
    
    if (rbx_1 == 0)
        rbx_2 = *(rax_1 + 0x300)
    else
        rbx_2 = *(rbx_1 + 0xc0)
    
    if (sub_1423dce10(rbx_2, &arg1[0x58]) != 0)
        sub_1423e60e0(rbx_2, arg1[0x58])
    
    arg1[0x58] = 0

return sub_141dc1f60(arg1, arg2) __tailcall
