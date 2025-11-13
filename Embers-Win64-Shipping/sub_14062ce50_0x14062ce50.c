// 函数: sub_14062ce50
// 地址: 0x14062ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int96_t zmm0 = (*(arg1 + 0x10)).12
int64_t var_48 = *arg3
void* rcx_2 = arg3[1]
void* var_40 = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

int64_t var_38 = *arg2
void* rax_2 = arg2[1]
void* var_30 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int32_t result = zmm0.q(sx.q(zmm0:8.d) + rax, &var_38, &var_48, zx.q(arg4))
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

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
