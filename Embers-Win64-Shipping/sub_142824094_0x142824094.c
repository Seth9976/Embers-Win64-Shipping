// 函数: sub_142824094
// 地址: 0x142824094
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int128_t var_58 = zx.o(0)
void* r9 = arg3[1]

if (r9 != 0)
    *(r9 + 8) += 1
    r9 = arg3[1]

var_58.q = *arg3
var_58:8.q = r9
int128_t* arg_10 = &var_58
sub_14281d030(**arg1, arg2)
int64_t* rbx = var_58:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_4 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rbx + 8))(rbx)

if (***arg2 == 0)
    int64_t* arg_8 = arg1
    void* var_48
    sub_1428233e4(&arg2[2], &var_48, &arg_8)
else
    sub_14281cf48(arg1)

int64_t* result = sub_14058e700(&data_143f89508)
int64_t rsi = *result
*result += 1
arg1[4] = rsi
int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    int32_t rax_8 = rbx_1[1].d
    rbx_1[1].d -= 1
    result = zx.q(rax_8 - 1)
    
    if (rax_8 == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_10 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        result = zx.q(rax_10 - 1)
        
        if (rax_10 == 1)
            return (*(*rbx_1 + 8))(rbx_1)

return result
