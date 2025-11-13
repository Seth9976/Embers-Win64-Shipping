// 函数: sub_141fa4c90
// 地址: 0x141fa4c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b &= 0xfe
*arg1 = arg2
arg1[1].b = (((((arg6 & 0xfd) | (arg7 * 2)) * 2) | (arg5 & 0xf9)) * 2) | ((arg1[1].b | arg4) & 0xf1)
arg1[2] = *arg3
arg1[3] = arg3[1]
void* rax_5 = arg3[2]
arg1[4] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int64_t* rbx = arg3[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg1
