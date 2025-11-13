// 函数: sub_14279c150
// 地址: 0x14279c150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
arg1[1] = 0
arg1[2] = 0
*arg1 = 0
void var_20

if (&arg1[1] != &var_20)
    arg1[1] = 0
    int64_t* rbx_1 = arg1[2]
    
    if (rbx_1 != 0)
        arg1[2] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

*(arg1 + 0x19) = 0
arg1[3].b = 0
return arg1
