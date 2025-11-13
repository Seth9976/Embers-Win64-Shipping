// 函数: sub_142c912f0
// 地址: 0x142c912f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = 0
int32_t* rdx = *(arg1 + 0x38)

if (*rdx != 5)
    int32_t rax_1 = sub_142c919f0(arg1, rdx)
    rbx = rax_1
    
    if (rax_1 s<= 0)
        return rax_1

if (arg2 != 0)
    WSASetLastError(0)
    rbx = recv(sx.q(*(arg1 + 0x30)), arg2, arg3, 0)
    sub_142899cc0(arg1, 0xf)
    
    if (rbx s<= 0 && sub_1428a7be0(rbx) != 0)
        sub_14289a9a0(arg1, 9)

return rbx
