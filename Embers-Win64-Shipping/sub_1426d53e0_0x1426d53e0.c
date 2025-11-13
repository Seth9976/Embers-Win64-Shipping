// 函数: sub_1426d53e0
// 地址: 0x1426d53e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int96_t zmm0 = (*(arg1 + 0x10)).12
int64_t var_38 = *arg2
void* rcx_2 = arg2[1]
void* var_30 = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

int64_t result = zmm0.q(sx.q(zmm0:8.d) + rax, &var_38)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
