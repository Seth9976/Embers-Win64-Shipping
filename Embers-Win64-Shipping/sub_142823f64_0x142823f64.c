// 函数: sub_142823f64
// 地址: 0x142823f64
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int128_t var_68 = zx.o(0)
void* rcx = arg4[1]

if (rcx != 0)
    *(rcx + 8) += 1
    rcx = arg4[1]

var_68.q = *arg4
var_68:8.q = rcx
int128_t* arg_18 = &var_68
_Hard_links(**arg1, arg2, arg3, &var_68)
int64_t* rbx = var_68:8.q

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
    void* var_58
    sub_1428233e4(&arg2[2], &var_58, &arg_8)
else
    sub_14281cf48(arg1)

int64_t* result

if (***arg3 == 0)
    int64_t* arg_10 = arg1
    void* var_48
    result = sub_1428233e4(&arg3[2], &var_48, &arg_10)
else
    result = sub_14281cf48(arg1)

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    int32_t rax_9 = rbx_1[1].d
    rbx_1[1].d -= 1
    result = zx.q(rax_9 - 1)
    
    if (rax_9 == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_11 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        result = zx.q(rax_11 - 1)
        
        if (rax_11 == 1)
            return (*(*rbx_1 + 8))(rbx_1)

return result
