// 函数: sub_142727460
// 地址: 0x142727460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t var_10
int32_t var_10_1 = var_10 & 0xfffffffe
int128_t var_28
__builtin_memset(&var_28, 0, 0x18)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int128_t* rax_3 = *(arg2 + 0x38)
int128_t* r8_4 = &var_28
void* rdx_4 = arg_10

if (rax_3 != 0)
    r8_4 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
char result = sub_1426fb250(arg1, rdx_4, r8_4)
int64_t rcx_3 = var_28:8.q
*arg3 = result

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
