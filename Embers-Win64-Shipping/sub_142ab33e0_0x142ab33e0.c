// 函数: sub_142ab33e0
// 地址: 0x142ab33e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t rdi = *(arg1 + 0x20)
void var_38
int32_t var_34
int32_t var_30
char var_28[0x18]
sub_142b38c50(zx.o(*(arg1 + 0x18)), 0, 0, &var_28, 0x12, &var_38, &var_30, &var_34)

if (*(arg1 + 0x40) != 0)
    sub_142a7dcd0(*(arg1 + 0x30))
    *(arg1 + 0x30) = 0
    *(arg1 + 0x40) = 0

int32_t r9_1 = var_34
int32_t r8 = var_30
*(arg1 + 0x30) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x15) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
int64_t result = sub_142ab3c80(arg1, &var_28, r8, r9_1)
*(arg1 + 0xc) += rdi
*(arg1 + 0x41) = 1
__security_check_cookie(rax_1 ^ &var_78)
return result
