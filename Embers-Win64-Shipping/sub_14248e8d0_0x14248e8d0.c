// 函数: sub_14248e8d0
// 地址: 0x14248e8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_8 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t arg_10 = 0
int32_t zmm0_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    zmm0_1 = sub_140d30490(arg2, &arg_10, r8_5)
else
    zmm0_1 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t r9 = arg_10
int512_t zmm2
zmm2.o = arg_8
int64_t rdx_6 = arg_18
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
int64_t result = (*(*arg1 + 0x7b8))(arg1, rdx_6, zmm2, r9)
*arg3 = zmm0_1
return result
