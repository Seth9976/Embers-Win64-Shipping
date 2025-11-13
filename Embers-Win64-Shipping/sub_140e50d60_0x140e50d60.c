// 函数: sub_140e50d60
// 地址: 0x140e50d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e51390(arg1, arg2)
*arg1 = &data_142ed7318
arg1[0xe] = *arg3
void* rax_1 = arg3[1]
arg1[0xf] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
