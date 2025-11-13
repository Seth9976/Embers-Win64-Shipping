// 函数: sub_1405eddf0
// 地址: 0x1405eddf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*arg1 = &data_142d5fba8
arg1[1] = &data_142d5fbd8
DeleteCriticalSection(&arg1[5])
int64_t* rbx = arg1[4]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
