// 函数: sub_141c22d10
// 地址: 0x141c22d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
memset(&var_98, 0, 0x88)
int32_t var_90 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void* rax_2 = *(arg2 + 0x38)
void* rdx_2 = &var_98

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
sub_141be0ee0(arg1, rdx_2)
return result
