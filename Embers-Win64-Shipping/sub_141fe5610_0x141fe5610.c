// 函数: sub_141fe5610
// 地址: 0x141fe5610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0

if (data_143a2dc68 == 0 || arg1[4] == 0 || *(arg1 + 0x19) == 0)
    int64_t* rcx = *(arg1 + 0x28)
    
    if (rcx != 0)
        jump(*(*rcx + 0x280))
    
    zmm0.o = zx.o(0)
    return zmm0

uint32_t rdx = zx.d(arg1[6].b)
int32_t var_18[0x6]

if (rdx == 1)
    sub_141fe4fb0(arg1, arg2, &var_18)
    int512_t zmm0_3
    zmm0_3.o = var_18[0]
    return zmm0_3

if (rdx == 2)
    sub_141fe5050(arg1, arg2, &var_18, arg4)
    int512_t zmm0_2
    zmm0_2.o = var_18[0]
    return zmm0_2

if (rdx == 3)
    sub_141fe4ea0(arg1, arg2, &var_18, 0, arg4)
    int512_t zmm0_1
    zmm0_1.o = var_18[0]
    return zmm0_1

zmm0.o = zx.o(0)
var_18[0] = 0
return zmm0
