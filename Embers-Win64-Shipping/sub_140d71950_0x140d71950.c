// 函数: sub_140d71950
// 地址: 0x140d71950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg3
void* rax_1 = arg3[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_140d718b0(arg1, arg2, &var_18)
*arg1 = &data_142ebfa50
arg1[5] = &data_142ebfa58
arg1[6] = &data_142ebfa78
arg1[7] = &data_142ebfac8
arg1[8] = &data_142ebfb10
arg1[9] = &data_142ebfb38
arg1[0xa] = &data_142ebfb80
arg1[0xb] = &data_142ebfbb0
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
