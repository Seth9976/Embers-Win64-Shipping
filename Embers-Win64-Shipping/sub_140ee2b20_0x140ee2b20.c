// 函数: sub_140ee2b20
// 地址: 0x140ee2b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
int128_t var_28
__builtin_memset(&var_28, 0, 0x20)
int128_t var_18
sub_140e96910(arg1, &var_18, &var_28, 0, 9, 0)
*arg1 = &data_142edf7c8
arg1[0x13] = *arg2
void* rax_1 = arg2[1]
arg1[0x14] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[0x15] = *arg3
void* rax_3 = arg3[1]
arg1[0x16] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[0x17].d = arg3[2].d
arg1[0x18].b = arg4
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
