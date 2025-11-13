// 函数: sub_140d44bb0
// 地址: 0x140d44bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = sub_140d44790(arg1 + 0x50, arg2)
int64_t result = sub_140d44790(arg1, arg2)
*arg3 = result
int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
