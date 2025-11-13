// 函数: sub_1428c2340
// 地址: 0x1428c2340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t rbx = 0

if (arg4 u> 0x17 || not(test_bit(0x800005, arg4)))
    sub_1428a5670(0x20, 0x8f, 0x83, "crypto\bio\b_addr.c", 0x293)
else if (sub_1428e3700() == 1)
    struct ADDRINFOA hints
    hints.ai_flags = 0
    hints.ai_family = arg4
    hints.ai_socktype = arg5
    hints.ai_protocol = 0
    hints.ai_addrlen = 0
    hints.ai_canonname = 0
    hints.ai_addr = 0
    hints.ai_next = 0
    
    if (arg3 == 1)
        hints.ai_flags = arg3
    
    int32_t rax_3 = getaddrinfo(arg1, arg2, &hints, arg6)
    
    if (rax_3 == 0)
        rbx = 1
    else
        sub_1428a5670(0x20, 0x8f, 2, "crypto\bio\b_addr.c", 0x2c0)
        sub_1428c2920(rax_3)
        sub_1428a4880(1)

return zx.q(rbx)
