// 函数: sub_140991d80
// 地址: 0x140991d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2
int64_t result

if (arg2 == 0)
    rbx = nullptr
else
    void* rax = sub_1425b0750()
    void* rdx = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rdx + 0x38))
        rbx = nullptr
    else if (*(*(rdx + 0x30) + (result << 3)) != rax + 0x30)
        rbx = nullptr

result.b = rbx != 0
return result
