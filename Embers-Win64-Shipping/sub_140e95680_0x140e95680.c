// 函数: sub_140e95680
// 地址: 0x140e95680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg6
int64_t var_18 = *rsi
void* rax_1 = rsi[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_140e96a20(arg1, arg2, data_143e2a068, arg3, arg4, &var_18, arg8, arg9)
*arg1 = &data_142edba70
arg1[0xa].b = arg5
sub_140b58170(&arg6, "Menu", 1)
void* rcx_1 = arg1[1]
*(rcx_1 + 0x60) = arg7
*(rcx_1 + 0x68) = arg6
int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = rsi[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg1
