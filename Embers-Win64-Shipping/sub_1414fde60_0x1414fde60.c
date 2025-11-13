// 函数: sub_1414fde60
// 地址: 0x1414fde60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)
int32_t i_1 = arg2
int32_t rax = rbx.d + arg2
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_14090a6a0(arg1)

int32_t* rdx_3 = rbx * 0x60 + *arg1

if (i_1 != 0)
    void* rcx = &rdx_3[0x11]
    int32_t i
    
    do
        *rdx_3 = 0
        *(rcx - 0x40) = 0
        rdx_3 = &rdx_3[0x18]
        *(rcx - 0x3c) = 1
        __builtin_memset(rcx - 0x38, 0, 0x14)
        *(rcx - 0x24) = 0x10001
        __builtin_memset(rcx - 0x20, 0, 0x24)
        __builtin_memset(rcx + 4, 0, 0x16)
        rcx += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rbx.d)
