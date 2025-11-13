// 函数: sub_142275d90
// 地址: 0x142275d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1

if (result != 0)
    *(result + 0x10) = 0
    int64_t rdi_1 = sx.q(data_143f52638)
    int32_t rax = (rdi_1 + 1).d
    bool cond:0_1 = rax s<= data_143f5263c
    data_143f52638 = rax
    
    if (not(cond:0_1))
        sub_1405a4d70(&data_143f52630)
    
    result = data_143f52630
    *(result + (rdi_1 << 3)) = *arg1
    *arg1 = 0

return result
