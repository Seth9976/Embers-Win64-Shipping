// 函数: sub_141434340
// 地址: 0x141434340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6_1 = sub_141456c10(arg1.b)
void* rcx = *arg3
int128_t var_58 = zmm6_1
sub_141998c50(rcx, &data_143ed5a40, arg4)
int128_t zmm0 = *arg3
int32_t rax_1 = arg5[1].d
int64_t var_30 = *arg5
void*** rax_2
char rcx_1
rax_2, rcx_1 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    var_58.q = arg4
    sub_141456c10(rcx_1)
    var_58:8.q = &data_143ed5a70
    var_58 = var_58
    sub_141992bd0(rbx_1, arg2, &var_58, 2)
    *rbx_1 = &data_142f860d0
    *(rbx_1 + 0x38) = arg4.o
    *(rbx_1 + 0x48) = zmm0
    rbx_1[0xb] = rax_1.q

return sub_1419968d0(arg1, rbx_1) __tailcall
