// 函数: sub_140923de0
// 地址: 0x140923de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void*** rax = sub_140918b80(&arg_18)
uint128_t zmm0 = (&rax[2]).o
uint128_t var_48 = zmm0
void* rax_1 = _mm_bsrli_si128(zmm0, 8).q

if (rax_1 != 0)
    *(rax_1 + 8) += 1
    
    if (rax != 0)
        rax[1].d -= 1
        
        if (rax[1].d == 1)
            (**rax)(rax)
            int32_t rax_4 = *(rax + 0xc)
            *(rax + 0xc) -= 1
            
            if (rax_4 == 1)
                (*rax)[1](rax, 1)

int64_t* rbx_4 = var_48.q
bool cond:0 = (*(*rbx_4 + 8))(rbx_4) == 0
int64_t rax_8 = *rbx_4
int64_t* rcx_9

if (cond:0)
    (*(rax_8 + 0x148))(rbx_4)
    int64_t* var_20 = nullptr
    var_48.q = 0
    int64_t var_28_1 = 0
    sub_1405aeff0(&var_48:8, &var_20)
    int64_t* rcx_11 = var_20
    
    if (rcx_11 == 0)
        rbx_4 = var_48.q
    else
        rcx_11[1].d -= 1
        
        if (rcx_11[1].d != 1)
            rbx_4 = var_48.q
        else
            int64_t* rbx_3 = var_20
            (**rbx_3)(rbx_3)
            int32_t rax_16 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_16 != 1)
                rbx_4 = var_48.q
            else
                rcx_9 = var_20
                (*(*rcx_9 + 8))(rcx_9, 1)
                rbx_4 = var_48.q
else if ((*(rax_8 + 0x138))(rbx_4) == 0)
    (*(*rbx_4 + 0x148))(rbx_4)
    int64_t* var_30 = nullptr
    var_48.q = 0
    int64_t var_38_1 = 0
    sub_1405aeff0(&var_48:8, &var_30)
    int64_t* rcx_7 = var_30
    
    if (rcx_7 == 0)
        rbx_4 = var_48.q
    else
        rcx_7[1].d -= 1
        
        if (rcx_7[1].d != 1)
            rbx_4 = var_48.q
        else
            int64_t* rbx_2 = var_30
            (**rbx_2)(rbx_2)
            int32_t rax_13 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_13 != 1)
                rbx_4 = var_48.q
            else
                rcx_9 = var_30
                (*(*rcx_9 + 8))(rcx_9, 1)
                rbx_4 = var_48.q
void* rcx_13 = var_48:8.q
*arg2 = rbx_4
arg2[1] = rcx_13

if (rcx_13 != 0)
    *(rcx_13 + 8) += 1
    int32_t rax_18 = *(rcx_13 + 8)
    *(rcx_13 + 8) -= 1
    
    if (rax_18 == 1)
        int64_t* rbx_5 = var_48:8.q
        (**rbx_5)(rbx_5)
        int32_t rdi_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_15 = var_48:8.q
            (*(*rcx_15 + 8))(rcx_15, zx.q(rdi_1))

return arg2
