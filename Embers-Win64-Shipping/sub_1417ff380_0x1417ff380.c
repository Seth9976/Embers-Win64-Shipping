// 函数: sub_1417ff380
// 地址: 0x1417ff380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s<= 1 || arg3[1].d s<= 1)
    return 

int32_t arg_10
sub_14062d6e0(&arg1[0x18], &arg_10, arg2)
int64_t rax_1 = sx.q(arg_10)
void* const rcx_1

if (rax_1.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = arg1[0x18] + rax_1 * 0x28

int64_t var_38 = 0
int64_t* rbx_1 = rcx_1 + 0x10
int64_t var_30_1 = 0

if (rcx_1 == 0)
    rbx_1 = nullptr

if (rbx_1 != 0)
    int32_t rbp_1 = rbx_1[1].d
    
    if (rbp_1 s> 1)
        int64_t rbx_2 = *rbx_1
        int64_t var_48 = 0
        sub_1405a4c70(&var_48, rbp_1 + 2, 0)
        memcpy(var_48, rbx_2, rbp_1 * 2)
        sub_140a20ba0(&var_48, &data_142d8adc4, 2)
        int64_t rcx_5 = var_38
        int64_t rbx_3 = var_48
        var_48 = 0
        int32_t var_40_1
        var_40_1.q = 0
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int32_t var_3c
        var_30_1:4.d = var_3c
        var_38 = rbx_3
        var_30_1.d = rbp_1

int32_t rax_3 = arg3[1].d
int32_t r8_3 = rax_3 - 1

if (rax_3 == 0)
    r8_3 = 0

sub_140a20ba0(&var_38, *arg3, r8_3)
(*(*arg1 + 0x78))(arg1, arg2, &var_38)
int64_t rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)
