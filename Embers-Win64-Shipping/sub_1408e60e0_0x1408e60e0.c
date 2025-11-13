// 函数: sub_1408e60e0
// 地址: 0x1408e60e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x360)
int64_t result

if (rbx != 0)
    void* rax = sub_1408ea9e0()
    void* r9_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(r9_1 + 0x38) && *(*(r9_1 + 0x30) + (result << 3)) == rax + 0x30)
        jump(*(**(rbx + 0xa8) + 0x18))

result.b = 0
return result
