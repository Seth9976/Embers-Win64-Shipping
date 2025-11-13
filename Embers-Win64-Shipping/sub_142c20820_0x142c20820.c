// 函数: sub_142c20820
// 地址: 0x142c20820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48 = 0
int128_t var_40
__builtin_memset(&var_40, 0, 0x15)
int32_t var_28 = 0
int64_t var_20 = 0
int32_t var_18 = sub_142bfb130(arg2)
char var_14 = 1
int32_t* rax_2 = sub_142c187b0(&var_48, sub_142bfb150(arg2, 0x47444546))
*arg1 = rax_2
int128_t* const rcx_3 = &data_14369a5d0
int128_t* const rdx_1 = &data_14369a5d0

if (rax_2 != 0)
    rdx_1 = rax_2

if (*(rdx_1 + 0x18) u>= 0xc)
    rcx_3 = rdx_1[1].q

char result = sub_142c20970(rcx_3, rax_2, arg2)

if (result != 0)
    sub_142c09b70(*arg1)
    result = sub_142c09c40()
    *arg1 = &data_14369a5d0

return result
