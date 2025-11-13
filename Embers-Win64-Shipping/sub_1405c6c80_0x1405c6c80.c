// 函数: sub_1405c6c80
// 地址: 0x1405c6c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = *(arg1 + 0x240)

if (rax_1 != 0)
    *(rax_1 + 0xb8) = arg2

int64_t* rcx = data_143cd6040
int64_t var_18
int64_t* rax_3 = (*(*rcx + 0xa0))(rcx, &var_18)
int16_t* rdx_1

if (rax_3[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax_3

int64_t arg_10
sub_140b58260(&arg_10, rdx_1, 1)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1405bfed0(arg1 + 0x458, arg_10, arg2, 0)
