// 函数: sub_1423501a0
// 地址: 0x1423501a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x20)
void*** rax = j_sub_140a82f30(0x20)

if (rax == 0)
    rax = nullptr
else
    rax[1].d = 1
    *rax = &data_142df7bd8
    *(rax + 0xc) = 1
    rax[2] = 0
    rax[3] = 0

uint128_t zmm0 = (&rax[2]).o
uint128_t var_58 = zmm0
void*** rbx = _mm_bsrli_si128(zmm0, 8).q

if (rbx != 0)
    rbx[1].d += 1
    rbx = rax

if (arg1 != &var_58)
    *arg1 = var_58.q
    var_58.q = 0
    sub_1405aeff0(&arg1[1], &var_58:8)
    rbx = rax

void* rcx_1 = var_58:8.q

if (rcx_1 != 0)
    int32_t rax_2 = *(rcx_1 + 8)
    *(rcx_1 + 8) -= 1
    
    if (rax_2 == 1)
        int64_t* rbx_1 = var_58:8.q
        (**rbx_1)(rbx_1)
        int32_t rax_4 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_4 == 1)
            int64_t* rcx_3 = var_58:8.q
            (*(*rcx_3 + 8))(rcx_3, 1)
    
    rbx = rax

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_8 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_8 == 1)
            (*rbx)[1](rbx, 1)

void*** rax_10 = j_sub_140a82f30(0x20)

if (rax_10 == 0)
    rax_10 = nullptr
else
    rax_10[1].d = 1
    *rax_10 = &data_142df7bd8
    *(rax_10 + 0xc) = 1
    rax_10[2] = 0
    rax_10[3] = 0

uint128_t zmm0_1 = (&rax_10[2]).o
uint128_t var_38 = zmm0_1
void*** rbx_2 = _mm_bsrli_si128(zmm0_1, 8).q

if (rbx_2 != 0)
    rbx_2[1].d += 1
    rbx_2 = rax_10

if (&arg1[2] != &var_38)
    arg1[2] = var_38.q
    var_38.q = 0
    sub_1405aeff0(&arg1[3], &var_38:8)
    rbx_2 = rax_10

void* rcx_7 = var_38:8.q

if (rcx_7 != 0)
    int32_t rax_12 = *(rcx_7 + 8)
    *(rcx_7 + 8) -= 1
    
    if (rax_12 == 1)
        int64_t* rbx_3 = var_38:8.q
        (**rbx_3)(rbx_3)
        int32_t rax_14 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_14 == 1)
            int64_t* rcx_9 = var_38:8.q
            (*(*rcx_9 + 8))(rcx_9, 1)
    
    rbx_2 = rax_10

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*rbx_2)[1](rbx_2, zx.q(rdi_1))

return arg1
