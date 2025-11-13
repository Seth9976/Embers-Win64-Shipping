// 函数: sub_1425629c0
// 地址: 0x1425629c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_8 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_4 = *(arg2 + 0x38)
void* r9 = &var_18
int512_t zmm2
zmm2.o = arg_8
int64_t rdx_6 = arg_10

if (rax_4 != 0)
    r9 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
return (*(*arg1 + 0x3e8))(arg1, rdx_6, zmm2, r9)
