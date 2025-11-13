// 函数: sub_141dc9860
// 地址: 0x141dc9860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result != 0)
    void* rdx_1 = *(result + 0x188)
    void* rbx_1
    
    if (rdx_1 == 0)
        rbx_1 = *(result + 0x300)
    else
        rbx_1 = *(rdx_1 + 0xc0)
    
    int64_t arg_8 = arg1[0x29]
    result = sub_1423dce10(rbx_1, &arg_8)
    sub_1423e61c0(rbx_1, result)

return result
