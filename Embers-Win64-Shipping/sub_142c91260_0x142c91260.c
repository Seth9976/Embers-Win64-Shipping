// 函数: sub_142c91260
// 地址: 0x142c91260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rdx = *(arg1 + 0x38)

if (*rdx != 5)
    int32_t rax_1 = sub_142c919f0(arg1, rdx)
    
    if (rax_1 s<= 0)
        return rax_1

WSASetLastError(0)
int32_t rax_2 = send(sx.q(*(arg1 + 0x30)), arg2, arg3, 0)
sub_142899cc0(arg1, 0xf)

if (rax_2 s<= 0 && sub_1428a7be0(rax_2) != 0)
    sub_14289a9a0(arg1, 0xa)

return rax_2
