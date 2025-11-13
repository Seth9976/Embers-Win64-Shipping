// 函数: sub_14066b610
// 地址: 0x14066b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x150))()
void* arg_28
void* rdi = arg_28

if (rdi == 0)
    rdi = sub_140666d50(arg1)

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_28 = nullptr
void* rax_3 = sub_140d2dfc0(sub_140681aa0(), arg1, 0, 0, 0, 0, 0, 0, 0)
int64_t* arg_8 = rax_3
*(rax_3 + 0xf0) = arg3
*(arg_8 + 0xf1) = arg4

if (rdi != 0)
    arg_8[0x16] = rdi

int64_t* var_58 = nullptr
int64_t var_50
sub_140d3a3a0(&var_50, nullptr)
int64_t* rdx_1 = arg_8
var_58 = rdx_1
int64_t var_40 = 0
int64_t var_38 = 0
var_50 = *arg5
int64_t var_48 = arg5[1]
int64_t var_40_1 = *sub_140664b30(&rdx_1[9], &arg_28, arg1, sub_140670400)
int64_t rcx_9 = *sub_140664b30(&arg_8[0xc], &arg_28, arg1, sub_140670400)
int64_t** var_68 = &arg_8
int64_t var_38_1 = rcx_9
int64_t** var_60 = &var_58
void arg_18
sub_140665e60(&arg1[6], &arg_18, &var_68, nullptr)
sub_1406797b0(arg_8)
int64_t* rcx_12 = arg_8
return (*(*rcx_12 + 0x260))(rcx_12, arg2)
