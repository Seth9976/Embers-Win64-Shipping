// 函数: sub_142519d20
// 地址: 0x142519d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
void* rdx_2 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void var_38
int32_t* rax_3 = sub_1420b78f0(&var_38, rdx_2)
*arg3 = *rax_3
arg3[1].d = rax_3[2]
int64_t* result = sub_141ddfdd0(&arg3[2], &rax_3[4])
int64_t var_20

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
