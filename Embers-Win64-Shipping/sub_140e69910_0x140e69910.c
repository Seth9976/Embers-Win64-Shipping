// 函数: sub_140e69910
// 地址: 0x140e69910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = (*(*arg1 + 0x18))(arg1, zx.q(arg3))
arg2[1].b = 1
int64_t* rbx_1 = *(arg4 + 0x10)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
