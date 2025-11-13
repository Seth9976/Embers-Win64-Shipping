// 函数: sub_1423ab1e0
// 地址: 0x1423ab1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *arg2
int32_t* rax = arg1[1]
*rax -= 1

if (r8 != 0)
    *(*arg1 + 0xf1) = 1

int32_t* rdx = arg1[1]
uint64_t result = 0
bool z

if (0 == *rdx)
    *rdx = 0
    z = true
else
    result = zx.q(*rdx)
    z = false

if (not(z))
    return result

void* rax_2 = arg1[4]
void* rcx = &arg1[6]

if (rax_2 != 0)
    rcx = rax_2

(*(*rcx + 8))(rcx, rdx, r8)
jump(arg1[2])
