// 函数: sub_140a67ec0
// 地址: 0x140a67ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t rbx = sx.q(arg2)
void* rax_1 = (*(*rcx + 0x130))(rcx)
int16_t* rax_3
int16_t* rdx_1
int32_t* r8_1
int64_t* r9_1

if (rbx.d s>= 0x1c)
    r9_1 = rax_1 + 0x720
    rdx_1 = rax_1 + 0x712
    r8_1 = rax_1 + 0x714
    rax_3 = rax_1 + 0x710
else
    int64_t rcx_2 = rbx << 6
    r9_1 = rax_1 + 0x20 + rcx_2
    rdx_1 = rax_1 + 0x12 + rcx_2
    r8_1 = rax_1 + 0x14 + rcx_2
    rax_3 = rax_1 + 0x10 + rcx_2

int32_t rcx_3 = sx.d(*rax_3)
int32_t rax_5 = rcx_3 s>> 5
int32_t r10 = rax_5

if (rcx_3.w s< 0)
    r10 = *r8_1

if (r10 != 1)
    return zx.q(arg3)

if (rcx_3.w s< 0)
    rax_5 = *r8_1

if (rax_5 == 0)
    return 0xffff

if ((rcx_3.b & 2) == 0)
    rdx_1 = *r9_1

return zx.q(*rdx_1)
