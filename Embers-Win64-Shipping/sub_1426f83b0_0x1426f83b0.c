// 函数: sub_1426f83b0
// 地址: 0x1426f83b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int64_t r11 = *(arg1 + 0x10)
int64_t var_28 = *arg7
void* rcx_2 = arg7[1]
void* var_20 = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

int32_t result = r11(rax, arg2, arg3, zx.q(arg4), arg5, arg6, &var_28, arg8)
int64_t* rbx_2 = arg7[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
