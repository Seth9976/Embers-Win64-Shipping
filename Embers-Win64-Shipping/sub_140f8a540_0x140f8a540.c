// 函数: sub_140f8a540
// 地址: 0x140f8a540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int32_t arg_8 = 0
uint128_t var_18
int64_t* rbx
int32_t rsi

if (rax == 0)
    uint128_t zmm0 = data_143e244b0.o
    var_18 = zmm0
    void* rax_1 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rbx = var_18:8.q
    rsi = 2
else
    rbx = arg2[1]
    var_18.q = rax
    var_18:8.q = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rsi = 1

void* result = sub_140de1b90(arg1 + 0x2b8, &var_18)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    int64_t* rdi_1 = var_18:8.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)

if ((rsi.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp5_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp5_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            jump(*(*rbx_1 + 8))

return result
