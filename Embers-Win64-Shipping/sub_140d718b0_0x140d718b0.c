// 函数: sub_140d718b0
// 地址: 0x140d718b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142ebf998
arg1[2] = *arg3
void* rax_1 = arg3[1]
arg1[3] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[4].d = 1
void*** arg_10 = arg1
void arg_8
sub_140ca9be0(&arg1[1][0xa], &arg_8, &arg_10, nullptr)
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
