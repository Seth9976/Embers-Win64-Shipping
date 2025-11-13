// 函数: sub_140927a30
// 地址: 0x140927a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = zx.o(0)
void*** rax = j_sub_140a82f30(0x88)
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_1406695d0(rax, arg2)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d83c20
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

uint128_t zmm0 = rbx_1.o
uint128_t var_18 = zmm0
void* rax_3 = _mm_bsrli_si128(zmm0, 8).q

if (rax_3 != 0)
    *(rax_3 + 8) += 1
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp1_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_2)[1](rax_2, 1)

char rax_6 = sub_1409173d0(&var_18, &var_38, 0)
int64_t* rbx_3 = var_38:8.q
int64_t rax_7

if (rax_6 != 0)
    rax_7 = var_38.q

void** const rsi

if (rax_6 == 0 || rax_7 == 0)
    rsi.b = 0
else
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    var_38:8.q = rax_7
    var_38.q = &data_142e1f480
    
    if (rbx_3 != 0)
        int32_t rax_8 = rbx_3[1].d
        rbx_3[1].d = rax_8
        
        if (rax_8 == 0)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    (*(*arg1 + 0x38))(arg1, &var_38, 0)
    var_38.q = &data_142e1f480
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp8_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    rsi.b = 1

int64_t* rdi_2 = var_18:8.q

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp4_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_2 = *rbx_3
            (*(r8_2 + 8))(rbx_3, 1, r8_2)

return zx.q(rsi.b)
