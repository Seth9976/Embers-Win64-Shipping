// 函数: sub_142c5b900
// 地址: 0x142c5b900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
void* rbx = -ffffffffffffffff

do
    rbx += 1
while (*(arg3 + rbx) != 0)

void* r12 = rbx + arg6
char* rax = data_143ccb898(r12 + 2)

if (rax == 0)
    return zx.q((&rax[0x1b]).d)

sub_142c564b0(rax, r12 + 2, "%s:", arg3, arg5)
void* rbx_1 = rbx + rax
memcpy(rbx_1 + 1, arg4, arg6.d)
*(rbx_1 + arg6 + 1) = 0
int64_t** rbx_2 = sx.q(arg2) << 3
int64_t* rax_3 = sub_142c52400(*(*(arg1 + 0x4fa8) + rbx_2), rax)

if (rax_3 == 0)
    data_143ccb8a0(rax)
    sub_142c524d0(*(*(arg1 + 0x4fa8) + rbx_2))
    rdi = 0x1b

*(rbx_2 + *(arg1 + 0x4fa8)) = rax_3
return zx.q(rdi)
