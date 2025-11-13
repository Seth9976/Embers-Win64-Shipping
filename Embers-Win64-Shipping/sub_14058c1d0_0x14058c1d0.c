// 函数: sub_14058c1d0
// 地址: 0x14058c1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[2]
int64_t r8 = arg1[3]

if (arg3 u> r8 - rcx)
    return sub_14058c670(arg1, arg3, 0, arg2, arg3)

arg1[2] = rcx + arg3
int64_t* rax_3 = arg1

if (r8 u>= 0x10)
    rax_3 = *arg1

void* rbx = rax_3 + rcx
memmove(rbx, arg2, arg3.d)
*(rbx + arg3) = 0
return arg1
