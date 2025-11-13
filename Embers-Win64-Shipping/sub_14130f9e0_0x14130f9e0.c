// 函数: sub_14130f9e0
// 地址: 0x14130f9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax_2 = sub_14139d290((*(*arg1 + 8))(arg1, 0))
*arg2 = *rax_2
arg2[1] = rax_2[1]
arg2[2] = rax_2[2]
arg2[3] = rax_2[3]
arg2[4] = rax_2[4]
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg2 + 0x14))
int128_t var_24 = zx.o(0)
int128_t zmm1 = _mm_bsrli_si128(zx.o(0), 0xc)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg2 + 0x18))
int32_t rcx_2 = ((temp0 & 3) + temp1) s>> 2
*(arg2 + 0x38) = 0
*(arg2 + 0x48) = 0
int32_t rax_8 = (temp3 + (temp2 & 3)) s>> 2

if (rcx_2 s<= 1)
    rcx_2 = 1

*(arg2 + 0x28) = 1
*(arg2 + 0x14) = rcx_2
*(arg2 + 0x2c) = 0xa

if (rax_8 s<= 1)
    rax_8 = 1

*(arg2 + 0x18) = rax_8
*(arg2 + 0x34) = (*(arg2 + 0x34) & 0xfffeffff) | 1
wchar16 const* const rax_12 = u"DOFSetup1"

if (arg3 == 0)
    rax_12 = u"DOFSetup0"

arg2[4].q = rax_12
*arg2 = 1.o
arg2[1].d = zmm1.d
return arg2
