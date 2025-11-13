// 函数: sub_14220c8b0
// 地址: 0x14220c8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1422719a0(arg2)
int32_t rdi = **arg1
int32_t r15 = *arg1[1]
int64_t rbp
rbp.b = sub_14226e880(arg2) == 5
char rax_2 = sub_142271bf0(arg1[2])
int32_t* rbx = arg1[3]
char rdx

if (*(rbx + 0x32) == 0 || (rax_2 != 0 && rdi s>= r15))
    rdx = 0
else
    rdx = 1

char rdi_1

if (rbp.b == 0)
    rdi_1 = rbx[0xc].b
else
    rdi_1 = *(rbx + 0x31)

sub_142278fd0(arg2, rdx)
sub_142279030(arg2, rdi_1)

if (rax != rdi_1)
    *arg1[4] = 1

sub_14227a320(arg2, rbx)
return sub_14227a080(arg2, &rbx[(zx.q(rbp.b) + 1) * 4]) __tailcall
