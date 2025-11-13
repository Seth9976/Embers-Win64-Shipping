// 函数: sub_142519bc0
// 地址: 0x142519bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &arg_10

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_38
int32_t* rax_4 = sub_1420b6ef0(&var_38, rdx_2)
*arg3 = *rax_4
arg3[1].d = rax_4[2]
int64_t* result = sub_141ddfdd0(&arg3[2], &rax_4[4])
int64_t var_20

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
