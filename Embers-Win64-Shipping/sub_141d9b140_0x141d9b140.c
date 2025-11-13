// 函数: sub_141d9b140
// 地址: 0x141d9b140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t i_1 = arg2
int32_t rax = rdi.d + arg2
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c5060(arg1)

int32_t* rdx_3 = rdi * 0x50 + *arg1

if (i_1 != 0)
    void* rcx = &rdx_3[5]
    int32_t i
    
    do
        *rdx_3 = 0xffffffff
        rdx_3 = &rdx_3[0x14]
        *(rcx - 0xc) = 0
        *(rcx - 4) = 0
        __builtin_memset(rcx + 4, 0, 0x2c)
        *(rcx + 0x34) = 0
        rcx += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rdi.d)
