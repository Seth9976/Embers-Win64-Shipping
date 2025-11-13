// 函数: sub_1421599e0
// 地址: 0x1421599e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140598750(arg1, &var_18)
int64_t* var_10
*var_10 = *arg3
void* rax_1 = arg3[1]
var_10[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

var_10[2].d = 0xffffffff
uint32_t rcx_1 = (**var_10 u>> 4).d
int32_t rdx_2 = (0x9e3779b9 - rcx_1) ^ rcx_1 << 8
int32_t r8_2 = neg.d(rdx_2 + rcx_1) ^ rdx_2 u>> 0xd
int32_t rcx_4 = (rcx_1 - rdx_2 - r8_2) ^ r8_2 u>> 0xc
int32_t rdx_5 = (rdx_2 - rcx_4 - r8_2) ^ rcx_4 << 0x10
int32_t r8_5 = (r8_2 - rdx_5 - rcx_4) ^ rdx_5 u>> 5
int32_t rcx_7 = (rcx_4 - rdx_5 - r8_5) ^ r8_5 u>> 3
int32_t rdx_8 = (rdx_5 - rcx_7 - r8_5) ^ rcx_7 << 0xa
sub_142165b40(arg1, arg2, (r8_5 - rdx_8 - rcx_7) ^ rdx_8 u>> 0xf, var_10, var_18, arg4)
return arg2
