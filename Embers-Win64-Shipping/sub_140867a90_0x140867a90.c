// 函数: sub_140867a90
// 地址: 0x140867a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void*** rax = j_sub_140a82f30(0x528)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_140863430(rax, arg_8)

void** arg_20 = &arg_8
int32_t arg_18
sub_140862d50(&data_14396ff70, &arg_18, &arg_20, nullptr)
int64_t result = data_14396ff70
*(result + sx.q(arg_18) * 0x18 + 8) = rbx
return result
