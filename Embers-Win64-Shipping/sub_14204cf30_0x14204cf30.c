// 函数: sub_14204cf30
// 地址: 0x14204cf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg1
int64_t rcx = sx.q(arg1[5].d)
void*** rdi_1
uint128_t zmm0

if (rcx.d == 0)
    int32_t r15_2 = arg3[3]
    zmm0.d = _mm_cvtepi32_ps(zx.o(arg4)).d f* arg3[1]
    int32_t rdi_2 = int.d(zmm0.d)
    void*** rax_5 = j_sub_140a82f30(0x50)
    
    if (rax_5 == 0)
        rdi_1 = nullptr
    else
        if (r15_2 s>= rdi_2)
            rdi_2 = r15_2
        
        rdi_1 = sub_142048e30(rax_5, zx.q(rdi_2), 0, arg3)
else
    int64_t* result_3 = result_1[4]
    int64_t* result_2 = result_1
    
    if (result_3 != 0)
        result_2 = result_3
    
    void* rdi = result_2[rcx - 1]
    int32_t rax = *(rdi + 0x4c)
    int32_t rcx_1 = rax + arg4
    
    if (rcx_1 s<= *(rdi + 0x48))
        arg2[1].d = rax
        *(rdi + 0x4c) += arg4
        
        if (((arg5 u>> 7).b & 1) == 0)
            return sub_1405d16e0(arg2, *(rdi + 0x38))
        
        return sub_1405d16e0(arg2, *(rdi + 0x28))
    
    zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* arg3[1]
    void*** rax_3 = j_sub_140a82f30(0x50)
    
    if (rax_3 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_142048e30(rax_3, zx.q(int.d(zmm0.d)), *(rdi + 0x4c), arg3)
arg2[1].d = *(rdi_1 + 0x4c)
*(rdi_1 + 0x4c) += arg4
void* rdx_4

if (((arg5 u>> 7).b & 1) == 0)
    rdx_4 = rdi_1[7]
else
    rdx_4 = rdi_1[5]

sub_1405d16e0(arg2, rdx_4)
int64_t rsi_1 = sx.q(result_1[5].d)
int32_t rax_10 = (rsi_1 + 1).d
result_1[5].d = rax_10

if (rax_10 s> *(result_1 + 0x2c))
    sub_14083a490(result_1, rsi_1.d)

int64_t* result = result_1[4]

if (result != 0)
    result_1 = result

result_1[rsi_1] = rdi_1
return result
