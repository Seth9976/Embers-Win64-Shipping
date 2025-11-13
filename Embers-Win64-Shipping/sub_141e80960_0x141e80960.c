// 函数: sub_141e80960
// 地址: 0x141e80960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xf8)
int64_t* rax = *(arg1 + 0x60)
void* r8 = &rax[sx.q(*(arg1 + 0x68))]

if (rax == r8)
label_141e809a4:
    rax = nullptr
else
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == r8)
            goto label_141e809a4

void* rdi
rdi.b = rax != 0

if (arg1 != -0xf8)
    LeaveCriticalSection(arg1 + 0xf8)

return zx.q(rdi.b)
