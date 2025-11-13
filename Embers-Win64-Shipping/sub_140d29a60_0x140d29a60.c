// 函数: sub_140d29a60
// 地址: 0x140d29a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d21a40()
int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rax = arg1
    rax[1] = 0

int64_t arg_10 = arg1
int64_t* var_28 = &arg_10
int64_t var_38 = arg3
int64_t* var_20 = &var_38
int64_t var_30 = arg2
void arg_8
sub_140d13d60(&data_143e1d840, &arg_8, &var_28, nullptr)
void* result = data_143e1d8a0
data_143e1d8a0 = rbx

if (result == 0)
    data_143e1d898 = rbx
else
    *(result + 8) = rbx

return result
