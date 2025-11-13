// 函数: sub_14251a150
// 地址: 0x14251a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_48

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_30
int32_t* rax_4 = sub_1420b81b0(&var_30, rdx_2)
*arg3 = *rax_4
arg3[1].d = rax_4[2]
int64_t* result = sub_141ddfdd0(&arg3[2], &rax_4[4])
int64_t var_18

if (var_18 != 0)
    result = sub_140a74f90(var_18)

int64_t var_40

if (var_40 == 0)
    return result

return sub_140a74f90(var_40)
