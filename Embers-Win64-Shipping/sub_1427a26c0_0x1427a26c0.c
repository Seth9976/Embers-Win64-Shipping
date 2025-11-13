// 函数: sub_1427a26c0
// 地址: 0x1427a26c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8

if (*sub_1408f1b50(arg1 + 0x90, &arg_8, arg3) == 0xffffffff)
    int32_t* result
    result.b = 0
    return result

int64_t* rcx_1 = *(arg1 + 0x70)
int512_t zmm0
zmm0.o = zx.o(0)
void* rbx = nullptr
int128_t var_48
__builtin_memset(&var_48, 0, 0x38)
(*(*rcx_1 + 8))(zmm0, &var_48)
sub_1408f1b50(arg1 + 0x90, &arg_8, arg3)
int64_t rax_1 = sx.q(arg_8)

if (rax_1.d != 0xffffffff)
    rbx = (rax_1 << 5) + *(arg1 + 0x90)

int64_t* rcx_3 = *(rbx + 0x10)
char rax_3 = (*(*rcx_3 + 0x260))(rcx_3, &var_48)
int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

int128_t var_38
int64_t rcx_5 = var_38:8.q

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return zx.q(rax_3)
