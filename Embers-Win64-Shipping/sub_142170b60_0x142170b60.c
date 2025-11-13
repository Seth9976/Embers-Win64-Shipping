// 函数: sub_142170b60
// 地址: 0x142170b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x140) == 0)
    return 

int64_t* rax_1 = sub_142168400()
int64_t r8_1 = *rax_1
void* rax = (*(r8_1 + 0x350))(rax_1, *(arg1 + 0x140), r8_1)
int32_t rbp_1 = rax.d

if (rax.d == 0)
    return 

rax = sub_14214b4f0(*(arg1 + 0x88))

if (rax == 0)
    return 

int32_t rdi_1 = 0

if (rbp_1 s<= 0)
    return 

do
    int64_t* rax_2 = sub_142168400()
    int64_t var_28
    (*(*rax_2 + 0x318))(rax_2, &var_28, *(arg1 + 0x140), zx.q(rdi_1.b))
    
    if (var_28 != 0)
        uint128_t zmm0_1 = var_28.o
        uint128_t var_18 = zmm0_1
        void* rax_3 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        (*(*rax + 0x310))(rax, &var_18)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    rdi_1 += 1
while (rdi_1 s< rbp_1)
