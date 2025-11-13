// 函数: sub_14175e050
// 地址: 0x14175e050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = nullptr
void* r10 = &data_1439b8e08

if (*(arg2 + 0xc) u>= 1)
    r9 = arg2

int128_t* rax_2

if (r9 == 0)
    rax_2 = &data_1439b8e08
else
    rax_2 = *(*r9 + 0x1d0) + sx.q(r9[1].d) * 0xc

int128_t zmm3 = *(arg3 + 8)
float zmm4 = *(arg3 + 4)
int128_t zmm2 = *arg3
int128_t zmm6 = *rax_2
int128_t zmm7
zmm7.d = zmm3.d f* *(rax_2 + 4)
int128_t zmm8
zmm8.d = zmm2.d f* *(rax_2 + 8)
zmm2.d = zmm2.d f* *(rax_2 + 4)
zmm7.d = zmm7.d f- zmm4 f* *(rax_2 + 8)
float zmm0 = zmm6.d
zmm6.d = zmm6.d f* zmm4
zmm6.d = zmm6.d f- zmm2.d
zmm8.d = zmm8.d f- zmm0 f* zmm3.d

if (r9 != 0)
    r10 = *(*r9 + 0x1b8) + sx.q(r9[1].d) * 0xc

zmm7.d = zmm7.d f+ *r10
zmm8.d = zmm8.d f+ *(r10 + 4)
zmm6.d = zmm6.d f+ *(r10 + 8)
*arg1 = zmm7.d
arg1[1] = zmm8.d
arg1[2] = zmm6.d
return arg1
