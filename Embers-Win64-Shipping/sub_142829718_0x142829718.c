// 函数: sub_142829718
// 地址: 0x142829718
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 5
sub_1428256bc(*(arg1 + 0x18), &arg_8)
void* rax = sub_142828cd8(*(arg1 + 8))
int64_t* rcx_2 = *(arg1 + 8)
int64_t var_18 = *(rax + 8)
int32_t var_10 = *(rax + 0x10)
sub_142828d00(rcx_2)
sub_142829ce4(arg1, arg2, arg3)
char rax_2 = sub_142828cbc(*(arg1 + 8))
void* rax_3

if (rax_2 == 0)
    rax_3 = sub_142828cd8(*(arg1 + 8))

if (rax_2 != 0 || *(rax_3 + 4) != 0xf)
    (*(*arg2 + 0x18))(arg2, &var_18, 0)
else
    sub_142828d00(*(arg1 + 8))
    sub_142829ce4(arg1, arg2, arg3)

void* result = *(arg1 + 0x18)
int64_t temp0 = *(result + 0x20)
*(result + 0x20) -= 1

if (temp0 == 1)
    *(result + 0x18) = 0

return result
