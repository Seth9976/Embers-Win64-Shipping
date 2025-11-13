// 函数: sub_141837eb0
// 地址: 0x141837eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int64_t rsi = *arg2
int64_t var_48 = 0

if (rbx != 0)
    sub_1405a4c70(&var_48, rbx, 0)
    memcpy(var_48, rsi, rbx * 2)
else
    int32_t var_3c_1 = 0

sub_140a2fba0(&var_48, *(arg1 + 8) + 0x68, 1)
sub_140a2fcd0(&var_48, &data_142d5a024, 1)
void* r14 = *(arg1 + 8)
int32_t var_38
sub_140598750(r14 + 0x470, &var_38)
int64_t* var_30
*var_30 = 0
int64_t r15 = var_48
var_30[1].d = rbx

if (rbx != 0)
    sub_1405a4c70(var_30, rbx, 0)
    memcpy(*var_30, r15, rbx * 2)
else
    *(var_30 + 0xc) = 0

var_30[2].d = 0xffffffff
int32_t rax = var_30[1].d
int16_t* rdx_7

if (rax == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *var_30

int32_t rcx_7 = rax - 1

if (rax == 0)
    rcx_7 = 0

void arg_8
sub_14059a6d0(r14 + 0x470, &arg_8, sub_1405969c0(rcx_7, rdx_7), var_30, var_38, nullptr)
int64_t* rcx_9 = **(arg1 + 0x10)
int64_t result = (*(*rcx_9 + 0x30))(rcx_9, arg2)
int64_t rcx_10 = var_48

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
