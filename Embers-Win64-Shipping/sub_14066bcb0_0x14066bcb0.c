// 函数: sub_14066bcb0
// 地址: 0x14066bcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rbx[2].b = arg2
    *rbx = &data_142d84c78
    rbx[1].d = 4

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142d86170
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

void* rax_2 = sub_140cde0b0()
sub_140d19010(rax_2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_18 = 0
void* result = sub_140d2dfc0(sub_140681360(), rax_2, 0, 0, 0, 0, 0, 0, 0)
uint128_t zmm1 = rbx.o
uint128_t var_18 = zmm1
void*** rbx_2 = _mm_bsrli_si128(zmm1, 8).q

if (rbx_2 != 0)
    rbx_2[1].d += 1
    rbx_2 = rax_1

if (&var_18 != result + 0x28)
    uint128_t zmm0 = *(result + 0x28)
    *(result + 0x28) = zmm1
    rbx_2 = rax_1
    var_18 = zmm0

int64_t* rdi_1 = var_18:8.q

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)
    
    rbx_2 = rax_1

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*rbx_2)[1](rbx_2, 1)

return result
