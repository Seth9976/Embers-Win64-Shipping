// 函数: sub_1426fbd60
// 地址: 0x1426fbd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_3 = *(arg1 - 0x170)
int64_t* rax

if (rax_3 == 0)
    rax = &data_143dbb1f8
else
    rax = rax_3 + 0xc4

bool cond:0 = *(arg1 - 0xa0) != 3
int32_t rax_1 = rax[1].d
*arg2 = *rax
arg2[1].d = rax_1
int64_t zmm2

zmm2 = cond:0 ? 0x3e800000 : 0x3f800000

int64_t zmm0
zmm0.d = zmm2.d f* *arg2
float zmm1 = zmm2.d f* *(arg2 + 4)
zmm2.d = zmm2.d f* arg2[1].d
*arg2 = zmm0.d
*(arg2 + 4) = zmm1
arg2[1].d = zmm2.d
return arg2
