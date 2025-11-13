// 函数: sub_1418c60f0
// 地址: 0x1418c60f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = 0
uint64_t r11_1 = zx.q(arg4) u>> 2
int32_t* r8 = arg5
int64_t rdi = sx.q(arg2)
int32_t* rax_1 = zx.q(arg3) + *((rdi << 4) + *arg1)
int64_t r10_1
r10_1.b = 0

if (r8 u> &r8[r11_1])
    r11_1 = 0

if (r11_1 != 0)
    do
        int32_t rdx = *r8
        r8 = &r8[1]
        bool cond:0_1 = *rax_1 != rdx
        *rax_1 = rdx
        rax_1 = &rax_1[1]
        void* rcx_1
        rcx_1.b = cond:0_1
        r9 += 1
        r10_1.b |= rcx_1.b
    while (r9 != r11_1)

int64_t rbx
rbx.b = r10_1.b != 0
*arg6 |= rbx << rdi.b
return arg6
