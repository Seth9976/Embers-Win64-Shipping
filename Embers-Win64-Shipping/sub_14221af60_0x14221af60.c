// 函数: sub_14221af60
// 地址: 0x14221af60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *(arg1 + 0x258)
int64_t result

if (rbx == 0)
    rbx = nullptr
else
    void* rax = sub_14256a090()
    void* rdx_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rdx_1 + 0x38))
        rbx = nullptr
    else if (*(*(rdx_1 + 0x30) + (result << 3)) != rax + 0x30)
        rbx = nullptr

result.b = rbx != 0
return result
