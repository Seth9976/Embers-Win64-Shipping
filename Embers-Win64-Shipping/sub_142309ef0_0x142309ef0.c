// 函数: sub_142309ef0
// 地址: 0x142309ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t i_1 = arg2
int32_t rax = rdi.d + arg2
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4ec0(arg1)

int64_t* rdx_1 = *arg1 + rdi * 0x28

if (i_1 != 0)
    void* rcx_1 = rdx_1 + 0x1c
    int32_t i
    
    do
        *rdx_1 = 0
        rdx_1 = &rdx_1[5]
        __builtin_memset(rcx_1 - 0x14, 0, 0x18)
        *(rcx_1 + 4) = 0xffffffff
        rcx_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rdi.d)
