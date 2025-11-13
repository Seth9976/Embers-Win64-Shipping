// 函数: sub_141c6c370
// 地址: 0x141c6c370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t* rax = sub_141c5eea0(arg1, &var_78, arg2)
int64_t var_88 = 0
int64_t* var_80
sub_141c4d620(&var_80, &rax[1])
int64_t* rbx = var_80

if (rbx != 0)
    var_88 = *rax
    *rax = 0

int64_t* var_70

if (var_70 != 0)
    int32_t rax_1 = *(var_70 + 0xc)
    *(var_70 + 0xc) -= 1
    
    if (rax_1 == 1 && var_70 != 0)
        (*(*var_70 + 8))(var_70, 1)
    
    rbx = var_80

if (rbx != 0)
    rbx[1].d += 1
    rbx = var_80

void* rsi = arg6[1]
int64_t rbp = *arg6

if (rsi != 0)
    *(rsi + 8) += 1
    rbx = var_80

void*** rax_3 = sub_140a82f30(0x30, 8)
rax_3[1] = var_88
rax_3[2] = rbx
rax_3[3].d = arg3
*(rax_3 + 0x1c) = arg4
rax_3[4] = rbp
rax_3[5] = rsi
*rax_3 = &data_14320aec0
void*** var_58 = rax_3
int64_t* (* var_68)(int64_t* arg1)
int64_t* (* rax_4)(int64_t* arg1) = var_68

if (rax_3 != -8)
    rax_4 = sub_141c56e10

var_68 = rax_4
int32_t result = sub_141c56850(arg1, &var_68, arg5)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_1 = var_80
        (**rbx_1)(rbx_1)
        result = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (result == 1)
            int64_t* rcx_6 = var_80
            result = (*(*rcx_6 + 8))(rcx_6, 1)

int64_t* rbx_2 = arg6[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
