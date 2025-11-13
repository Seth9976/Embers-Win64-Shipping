// 函数: sub_141e4f410
// 地址: 0x141e4f410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* rdx = &arg1[0x18]
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
*(arg1 + 0x38) = 0xffffffff
*(arg1 + 0x3c) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0x3f800000
*(arg1 + 0x5c) = 0xffffffff
*(arg1 + 0x60) = 0
arg1[0x64] = 0
*(arg1 + 0x68) = 0x8000
arg1[0x6c] = 0
*(arg1 + 0x70) = 0x100
int32_t var_18
sub_14090a150(&arg1[8], &var_18)
int32_t rax_1 = var_18
char* var_10
*var_10 = 0
*(var_10 + 4) = 0x473b8000
*(var_10 + 8) = 0xffffffff
void arg_8
sub_141e5b8e0(&arg1[8], &arg_8, zx.d(*var_10), var_10, rax_1, nullptr)
sub_14090a150(&arg1[8], &var_18)
int32_t rax_2 = var_18
*var_10 = 1
*(var_10 + 4) = 0x46fa0000
*(var_10 + 8) = 0xffffffff
sub_141e5b8e0(&arg1[8], &arg_8, zx.d(*var_10), var_10, rax_2, nullptr)
sub_14090a150(&arg1[8], &var_18)
int32_t rax_3 = var_18
*var_10 = 2
*(var_10 + 4) = 0x46bb8000
*(var_10 + 8) = 0xffffffff
sub_141e5b8e0(&arg1[8], &arg_8, zx.d(*var_10), var_10, rax_3, nullptr)
sub_14090a150(&arg1[8], &var_18)
int32_t rax_4 = var_18
*var_10 = 3
*(var_10 + 4) = 0x463b8000
*(var_10 + 8) = 0xffffffff
sub_141e5b8e0(&arg1[8], &arg_8, zx.d(*var_10), var_10, rax_4, nullptr)
sub_14090a150(&arg1[8], &var_18)
int32_t rax_5 = var_18
*var_10 = 4
*(var_10 + 4) = 0x45fa0000
*(var_10 + 8) = 0xffffffff
sub_141e5b8e0(&arg1[8], &arg_8, zx.d(*var_10), var_10, rax_5, nullptr)
return arg1
