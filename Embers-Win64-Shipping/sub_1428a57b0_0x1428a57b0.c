// 函数: sub_1428a57b0
// 地址: 0x1428a57b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
void* rax = sub_1428a50d0()

if (rax != 0)
    int64_t rcx_1 = sx.q(*(rax + 0x200))
    
    if (*(rax + 0x204) != rcx_1.d)
        *(rax + (rcx_1 << 2)) |= 1
        return 1

return 0
