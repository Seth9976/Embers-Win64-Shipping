// 函数: sub_140b56010
// 地址: 0x140b56010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg1
int32_t rbp = arg2
int64_t rdi = sx.q(*(r15 + 0x30))
int32_t rbx_2 = (arg2 - 1 + *(r15 + 0x30)) & neg.d(arg2)

if (rbx_2 s> rdi.d)
    *(r15 + 0x30) = rbx_2
    
    if (rbx_2 s> *(r15 + 0x34))
        sub_1405daba0(r15 + 0x28)
    
    memset(rdi + *(r15 + 0x28), 0, sx.q(rbx_2 - rdi.d))
else if (rbx_2 s< rdi.d && rbx_2 != rdi.d)
    *(r15 + 0x30) = rbx_2
    sub_1405dac10(r15 + 0x28)

if (*(r15 + 0x7c) u>= rbp)
    rbp = *(r15 + 0x7c)

*(r15 + 0x7c) = rbp
return zx.q(rbx_2)
