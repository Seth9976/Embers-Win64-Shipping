// 函数: sub_1407e5840
// 地址: 0x1407e5840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[2]

if (rdi != 0)
    (*(*rdi + 0x28))(rdi)
    rdi = arg1[2]

void* rbx = *arg1
void* arg_18 = &arg1[1]
int32_t arg_8
sub_1407d11c0(rbx + 0xc8, &arg_8, &arg_18, nullptr)
int64_t result = *(rbx + 0xc8)
*(sx.q(arg_8) * 0xc0 + result + 0x10) = rdi
return result
