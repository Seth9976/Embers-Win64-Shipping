// 函数: sub_1421f7020
// 地址: 0x1421f7020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void*** rax = j_sub_140a82f30(0xb8)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_1421d7050(rax, arg_8)

void** arg_20 = &arg_8
int32_t arg_18
sub_1421d5590(&data_143a2f030, &arg_18, &arg_20, nullptr)
int64_t result = data_143a2f030
*(result + sx.q(arg_18) * 0x18 + 8) = rbx
return result
