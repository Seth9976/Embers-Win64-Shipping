// 函数: sub_140ab73d0
// 地址: 0x140ab73d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = 0
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
uint128_t var_28 = zmm0
void*** rbx = _mm_bsrli_si128(zmm0, 8).q

if (rbx != 0)
    rbx[1].d += 1
    rbx = rax

int32_t result = &var_28

if (arg2 != &var_28)
    *arg2 = var_28.q
    var_28.q = 0
    result = sub_1405aeff0(&arg2[1], &var_28:8)
    rbx = rax

void* rcx_1 = var_28:8.q

if (rcx_1 != 0)
    result = *(rcx_1 + 8)
    *(rcx_1 + 8) -= 1
    
    if (result == 1)
        int64_t* rbx_1 = var_28:8.q
        (**rbx_1)(rbx_1)
        result = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (result == 1)
            int64_t* rcx_3 = var_28:8.q
            result = (*(*rcx_3 + 8))(rcx_3, 1)
    
    rbx = rax

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        result = (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*rbx)[1](rbx, zx.q(rdi_1))

return result
