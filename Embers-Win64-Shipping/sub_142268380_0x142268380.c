// 函数: sub_142268380
// 地址: 0x142268380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
int64_t r9 = *arg1
int64_t var_18
int64_t* rax = (*(r9 + 0x30))(arg1, &var_18, arg2, r9)
int16_t* const rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

int64_t rax_2 = (*(data_14399ea08 + 0x108))(&data_14399ea08, rdx_1)
int64_t rcx_1 = var_18
int64_t rbx
rbx.b = rax_2 s>= 0

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t result
result.b = rbx.b == 0
return result
