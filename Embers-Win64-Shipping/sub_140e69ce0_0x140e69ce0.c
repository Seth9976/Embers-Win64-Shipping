// 函数: sub_140e69ce0
// 地址: 0x140e69ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_140da2300(&var_18, arg1 + 0x68, arg2)
void* rcx_1 = var_18
int32_t rdi_1

if (rcx_1 == 0)
    rdi_1 = 0
else
    uint128_t zmm0_1 = zx.o(arg3)
    int512_t zmm2
    zmm2.o = _mm_cvtepi32_ps(zmm0_1)
    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg4))
    zmm2.o = _mm_unpacklo_ps(zmm2.o, zmm1.q)
    rdi_1 = sub_140e12b30(rcx_1, zmm2.q, zmm2, zmm0_1, zmm1.d)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return zx.q(rdi_1)
