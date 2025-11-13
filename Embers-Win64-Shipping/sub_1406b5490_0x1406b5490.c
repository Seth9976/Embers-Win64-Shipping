// 函数: sub_1406b5490
// 地址: 0x1406b5490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
arg2[1] = 0
*arg2 = 0
int128_t var_18 = zx.o(0)

if (arg2 != &var_18)
    var_18.q = 0
    sub_1405aeff0(&arg2[1], &var_18:8)

void* rcx_1 = var_18:8.q

if (rcx_1 != 0)
    int32_t rax_2 = *(rcx_1 + 8)
    *(rcx_1 + 8) -= 1
    
    if (rax_2 == 1)
        int64_t* rbx_1 = var_18:8.q
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_3 = var_18:8.q
            (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))

arg1[2].b = 0
return arg1
