// 函数: sub_141c1e240
// 地址: 0x141c1e240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_26 = 0
int32_t var_24 = 0
int16_t var_28 = arg4 & 0xfe00
void** const var_30 = &data_142ecfd70
int64_t var_20 = 0
int16_t var_18 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

void*** rax_2 = *(arg2 + 0x38)
void** const* rdx_2 = &var_30

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void** var_48
void*** rax_4 = sub_141bae170(&var_48, rdx_2)
*(arg3 + 8) = rax_4[1].w
*(arg3 + 0xa) = *(rax_4 + 0xa)
*(arg3 + 0xc) = *(rax_4 + 0xc)
int64_t result = rax_4[2]
*(arg3 + 0x10) = result
return result
