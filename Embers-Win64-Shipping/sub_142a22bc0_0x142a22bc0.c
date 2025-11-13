// 函数: sub_142a22bc0
// 地址: 0x142a22bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = sx.d(*(arg1 + 0x30))
int64_t rbp = sx.q(arg3)
int64_t r8 = sx.q(*(arg1 + 0x32))
char* rbx_1 = sx.q(*(arg1 + 0x20)) + (r8 s>> 3) + arg4 + sx.q((r11 s>> 3) * arg5)

if ((r11.b & 7) != 0 || (r8.b & 7) != 0)
    return arg6(rbx_1, zx.q(arg5), zx.q(r8.d) & 7, zx.q(r11) & 7, arg2, rbp.d)

int64_t rcx = sx.q(arg5)
*arg2 = *rbx_1
arg2[1] = rbx_1[1]
arg2[2] = rbx_1[2]
void* rbx_2 = &rbx_1[rcx]
arg2[3] = rbx_1[3]
void* rdi_1 = &arg2[rbp]
*rdi_1 = *rbx_2
*(rdi_1 + 1) = *(rbx_2 + 1)
*(rdi_1 + 2) = *(rbx_2 + 2)
void* rbx_3 = rbx_2 + rcx
*(rdi_1 + 3) = *(rbx_2 + 3)
void* rdi_2 = rdi_1 + rbp
*rdi_2 = *rbx_3
*(rdi_2 + 1) = *(rbx_3 + 1)
*(rdi_2 + 2) = *(rbx_3 + 2)
*(rdi_2 + 3) = *(rbx_3 + 3)
void* rdi_3 = rdi_2 + rbp
void* rbx_4 = rbx_3 + rcx
*rdi_3 = *rbx_4
*(rdi_3 + 1) = *(rbx_4 + 1)
*(rdi_3 + 2) = *(rbx_4 + 2)
char result = *(rbx_4 + 3)
*(rdi_3 + 3) = result
return result
