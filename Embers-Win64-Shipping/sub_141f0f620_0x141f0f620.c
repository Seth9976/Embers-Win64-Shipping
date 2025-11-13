// 函数: sub_141f0f620
// 地址: 0x141f0f620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = sub_14100e1e0(arg1 + 0x20)
int32_t i_1 = *(arg1 + 0x18)
void*** rbx = *(arg1 + 0x10)

if (i_1 != 0)
    int32_t i
    
    do
        result = sub_141afd710(rbx)
        rbx = &rbx[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x10)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
