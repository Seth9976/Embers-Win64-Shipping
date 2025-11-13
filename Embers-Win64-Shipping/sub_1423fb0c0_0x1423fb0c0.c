// 函数: sub_1423fb0c0
// 地址: 0x1423fb0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t arg_10 = arg2
*arg1 = &data_1433443a0
void*** rax = sub_1423fa4b0(&arg_10, &arg_18, arg4)
arg1[1] = &rax[2]
arg1[2] = rax

if (rax != 0)
    rax[1].d += 1
    
    if (rax != 0)
        rax[1].d -= 1
        
        if (rax[1].d == 1)
            (**rax)(rax)
            int32_t temp1_1 = *(rax + 0xc)
            *(rax + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax)[1](rax, 1)

arg1[3].b = arg5
return arg1
