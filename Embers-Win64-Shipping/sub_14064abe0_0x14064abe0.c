// 函数: sub_14064abe0
// 地址: 0x14064abe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

void var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_50, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)
int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_5 = *(arg2 + 0x20)
int32_t rsi = arg_18
int32_t rbp = arg_20
int64_t rcx_4
rcx_4.b = rax_5 != 0
*(arg2 + 0x20) = rcx_4 + rax_5
void* rax_6 = sub_140cde0b0()
sub_140d19010(rax_6, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_58 = 0
void* result
int32_t zmm6_1
result, zmm6_1 = sub_140d2dfc0(sub_1425b6f00(), rax_6, 0, 0, 0, 0, 0, 0, 0)
void* result_1 = result

if (result != 0)
    int128_t zmm0_1 = data_14399f5c0
    *(result + 0xb8) = zmm6_1
    *(result + 0xc8) = zmm0_1
    result = sub_1423c21c0(result_1, zx.q(rbp), zx.q(rsi))
    *arg3 = result_1
else
    *arg3 = nullptr

return result
