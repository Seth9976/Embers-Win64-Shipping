// 函数: sub_140903880
// 地址: 0x140903880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_1408ff750()
uint128_t zmm0 = (&rax[2]).o
uint128_t var_38 = zmm0
void*** rbx = _mm_bsrli_si128(zmm0, 8).q

if (rbx != 0)
    rbx[1].d += 1
    rbx = rax

if (arg1 + 8 != &var_38)
    *(arg1 + 8) = var_38.q
    var_38.q = 0
    sub_1405aeff0(arg1 + 0x10, &var_38:8)
    rbx = rax

void* rcx_1 = var_38:8.q

if (rcx_1 != 0)
    int32_t rax_2 = *(rcx_1 + 8)
    *(rcx_1 + 8) -= 1
    
    if (rax_2 == 1)
        int64_t* rbx_1 = var_38:8.q
        (**rbx_1)(rbx_1)
        int32_t rax_4 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_4 == 1)
            int64_t* rcx_3 = var_38:8.q
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

sub_140903a80(*(arg1 + 8))
void arg_8
int64_t rbx_2 = *sub_140b58170(&arg_8, "Media", 1)
j_sub_140b3db50()
int64_t* result = sub_140b407e0(&data_143de7d78, rbx_2)

if (result != 0)
    int64_t* rbx_3 = *(arg1 + 0x10)
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    int64_t var_18 = *(arg1 + 8)
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    int64_t* rax_12 = (*(*result + 0x78))(result)
    int64_t r8_1 = *rax_12
    result = (*(r8_1 + 0x10))(rax_12, &var_18, r8_1)
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            (**rbx_3)(rbx_3)
            result = zx.q(*(rbx_3 + 0xc))
            *(rbx_3 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t rdi_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))

return result
