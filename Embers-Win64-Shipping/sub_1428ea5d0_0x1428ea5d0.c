// 函数: sub_1428ea5d0
// 地址: 0x1428ea5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t i = 0
char* r8 = arg2

if (*arg2 != 0)
    while (i u< 0x80000000)
        r8 = &r8[1]
        i += 1
        
        if (*r8 == 0)
            break

uint64_t rbx_1 = zx.q(i) & 0x7fffffff
int32_t result = strncmp(arg1, arg2, zx.q(rbx_1.d))

if (result != 0)
    return result

char rax = arg1[rbx_1]

if (rax != 0 && rax != 0x2e)
    return 1

return 0
