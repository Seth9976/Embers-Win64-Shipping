// 函数: sub_1421c72e0
// 地址: 0x1421c72e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1421b7cc0(arg2, arg1)
void* r8 = *(arg2 + 0x18)

if (rax == 0)
    rax = r8 + 0x610

int512_t zmm1
zmm1.o = *(arg2 + 0x12c)
float zmm0
float zmm6
zmm0, zmm6 = sub_141fe5610(arg1 + 0x30, zmm1, r8, rax, arg3)
int32_t zmm2 = (zx.o(0)).d
float zmm4 = *(arg4 + 0x1c)

if (not(zmm4 <= 0f))
    zmm2 = 1f / (1f / zmm4 + zmm0)
else if (not(zmm0 <= 0f))
    zmm2 = 1f / zmm0

zmm0 = *(arg4 + 0xc)
*(arg4 + 0x1c) = zmm2

if (zmm0 <= 1f)
    *(arg4 + 0xc) = zmm2 f* zmm6
    return arg4

*(arg4 + 0xc) = zmm0
return arg4
