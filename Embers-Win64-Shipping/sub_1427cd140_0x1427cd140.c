// 函数: sub_1427cd140
// 地址: 0x1427cd140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (arg2[4].d).b
int128_t* rbx = arg2

if ((rax & 4) != 0)
    *(arg1 + 0x28) = sub_1427cc810(arg1, *arg2)
else if ((rax & 1) != 0 && arg2[1] == 0)
    *(arg1 + 0x28) = sub_1427cc810(arg1, *arg2)

if (*(arg1 + 0x28) != 0)
    uint64_t rcx = zx.q(*(arg1 + 0x10))
    
    if ((*(arg1 + 0x14) & 0x7fffffff) u<= rcx.d)
        sub_1427cce30(arg1 + 8, rbx)
        return zx.q(arg3)
    
    uint128_t* rdx_2 = *(arg1 + 8) + rcx * 0x28
    
    if (rdx_2 != 0)
        *rdx_2 = *rbx
        rdx_2[1] = rbx[1]
        rdx_2[2].q = rbx[2].q
    
    *(arg1 + 0x10) += 1

return zx.q(arg3)
