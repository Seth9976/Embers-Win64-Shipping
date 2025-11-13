// 函数: sub_1428a7be0
// 地址: 0x1428a7be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (arg1 + 1 u<= 1)
    enum WSA_ERROR rax_1 = WSAGetLastError()
    bool cond:0_1
    
    if (rax_1 s> 0x7e)
        if (rax_1 == 0x86 || rax_1 == 0x8c)
            return 1
        
        cond:0_1 = rax_1 == 0x2733
    else
        if ((rax_1 - 0x67 u<= 0x17 && test_bit(0x800201, rax_1 - 0x67)) || rax_1 == 0x4)
            return 1
        
        cond:0_1 = rax_1 == 0xb
    
    if (cond:0_1)
        return 1

return 0
