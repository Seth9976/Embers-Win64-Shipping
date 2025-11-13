// 函数: sub_14120ee00
// 地址: 0x14120ee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_1405d16e0(arg1 + 0x18, nullptr)
int64_t r8 = *(arg1 + 0x20)

if (r8 == 0)
    return result

int64_t* rcx_1 = data_143f0f180
void* arg_8
(*(*rcx_1 + 0xf8))(rcx_1, &arg_8, r8, &data_143e823a0, *(arg1 + 0x10), 1)
void* rax_1 = arg_8
void* arg_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_1405d1550(&arg_8)
sub_1405d1600(arg1 + 0x18, &arg_10)
return sub_1405d1550(&arg_10)
