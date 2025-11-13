// 函数: sub_14095e9b0
// 地址: 0x14095e9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int64_t r11 = *(arg1 + 0x10)
int64_t var_18 = *arg4
void* rcx_2 = arg4[1]
void* var_10 = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

int64_t result = r11(rax, zx.q(arg2), zx.q(arg3), &var_18, arg5)
int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
