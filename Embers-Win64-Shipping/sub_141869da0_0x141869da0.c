// 函数: sub_141869da0
// 地址: 0x141869da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x2b8)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    void*** rax_1
    rax_1, arg2 = sub_14181e1b0(rax)
    rbx = rax_1

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

void*** var_28 = rbx
void*** var_20 = rax_2
int64_t* rcx_1 = *arg1
void*** rdi = var_28

if ((*rdi)[0x28](rdi, (*(*rcx_1 + 0x20))(rcx_1, rbx, rbx)) == 0)
    int64_t* var_10 = nullptr
    var_28 = nullptr
    int64_t var_18_1 = 0
    sub_1405aeff0(&var_20, &var_10)
    int64_t* rcx_4 = var_10
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            int64_t* rbx_2 = var_10
            (**rbx_2)(rbx_2)
            int32_t rax_8 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_8 == 1)
                int64_t* rcx_6 = var_10
                (*(*rcx_6 + 8))(rcx_6, 1)

int32_t result = sub_14185b770(arg1[2], &var_28, arg3, arg4, arg2)
void*** rbx_3 = var_20

if (rbx_3 != 0)
    result = rbx_3[1].d
    rbx_3[1].d -= 1
    
    if (result == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*rbx_3)[1](rbx_3, zx.q(rdi_1))

return result
