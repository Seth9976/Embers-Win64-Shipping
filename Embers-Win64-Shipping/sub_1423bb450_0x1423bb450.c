// 函数: sub_1423bb450
// 地址: 0x1423bb450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[2]
int32_t var_38 = 0x11
int128_t var_48 = zx.o(0)
int64_t var_30 = *(r9 + 0x10)
var_48:8.q = data_14395d9e8
char rax_2 = *(arg1 + 0x1a)
char rax_3 = *(arg1 + 0x19)
char rax_4 = arg1[3].b
int64_t* rcx = *arg1
int128_t var_28
__builtin_memset(&var_28, 0, 0x1c)
int64_t result = sub_1423c78e0(rcx, arg2, &var_48, r9, rax_4, rax_3, rax_2)
int64_t* rbx = arg1[2]
int64_t* rsi = *rbx

if (rsi != 0)
    sub_1422dbb60(rsi)
    result = j_sub_140a74f90(rsi)
    rbx = arg1[2]

if (rbx == 0)
    return result

sub_1413c58e0(rbx)
return j_sub_140a74f90(rbx)
