// 函数: sub_142721470
// 地址: 0x142721470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 f== *(arg1 + 0xbc))
    return 

int64_t* r8_1 = arg1[0x14]
*(arg1 + 0xbc) = arg2

if (r8_1 == 0)
    return 

int32_t rax_1 = *(r8_1 + 0xc)
void* const rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_2
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18

if (((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
    return 

if (not(arg2 > 0f))
    (*(*arg1 + 0x458))(arg1, (zx.o(0)).d)
else if ((*(arg1 + 0xc4) & 1) != 0)
    int64_t arg_8 = arg1[0x19]
    void* rax_11 = sub_141dcc7f0(r8_1)
    float zmm0 = sub_1423e6170(rax_11, sub_1423dce10(rax_11, &arg_8))
    arg2 = *(arg1 + 0xbc)
    zmm0 = _mm_max_ss(zmm0, 0)
    zmm0 - arg2
    
    if (not(zmm0 >= arg2))
        (*(*arg1 + 0x458))(arg1, arg2 - zmm0)
    else if (not(zmm0 <= arg2))
        (*(*arg1 + 0x458))(arg1, 9.99999975e-05f)
