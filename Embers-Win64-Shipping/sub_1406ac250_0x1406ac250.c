// 函数: sub_1406ac250
// 地址: 0x1406ac250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x28)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[1].d = zx.d(arg2) + 0xa
    __builtin_memset(rax + 0xc, 0, 0x1c)
    *rdi = &data_142d8b5a8

void*** rax_1 = j_sub_140a82f30(0x20)
void*** rdx = rax_1

if (rax_1 == 0)
    rdx = nullptr
else
    rdx[1] = 1
    *rdx = &data_142d8b590
    rdx[2] = 0
    rdx[3] = 0

rdi[3] = arg1[9]
void* rax_3 = arg1[9]
int64_t rcx = *(rax_3 + 0x10)

if (rcx != 0)
    rdi[2] = rcx
    *(*(arg1[9] + 0x10) + 0x18) = rdi
    rax_3 = arg1[9]

*(rax_3 + 0x10) = rdi
rdi[4] = rdx
rdx[3] = rdi
arg1[9] = rdx
sub_1406abf40(arg1)
void* result = sub_1406ad700(&arg1[8], rdi)
arg1[9] = rdi
return result
