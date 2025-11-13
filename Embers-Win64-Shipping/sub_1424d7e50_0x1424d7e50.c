// 函数: sub_1424d7e50
// 地址: 0x1424d7e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_1e = 0
int32_t var_1c = 0
void** const var_28 = &data_142d7f690
int64_t var_18 = 0
int16_t var_20
int16_t var_20_1 = var_20 & 0xfe00
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void*** rax_2 = *(arg2 + 0x38)
void** const* rcx_1 = &var_28

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
uint8_t result = sub_1420c7d60(rcx_1)
*arg3 = result
return result
