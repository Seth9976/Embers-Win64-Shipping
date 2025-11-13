// 函数: sub_142452810
// 地址: 0x142452810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(0)
int64_t var_38 = *arg2
int64_t rax_1 = arg2[1]
void* rax_2 = arg2[2]
void* var_18 = rax_2
uint128_t var_30 = zx.o(0)

if (rax_2 != 0)
    *(rax_2 + 8) += 1
    zmm1 = var_30

int64_t* rbx = _mm_bsrli_si128(zmm1, 8).q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f5edd8), &var_38)
int64_t* rbx_2 = rax_1.o:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg2[2]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
