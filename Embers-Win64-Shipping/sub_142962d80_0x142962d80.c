// 函数: sub_142962d80
// 地址: 0x142962d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rsi_1 = arg4 u>> 3
int64_t result = arg3
void* rbx = arg2

if (arg3 u>= arg4)
    do
        int64_t rdx = 0
        
        if (rsi_1 != 0)
            do
                uint64_t rax_7 = zx.q(*rbx)
                uint64_t rcx_13 = ((((
                    ((zx.q(*(rbx + 7)) << 8 | zx.q(*(rbx + 6))) << 8 | zx.q(*(rbx + 5))) << 8
                    | zx.q(*(rbx + 4))) << 8 | zx.q(*(rbx + 3))) << 8 | zx.q(*(rbx + 2))) << 8
                    | zx.q(*(rbx + 1))) << 8
                rbx += 8
                arg1[rdx] ^= rcx_13 | rax_7
                rdx += 1
            while (rdx u< rsi_1)
        
        sub_1429625b0(arg1)
        result -= arg4
    while (result u>= arg4)

return result
