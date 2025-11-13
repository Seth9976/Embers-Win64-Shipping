// 函数: sub_141a3b760
// 地址: 0x141a3b760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78
sub_140d3a3a0(&var_78, nullptr)
int32_t var_68 = 0xffffffff
int64_t var_70 = 0
int32_t var_64
__builtin_memset(&var_64, 0, 0x1c)
void var_48
sub_140d3a3a0(&var_48, nullptr)
void var_40
sub_140d3a3a0(&var_40, nullptr)
void var_a8
int64_t* rax = sub_141a4b810(&var_a8, arg2, &arg1[0xa])
var_78 = *rax
sub_140cea340()
void* rax_2
bool rcx_5

if (rax[1] == 0)
    rcx_5 = true
    rax_2 = nullptr
else
    bool cond:0_1 = sub_140d3e110(&rax[2]) == 0
    rax_2 = rax[1]
    rcx_5 = cond:0_1

if (rcx_5 != 0 && rax[4].d != 0)
    rax_2 = sub_140cd0630(&rax[1], nullptr, 0)
    
    if (rax_2 == 0 || (data_143e1b828 & *(*(rax_2 + 8) + 0x10)) == 0)
        rax_2 = rax[1]
        
        if (rax_2 != 0)
            rax[2].d = 0xffffffff
            rax_2 = nullptr
            *(rax + 0x14) = 0
            rax[1] = 0
    else
        rax[1] = rax_2

void* var_70_1 = rax_2
var_68.q = rax[2]
uint64_t var_60
sub_140780c40(&var_60, &rax[3])
int64_t var_50 = rax[5]
int64_t var_90

if (var_90 != 0)
    sub_140a74f90(var_90)

void* rax_5 = sub_140d1fd20(arg2, arg1[0xc])

if (rax_5 != 0 && *(rax_5 + 0xb4) u>= 1)
    sub_140d3a3a0(&var_48, rax_5)

int32_t rcx_13
rcx_13.b = sub_140b5b8a0(arg1[0xd].d, 0) == 0

if ((*(arg1 + 0x6c) != 0 | rcx_13.b) != 0)
    void* rax_7 = sub_140d1fd20(arg2, arg1[0xd])
    
    if (rax_7 != 0 && *(rax_7 + 0xb4) == 0 && *(rax_7 + 0xb8) == 0xffff)
        sub_140d3a3a0(&var_40, rax_7)

int32_t arg_10 = 0xffffffff
int32_t arg_14 = 0

if (arg2 != 0)
    int64_t arg_18
    sub_140d3a3a0(&arg_18, arg2)
    arg_10.q = arg_18

int32_t* var_b8 = &arg_10
int64_t* var_b0 = &var_78
void arg_8
int32_t* result = sub_141a29790(arg1, &arg_8, &var_b8, nullptr)
uint64_t rcx_18 = var_60

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
