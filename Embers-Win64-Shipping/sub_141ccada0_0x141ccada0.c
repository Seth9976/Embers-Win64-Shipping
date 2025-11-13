// 函数: sub_141ccada0
// 地址: 0x141ccada0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int128_t var_48 = zx.o(0)

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rdi = 0
int64_t var_28
__builtin_memset(&var_28, 0, 0x20)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rdx_4 = &var_28

if (rax_3 != 0)
    rdx_4 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_4 != 0
int64_t rax_5 = var_48.q
*(arg2 + 0x20) = rcx_2 + rax_4
int64_t var_38 = rax_5

if (rax_5 != 0)
    rdi = var_48:8.q

int64_t var_30 = rdi
char result = sub_141cc2f50(&var_38, rdx_4)
*arg3 = result
int64_t var_18

if (var_18 != 0)
    result = sub_140a74f90(var_18)

int64_t rcx_6 = var_28

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
