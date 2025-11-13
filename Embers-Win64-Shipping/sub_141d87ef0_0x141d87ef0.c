// 函数: sub_141d87ef0
// 地址: 0x141d87ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int96_t zmm0 = (*(arg1 + 0x10)).12
int64_t rdx = *(arg1 + 8)
int64_t var_38 = *arg2
void* rax_1 = arg2[1]
void* var_30 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t result = zmm0.q(sx.q(zmm0:8.d) + rdx, &var_38)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
