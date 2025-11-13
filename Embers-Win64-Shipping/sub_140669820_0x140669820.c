// 函数: sub_140669820
// 地址: 0x140669820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0
*arg1 = &data_142d84d88
arg1[2] = *arg2
void* rax_1 = arg2[1]
arg1[3] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[1].d = 6
int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg1
