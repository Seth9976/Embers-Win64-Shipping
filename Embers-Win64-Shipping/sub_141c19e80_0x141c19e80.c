// 函数: sub_141c19e80
// 地址: 0x141c19e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t zmm3 = data_143dbb1f0.d
int32_t zmm2 = data_143dbb1f0:4.d
int64_t zmm1 = data_14399f65c
int32_t var_40 = data_14399f658
int32_t var_30 = 0
int32_t var_48 = zmm3
int32_t var_44 = zmm2
int32_t var_3c = zmm1.d
int32_t var_34 = zmm2

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_2 = *(arg2 + 0x20)
int128_t var_28 = var_48.o
int64_t rcx_1
rcx_1.b = rax_2 != 0
int64_t var_18 = zmm3.q
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t var_10 = var_30
return sub_141be5930(arg1, &var_28)
