// 函数: sub_14066bff0
// 地址: 0x14066bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)
int64_t var_18
int64_t* var_10
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    var_18 = *(arg2 + 0x28)
    int64_t* rcx_1 = *(arg2 + 0x30)
    var_10 = rcx_1
    
    if (rcx_1 != 0)
        rcx_1[1].d += 1
    
    rbx_1 = sub_140669820(rax, &var_18)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d86170
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

void* rax_3 = sub_140cde0b0()
sub_140d19010(rax_3, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_18 = 0
void* result = sub_140d2dfc0(sub_140681360(), rax_3, 0, 0, 0, 0, 0, 0, 0)
uint128_t zmm1 = rbx_1.o
var_18.o = zmm1
int64_t* rbx_3 = _mm_bsrli_si128(zmm1, 8).q

if (rbx_3 != 0)
    rbx_3[1].d += 1
    rbx_3 = rax_2

if (&var_18 != result + 0x28)
    uint128_t zmm0 = *(result + 0x28)
    *(result + 0x28) = zmm1
    rbx_3 = rax_2
    var_18.o = zmm0

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_10 + 8))(var_10, 1)
    
    rbx_3 = rax_2

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return result
