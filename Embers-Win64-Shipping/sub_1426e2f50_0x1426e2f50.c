// 函数: sub_1426e2f50
// 地址: 0x1426e2f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x20)
uint64_t result

if (rdi != 0)
    void* rax = sub_1427297d0()
    void* rcx = *(rdi + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax + 0x30
            && sub_1426b6270(rdi, sub_1426b2820(arg1), zx.d(*(arg1 + 0x59))).b != 0)
        result.b = 1
        return result

result.b = 0
return result
