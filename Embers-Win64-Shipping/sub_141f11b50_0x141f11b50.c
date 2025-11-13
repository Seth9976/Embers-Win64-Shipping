// 函数: sub_141f11b50
// 地址: 0x141f11b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(0)
int64_t var_40 = *arg3
int64_t rax_1 = arg3[1]
void* rax_2 = arg3[2]
int64_t var_48 = arg2
void* var_20 = rax_2
uint128_t var_38 = zx.o(0)

if (rax_2 != 0)
    *(rax_2 + 8) += 1
    zmm1 = var_38

int64_t* rbx = _mm_bsrli_si128(zmm1, 8).q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t result = sub_1405a9f90(arg1, &var_48)
int64_t* rbx_1 = rax_1.o:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
