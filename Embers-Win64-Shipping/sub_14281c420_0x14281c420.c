// 函数: sub_14281c420
// 地址: 0x14281c420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1] == 0x7ffffffffffffff)
    std::_Xlength_error("list too long")
    noreturn

void** var_28 = arg1
int64_t var_20 = 0
int64_t* result = sub_14058b9f0(0x20)
result[2] = *arg3
result[3] = *arg4
arg1[1] += 1
void* arg_8 = arg2
void** rbx_1 = *(arg2 + 8)
var_28 = rbx_1
sub_142714680(result, &arg_8)
sub_142714680(&result[1], &var_28)
*(arg2 + 8) = result
*rbx_1 = result
return result
