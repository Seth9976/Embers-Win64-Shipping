// 函数: sub_142c71c60
// 地址: 0x142c71c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + sx.q(arg2) * 0x28
void* rcx = *(rbx + 0x2d8)

if (rcx == 0)
    int64_t result
    result.b = 0
    return result

if (sub_142850350(rcx) == 0)
    void* rcx_1 = *(rbx + 0x328)
    int32_t rax_1
    
    if (rcx_1 != 0)
        rax_1 = sub_142850350(rcx_1)
    
    if (rcx_1 == 0 || rax_1 == 0)
        return 0

return 1
