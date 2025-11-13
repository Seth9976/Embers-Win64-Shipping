// 函数: sub_1410b4be0
// 地址: 0x1410b4be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg2
void* rdx = arg2[8]
int64_t r9 = *(r15 + 0x10)
int64_t r14 = *(rdx + 0x1a0)
int64_t arg_8 = r14
sub_141080ac0(arg1, rdx, r14, r9)
j_sub_14137eb70(arg1 + 0x118, arg2[8], r14, arg2, data_14395f4d0, 0, nullptr)
void* rbx = arg2[8]
int32_t r8_2 = *(*arg2 + 0x1548)

if (*(arg1 + 0x210) != 0xffff)
    int64_t arg_10
    int64_t* rcx_1 = &arg_10
    
    if (r8_2 s< 3)
        sub_14137b650(rcx_1)
    else
        sub_14137b9a0(rcx_1, rbx, 0xf, r8_2)
    
    sub_141083500(rbx, &arg_8, arg1 + 0x210, arg_10)
    sub_1405d1550(&arg_10)

arg2[8]
sub_1410804a0(arg1 + 0x212, arg2[8], *arg2, r14, (data_143ec4fdc).d, 0)
arg2[8]
int64_t* rcx_7 = arg2[5]
int32_t rbx_1 = data_143ec4fdc.d
int64_t r8_5 = *rcx_7
void* rax_3 = (*(r8_5 + 0x38))(rcx_7, 0, r8_5)
void* rdx_6 = *arg2
int32_t zmm0 = float.s(zx.q(divs.dp.d(sx.q(rbx_1), *(rax_3 + 0x14))))
float zmm1 = *(r15 + 0x1214) f/ zmm0
uint128_t zmm2 = zx.o(*(rdx_6 + 0x15a0) - *(rdx_6 + 0x1598))
void* rcx_13 = arg2[8]
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(*(rdx_6 + 0x15a4) - *(rdx_6 + 0x159c)))
zmm2 = _mm_cvtepi32_ps(zmm2)
float var_34 = zmm1
int32_t var_38 = zmm0
int32_t var_30 = zmm2.d
int32_t var_2c = zmm3.d
return sub_1405d0e10(rcx_13, &arg_8, arg1 + 0x218, &var_38, 0)
