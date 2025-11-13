// 函数: sub_140a53500
// 地址: 0x140a53500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140a3f800(arg1, arg3)

if (result == 0)
    return result

int32_t rax = _wtoi(arg2)
int32_t rcx_1 = arg1[9].d
char* rax_3 = (zx.q(rcx_1) u>> 3) + arg1[7]
char rdx_1 = 1 << (rcx_1.b & 7)
char rcx_3 = *rax_3

if (rax != 0)
    rcx_3 &= not.b(rdx_1)
else
    rcx_3 |= rdx_1

*rax_3 = rcx_3
int32_t rcx_4 = arg1[9].d
char* r9_3 = (zx.q(rcx_4) u>> 3) + arg1[8]
char r8 = 1 << (rcx_4.b & 7)
char rax_5 = *r9_3

if (rax != 1)
    r8 = not.b(r8)
    rax_5 &= r8
else
    rax_5 |= r8

*r9_3 = rax_5
return sub_140a4c3d0(arg1, zx.q(arg3), r8)
