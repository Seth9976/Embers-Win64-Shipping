// 函数: sub_14111d840
// 地址: 0x14111d840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = data_1439b5bfc
uint128_t zmm0 = *arg2
int32_t var_20 = *(arg2 + 0x18)
uint128_t zmm1 = zx.o(arg2[1].q)
int64_t r10 = sx.q(arg4)
int32_t result_3 = result_2
int32_t result_4 = result_2
int32_t result_5 = result_2
int32_t r9 = *(arg1 + (r10 << 2))
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r9)
int32_t result_1 = 3
uint64_t var_28 = zmm1.q
int32_t result = (temp1 ^ temp0) - temp0
uint128_t var_38 = zmm0

if (result s<= result_2)
    result_2 = result

(&result_3)[r10] = result_2

if (r9 s> 0)
    zmm1 = *(arg2 + (r10 << 2) + 0xc)
    zmm0.d = _mm_cvtepi32_ps(zx.o(r9)).d f* arg3
    zmm1.d = zmm1.d f- zmm0.d
    *(&var_38 + (r10 << 2)) = __maxss_xmmss_memss(zmm1.d, *(arg2 + (r10 << 2))).d
else if (r9 s< 0)
    zmm1 = *(arg2 + (r10 << 2))
    zmm0.d = _mm_cvtepi32_ps(zx.o(r9)).d f* arg3
    zmm1.d = zmm1.d f- zmm0.d
    *(&var_38:0xc + (r10 << 2)) = __minss_xmmss_memss(zmm1.d, *(arg2 + (r10 << 2) + 0xc)).d

if (result_2 s> 0)
    uint128_t* rbx_1 = arg5
    int64_t rdi_1 = sx.q(rbx_1[9].d)
    int32_t rax_4 = (rdi_1 + 1).d
    rbx_1[9].d = rax_4
    
    if (rax_4 s> *(rbx_1 + 0x94))
        sub_14113b760(rbx_1, rdi_1.d)
    
    uint128_t* rax_5 = *(rbx_1 + 0x88)
    
    if (rax_5 != 0)
        rbx_1 = rax_5
    
    result = result_1
    int64_t rcx_1 = rdi_1 * 0x2c
    *(rbx_1 + rcx_1) = var_38
    *(rbx_1 + rcx_1 + 0x10) = var_28.o
    *(rbx_1 + rcx_1 + 0x20) = result_4.q
    *(rbx_1 + rcx_1 + 0x28) = result

return result
