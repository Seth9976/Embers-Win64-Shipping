// 函数: sub_140e50ed0
// 地址: 0x140e50ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg3
void* rax_1 = arg3[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_140e50e40(arg1, &var_18, arg4)
*arg1 = &data_142ed77f8
arg1[9] = *arg2
void* rax_3 = arg2[1]
arg1[0xa] = rax_3

if (rax_3 != 0)
    *(rax_3 + 0xc) += 1

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
