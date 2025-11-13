// 函数: sub_14131ff20
// 地址: 0x14131ff20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[8]
void* rdx = arg2[8]
int64_t r8 = *(rdx + 0x1a0)
int64_t arg_10 = r8
sub_141080ac0(arg1, rdx, r8, *(*arg2 + 0x10))
void* rbx = arg2[8]
int32_t r8_1 = *(*arg2 + 0x1548)

if (*(arg1 + 0x210) != 0xffff)
    int64_t* rbx_1
    
    if (r8_1 s< 3)
        int64_t* arg_20
        sub_14137b650(&arg_20)
        sub_141083500(rbx, &arg_10, arg1 + 0x210, arg_20)
        rbx_1 = arg_20
    else
        int64_t* arg_18
        sub_14137b9a0(&arg_18, rbx, 0xf, r8_1)
        sub_141083500(rbx, &arg_10, arg1 + 0x210, arg_18)
        rbx_1 = arg_18
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_2
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_2 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_1)

j_sub_14137eb70(arg1 + 0x118, arg2[8], arg_10, arg2, data_14395f4d0, 2, nullptr)
void* rcx_9 = *arg2
uint128_t var_38 = data_142d3f660
int32_t rax_8 = (*(rcx_9 + 0x1598) + 1) & 0xfffffffe
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(data_143ec4fdc.d))
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_8)).d f+ 3f
zmm1.d = zmm1.d f/ zmm0.d
var_38.d = zmm1.d
int64_t rax_12 = data_143ec4fdc
zmm1.d = _mm_cvtepi32_ps(zx.o(*(rcx_9 + 0x159c) + 1) & 0xfffffffe).d f+ 3f
zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o((rax_12 u>> 0x20).d)).d
var_38:4.d = zmm1.d
int32_t rax_15 = *(rcx_9 + 0x15a0) & 0xfffffffe
zmm0 = _mm_cvtepi32_ps(zx.o(data_143ec4fdc.d))
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_15)).d f- 3f
zmm1.d = zmm1.d f/ zmm0.d
var_38:8.d = zmm1.d
void* rcx_10 = arg2[8]
int64_t rax_18 = data_143ec4fdc
zmm1.d = _mm_cvtepi32_ps(zx.o(*(rcx_9 + 0x15a4)) & 0xfffffffe).d f- 3f
zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o((rax_18 u>> 0x20).d)).d
var_38:0xc.d = zmm1.d
return sub_1405d0e10(rcx_10, &arg_10, arg1 + 0x212, &var_38, 0)
