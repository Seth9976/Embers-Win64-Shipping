// 函数: sub_140e1c1f0
// 地址: 0x140e1c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = data_143e20d08
int128_t var_18 = zx.o(0)
(*(*r10 + 0x128))(r10, arg4, arg3, &var_18, arg5, arg1 + 0xa30, var_18)
int64_t* rbx = var_18:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
