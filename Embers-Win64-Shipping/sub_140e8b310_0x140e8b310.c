// 函数: sub_140e8b310
// 地址: 0x140e8b310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1 + 0x390
uint32_t r9 = zx.d(arg2)
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

void* r10 = rcx + (zx.q(r9) u>> 5 << 2)
int32_t rax_1 = 1 << (r9.b & 0x1f)
int32_t rcx_2 = *r10

if (arg3 == 0)
    int32_t rax_4 = not.d(rax_1) & rcx_2
    *r10 = rax_4
    return rax_4

int32_t rax_2 = rax_1 | rcx_2
*r10 = rax_2
return rax_2
