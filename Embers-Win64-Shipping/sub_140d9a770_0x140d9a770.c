// 函数: sub_140d9a770
// 地址: 0x140d9a770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
sub_140e158f0(*arg2, &var_28)
int64_t rcx_1 = var_28

if (rcx_1 != 0)
    sub_140d9a5d0(sub_140e12730(rcx_1), arg2)
    uint128_t zmm0_1 = var_28.o
    uint128_t var_18 = zmm0_1
    void* rax_3 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    sub_140d9a770(arg1, &var_18)
    int64_t* rdi_1 = var_18:8.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
else
    *arg1 = *arg2
    void* rax_1 = arg2[1]
    arg1[1] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp3_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return arg1
