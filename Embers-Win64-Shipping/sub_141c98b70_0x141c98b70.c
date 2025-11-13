// 函数: sub_141c98b70
// 地址: 0x141c98b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(*arg2 + 0x188))(arg2) == 0)
    return 

void* rax_2 = sub_140d21d80(arg2)
int64_t rcx_2 = *(rax_2 + 0x18)
*(rax_2 + 0x50) |= 1
int64_t arg_10 = rcx_2
int64_t var_78
sub_140b63b70(&arg_10, &var_78)
sub_141caa2b0(arg1 + 0x2d8, *(rax_2 + 0x18))
int64_t var_68
int64_t* rax_3 = sub_140baa480(&var_68, &var_78)
int16_t* rdx_3

if (rax_3[1].d == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *rax_3

sub_141c98100(arg1 - 0x28, *sub_140b58260(&arg_10, rdx_3, 1))
int64_t rcx_8 = var_68

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

void var_58
sub_140920c10(arg1 + 0x568, sub_141c91480(&var_58, arg2, 0))
int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t temp1_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_28 + 8))(var_28, 1)

sub_140920c10(arg1 + 0x5c8, arg2)
int64_t rcx_15 = var_78

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)
