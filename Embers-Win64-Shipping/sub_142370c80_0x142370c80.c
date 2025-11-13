// 函数: sub_142370c80
// 地址: 0x142370c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result
char r9
result, r9 = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) != 0)
    return result

int512_t zmm3
zmm3.o = 0x3f800000
void arg_8
int32_t var_10_1 = *sub_141f79930(&arg_8)
char var_18_1 = 0
void arg_10
char r9_1
int512_t zmm3_1
r9_1, zmm3_1 = sub_141f7f6d0(arg1 + 0x70, &arg_10, (zx.o(0)).d, r9)
zmm3_1.o = 0x3f800000
int32_t var_10_2 = *sub_141f79930(&arg_8)
char var_18_2 = 0
return sub_141f7f6d0(arg1 + 0xf8, &arg_10, (zx.o(0)).d, r9_1)
