// 函数: sub_140a6e480
// 地址: 0x140a6e480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int32_t arg_8 = 0
void*** rax = j_sub_140a82f30(0x18)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    void var_18
    int64_t* rax_1 = sub_140a6e560(data_143db7a48, &var_18)
    *rdi = &data_142e62710
    rdi[1] = *rax_1
    void* rcx_2 = rax_1[1]
    rdi[2] = rcx_2
    
    if (rcx_2 != 0)
        *(rcx_2 + 0xc) += 1
    
    rsi = 1

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rdi

*arg1 = rdi
arg1[1] = rax_2
int64_t* var_10

if ((rsi & 1) != 0 && var_10 != 0)
    int32_t temp0_1 = *(var_10 + 0xc)
    *(var_10 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*var_10 + 8))(var_10, 1)

return arg1
