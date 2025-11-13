// 函数: sub_140987650
// 地址: 0x140987650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(0)
int64_t rax = *(arg2 + 8)
void* rax_1 = *(arg2 + 0x10)
void** const var_58 = &data_142e259e0
void* var_28 = rax_1
uint128_t var_50
__builtin_memset(&var_50, 0, 0x20)

if (rax_1 != 0)
    *(rax_1 + 8) += 1
    zmm1 = var_50

int64_t* rbx = _mm_bsrli_si128(zmm1, 8).q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t var_40
sub_14081d8c0(&var_40, arg2 + 0x18)
int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143ced740), &var_58)
int64_t rcx_5 = var_40
var_58 = &data_142e259e0

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t* rbx_2 = rax.o:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
