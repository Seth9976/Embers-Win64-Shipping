// 函数: sub_1426e2fd0
// 地址: 0x1426e2fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x20)
uint64_t result

if (rbx != 0)
    void* rax = sub_1427297d0()
    void* rcx = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax + 0x30
            && IsInExceptionSpec(rbx, arg1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
