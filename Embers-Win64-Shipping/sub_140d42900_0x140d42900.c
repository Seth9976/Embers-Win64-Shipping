// 函数: sub_140d42900
// 地址: 0x140d42900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142ebdf30
arg1[2] = *arg3
arg1[3] = arg3[1]
void* rax_2 = arg3[2]
arg1[4] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[5] = sub_140a387b0()
int64_t* rbx_1 = arg3[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
