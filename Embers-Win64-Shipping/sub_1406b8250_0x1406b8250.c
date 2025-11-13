// 函数: sub_1406b8250
// 地址: 0x1406b8250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg1[1].d)
int32_t i_1 = arg2
int32_t rax = r14.d + arg2
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1406bfcb0(arg1)

void* rdi_1 = r14 * 0xa8 + *arg1

if (i_1 != 0)
    void* rbx_1 = rdi_1 + 0x2c
    int32_t i
    
    do
        sub_140a96170(rdi_1)
        rdi_1 += 0xa8
        *(rbx_1 - 0xc) = 0
        *(rbx_1 - 4) = 0
        __builtin_memset(rbx_1 + 0x54, 0, 0x20)
        rbx_1 += 0xa8
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r14.d)
