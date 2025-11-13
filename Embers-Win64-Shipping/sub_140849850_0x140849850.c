// 函数: sub_140849850
// 地址: 0x140849850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x780)
void*** rcx_1

if (rax == 0)
    rcx_1 = nullptr
else
    rcx_1 = sub_140843a30(rax, arg1)

void arg_10

if (arg2 != &arg_10)
    void*** r8_1 = *arg2
    *arg2 = rcx_1
    
    if (r8_1 != 0)
        (**r8_1)(r8_1, 1)
else if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

void* result
result.b = 1
return result
