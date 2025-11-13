// 函数: sub_140e96910
// 地址: 0x140e96910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142edb518
sub_140e526b0(&arg1[3])
arg1[0xc] = *arg2
void* rax_1 = arg2[1]
arg1[0xd] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[0xe] = *arg3
void* rax_3 = arg3[1]
arg1[0xf] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[0x11].b = arg5
arg1[0x10] = arg4
*(arg1 + 0x8c) = 0
*(arg1 + 0x95) = arg6
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg1
