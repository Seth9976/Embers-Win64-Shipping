// 函数: sub_141c3dad0
// 地址: 0x141c3dad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28
sub_141c39e90(&var_28, arg2, arg3)
int64_t* rsi = var_28
int64_t* rbx = rsi
int32_t var_20
void* rbp = &rsi[sx.q(var_20)]

if (rsi == rbp)
label_141c3db34:
    *arg1 = 0
else
    while (true)
        int64_t* rcx_1 = *rbx
        int64_t arg_20
        (*(*rcx_1 + 0x28))(rcx_1, &arg_20, arg2)
        int64_t rax_2 = arg_20
        
        if (rax_2 != 0)
            *arg1 = rax_2
            arg_20 = 0
            break
        
        rbx = &rbx[1]
        
        if (rbx == rbp)
            goto label_141c3db34

if (rsi != 0)
    sub_140a74f90(rsi)

return arg1
