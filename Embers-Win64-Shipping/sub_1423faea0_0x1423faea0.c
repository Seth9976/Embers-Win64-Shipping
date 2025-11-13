// 函数: sub_1423faea0
// 地址: 0x1423faea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143344370
void*** rax = j_sub_140a82f30(0x490)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_143344458
    sub_1423b9040(&rbx[2], arg2, arg3, arg4)

arg1[1] = &rbx[2]
arg1[2] = rbx

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx)[1](rbx, 1)

arg1[3].b = arg5
return arg1
