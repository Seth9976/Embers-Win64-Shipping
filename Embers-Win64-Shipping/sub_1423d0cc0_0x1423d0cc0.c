// 函数: sub_1423d0cc0
// 地址: 0x1423d0cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[2]
int32_t var_38 = 0x11
int128_t var_48 = zx.o(0)
int64_t rax = *(r9 + 0x10)
var_48:8.q = data_14395d9e8
char rax_2 = *(arg1 + 0x19)
char rax_3 = arg1[3].b
int64_t* rcx = *arg1
int128_t var_28
__builtin_memset(&var_28, 0, 0x1c)
int64_t var_18
int32_t var_10
int64_t result =
    sub_1423edc90(rcx, arg2, &var_48, r9, rax_3, rax_2, var_48, var_38, rax, var_28, var_18, var_10)
int64_t* rbx = arg1[2]
int64_t* rdi = *rbx

if (rdi != 0)
    sub_1422dbb60(rdi)
    result = j_sub_140a74f90(rdi)
    rbx = arg1[2]

if (rbx == 0)
    return result

sub_1413c58e0(rbx)
return j_sub_140a74f90(rbx)
