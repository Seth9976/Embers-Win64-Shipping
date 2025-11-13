// 函数: sub_1406be610
// 地址: 0x1406be610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(**arg1)()
int64_t* rcx = *arg2

if ((*(*rcx + 0x28))(rcx) == 0 || arg3[1].d s<= 1)
    int64_t result
    result.b = 0
    return result

int64_t var_18 = *arg2
int64_t* rax_3 = arg2[1]

if (rax_3 != 0)
    rax_3[1].d += 1

char rax_4 = sub_1406bded0(arg1, &var_18, arg3, 0, arg5, arg4)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3, rax_3)
        int32_t rdi_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rax_3 + 8))(rax_3, zx.q(rdi_1))

return zx.q(rax_4)
