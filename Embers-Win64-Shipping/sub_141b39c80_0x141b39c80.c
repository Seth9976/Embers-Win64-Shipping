// 函数: sub_141b39c80
// 地址: 0x141b39c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = data_143f2c8c4
char var_24 = 1
int64_t var_20 = 0
int64_t var_18 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rcx_1 = &var_28

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
*(arg1 + 0xf8) = *(rcx_1 + 8)
*(arg1 + 0xf0) = *rcx_1
char result = rcx_1[1].b
*(arg1 + 0xf4) = result
return result
