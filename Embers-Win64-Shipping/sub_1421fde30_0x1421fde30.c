// 函数: sub_1421fde30
// 地址: 0x1421fde30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = (*(arg2 + 0x18)).d
int64_t* rax
int512_t zmm1
void var_18

if ((*(arg1 + 0xa8) & 1) == 0)
    rax, zmm1 = sub_141fe56b0(arg1 + 0x30, &var_18, *(arg4 + 0xc), arg3, r9, nullptr)
    zmm1.o = *(arg4 + 0xc)
else
    rax, zmm1 = sub_141fe56b0(arg1 + 0x30, &var_18, *(arg2 + 0x12c), arg3, r9, nullptr)
    zmm1.o = *(arg2 + 0x12c)
int64_t zmm0 = *rax
float rax_1 = rax[1].d
int64_t result
float zmm0_1
zmm0_1, result = sub_141fe5610(arg1 + 0x78, zmm1, *(arg2 + 0x18), nullptr, 0, 0, zmm0, rax_1)
zmm0_1 = zmm0_1 f* *(arg4 + 0x6c)
float zmm2_1 = zmm0:4.d f* *(arg4 + 0x64)
*(arg4 + 0x60) = zmm0.d f* *(arg4 + 0x60)
float zmm1_1 = rax_1 f* *(arg4 + 0x68)
*(arg4 + 0x64) = zmm2_1
*(arg4 + 0x6c) = zmm0_1
*(arg4 + 0x68) = zmm1_1
return result
