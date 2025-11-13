// 函数: sub_1405fc8c0
// 地址: 0x1405fc8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
(**arg1)()
int64_t* rcx = *arg2

if ((*(*rcx + 0x28))(rcx) == 0 || arg3[1].d s<= 1)
    int64_t result
    result.b = 0
    return result

int64_t var_20 = *arg2
int64_t* rbx_1 = arg2[1]
int64_t* var_18 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

char rax_3 = sub_1405fac70(arg1, &var_20, arg3, 0, arg5, arg4, nullptr)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_2 = *rbx_1
        (*rdx_2)(rbx_1, rdx_2)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return zx.q(rax_3)
