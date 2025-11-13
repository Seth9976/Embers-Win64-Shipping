// 函数: sub_1421c73a0
// 地址: 0x1421c73a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1421b7cc0(arg2, arg1)
void* result_1 = result

if (result == 0)
    result_1 = *(arg2 + 0x18) + 0x610

int64_t rsi = data_143f4dfb8
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    result = GetCurrentThreadId()
    rcx_1.b = result.d != data_143de5470

int32_t r14 = *(rsi + (rcx_1 << 2))

if (r14 s> 0)
    int32_t* rsi_2 = zx.q(arg3) + arg4
    int512_t zmm1
    zmm1.o = *(arg4 + 0xc)
    int128_t zmm0_1
    int128_t zmm1_1
    int512_t zmm6_1
    zmm0_1, zmm1_1, zmm6_1 = sub_141fe5610(arg1 + 0x80, zmm1, *(arg2 + 0x18), result_1)
    void* result_2 = result_1
    zmm6_1.o = zmm0_1
    void var_34
    int64_t* rax
    float zmm6_2[0x4]
    rax, zmm6_2 =
        sub_141fe56b0(arg1 + 0x38, &var_34, *(arg4 + 0xc), zmm1_1, (*(arg2 + 0x18)).d, nullptr)
    int64_t zmm1_2
    zmm1_2.d = zmm6_2[0].q.d f* *(rax + 4)
    zmm6_2[0] = zmm6_2[0] f* *rax
    zmm6_2[0] = zmm6_2[0] f* rax[1].d
    *rsi_2 = (_mm_unpacklo_ps(zmm6_2, zmm1_2)).q
    rsi_2[2] = zmm6_2[0]
    int32_t zmm0_3
    int512_t zmm1_3
    zmm0_3, zmm1_3 = sub_141fe5610(arg1 + 0xb0, *(arg2 + 0x12c), *(arg2 + 0x18), result_1)
    rsi_2[6] = zmm0_3
    
    if (*(arg1 + 0x30) == 0)
        zmm1_3.o = *(arg2 + 0x12c)
        zmm0_3 = sub_141fe5610(arg1 + 0xe0, zmm1_3, *(arg2 + 0x18), result_1)
    else
        zmm0_3 = (zx.o(0)).d
    
    rsi_2[7] = zmm0_3
    int32_t rax_3 = *(result_1 + 4) * 0xbb38435 + 0x3619636b
    *(result_1 + 4) = rax_3
    zmm0_3 = (rax_3 u>> 9 | 0x3f800000) f- 1f
    float temp0_2 = *(arg1 + 0x34)
    zmm0_3 f- temp0_2
    bool c_1 = zmm0_3 f< temp0_2
    rsi_2[8].b = c_1
    *(rsi_2 + 0x21) = *(arg1 + 0x31)
    result = zx.q(*(arg1 + 0x118))
    *(rsi_2 + 0x22) = result.b
    *(rsi_2 + 0x10) = 0
    
    if (*(arg1 + 0x118) != 0 && r14 s> 1 && c_1 != 0)
        result = sub_1421c7d70(arg1, rsi_2, arg4, arg2)
        *(rsi_2 + 0x10) = result

return result
