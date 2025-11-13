// 函数: sub_142083a30
// 地址: 0x142083a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140aae6a0()
int64_t rax = sub_140aac150(&data_143db9ce0, *arg2)
int64_t rdx_1 = *arg2
int64_t arg_20 = rax
int64_t var_20
sub_14208c230(&var_20, rdx_1)
int64_t* rdx_2 = &arg_20
int64_t* rcx_1 = *(*arg3 + 8)
int64_t rax_2 = *rcx_1
int64_t result

if (var_20 == 0)
    result = (*(rax_2 + 0x130))(rcx_1, rdx_2)
else
    (*(rax_2 + 0x130))(rcx_1, rdx_2)
    int64_t* rcx_2 = *(*arg3 + 8)
    (*(*rcx_2 + 0x110))(rcx_2, &var_20)
    int64_t var_30
    int64_t* rax_5 = sub_140d30800(&var_20, &var_30)
    int16_t* rdx_5
    
    if (rax_5[1].d == 0)
        rdx_5 = &data_142d40450
    else
        rdx_5 = *rax_5
    
    int64_t result_1
    sub_140b58260(&result_1, rdx_5, 1)
    int64_t rcx_5 = var_30
    result = result_1
    *arg2 = result
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)

int64_t var_18

if (var_18 == 0)
    return result

return sub_140a74f90(var_18)
