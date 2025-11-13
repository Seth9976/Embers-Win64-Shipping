// 函数: sub_141bdbe20
// 地址: 0x141bdbe20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int32_t var_40 = 0
void*** rax = sub_1405978f0(0x60, &var_48)

if (rax != 0)
    *rax = &data_142e768f8
    rax[2] = *arg3
    rax[4] = arg3[2]
    arg3[2] = 0
    *(rax + 0x30) = *(arg3 + 0x20)
    *(rax + 0x40) = *(arg3 + 0x30)
    
    if (rax[2] != 0)
        *arg3 = 0
    
    rax[0xb] = sub_140a387b0()
    *rax = &data_142e76950

void var_38
int64_t result = (*(*arg1 + 0x300))(arg1, sub_141b79880(&var_38, arg2), &var_48)
int64_t rcx_4 = arg2[3]

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
