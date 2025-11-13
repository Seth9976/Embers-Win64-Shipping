// 函数: sub_1426521e0
// 地址: 0x1426521e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x28)

if ((rax.b & 2) != 0)
    (*(*arg3 + 0x38))(arg3, *(arg1 + 0x50), zx.q(*(arg1 + 0x58)), *(arg1 + 0x60), *(arg1 + 0x68), 
        arg2)
    (*(*arg3 + 0x38))(arg3, *(arg1 + 0x30), zx.q(*(arg1 + 0x38)), *(arg1 + 0x40), *(arg1 + 0x48), 
        arg2)
    rax = *(arg1 + 0x28)

return (rax u>> 1).b & 1
