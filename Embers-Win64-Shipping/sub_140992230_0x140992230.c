// 函数: sub_140992230
// 地址: 0x140992230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2
int64_t result

if (arg2 == 0)
    rbx = nullptr
else
    void* rax = sub_142798920()
    void* rdx = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rdx + 0x38))
        rbx = nullptr
    else if (*(*(rdx + 0x30) + (result << 3)) != rax + 0x30)
        rbx = nullptr

result.b = rbx != 0
return result
