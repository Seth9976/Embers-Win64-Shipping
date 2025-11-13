// 函数: sub_140ee22b0
// 地址: 0x140ee22b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

sub_140dd98b0(arg1, &var_18, 1)
*arg1 = &data_142ee0088
arg1[0xd] = &data_142ee0140
int64_t* rcx = arg2[1]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

return arg1
