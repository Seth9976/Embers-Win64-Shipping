// 函数: sub_140cdb930
// 地址: 0x140cdb930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = 0
int32_t arg_10 = 0
void* rax = sub_140d21d80(arg2)
int64_t rdi = *(rax + 0x18)
int64_t var_58
void* rax_1

if (rax != *(arg2 + 0x20))
    int64_t* rax_2 = sub_140d21e10(arg2, &var_58, rax)
    int16_t* rdx_1
    
    if (rax_2[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *rax_2
    
    r14 = 1
    rax_1 = sub_140b58260(&arg_10, rdx_1, 1)
else
    rax_1 = arg2 + 0x18

int64_t rbp_1 = *rax_1

if ((r14 & 1) != 0)
    int64_t rcx_3 = var_58
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

int64_t var_48 = arg3
int64_t var_30
sub_140be09b0(&var_30, 0x20, &var_48)
int64_t rax_3 = var_30
int64_t var_28
int64_t var_20

if (rax_3 != var_48 || var_28 != rbp_1 || var_20 != rdi)
    *arg1 = rax_3
else
    *arg1 = 0

return arg1
